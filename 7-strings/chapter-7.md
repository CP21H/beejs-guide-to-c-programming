# Chapter 7 Notes

## String Literals

- Add the "escaped by" backslash in front of a character in a string if the compiler might recognize it as something else.
- For example, if we wanted to have quotation marks inside of a string, we need to do `printf("\"Commentary here...\"")`

## String Variables

- `char *s = "Hello, world!";`, again, we are defining a pointer which serves as pointing to the first of something in a data structure, here the first character in the string.
- Equivalently, we can also write: `char s[14] = "Hello, world!";` or even write `char s[] = "Hello, world!";`, showcasing further that in C, arrays are just pointers deep down.