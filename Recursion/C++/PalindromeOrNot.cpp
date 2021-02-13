//TODO: A recursive C++ program to check whether a given number is palindrome or not 

#include<bits/stdc++.h>
#include <stdio.h> 
using namespace std;
//TODO: Write A function that reurns true only if num contains one digit 
int oneDigit(int num) 
{ 
	//TODO: comparison operation is faster than division operation. 
	//TODO: So using following instead of "return num / 10 == 0;" 
	return (num >= 0 && num < 10); 
} 

 
bool isPalUtil(int num, int* dupNum) 
{ 
	
	
	if (oneDigit(num)) 
		return (num == (*dupNum) % 10); // Base case (needed for recursion termination): This statement mainly compares the first digit with the last digit 

	// This is the key line in this method. Note that all recursive 
	// calls have a separate copy of num, but they all share same copy 
	// of *dupNum. We divide num while moving up the recursion tree 
	if (!isPalUtil(num/10, dupNum)) 
		return false; 

	// The following statements are executed when we move up the recursion call tree
	 
	*dupNum /= 10; 

	// At this point, if num%10 contains i'th digit from beiginning, 
	// then (*dupNum)%10 contains i'th digit from end 
	return (num % 10 == (*dupNum) % 10); 
} 

        //TODO: The main function that uses recursive function isPalUtil() to 
        //TODO: find out whether num is palindrome or not 
int isPal(int num) 
{ 
	//TODO: If num is negative, make it positive 
	if (num < 0) 
	num = -num; 

	//TODO: Create a separate copy of num, so that modifications made to address dupNum don't change the input number. 
	
	int *dupNum = new int(num); // *dupNum = num 

	return isPalUtil(num, dupNum); 
} 

// Driver program to test above functions 
int main() 
{ 
	
	int n;
	cin>>n; 
	isPal(n)? printf("Yes\n"): printf("No\n"); 
	return 0; 
} 
