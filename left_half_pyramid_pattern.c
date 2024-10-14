#include <stdio.h>

int main() {
    int i,j,k, row = 5;
    
    for(i=1; i<=row; i++) {
        for(j=0; j< 2*(row-i)-1; j++) {
            printf(" ");
        }
        for (k=0; k<i; k++) {
            printf("* ");
        }
        printf("\n");
    }
        

    return 0;
}
