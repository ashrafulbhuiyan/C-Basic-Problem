#include <stdio.h>

int descending(int *num, int n); 
int main (){
   int num[4] = {1, 7, 5, 9}, num2[4]= {0};
   int n, i, x;
    n = sizeof(num)/sizeof(num[0]);
    
    x = descending(num, n);
    printf("Last Number %d", x); 
    
    printf("\nThe numbers in descending order is:");
   for (i = 0; i < n; ++i){
      printf("\n%d", num[i]);
   }
}

int descending(int *num, int n){
    int i, j, a; 
    for (i = 0; i < n; ++i){
      for (j = i + 1; j < 4; ++j){
         if (num[i] < num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   
 return num[n-1]; 
}
