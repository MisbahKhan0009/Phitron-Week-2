#include <stdio.h>
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int area = m * n;
    
    int dominno = area / 2;

    printf("%d", dominno);
    return 0;
}