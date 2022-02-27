#include <stdio.h>

int main() {
    // Write C code here
    int a[100];
    int i,j, n;
    printf("enter the digit :");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("enter the number %d : ", i);
        scanf("%d", &a[i]);
        a[i] = a[i] + n;
    }
    for(i=0;i<n;i++){
         printf(" %d ", a[i] );
    }
    return 0;
}