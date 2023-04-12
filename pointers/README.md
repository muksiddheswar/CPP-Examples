### Dangling pointer

Dangling pointers / wild pointers are pointers that do not point to a valid object of the appropriate type. 
Dangling pointers arise during object destruction.
Wild pointer is a pointer that was declared but never initialised.


**Issues:**
- If the program writes to memory referenced by a dangling pointer, a silent corruption of unrelated data may result.
- If the memory has been reallocated to another process, then attempting to dereference the dangling pointer can cause 
    - segmentation faults (UNIX, Linux) 
    - general protection faults (Windows)

**Preventions**
In OO languages with `garbage collection`, dangling references are prevented by only destroying objects that are unreachable, meaning they do not have any incoming pointers. 

### Pointers vs Reference

**Pointer** "stores the address of i".
`int *ptr = &i; `

**Reference** = Alias for i.
`int &ref = i;`

1. References need to be initialised in one line.
   Reference variable needs an initialiser.

2. Pointers can be re-assgined.
   Implementation of data structures like linked list, tree.

3. Pointers have their own memory address, size in the stack and can be assigned a **NULL** value.

4. Pointer to a pointer possible.


Consider the following examples:

`void func( int& a)`
`void func( int* a)`

**Biggest diff:**
Reference can never be null.
So this as a parameter will have a value of a specific type.

Pointer does not give this gurantee.
The function needs to check for null value.
So the context needs to be known about what to do in case the value is null.

So a reference is easier to handle.
If the parameter will always have a value, then pass by reference.
