#include<stdio.h>

int main()
{
    int iNo=0;
    printf("Enter Number from user:\n");
    scanf("%d",&iNo);
    
    printf("Number in decimal format:%d:\n",iNo);
    printf("Number in octal format:%o:\n",iNo);
    printf("Number in Hexa decimal format:%x:\n",iNo);
    
    return 0;
}