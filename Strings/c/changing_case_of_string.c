#include <stdio.h>

int main()
{
    char string[]="WelCome";
    int i;
    for(i=0;string[i]!='\0';i++)
    {
        if (string[i]>=97 && string[i]<=122)
    {
       string[i] = string[i]-32;
        
    }
    
    }
    printf("%s", string);
}