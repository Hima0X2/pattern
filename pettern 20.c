#include<stdio.h>
int main()
{
  int n,row,col,x;
  printf("enter the value of n=");
  scanf("%d",&n);
  for(row=n;row>0;row--)
  {
     for(col=1;col<=row;col++)
     {
     x=row%2;
       printf("%d ",x);}
       printf("\n");
     }
  }
