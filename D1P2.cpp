// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n,k;
    printf("enter the number of rows");
    scanf("%d",&n);
    n++;
    for(int i=1;i<n;i++)
    {
        k=1;
        for(int j=1;j<2*n;j++)
        {
            if(j>n-i && j<n+i &&k)
            {
                printf("*");
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
            //printf("\n");
        }
        printf("\n");
    }
    return 0;
}
