// Online C compiler to run C program online
#include <stdio.h>
#include<stdbool.h>  
int main() {
    // Write C code here
    int i,n;
    printf("enter the number : ");
    scanf("%d", &n);
    bool prime = true;
    for(i=2;i<n;i++){
        if( n % i == 0){
           prime = (bool)false;
           break;
        }
    }
    if(prime == true)
    {
        printf("prime");
    }
    else
    {
        printf("Not prime");
    }
    return 0;
}