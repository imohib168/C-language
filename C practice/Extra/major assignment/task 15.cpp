#include<stdio.h>
#include<string.h>

void count_al_di_sc(char[200]);
main()
{
	char sentence[200];
	count_al_di_sc(sentence);
}

//task 15
void count_al_di_sc(char sentence[200])
{
  int al, di, sc, i;
   al = di = sc = i = 0;

	
	printf("\n\nCount total number of alphabets, digits and special characters :\n");
	printf("******************************************************");
	printf("\nEnter your string: ");
	gets(sentence);	

     /* Checks each character of string*/

    while(sentence[i]!='\0')
    {
        if((sentence[i]>='a' && sentence[i]<='z') || (sentence[i]>='A' && sentence[i]<='Z'))
        {
            al++;
        }
        else if(sentence[i]>='0' && sentence[i]<='9')
        {
            di++;
        }
        else 
        {
            sc++;
        }

        i++;
    }

    printf("Number of Alphabets in the string is : %d\n", al);
    printf("Number of Digits in the string is : %d\n", di);
    printf("Number of Special characters in the string is : %d\n\n", sc);
}

