

#include <stdio.h>

int main() {
int n,i,a;
    printf("Son kiriting:");
    scanf("%d",&n);
    for(i=1;i<=4;i++){
        for(a=2;a<=i;a++){
            printf("*");
        }
    printf("*\n",a);
    }
    
    

    
    return 0;
}