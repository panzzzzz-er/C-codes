/*
Appeared in TCS NQT
Sum of elements of fibonaaci series 
Uncomment line 14 and 18 and comment line 24 if you want to print fibonacchi elements. 
*/

#include <stdio.h>

int main() {
    
    int a = 0, b=1, n, ans = 1, c;
    
    scanf("%d", &n);
    
    // printf("%d %d ", a, b);
    
    for(int i=2; i<n; i++){
        
        c = a + b;
        //printf("%d ", c); 
        ans = ans + c;
        a = b;
        b = c;
    }
    
    printf("\n%d", ans);
    
    return 0;
}
