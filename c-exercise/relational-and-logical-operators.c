#include <stdio.h>

int main(void)
{
    /*
        -----Relational Operations-----
        Operator     Action
        >            Greater than
        >=           Greater than or equal
        <            Less than
        <=           Less than or equal
        ==           Equa
        !=           Not equal

        -----Logical Operations-----
        Operator     Action
        &&           AND
        ||           OR
        !            NOT
    */

   // 1 means true and 0 means false

   printf("expression is: %d\n", !(1 && 0));

   int x;

   x = 100;
   printf("check if x is greater than 10: %d", x > 10);

   return 0;
}
