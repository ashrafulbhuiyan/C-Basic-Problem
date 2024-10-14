#include <stdio.h>

int main() {
    int i,j, row = 5;
    
    for(i=1; i<=row; i++) {
        for(j=0; j< 2*(row-i)-1; j++) {
            printf("* ");
        }
        
        printf("\n");
    }
        

    return 0;
}
