#include<stdio.h>
#include<stdlib.h>

int main()
{
//declaring the integers
int a,b;

printf("Enter the value of A and B : ");

//get the value of a and b from the user
scanf("%d %d",&a,&b);


//using abs() function to find the difference 
printf("The difference between the number is %d",abs(a-b));

return 0;

}
