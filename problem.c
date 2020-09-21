#include <stdio.h>
int main () {
    int a,n,i,result = 0,temp = 0,sum = 0;
    scanf("%d %d", &a, &n);
    while (1) {
        if ( n <= 0 ) {
            scanf("%d", &n);
            continue;
        }
        break;
    }
    for ( i = 1; i <= n; i++) {
        result = a++;
        sum+=result;
    }
    printf("%d", sum);
    
    
    
    return 0;
}