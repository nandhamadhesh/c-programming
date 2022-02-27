// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a[100];
    int t ,i,j, n;
    printf("enter the digit :");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("enter the number %d : ", i);
        scanf("%d", &a[i]);
    }
    for( i=0;i<n;i++){
        for (j=0; j<n;j++){
        if (a[i]>a[j]){
            t =a[j];
            a[j]=a[i];
            a[i]=t;
        }
    }
    }
    for(i=0;i<n;i++){
         printf(" %d ", a[i] );
    }
    return 0;
}