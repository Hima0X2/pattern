#include<stdio.h>
int main()
{
  int n,row,col;
  printf("enter the value of n=");
  scanf("%d",&n);
  for(row=n;row>0;row--)
  {
     for(col=row;col>0;col--)
     {
       printf("* ");}
       printf("\n");
     }
  }
