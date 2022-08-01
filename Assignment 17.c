//Assignment 17 sol 1//
/*
#include <stdio.h>
#include <string.h>
int main()
{
  char a[100];
  int length;

  printf("Enter a string to calculate its length\n");
  gets(a);

  length = strlen(a);

  printf("Length of the string = %d\n", length);

  return 0;
}
*/

//Sol 2//
/*
#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100], ch;
  	int i, Count;
  	Count = 0;

  	printf("\n Please Enter any String :  ");
  	gets(str);

  	printf("\n Please Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);

  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)
		{
  			Count++;
 		}
	}
	printf("\n The Total Number of times '%c' has Occured = %d ", ch, Count);

  	return 0;
}
*/

//Sol 3//
/*
#include <stdio.h>
int main()
{
  int c = 0, count = 0;
  char s[1000];

  printf("Input a string\n");
  gets(s);

  while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count++;
    c++;
  }

  printf("Number of vowels in the string: %d", count);

  return 0;
}
*/

//Sol 4//
/*
#include<stdio.h>
#include<ctype.h>

int main()
{
	int ctr=0;
	char str_char;
	char str[100];

	printf("\n Convert a string to uppercase. :\n");
    printf("-----------------------------------");
    printf("\n Input a string in lowercase : ");
    fgets(str, sizeof str, stdin);
    printf(" Here is the above string in UPPERCASE :\n ");
	while (str[ctr])
	{
		str_char=str[ctr];
		putchar (toupper(str_char));
		ctr++;
	}
	printf("\n\n");
	return 0;
}
*/

//Sol 5//
/*
#include <stdio.h>
#include <string.h>

int main()
{
  	char Str1[100];
  	int i;

  	printf("\n Please Enter a String to Convert into Lowercase :  ");
  	gets(Str1);

  	for (i = 0; Str1[i]!='\0'; i++)
  	{
  		if(Str1[i] >= 'A' && Str1[i] <= 'Z')
  		{
  			Str1[i] = Str1[i] + 32;
		}
  	}

  	printf("\n The given String in Lower Case = %s", Str1);

  	return 0;
}
*/

//sOL 6//
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str[40]; // declare the size of character string
    printf (" \n Enter a string to be reversed: ");
    scanf ("%s", str);

    // use strrev() function to reverse a string
    printf (" \n After the reverse of a string: %s ", strrev(str));
    return 0;
}
*/

//sOL 7//
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define str_size 100

void main()
{
    char str[str_size];
    int alp, digit, splch, i;
    alp = digit = splch = i = 0;


       printf("\n\nCount total number of alphabets, digits and special characters :\n");
       printf("--------------------------------------------------------------------\n");
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);

    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }

    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splch);
return 0;
}
*/

//Sol 8//
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main()
{
    char str1[100], str2[100];
    int  i;

       printf("\n\nCopy one string into another string :\n");
       printf("-----------------------------------------\n");
       printf("Input the string : ");
       fgets(str1, sizeof str1, stdin);
    i=0;
    while(str1[i]!='\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("\nThe First string is : %s\n", str1);
    printf("The Second string is : %s\n", str2);
    printf("Number of characters copied : %d\n\n", i);
return 0;
}
*/

//Sol 9//
/*
#include <stdio.h>
    void main()
    {

        int i, j, a, n, number[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);

        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);

        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (number[i] > number[j])
                {

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;

                }

            }

        }

        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);

    return 0;
    }
*/

//Sol 10//
#include <stdio.h>
int main() {
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}
