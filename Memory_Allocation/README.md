# Memory Allocation
## Stack
Area of memory used to store local variables. "LIFO" (last in, first out) data structure that is managed and optimized by the CPU. When a new variable is declared, it is "pushed" onto the stack. Everytime a function exits, all the variables on the stack are freed/deleted.
**Notables**
- Stack has size limits (based on OS)
- Memory gets allocated at compile time and based on fixed sizes (cannot be resized)
- Don't need to explicitly de-allocate memory
- Variables only exist while the function that created them is running

