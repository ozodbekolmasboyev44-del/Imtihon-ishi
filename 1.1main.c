

#include <stdio.h>

int main() {
    int son;
    printf("Son kiriting:");
    scanf("%d",&son);
    
        if(son >= 0){
            printf("Musbat son: %d",son);
        }else {
            printf("Musbat emas: %d",son);
        }

    
    return 0;
}