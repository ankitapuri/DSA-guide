/* Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod */
#include<iostream>
using namespace std;
void toh(int n,char sou,char aux,char des);          //function declaration
int main(){
	int n;
	cout<<"enter the number of disks "<<endl;
	cin>>n;
	toh(n,'A','B','C');                           //functional call
	return 0;
}
void toh(int n,char sou,char aux,char des){                              //function definition
	if (n==1)                                                        // base condition
	{
		cout<<"move disk "<<n<<" from "<<sou<<" to "<<des<<" "<<endl;
	}
	else
	{
		toh(n-1,sou,des,aux);                                    // implement the function for n-1 disks
		cout<<"move disk "<<n<<" from "<<sou<<" to "<<des<<" "<<endl;
		toh(n-1,aux,sou,des);                                    // it will call it self until it statsify the base case
	}
}
