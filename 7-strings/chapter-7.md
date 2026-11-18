# Chapter 7 Notes

## String Literals

- Add the "escaped by" backslash in front of a character in a string if the compiler might recognize it as something else.
- For example, if we wanted to have quotation marks inside of a string, we need to do `printf("\"Commentary here...\"")`
- Pointers to string literals are **immutable.**

## String Variables

- `char *s = "Hello, world!";`, again, we are defining a pointer which serves as pointing to the first of something in a data structure, here the first character in the string.
- Equivalently, we can also write: `char s[14] = "Hello, world!";` or even write `char s[] = "Hello, world!";`, showcasing further that in C, arrays are just pointers deep down.

## String Length

- `<string.h>` can be leveraged allowing us to use `strlen()` to compute the length of any string in bytes: `strlen(s)`.
    - `strlen()` returns type `size_t`
- Given that strings in C terminate with a `NUL` or an implicit `\0` in memory, we can create a string length function by keeping a length counter and iterate over characters in the string until we reach the terminating character:

```c
int my_strlen(char *s) {
    int count = 0;

    while (s[count] != '\0')
        count++;

    return count;
}
```