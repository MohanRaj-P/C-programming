#include<stdio.h>

int main()
{
  
  int a,b,c,d;
  
  printf("Enter the values of A B C D :");
  // get the numbers from the user
  scanf("%d%d%d%d",&a,&b,&c,&d);
  
  
  //checking the four numbers are equal using if condition
  if((a==b)&&(b==c)&&(c==d))
  {
    printf("Four numbers are equal");
  }
  else
  {
    printf("Four numbers are not equal");
  }
  
  return 0;
  
}
