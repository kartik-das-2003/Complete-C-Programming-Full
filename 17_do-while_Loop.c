#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    
    printf("Input Range Value:");
    scanf("%d",&n);
    do{
        printf("%d ",i);
        i++;
        n--;
    }while(n>0);
    
    return 0;
}
