#include <conio.h>
#include <stdio.h>
int main()
{
    int d, m, y;

    printf("\"DD/MM/YYYY : \"");

    scanf("%d %d %d",&d,&m,&y);

    printf("day-DD,Month-MM,Year-YYYY \n");
    printf("(Day-%d,Month-%d,Year-%d)",d,m,y);

    getch();
}
