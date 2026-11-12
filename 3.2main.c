

#include <stdio.h>

int main() {
int son, count = 0 ;

    while (1) {
        printf("Son kiriting: ");
        scanf("%d", &son);

        if (son == 0) {
            break;
        }else {
            count +=son;
            
        }
    }
    printf("Yeg'indi: %d",count);
     

    
    return 0;
}