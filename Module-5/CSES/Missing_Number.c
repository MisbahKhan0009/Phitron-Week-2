#include<stdio.h>
int main(){
    long long int n,w,  expected_total=0, given_total=0;
    scanf("%lld", &n);
    
    for(int j = 1; j <= n-1; j++)
    {
        scanf("%lld", &w);
        given_total +=w;
    }

    for(int i = 1; i <= n; i++)
    {

        expected_total += i;
    }

   printf("%lld", expected_total-given_total);

    return 0;
}