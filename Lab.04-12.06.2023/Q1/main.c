#include <stdio.h>
#include <stdlib.h>

int main()
{
int no,ans;
printf("enter an integer");
scanf("%d", &no);
ans=no%2;
if (ans==1)
printf("%d is an odd number\n",no);
else
printf("%d is an even number\n",no);



int num;
printf("enter an integer");
scanf("%d", &num);
switch(num%2)
{
case 0:printf("even number");break;
case 1:printf("odd number");break;
default:printf("invalid input");
}

}
