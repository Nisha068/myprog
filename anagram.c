#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool anagram (char str[], char str1[]) {
   char temp;
   int i, j;
   int n  = strlen(str);
   int n1 = strlen(str1);
   if( n != n1) {    
      return false;
   }
   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (str[i] > str[j]) {
            temp  = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
         if (str1[i] > str1[j]) {
            temp  = str1[i];
            str1[i] = str1[j];
            str1[j] = temp;
         }
      }
  }

   for(i = 0; i<n; i++) {
      if(str[i] != str1[i]) {    
      return false;
      }
   }
   return true;
}

int main()
{
 char s[20],s1[20];
   printf("enter string");
   scanf("%s",s);
   printf("enter string");
   scanf("%s",s1);
   if(anagram(s,s1))
   	printf("True \n");
   else
   	printf("False \n");
   return 0;
}

