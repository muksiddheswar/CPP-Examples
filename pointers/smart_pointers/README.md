# Smart Pointers

### Types of Smart Pointers

- auto_ptr
- unique_ptr
- shared_ptr
- weak_ptr

**auto_ptr**
Manage objects obtained from new expressions.
Delete them when auto_ptr itself is destroyed.

<pic>

Class template deprecated as of C++11. 
unique_ptr is a new facility with a similar functionality, but with improved security.



**unique_ptr**
We can assign a different object by removing the current object from the pointer. 

<pic>

The constructor of unique_ptr<T> accepts a raw pointer to an object of type.



**shared_ptr**
More than one pointer can point to one object at a time 
A Reference Counter is mainted using the use_count() method. 

<pic>


**weak_ptr**

Holds a non-owning reference to an object. 
Similar to shared_ptr except for Reference Counter. 
Pointer will not have a stronghold on the object. 
Reason: Suppose pointers are holding the object and requesting for other objects then they may form a Deadlock. 
