#include<stdio.h>
int main()
{
     int i,j,n;
     scanf("%d",&n);
     for(i=0;i<=n;i++){
          int space=3*n-i;
          while(space>=0){
               printf("   ");
               space--;
          }
          int value=i;
          while(value>=0){
              printf("%d  ",value);
               value--;
          }
          value=1;
          while(value<=i){
              printf("%d  ",value);
               value++;
          }
         printf("\n");
     }
}
