# Smart Pointers

### Types of Smart Pointers

- auto_ptr
- unique_ptr
- shared_ptr
- weak_ptr

**auto_ptr**    
Manage objects obtained from new expressions.
Delete them when auto_ptr itself is destroyed.

![Auto-Pointer-in-C1-1024x630](https://github.com/muksiddheswar/CPP-Examples/assets/17706548/ea8e2213-d936-4838-9e21-3d992d102d5e)

**NOTE:** Class template deprecated as of C++11. 
unique_ptr is a new facility with a similar functionality, but with improved security.

<br>

**unique_ptr**    
We can assign a different object by removing the current object from the pointer. 

<img width="295" alt="uniquePtr" src="https://github.com/muksiddheswar/CPP-Examples/assets/17706548/ea371ca4-adf9-4bfe-91bf-aac6f093ae29">

1-to-1 relationship between a pointer and its allocated object on the heap.

`// unique_ptr<Rectangle> P2 (P1.get()); // VERY WRONG THING TO DO!!`
This will lead to 2 unique pointers pointing to the same resource.

<br>

**shared_ptr**    
More than one pointer can point to one object at a time 
A Reference Counter is mainted using the use_count() method. 

<img width="511" alt="shared_ptr" src="https://github.com/muksiddheswar/CPP-Examples/assets/17706548/8e635f70-4902-4895-9f78-6770b84baf40">

<br>

**weak_ptr**    

Holds a non-owning reference to an object. 
Similar to shared_ptr except for Reference Counter. 
Pointer will not have a stronghold on the object. 
Reason: Suppose pointers are holding the object and requesting for other objects then they may form a Deadlock. 

<img width="446" alt="weakPtr" src="https://github.com/muksiddheswar/CPP-Examples/assets/17706548/f76a57e9-98fe-4d5a-bb37-f6cc48a9782d">

Lock increases the reference count. (check)
Lock needs to be used before accessing a weak pointer.
Lock returns a (shared) pointer.