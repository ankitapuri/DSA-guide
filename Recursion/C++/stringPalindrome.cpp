#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

bool palindrome(string s);

int main()
{
    string s;

    cout << "Enter a String to check if it is Palindrome: ";
    cin >> s;

    if(palindrome(s))
        cout << s << " is a Palindrome string";
    else
        cout << s << " is not a Palindrome string";

    return 0;
}

bool palindrome(string s)
{
    int sz = s.size();

    if(sz <=1) return true;

    if((s[0] == s[sz-1]) and palindrome(s.substr(1,sz-2)))
    	return true;

    return false;

}
