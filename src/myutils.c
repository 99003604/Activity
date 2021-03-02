
#include<myutils.h>
int isPrime(int a)
{
   int b;
 
   for ( b= 2 ; b <= a - 1 ; b++ )
   { 
      if ( a%b == 0 )
     return 0;
   }
   return 1;
}
 
int factorial(int number)
{
  if (number == 0) 
    return 1;
  else
    return (number*factorial(number-1));
}

int ispalindrome(int number){
    int reminder,sum=0,temp;
    temp=number;
    while(number>0)    
    {    
        reminder=number%10;    
        sum=(sum*10)+reminder;    
        number=number/10;    
    }    
    if(temp==sum)    
       return 1; 
    else     
       return 0;  

}
int vsum(int arg_count,  ....)
{ 
    int k;
    va _list ap;
    va_start(ap,arg_count);
    sum=va_arg(ap,int);
    for(k=2;k<=arg_count;k++)
    {
       sum=sum+va_arg(ap,int)
    }
    va_end(ap); 
    return sum;
}
