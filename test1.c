#include "mystring.c"
#include "myutils.c"
#include "bitmask.c"
#include <stdio.h>
int main()
{
  char s[]="Naveen";
  int prime=7;
  int palindrome=121;
  int fact=6;
  int number=5;
  int r=1;
  

  printf("length of the string is %lu\n ",mystrlen(s));
  

  if(isPrime(prime))
      printf("the number is prime\n");
  else
       printf("the number is not a prime");

  if(ispalindrome(palindrome))
      printf("the number is palindrome\n");
  else
      printf("the number is not palindrome");
  if(vsum(vsum))
      printf("the number is vsum\n");

   


  printf("factorial of %d is %d \n",fact,factorial(fact));

  printf("setting %d th of %d is %d \n",r,number,set(number,r));
  printf("setting %d th of %d is %d \n",r,number,reset(number,r));
  printf("setting %d th of %d is %d \n",r,number,flip(number,r));
  printf("setting %d th of %d is %d \n",r,number,quary(number,r));


 return 0;
}