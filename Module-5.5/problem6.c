#include <stdio.h>
int main(){
    unsigned int n, m;
    scanf("%u %u",&n, &m);
    if (n<m)
    {
        for (int i = n; i <=m; i++)
        {
            printf("%d ",i);
        }
    }
    else if (m<n)
    {
       for (int i = n; i <=23; i++)
        {
            printf("%d ",i);
        } 
        
       for (int i = 0; i <=m; i++)
        {
            printf("%d ",i);
        } 
        printf(" ");

    }

    return 0;
}