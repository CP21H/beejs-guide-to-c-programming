# Chapter 3 Notes

## Types

- Integer: `int`
- Floating point: `float`
- Character: `char`
- String: `char *`
- Boolean: `bool` 
   - Introduced in `<stdbool.h>`

## printf()
- `%d` looks for the next parameter of type `int`
- `%f` looks for the next parameter of type `float` or `double`
- `%s` looks for the next parameter of type `char[]` or `char*`, a string

## Ternary Operator
Used just as it is in any other language, where the value of something can depend on a conditional statement. 

```c
// If x > 10, add 17 to y. Otherwise add 37 to y.
y += x > 10? 17: 37;
```

## sizeof
Tells use the size, in bytes, of a particular variable or data type in memory.

`sizeof` returns a type of `size_t` which is essentially an unsigned integer type that holds the size in bytes of we pass in to `sizeof`.