#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];



    for (int j = 0; j <= a; j++)
    {
     scanf("%d", &arr[j]);
    }
    for (int i = 0; i <= a; i++)
    {
        
        if (arr[i]%2==0)
        {
            printf("%d even\n", arr[i]);
        }
        else
        {
            printf("%d odd\n", arr[i]);
        }
    }
    
    return 0;
}