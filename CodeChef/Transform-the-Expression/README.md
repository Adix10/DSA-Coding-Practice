# Transform the Expression

## Problem

Convert a given algebraic expression with brackets into **Reverse Polish Notation (RPN)**.

In RPN, every operator is written after its operands.

## Approach

- Use a stack to store operators and brackets.
- Add letters directly to the output.
- Push `(` onto the stack.
- When `)` is found, pop operators until `(` is reached.
- For operators, push them onto the stack.
- Finally, pop all remaining operators into the output.

## Examples

### Example 1

Input:
`(a+(b*c))`

Output:
`abc*+`

### Example 2

Input:
`((a+b)*(z+x))`

Output:
`ab+zx+*`

### Example 3

Input:
`((a+t)*((b+(a+c))^(c+d)))`

Output:
`at+bac++cd+^*`

## Complexity

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`