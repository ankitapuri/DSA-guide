//Using Recursion add the code to reverse a string.
#include<stdio.h>
#include<string.h>
int a = 0;
                                                           //reverse_the_string function is used to reverse a string
void reverse_the_string(char str[60],int length)                             ////TODO: reverse a string using recursion
{
    char temp;
    temp = str[a];  
    str[a] = str[length-1];                                       //TODO: Swapping string
    str[length-1] = temp;
    if(a < length/2)
    {
        ++a;
        reverse_the_string(str,--length);    // calling the same function with decreased length
    }                                                               
    else 
    printf("Reversed string = %s",str);                                       //printing the reversed string
    
}
int main()                                                                           //TODO: Driver code 
{
    char string[60]; // declaring a string having characters of size 60
    int length;
    printf("Enter a string: ");
    scanf("%s",string);
    length = strlen(string);  // to find length of the string
    reverse_the_string(string,length);                                      ////TODO: Calling reverse Function
    return 0;
}
