#include <cs50.h>
#include <stdio.h>
int main(void)
{  
    int num1;
    do
    {
        num1 = get_int("Start of the population: ");
    }
    while (num1 < 9);
    
    int num2;
    do
    {
        num2 = get_int("End of the population ");
    }
    while (num2 <num1);
    
    int c = 0;
    
    while(num1 < num2)
    {
        c++;
        num1=num1+(num1/3) - (num1/4);
    }
    printf("Years: %i \n", c);
}