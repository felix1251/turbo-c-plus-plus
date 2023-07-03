#include <stdio.h>

char s[80];

int main(void)
{
    s[3] = 'X';

    printf("the third char in the array is %c", s[3]);

    return 0;
}
