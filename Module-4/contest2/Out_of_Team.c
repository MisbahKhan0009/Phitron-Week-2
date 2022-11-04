#include<stdio.h>
int main(){
    int t, r, c, i =0;
    scanf("%d %d",&t, &r);
    for (int j = 0; j < t; j++)
    {
        scanf("%d",&c);
        if (c<r)
        {
            i++;
        }
    }
    printf("%d", i);

    return 0;
}