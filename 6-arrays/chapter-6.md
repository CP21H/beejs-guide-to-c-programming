# Chapter 6 Notes

## Arrays

- Trick to getting the length of an array: Take the `sizeof` of the array and divide it by the size of each element to get the length.

```c
int x[12];                      // 12 ints

printf("%zu\n", sizeof x);      // 48 total bytes
printf("%zu\n", sizeof(int));   // 4 bytes per int

printf("%zu\n", sizeof x / sizeof(int)); // 48/4 = 12 ints
```

- If we are dealing with an array of `chars` then the `sizeof` is the number of elements because `sizeof(char)` is 1.
- This trick only works in the scope the array was defined, though. Passing in the array to a function only passes in a pointer to the first element. 

## Array Initializers
- Neat note on initialization: we can specify array elements in the initializer by specifying an index for the value: 
```c
int a[10] = {0, 11, 22, [5]=55, 66, 77};

// The resulting data in the array looks like this:
0 11 22 0 0 55 66 77 0 0 
```

## Arrays & Pointers
- A pointer to an array is a pointer to the first element in the array. 
```c
int main(void) {
    int a[5] = {11, 22, 33, 44, 55};
    int *p;

    p = &a[0];  // p points to the arrays first element
    // can also be rewritten as:
    p = a;      // much clearer / nicer
}
```

## Function Signatures Note
- We can pass in an array in various ways: `int *a`, `int a[]`, and `int a[5]` with the explicit length.
- Functions will treat the above in the exact same way, starting at the beginning of the array.
    - See: `chapter-6/single-dim-arrays.c` 
- If we pass in a pointer to an array, then changes a function makes to an array will be visible back out in the caller. 
    - See: `mutability.c`