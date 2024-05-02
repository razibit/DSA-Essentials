In the expression `int* ptr = new int;`, the `int` keyword after `new` specifies the type of object that is being dynamically allocated. Let's break it down:

1. ##### `new` Keyword:

 \- In C++, the `new` keyword is used for dynamic memory allocation. It dynamically allocates memory for a new object or an array of objects on the heap.
 \- When used without square brackets `[ ]`, `new` allocates memory for a single object.

2. ##### Type Declaration:

 \- After the `new` keyword, you need to specify the type of object that you want to allocate memory for.
 \- In the expression `new int`, `int` specifies that memory is being allocated for an integer object.

3. ##### Pointer Declaration:

 \- Once memory is allocated, `new` returns a pointer to the allocated memory.
 \- To store the address of the dynamically allocated memory, you declare a pointer of appropriate type.
 \- In `int* ptr`, `int*` declares `ptr` as a pointer to an integer.

So, in `int* ptr = new int;`, `int` after `new` specifies that memory is being dynamically allocated for an integer, and `int*` declares `ptr` as a pointer to that dynamically allocated integer.