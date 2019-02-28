#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Vishal B16101182 Assignment-1
//Objective: Write a program to input an Alphabet and then determine whether given Alphabet is valid or invalid

int main()
{
    int i=0,j=0,n,ArrayLength,isTrue=1;
    char First_Char , Check_Char;
    char str1[50];
    printf("Enter Valid Alphabet = { ");
	scanf("%s",str1);					        //this takes string input Alphabet seperated by ,
	int count=1;

	for( j=0;j<strlen(str1);j++){		        //This counts the number of elements in Alphabet
		if(str1[j]==','){
			count++;
		}
	}
	n=count;

	// Returns first token
    char* token = strtok(str1, ",");

  	char *A[n];
    while (token != NULL) { 				    //This fills the array with elements
    	A[i]=(char*)malloc(10);
    	strcpy (A[i], token);
        token = strtok(NULL, ",");
        i++;
    }
    ArrayLength = sizeof(A)/8;                  //Size of Array

    for(i=0;i<ArrayLength;i++)                  //This is main loop which picks a letter
        {
        char *Letter= A[i];                     //Letter contain letters of Alphabets
        First_Char = Letter[0];                 //First_Char contains first character of letter


        for(int j=i+1;j<ArrayLength;j++)        //This Loop checks whether same letter is present in Alphabet set or not
            {
            char *Letter1 = A[j];
            Check_Char=Letter1[0];

            if(First_Char==Check_Char)
                {
                isTrue=0;
                break;
                }
            }
        }

   if(isTrue==1)
       printf("\nValid Alphabet\n");
   else
      printf("\nInvalid Alphabet\n");

    return 0;

}
