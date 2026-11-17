# Chapter 4 Notes

## Pass by Value vs Pass by Reference
- **Pass by Value**: Pass in only the value, don't expect to alter the variable where the value comes from.
- **Pass by Reference**: Pass the value of the variable and expect it to be manipulated in the function.

## Void as a Parameter
If we pass in `void` as a parameter to a `void` function, we explicitly state that the function should not take any parameters, thus avoiding undefined behavior in the case that a user passes in a parameter where one is not required.

The compiler won't tell us if we do pass in a variable unless we explicitly put `void` as a parameter.
