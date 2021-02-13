//TODO: Check if the given string is palindrome

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

bool palindrome(string s);

int main()
{
    string s;

    cout << "Enter a String to check if it is Palindrome: ";
    cin >> s;                                                    //TODO: Taking user input

    if(palindrome(s))
        cout << s << " is a Palindrome string";                  //TODO: Printing result
    else
        cout << s << " is not a Palindrome string";

    return 0;
}

bool palindrome(string s)
{
    int sz = s.size();

    if(sz <=1) return true;                                      //TODO: Base statement

    if((s[0] == s[sz-1]) and palindrome(s.substr(1,sz-2)))       //TODO: Recursive statement
    	return true;

    return false;

}
