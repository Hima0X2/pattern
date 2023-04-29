#include<stdio.h>
int main()
{
    int n,row,col;
printf("enter the value of n=");
scanf("%d",&n);
for(row=1;row<=n;row++)
{
    for(col=1;col<=n;col++)
        if(col==row||col+row==n+1)
        printf("* ");
        else
            printf("  ");
    printf("\n");
}
}
