#include <stdio.h>
main(){
    // float broj;
    // printf("unesite realan broj:");
    // scanf("%f", &broj);
    // printf("ovde je broj sa dve decimale:%.2f", broj);
    // return 0;
    int a, b, pomocna;
    printf("unesite prvi broj a=");
    scanf("%d", &a);
    printf("unesite drugi broj b=");
    scanf("%d", &b);
    pomocna=a;
    a=b;
    printf("%d, %d",b ,pomocna);
}