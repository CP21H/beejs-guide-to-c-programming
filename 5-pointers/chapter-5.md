# Chapter 5 Notes

## Memory and Variables

- Generally, an `int` and a `float` take up 4 bytes, though if we are uncertain on a given system, we can use `sizeof(type)` to check.
- A **pointer** is a variable that holds an address. Just as an `int` variable can hold the value of a variable, the pointer will store its address in memory.
   - As a reminder, we can retrieve the address "stored" by a pointer by referencing using the ampersand operator: `&`.

## Pointer Types

```c
int i;
int *p;  // p is a pointer, uninitialized

p = &i; // p is assigned the address of i, p points to i
```

## Dereferencing 

- We can use the original variable through the pointer by **dereferencing** the pointer, which means "de-pointering" the pointer. 
- **Example**: If we have a variable `i`, and a pointer to `i` called `p`, we can dereference the pointer `p` and use it exactly as if we wanted to use `i`. 

```c
int i;
int *p;

p = &i;  // p points to i, p holds address of i

i = 10;
*p = 20; // p, pointing to i, is now 20, so i = *p
```

## Pointer Arguments

- Passing in a pointer as an argument creates a copy of the pointer. 
- The copy and the original pointer both point to the same location in memory. 
- Dereferencing either one allows us to modify the original variable. 