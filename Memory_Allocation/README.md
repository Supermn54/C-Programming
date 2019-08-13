# Memory Allocation
## Allocating Memory
There are two ways that memory gets allocated:
1. Compile Time (or static) Allocation
   - Occurs on the Stack
2. Dynamic Memory Allocation
   - Occurs on the Heap

## Stack
Area of memory used to store local variables. "LIFO" (last in, first out) data structure that is managed and optimized by the CPU. When a new variable is declared, it is "pushed" onto the stack. Everytime a function exits, all the variables on the stack are freed/deleted.

**Notables**
- Stack has size limits (based on OS)
- Memory gets allocated at compile time and based on fixed sizes (cannot be resized)
- Don't need to explicitly de-allocate memory
- Variables only exist while the function that created them is running

## Heap
A free-floating region of memory used to allocate memory "on the fly" during run time. Isn't managed for you and isn't as tightly managed by the CPU. Requires the use of the `malloc()` or `calloc()` to allocate memory and `free()` to deallocate.

**Notables**
- A memory leak is created if `free()` isn't used because memory is still on the heap that isn't available to other processes
- Requires the use of [Pointers](https://github.com/Supermn54/C-Programming/tree/master/pointers) to access memory. For this reason reads/writes are slower than memory on the stack.
- Variables created on the heap are global, accessed by any function, anywhere in your program
- No size restrictions (still technically limited by available physical)
- Requires a pointer to access memory
- Also has a `realloc()` to resize variables

**Interfaces**

`void *malloc(size_t size)`
- `size` is the number of bytes in memory to be allocated
- return value is a pointer to the requested memory
- type `void*` is a *generic pointer* that can represent a pointer of any type:

`int *p = malloc(10 * sizeof(int)); //allocates bytes for 10 integers`
- in this example, the return value of `malloc()` is automatically converted to type `int *`
- A good best practice is to also include an explicit cast to the desiree type:

`int *p = (int *) malloc(10 * sizeof(int));`
- returns a NULL pointer if the call fails (eg not enough physical memory)

`void free(void *)`
- releases memory allocated by `malloc()` and returns it to the heap
`free(p);`
- does not require an explicit cast for the conversion of the pointer of type `int*` to type `void*`
