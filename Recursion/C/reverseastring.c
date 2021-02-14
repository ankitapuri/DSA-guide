//Using Recursion add the code to reverse a string.
#include<stdio.h>
#include<string.h>
int a = 0;
//reverse_the_string function is used to reverse a string
void reverse_the_string(char str[60],int length)
{
    char temp;
    temp = str[a];
    str[a] = str[length-1];
    str[length-1] = temp;
    if(a < length/2)
    {
        ++a;
        reverse_the_string(str,--length);
    }
        //printing the reversed string
    else 
    printf("Reversed string = %s",str);
    
}
int main()
{
    char string[60];
    int length;
    printf("Enter a string: ");
    scanf("%s",string);
    length = strlen(string);
    reverse_the_string(string,length);
    return 0;
}