#include <stdio.h>
int main() {
    int i,j,s=1,n; 
    printf("enter number");
    scanf("%d",&n);

    for (i=1;i<=n;i++) {
        for (j=1; j<=n+1-i; j++) {
            printf("%d ", s);
            s++; 
        }
        printf("\n"); 
    }

    return 0;
}

