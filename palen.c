#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
bool is_palindrome(char str[])
{
   int i = 0;
   int j = strlen(str)-1;
   int flag = 0;
   while(i<j)
   {
   	if(tolower(str[i]) != tolower(str[j]))
         {
          	flag = 1;
                break;
         }
         i++;
         j--;
   }
   if(flag==0)
   	return true;
   else
   	return false;	
	
}
int main()
{
    char st[20];
   printf("enter string");
   scanf("%s",st);
   if(is_palindrome(st))
   	printf("true \n");
   else
   	printf("false \n");
   return 0;
}
