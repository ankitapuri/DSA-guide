/* Given a string, compute recursively a new string where all appearances of "pi" have been replaced
 by "3.14".*/
#include<bits/stdc++.h>
using namespace std;
//recursive function for replacing pi here s is starting index to check 
void replacePi(char input[],int s)
{
    //if there is onle ony character or no character then return nothing
    if(input[s]=='\0' || input[s+1]=='\0')return;
    //otherwise call again for next character which is start+1
    replacePi(input,s+1);
    //if chracter found is p and next chracter is i
    if(input[s]=='p'&& input[s+1]=='i')
    {
        //then make 2 more space as pi is two chracter will be replaced by 3.14 which is 4 character
        //and shift characters found after pi by 2 spaces
        for(int i=strlen(input);i>=s+2;i--)
        {
            input[i+2]=input[i];
        }
        //then change the values at indexes, specify them with 3.14
         input[s] = '3'; 
        input[s + 1] = '.'; 
        input[s + 2] = '1'; 
        input[s + 3] = '4'; 
    }
}
//main function
int main() {
    char input[10000];
    //getting input
    cin.getline(input, 10000);
    //call replace pi function and declare starting point as 0, it will start looking from 0th position
    replacePi(input,0);
    cout << input << endl;
}