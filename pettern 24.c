#include<stdio.h>
int main()
{
  int n,row,col;
  printf("enter the number of n=");
  scanf("%d",&n);
  for(row=1;row<=n;row++)
  {
  for(col=1;col<=row;col++)
  {printf("%c ",col+96);
  }
  printf("\n");
  }
  for(row=n-1;row>=1;row--)
  {
  for(col=1;col<=row;col++)
  {printf("%c ",col+96);
  }
  printf("\n");
  }

  }
