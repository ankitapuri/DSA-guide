// Code in C programming language to generate the permutations for the set of numbers entered .

#include <stdio.h>
/*function to find factorial*/
int fact(int n){
    int factorial=n;
    for(int i=n-1;i>1;i--){
        factorial*=i;
    }
    return factorial;
    }
  /*function to find permutation*/  
    int npr(int n,int r){
        return fact(n)/fact(n-r);
    }
int main()
{
    int n,r;
    printf("Enter value of n and r:");
    scanf("%d%d",&n,&r);
  printf("npr : %d\n" ,npr(n,r));
    return 0;
}
