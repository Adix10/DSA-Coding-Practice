#include <stdlib.h>
#include <string.h>
int isBalanced(char *s) {
    int n = strlen(s);
    char *stack = (char *)malloc(n * sizeof(char));
    int top = -1;
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) {
                free(stack);
                return 0;
            }
            char open = stack[top--];
            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '[')) {
                free(stack);
                return 0;
            }
        }
    }
    int result = (top == -1) ? 1 : 0;
    free(stack);
    return result;
}
