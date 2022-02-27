// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n,i,j,f;
    printf("enter the number : ");
    scanf("%d", &n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
           f = 0;
            for(j=1;j<i;j++)
            {
                if(i%j==0)
                {
                    f++;
                }
            }
            if(f == 1)
             printf("%d ",i);
        }
    }
    
    return 0;
}