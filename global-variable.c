#include <stdio.h>

void func1(void), func2(void);

int count;

int main(void)
{
    count = 100;
    func1();
    return 0;
}

void func1(void)
{
    int temp;
    temp = count;
    func2();
    printf("count is %d", count);
}

void func2(void)
{
    int count;
    for (count = 1; count < 10; count++)
       printf(". ");
}
