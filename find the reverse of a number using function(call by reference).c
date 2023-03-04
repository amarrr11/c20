/*WAP to find the reverse of a number using function(call by reference)
with arguments but not return a value*/
#include<stdio.h>
void fn(int*);
int main()
{
int n;
long int result;
printf("Enter n= ");
scanf("%d",&n);
fn(&n);
return 0;
}
void fn(int *x)
{
int rev,d;
while(*x!=0)
{
d=*x%10;
rev=rev*10+d;
*x=*x/10;
}
printf("Result= %d",rev);
}
