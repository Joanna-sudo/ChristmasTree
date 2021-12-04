#include <stdio.h>

int main() {
    int i, j, k;
    int t = 0;
    
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    
    printf("\n");
            
    for (i = 0; i < n; i++){
        for (j = 0; i + j < 2*n-3; j++){
            printf(" ");
        }
        for (j = 0; j < i+1; j++){
            printf("* ");
        }
        printf("\n");
    }

    for (i = 0; i < n; i++){
        for (j = 0; i+j < n-1; j++){
            printf(" ");
        }
        for (j = 0; j < i+n-1; j++){
            if (i == n-1){
                t++;
            }
            printf("* ");
        }
        printf("\n");
    }
            
    if (n%2 == 0){
        for (i = 0; i<n-1; i++){
            for(j = 0; j < (t*2-n+1)/2; j++){
                printf(" ");
            }
            for (j = 0; j < n-1; j++){
                printf("*");
            }
            printf("\n");
        }
    }
    else {
        for (i = 0; i < n-2;i++){
            for(j = 0; j <(t*2-n+2)/2; j++){
                printf(" ");
            }
            for (j = 0; j < n-2; j++){
                printf("*");
            }
            printf("\n");
        }
    }

    printf("\n");
    printf("Srecna Nova godina!!! ^^\n");

    return 0;
}
