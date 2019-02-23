#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,isTrue=1;

    char *A[] = {"B", "Ba", "bab", "d"};        //Declaring Alphabet
    char First_Char , Check_Char;
    int  ArrayLength = sizeof(A)/8;             //Size of Array

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
       printf("Valid Alphabet");
   else
      printf("Invalid Alphabet");

    return 0;

}
