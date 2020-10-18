#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int testInteger;
    char test[100];
    
    printf("Enter an integer: ");
    scanf("%d", &testInteger);  

    if(testInteger > 8 || testInteger < 1)
    {
        printf("invalid digits restart program.");
    }
    else
   {

       for(int i = 1; i<= testInteger; i++)
       {
           int k=0;
           for(int empty = k; empty < testInteger -i; empty++)
           {
            printf(" ");
            k++;
           }
           for(int j = 0; j <  i; j++)
           {
               printf("x");

           }
           
            printf("\n");
       }
      
   }
    return 0;

}
