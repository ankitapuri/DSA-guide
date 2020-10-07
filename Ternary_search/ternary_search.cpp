#include<bits/stdc++.h>
using namespace std;
int ternarySearch(int arr[], int n, int key){
	int l=0,r=n-1,mid1,mid2;

	while(l<=r){
	
		mid1 = l + (r-l)/3;
		mid2 = r - (r-l)/3;
		
		if(key<arr[mid1])	r=mid1-1;
		else if(key==arr[mid1])	return mid1;
		else if(key>arr[mid1] && key<arr[mid2])	{
			l=mid1+1;
			r=mid2-1;
		}
		else if(key==arr[mid2])	return mid2;
		else	l=mid2+1;
	
	}
	return -1;
}
int main(){
	int n;
	cout<<"enter size of array?"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter elements: "<<endl;
	for(int i=0; i<n; i++)	cin>>arr[i];
	int key;
	cout<<"enter no. to search"<<endl;
	cin>>key;
	int result=ternarySearch(arr,n,key);
	if(result==-1)	cout<<"NOT FOUND"<<endl;
	else	cout<<key<<" found at position "<<result+1<<endl;
	return 0;
}
