#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice;
    float r,C,A,V,PI=3.14159;
    printf("enter the choice");
    scanf("%c", &choice);
    printf("enter the radius");
    scanf("%f", &r);
    switch(choice)
    {
    case'C':printf("circumference of a circle: %.2f\n",C=2*PI*r);break;
    case'A':printf("area of a circle: %.2f\n",A=2,PI*r*r);break;
    case'V':printf("volume of a sphere: %.2f\n",V=2,PI*r*r*r);break;
    default:printf("invalid choice");
    }

}
