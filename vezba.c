#include <stdio.h>
#include <math.h>
main(){
    // float broj;
    // printf("unesite realan broj:");
    // scanf("%f", &broj);
    // printf("ovde je broj sa dve decimale:%.2f", broj);
    // return 0;



    // int a, b, pomocna;
    // printf("unesite prvi broj a=");
    // scanf("%d", &a);
    // printf("unesite drugi broj b=");
    // scanf("%d", &b);
    // pomocna=a;
    // a=b;
    // printf("%d, %d",b ,pomocna);


    // int a ,b ,c;
    // printf("unesi broj a:");
    // scanf("%d", &a);
    // printf("unesi broj b:");
    // scanf("%d" ,&b);
    // c= a + b;
    // printf("resenje:%d\n",c);
    // return 0;



    // int a, b;
    // printf("unesi prvi broj:");
    // scanf("%d",&a);
    // printf("unesi drugi broj:");
    // scanf("%d",&b);
    // printf("zbir dva broja:%d\n",a+b);
    // printf("razlika dva broja:%d\n",a-b);
    // printf("proizvod dva broja:%d\n",a*b);
    // printf("razlika dva broja:%d\n",a/b);
    // return 0;


    // int a, b;
    // printf("unesi prvu stranicu:");
    // scanf("%d",&a);
    // printf("unesi drugu stranicu:");
    // scanf("%d",&b);
    // printf("obim pravougaonika je:%d\n",2*a+2*b);
    // printf("povrsina je:%d\n",a*b);
    // return 0;

    // int r;
    // printf("unesi poluprecnik kruga:");
    // scanf("%d",&r);
    // printf("\nobim je:%.2f",2*r*3.14);
    // printf("\npovrsina je:%.2f",3.14*r*r);
    // return 0;

    // int h, r;
    // printf("unesi visinu valjka:");
    // scanf("%d",&h);
    // printf(" unesi poluprecnik valjka:");
    // scanf("%d",&r);
    // printf(" povrsina je:%.2f", 2*r*3.14*(r+h));
    // printf(" zapremina je:%.2f", r*r*3.14*h);
    // return 0;

    float x,y;
    printf("unesi x:");
    scanf("%f",&x);
    y=sqrt(x+x*x+x*x*x);
    printf("y je jednako:%.3f", y);
    return 0;

}