#include <stdio.h>

int main() {
    int i,j, end = 100, isPrime =0; 
    
    for(i=2; i<=end; i++) {
        isPrime =1; 
        
        for(j=2; j<=i/2; j++) {
            if(i%j==0) {
                isPrime =0; 
                break; 
            }
        }
        
            printf("%d ", i);
    }

    return 0;
}
