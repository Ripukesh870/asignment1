#include <conio.h>
#include <Stdio.h>
int main()
{
    int num=0;
    char string[50]="My Name is Ripukesh kumar";
    for(int i=0;string[i]!=NULL;i++){
        num++;
    }
    printf("%s",string);
    printf("\nlength of string = %d",num);
}
