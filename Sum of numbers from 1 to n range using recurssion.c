//Sum of numbers from 1 to n range using recurssion
#include <stdio.h>
int addNumbers(int n);
int main()
{
int num;
printf("Enter a positive integer: ");
scanf("%d", &num);
printf("Sum = %d",addNumbers(num));
return 0;
}
int addNumbers(int n)
{
if(n == 0)
return n;
else
return n + addNumbers(n-1);
}
