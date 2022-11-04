#include <stdio.h>
int main(){
    int m, total= 0, rem = 0;
    scanf("%d",&m);

    
     if (m % 5 == 0)
     {
        printf("%d", m/5);
     }
     else
     {
        printf("%d", (m/5)+1);
     }
    

    

   return 0;
}