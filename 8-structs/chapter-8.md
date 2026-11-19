# Chapter 8 Notes

## Structs

- When creating a `struct`, you're creating a new type, yet the full type name *includes* the word `struct`. For example, if we define a new `struct` called `struct car`, creating a variable of it would be: `struct car saturn`.

## Struct Initializers

- To reference properties of a `struct` variable, we can use the dot operator, as we would with a class.
- You can also just inline initialization as you might imagine:
```c
struct car saturn = {"Saturn SL/2", 16000.99, 175};

// We can also be more specific as so:
struct car saturn = {.speed=175, .name="Saturn SL/2"};
```

## Passing Structs to Functions

- You can either pass in a `struct` as a `struct` itself or a pointer to the struct.
- There are two cases when we want to pass a pointer to the `struct`:
    - **Mutability**: We need the function to be able to make changes to the `struct` that was passed in, and have those changes show in the scope of the caller
    - **Copy Expense**: The `struct` is too large and it would be more expensive to copy onto the stack than to just copy a pointer.
        - See: ``