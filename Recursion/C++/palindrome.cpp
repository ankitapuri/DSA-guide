#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

string reverseString(string s);

int main()
{
    string s;

    cout << "Enter a String to check if it is Palindrome: ";
    cin >> s;

    if(s == reverseString(s))
        cout << s << " is a Palindrome string";
    else
        cout << s << " is not a Palindrome string";

    return 0;
}

string reverseString(string s)
{
    int sz = s.size();

    if(sz <=1) return s;

    string revStr = s[sz-1]+reverseString(s.substr(1,sz-2))+s[0];

    return revStr;
}
