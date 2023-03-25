## std::move

### 1. What is it?
    A converter between ways the compiler considers an expression's value.


### 2. "What does it do?"

It changes an expression from being an lvalue (such as a named variable) to being an xvalue. 

An xvalue tells the compiler:

`You can plunder me, move anything I'm holding and use it elsewhere (since I'm going to be destroyed soon anyway)".`

Thus if x has, say, its own buffer in memory - after std::move()ing the compiler can have another object own it instead.


### 3. When should it be used?

A typical use is 'moving' resources from one object to another instead of copying.
e.g.: Swapping two values.


**NOTE: ** More research requried on this.