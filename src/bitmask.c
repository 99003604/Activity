#include "bitmask.h"
int set(int num, int r) 
{ 
    return (num| (1 << (r - 1))); 
} 
  
// Function to reset  the rth bit of num 
int reset(int num, int r) 
{ 
    return (num & (~(1 << (r- 1)))); 
} 
  
// Function to flip the rth bit of num 
int flip(int num, int r) 
{ 
    return (num ^ (1 << (r - 1))); 
} 
// Function to quary the rth bit of num 
int quary(int num,int r)
{
    return((num>>r)&1);
}

