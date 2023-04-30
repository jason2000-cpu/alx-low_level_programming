## 0x12. C - Singly linked lists

### Task 0

Write a function that prints all the elements of a list_t list.
- Prototype: size_t print_list(const list_t *h);
- Return: the number of nodes
- Format: see example
- If str is NULL, print [0] (nil)
- You are allowed to use printf

File: 0-print_list.c

### Task 1

Write a function that returns the number of elements in a linked list_t list.
- Prototype: size_t list_len(const list_t *h);

File: 1-list_len.c

### Task 2

Write a function that adds a new node at the beginning of a list_t list.
- Prototype: list_t *add_node(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed
- str needs to be duplicated
- You are allowed to use strdup

File: 2-add_node.c

### Task 3

Write a function that adds a new node at the end of a list_t list.
- Prototype: list_t *add_node_end(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed
- str needs to be duplicated
- You are allowed to use strdup

File: 3-add_node_end.c

### Task 4

Write a function that frees a list_t list.
- Prototype: void free_list(list_t *head);

File: 4-free_list.c

### Task 5

Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
- You are allowed to use the printf function

File: 100-first.c

### Task 6

Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
- You are only allowed to use the printf function
- You are not allowed to use interrupts
- Your program will be compiled using nasm and gcc:

File: 101-hello_holberton.asm
