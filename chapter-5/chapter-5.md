# Chapter 5 Notes

## Memory and Variables

- Generally, an `int` and a `float` take up 4 bytes, though if we are uncertain on a given system, we can use `sizeof(type)` to check.
- A **pointer** is a variable that holds an address. Just as an `int` variable can hold the value of a variable, the pointer will store its address in memory.
   - As a reminder, we can retrieve the address "stored" by a pointer by dereferencing using the ampersand operator: `&`.