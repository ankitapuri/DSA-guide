#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std; 
  
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)  
{  
    if (n == 1)  
    {  
        cout << "move disk 1 from rod " << from_rod <<  
                            " to rod " << to_rod<<endl;  
        return;  
    }  
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);  
    cout << "move disk " << n << " from rod " << from_rod << 
                                " to rod " << to_rod << endl;  
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);  
}  
  
int main()  
{  
    int n = 4; // Number of disks  
    cout<<"enter the no of disks: "; 
    cin>>n;
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0;  
}  
  
