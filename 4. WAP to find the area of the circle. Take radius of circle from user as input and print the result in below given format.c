#include <conio.h>
#include <stdio.h>

int main()
{
    float a,pi=3.141;
    int r;
    printf("enter radius : ");
    scanf("%d",&r);
    a=pi*r*r;
    printf("Area of circle is %f having the radius %d",a,r);
    getch();
}
