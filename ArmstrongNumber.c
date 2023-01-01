//Program to check if the given number
//is an Armstrong number or not

#include<stdio.h>  
 int main()    
{    
  int n,r,sum=0,temp;    
   
  printf("enter the number=");    
  scanf("%d",&n);    
   
  temp=n;    
   
  while(n>0)    
  {    
    r=n%10;    
    sum=sum+(r*r*r);    
    n=n/10;    
  }    
   
  if(temp==sum)    
    printf("Armstrong  number");    
  else    
    printf("Not an armstrong number");    
   
  return 0;  
}   
