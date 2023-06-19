#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2;
    char op;
    printf("enter two numbers");
    scanf("%d %d", &no1, &no2);
    printf("enter an operator");
    scanf("%c, &op");
    switch(op)
    {
    case'+':printf("addition = %d\n",no1+no2);break;
    case'-':printf("substraction = %d\n",no1-no2);break;
    case'*':printf("multiplication = %d\n",no1*no2);break;
    case'/':printf("division = %d\n",no1/no2);break;
    default:printf("invalid operator");
    }
}
