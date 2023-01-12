### 0x1A-C Hash Tables

### Hash Function
- A hash function is any function that can be used to map  data of abitrary size to fixed-size values
- The values returned by a harsh function are called hash values, hash codes or digests or simply hashes
- The values are usually used to index a fixed-size table called a hash table
- use of hash function to index a hash table is called  hashing or scatter storage addressing

### Hash Table
- Also know as hash map
- It is a data structure that implements an associative array or dictionary
- It is an abstract data-type that maps keys to values
- A Hash Table uses a  Hash Function to compute an index into an array of buckets or slots from which the desired value can be found.
- During lookup the key is hashed and the resulting hash indicated where the corresponding value is stored
- If two different keys get the same index, we neet to use other data structures (buckets) to account for these collusions
- The whole benefit of using hash table is due it its very fast access time
- On average the time complexity is a constant 0(1) access time. This is  called Armotized Time Complexity      
    N/B: Armotized Analysis is a method of analyzing a given algorithm's complexity or how much of a resource, especially time and memory it takes to excecute

- The C++ Standard Template Library (STL) has the  std :: unordered_map() data structure which implements all these hash functions
- Any hash table function has the following 3 components


        - A good hash table function to map keys to values
        - A hash table data structure that supports insert, search and delets operations
        - A data structure to account fo collision of keys