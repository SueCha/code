#include <stdio.h>

int main()
{
    char lower, upper;
    upper = getchar();
    lower = upper-32;
    putchar(lower);
    putchar('\n');
    return 0;
}