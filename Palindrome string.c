
#include<stdio.h>
#include<string.h>
void main()
    {
          char string1[100],string2[100];
          printf("Enter the string : ");
          scanf("%s",string1);
          strcpy(string2,string1);
          strrev(string2);
          if(strcmp(string1,string2)==0)
          {
              printf("\nThe string is palindrome ");
          }
          else
          {
              printf("\nThe string is not palindrome ");
          }
   }
