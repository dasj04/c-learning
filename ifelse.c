#include<stdio.h>
// My first self made program. No help seeked!! (10.08.2023)

int main() {

    int age;
    printf("Enter Age:");
    scanf("%d", &age);

    if(age >= 21) {
        printf("1. Can legally marry in India. \n ");
        printf("2. All the Best for the future. \n");
        
    }
    else {
        printf("1. Legally not allowed to marry. \n");
        printf("2. Wait until you turn 21. \n");
        printf("3. Be Responsible! \n"); 

    }

    char star='~';
    printf("%cTHANK YOU", star);


    return 0;

    
}