#include <stdio.h>
#include <string.h>

int main()

{

       char string[256], text[256], words[100][256], temp[256];

        int i=0, j=0, k=0, n=0, count;

      printf("Enter your input string:");
      fgets(string, 256, stdin);
      string[strlen(string) - 1] = '\0'; 
   while (string[i] != '\0')

    {
              if (string[i] == ' ')

              {
                                words[j][k] = '\0';
                                 k = 0;
                                  j++;
               }

               else

               {
                        words[j][k++] = string[i];
                 }
             i++;
        }

    words[j][k] = '\0';
     n = j;


           for (i = 0; i < n; i++)

            {
                        strcpy(temp, words[i]);
                   for (j = i + 1; j <= n; j++)

                   {
                             if (strcmp(words[i], words[j]) > 0)

                             {
                                   strcpy(temp, words[j]);
                                   strcpy(words[j], words[i]);
                                   strcpy(words[i], temp);
                              }
                   } 
           } 

printf("Frequency of words:\n");
i = 0;

while (i <= n) {
count = 1;
if (i != n) {
for (j = i + 1; j <= n; j++) {
if (strcmp(words[i], words[j]) == 0) {
count++;
}
}
}
printf("%s\t%d\n", words[i], count);
i = i + count;
}

printf("\n");
return 0;
}

 

