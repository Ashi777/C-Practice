//Program to reverse a string

#include <stdio.h>  
#include <string.h>  
  
void revstr(char *str1)  
{  
    int i, len, temp;  
    len = strlen(str1);          //to get the length of the string
      
    for (i = 0; i < len/2; i++)  
    {   
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }  
}  
      
    int main()  
    {  
        char str[50]; 
      
        printf (" Enter the string: ");  
        gets(str);              //using gets() function to take string as input  
          
        printf (" \n Before reversing the string: %s \n", str);  
          
        revstr(str);  
        printf (" After reversing the string: %s", str);  
    }  
