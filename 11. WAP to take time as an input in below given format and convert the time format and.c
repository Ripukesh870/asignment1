#include <conio.h>
#include<stdio.h>
int main()
{
    int H,M;
    printf("\"HH-hour: MM-minute\"\n");
    printf("HH");
    scanf("%d",&H);
    printf("MM");
    scanf("%d",&M);
    printf("HH %d and MM %d",H,M);
    getch();
}
