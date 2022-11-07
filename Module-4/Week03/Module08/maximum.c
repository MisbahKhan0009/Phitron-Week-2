#include<stdio.h>
int main(){
    int a, max=0;
    scanf("%d",&a);
    int arr[a];

    for (int i = 0; i <= a; i++)
    {
        scanf("%d", &arr[i]);
        if (max<arr[i])
        {
            max = arr[i];
        }
    }

    printf("%d\n",max);
    

    return 0;
}