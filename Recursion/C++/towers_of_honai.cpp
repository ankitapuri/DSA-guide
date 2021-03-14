/* Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod */
#include<iostream>
using namespace std;
void toh(int n,char sou,char aux,char des);          /*function declaration in which the arguments are n-no of disks ,sou-source rod ,aux-auxiliary rod,des-destination rod */
int main(){
	int n;
	cout<<"enter the number of disks "<<endl;
	cin>>n;
	toh(n,'A','B','C');                           //functional call
	return 0;
}
void toh(int n,char sou,char aux,char des){                              //function definition
	if (n==1)             //base condition                                         
	{     /* if there is only one disk then it directly moved from source to destination rod */
		cout<<"move disk "<<n<<" from "<<sou<<" to "<<des<<" "<<endl;
	}
	else
	{
	        /* if the disks are n then it calls again same function with n-1 disks and this time we change the rods order because we need to change disk from source to auxiliary rod */
		toh(n-1,sou,des,aux);                                   
		cout<<"move disk "<<n<<" from "<<sou<<" to "<<des<<" "<<endl; // function call itself again and again until it satisify the base condition 
		/* after disk is changed from source to auxiliary now again we call toh function with n-1 disk and now the disk is moved from auiliary to destination */
		toh(n-1,aux,sou,des);                                    
	}
}
