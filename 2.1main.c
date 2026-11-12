

#include <stdio.h>

int main() {
   int day;
    printf("Son kiriting:");
    scanf("%d",&day);

    
    switch(day){
        case 1:
        printf("Dushanba");
        break;
        case 2:
        printf("Sehanba");
        break;
        case 3:
        printf("Chorshanba");
        break;
        case 4:
        printf("Payshanba");
        break;
        case 5:
        printf("Juma");
        break;
        case 6:
        printf("Shanba");
        break;
        case 7:
        printf("Yakshanba");
        break;
        default:
        printf("Notog'ri kun");
    }
    
     

    
    return 0;
}