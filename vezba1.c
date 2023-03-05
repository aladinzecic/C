// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// #define MAX 100 
// main(){
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

    // float x,y;
    // printf("unesi x:");
    // scanf("%f",&x);
    // y=sqrt(x+x*x+x*x*x);
    // printf("y je jednako:%.3f", y);
    // return 0;

    // int a ,b ,z;
    // printf("unesi broj a:");
    // scanf("%d",&a);
    // printf("unesi broj b:");
    // scanf("%d",&b);
    // z=sqrt(a*a+b*b);
    // printf("z=%d+%di",a,b);
    // return 0;


    // dato z1 i z2 naci r1+-r2
    // int a1,b1,a2,b2,r1,r2;
    // printf("unesi a1:");
    // scanf("%d",&a1);
    // printf("unesi b1:");
    // scanf("%d",&b1);
    // printf("unesi a2:");
    // scanf("%d",&a2);
    // printf("unesi b2:");
    // scanf("%d",&b2);
    // r1=a1+a2;
    // r2=b1+b2;
    // printf("z+z1=%d+%di",r1,r2);
    // printf("\nz-z1=%d-%di",r1,r2);
    // return 0;


    // rastojanje 2 tacke u trodim prostoru
    // float x1,x2,y1,y2,z1,z2,d;
    // printf("unesi koordinate prve tacke:(x1,y1,z1)");
    // scanf("%f,%f,%f",&x1,&y1,&z1);
    // printf("unesi koordinate druge tacke:(x2,y2,z2)");
    // scanf("%f,%f,%f",&x2,&y2,&z2);
    // d=sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
    // printf("rastojanje je:%.2f",d);
    // return 0;


    // unesi trocefren broj i ispisi cifre
    // int broj;
    // printf("broj");
    // scanf("%d",&broj);
    // if (broj %2 ==0 )
    // printf("\nvas broj je paran");
    // else
    // printf("\nvas broj je neparan");
    // return 0;


    // int broj;
    // printf("unesite vas broj:");
    // scanf("%d",&broj);
    // if (broj>0)
    // printf("vas broj je pozitivan");
    // else if(broj<0)
    // printf("vas broj je negativan");
    // else
    // printf("vas broj je nula");
    // return 0;

    // int a,b;
    // printf("unesi broj a:");
    // scanf("%d",&a);
    // printf("unesi broj b:");
    // scanf("%d",&b);
    // if(a>b)
    // printf("broj a je veci od b");
    // else if(b>a) printf("broj b je veci od a");
    // else printf("brojevi su jednaki");
    // return 0;


    // int a,b,c,max;
    // printf("broj a:");
    // scanf("%d",&a);
    // printf("broj b:");
    // scanf("%d",&b);
    // printf("broj c:");
    // scanf("%d",&c);
    // max=a;
    // if(b>max)
    // max=b;
    // if(c>max)
    // max=c;
    // printf("najveci broj je %d",max);
    // return 0;



    // int a;
    // printf("unesi broj bodova:");
    // scanf("%d",&a);
    // if(a>90)printf("ocena 10");
    // else if(a>80)printf("ocena 9");
    // else if(a>70)printf("ocena 8");
    // else if(a>60)printf("ocena 7");
    // else if(a>50)printf("ocena 6");
    // else printf("pali ste");
    // return 0;


    // int a,b,r1,r2;
    // printf("a:");
    // scanf("%d",&a);
    // printf("b:");
    // scanf("%d",&b);
    // r1=a-b;
    // r2=b-a;
    // if(a>b)
    // printf("rezultat=%d",r1);
    // else printf("rezultat=%d",r2);
    // return 0;

    // int a,b,c,d;
    // printf("a:");
    // scanf("%d",&a);
    // b=a/100;
    // c=(a/10)%10;
    // d=a%10;
    // printf("\n prva cifra je:%d",b);
    // printf("\n druga cifra je:%d",c);
    // printf("\n treca cifra je:%d",d);
    // return 0;


    // int a,b,x;
    // printf("unesi broj x:");
    // scanf("%d",&x);
    // printf("unesi gornju i donju granicu:");
    // scanf("%d%d",&a,&b);
    // if((a<=x*x) && (b>=x*x))
    // printf("kvadrat vaseg broja je izmedju %d i %d",a,b);
    // else printf("kvadrat vaseg broja nije izmedju %d i %d",a,b);
    // return 0;


    // int a,b,x;
    // printf("unesi broj x:");
    // scanf("%d",&x);
    // printf("unesi gornju i donju granicu:");
    // scanf("%d%d",&a,&b);
    // if((a<=x*x<=b))
    // printf("kvadrat vaseg broja je izmedju %d i %d",a,b);
    // else printf("kvadrat vaseg broja nije izmedju %d i %d",a,b);
    // return 0;

    // int a,b,c;
    // printf("unesi tri realna broja:");
    // scanf("%d%d%d",&a,&b,&c);
    // if((a>b) && (b>c))
    // printf("%d %d %d",c,b,a);
    // else if((a>b) && (b<c) && (a>c))
    // printf("%d %d %d",b,c,a);
    // else if((a>b) && (b<c) && (a<c))
    // printf("%d %d %d",b,a,c);
    // else if((b>a) && (a>c))
    // printf("%d %d %d",c,a,b);
    // else if((c>a) && (c>b) && (a<b))
    // printf("%d %d %d",a,b,c);
    // else if((b>a) && (c>a) && (c<b))
    // printf("%d %d %d",a,c,b);
    // else if((c>a) && (c>b) && (b<a))
    // printf("%d %d %d",b,a,c);
    // return 0;


    // int x,y;
    // printf("unesi x:");
    // scanf("%d",&x);
    // if((x>-2) && (x<=2))
    // y=2*x;
    // else if((x>=5) && (x<7))
    // y=3*x-1;
    // else
    // y=1/x;
    // printf("y=%d",y);
    // return 0;


    // int a,b,c,s,P;
    // printf("unesite stranice trougla:");
    // scanf("%d %d %d",&a,&b,&c);
    // if((a+b>c) && (a+c>b) && (c+b>a))
    // {s=(a+b+c)/2;
    // P=sqrt(s*(s-a)*(s-b)*(s-c));
    // printf("povrsina trougla je %d",P);
    // }
    // else printf("stranice ne formitaju trougao");
    // return 0;

    
    // int a1,a2,b1,b2,x,y;
    // printf("unesi koordinate prve prave:");
    // scanf("%d %d",&a1,&b1);
    // printf("unesi koordinate druge prave:");
    // scanf("%d %d",&a2,&b2);
    // if(a1==a2){
    //     if(b1==b2)
    //     printf("prave se podudaraju");
    //     else
    //     printf("prave su paralelne");
    // }
    // else{
    //     x=(b2-b1)/(a1-a2);
    //     y=a1*x+b1;
    //     printf("tacka preseka je x=%d, y=%d",x,y);
    // }
    // return 0;

    // float x;
    // int y;
    // printf("unesi jedan realan broj:");
    // scanf("%f",&x);
    // if(x>0){
    //     y=1;
    // }
    // else if(x==0){
    //     y=0;
    // }
    // else{
    //     y=-1;
    // }
    // printf("y=%d",y);
    // return 0 ;


    // int broj,n100,n10,n1;
    // printf("unesi trocifreni broj");
    // scanf("%d",&broj);
    // n100=broj/100;
    // n10=(broj/10)%10;
    // n1=broj%10;
    // printf("potrebno je %d novcanica od 100\n%d novcanca od 10 i\n%d novacanica od 1",n100,n10,n1);
    // return 0;


    //final boss
    // int a,b,c,D,x1,x2;
    // printf("unesi koeficijente:\na="); 
    // scanf("%d",&a);
    // printf("b=");
    // scanf("%d",&b);
    // printf("b=");
    // scanf("%d",&c);
    // if(a!=0){
        
    //     D=b*b-4*a*c;
    //     if(D>0){
    //     x1=(-b+sqrt(D))/(2*a);
    //     x2=(-b-sqrt(D))/(2*a);
    //     printf("n\Resenja:\nx1=%d, x2=%d",x1,x2);
    //     }
    //     else if(D==0){
    //     x1=(-b/(2*a));
    //     printf("\nResenje:\nx1=x2=%d",x1); 
    //     }
    //     else {
    //         x1=-b/(2*a);
    //         x2=sqrt(-D)/(2*a);
    //         printf("\nKompleksna resenja:\n");
    //         printf("x1=%d+i%d, x2=%d-i%di",x1,x2,x1,x2); 
    //     }
    // }
    // else{
    //     if(b!=0){
    //         x1=-c/b;
    //         printf("\nResenje:\nx=%d",x1);
    //     }
    //     else printf("Sistem nema resenja.");
    // }
    // return 0;

    

    // int i;
    // for (i=1;i<6;i++ )
    // printf("zdravo\n");
    // return 0;


    // int i;
    // for(i=1;i<11;i=i+1)
    // printf("%d\n",i);
    // return 0;


    
    // int i;
    // for(i=1;i<11;i=i+1)
    // printf("%d\n",i);
    // return 0;

    // int i;
    // for(i=1;i<11;i=i+2)
    // printf("%d\n",i);
    // return 0;


    // int i;
    // for(i=10;i>=1;i=i-1)
    // printf("%d\n",i);
    // return 0;


    // int i;
    // for(i=1;i<=5;++i)
    // printf("%d\n",i*i);
    // return 0;

    // int i;
    // printf("brojevi deljivi sa 3\n");
    // for(i=1;i<=10;i++)
    // if(i%3==0)
    // printf("%d\n",i);
    // return 0;


    // int i,n;
    // printf("unesi broj n:");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++)
    // printf("%d\n",i);
    // return 0;


    // int i,s;
    // s=0;
    // for(i=1;i<=6;i=i+1)
    // s=s+i;
    // printf("sume je %d:",s);
    // return 0;

    // int i,n,suma=0;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     suma=suma+i;
    // }
    // printf("suma je %d",suma);
    // return 0;


    //  int n, i;
    // float a, s, ars;
    // s=0;
    // printf("n= ");
    // scanf("%d",&n);
    // printf(" Unesite %d brojeva:\n", n);
    // for(i=1; i<=n; i++)
    // {
    // scanf("%f",&a);
    // s+=a;
    // }
    // ars=s/n;
    // printf("\n Suma zadatih brojeva je %.2f", s);
    // printf("\n Aritmeticka sredina zadatih brojeva je %.2f", ars);
    // return 0;
    




    // int i,n,faktorijel=1;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     faktorijel*=i;
    // }
    // printf("faktorijel je %d",faktorijel);
    // return 0;


//     int i,n,suma=0,f=1;
//    printf("n:");
//    scanf("%d",&n);
//    for(i=1;i<=n;i++){
//        f=f*i;
//        suma+=f;
//    }
//    printf("resenje je:%d",suma);
//    return 0;


    // int i,m,n,s=1;
    // printf("unesi m");
    // scanf("%d",&m);
    // printf("unesi n");
    // scanf("%d",&n);
    // for(i=0;i<=m;i++){
    //     s=s*(n+i*m);
    // }
    // printf("ovo je resenje:%d",s);
    // return 0;


    // int i,m,n,znak=1;
    // float s=0;
    // printf("unesi m:");
    // scanf("%d",&m);
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(i=1;i<=m;i++){
    //     s=s+(float)znak/(n+i*m);
    //     znak=-znak;
    // }
    // printf("ovo je resenje:%f",s);
    // return 0;



    //4.8 b
    // int i,n,m,znak=1;
    // float s=0;
    // printf("unesi n:");
    // scanf("%d",&n);
    // printf("unesi m:");
    // scanf("%d",&m);
    // for(i=1;i<=m;i++){
        
    //     s=s+(float)znak/(n+i*m);
    //     znak=-znak;
    // }
    // printf("rezultat je %.5f",s);
    // return 0;

    //4.9 a
    // int i,n,f=1;
    // float s=0,q=0;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     f=f*i;
    //     q=q+1.0/(i+1);
    //     s=s+f/q;
    // }
    // printf("rezultat je:%.5f",s);
    // return 0;

//4.9b
    // int i,n,f=1,znak=1;
    // float s=0,q=0;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     q=q+i;
    //     f=f*i;
    //     s=s+znak*q/f;
    //     znak=-znak;


    //4.9 c
    // int i,n;
    // float s=1,p=0,q=0;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     p=p+cos(i);
    //     q=q+sin(i);
    //     s=s*p/(float)q;
    // }
    // printf("resenje je:%.5f",s);
    // return 0;

    //4.10 a
    // int i,x,n;
    // float s=0,p=1;
    // printf("unesi n");
    // scanf("%d",&n);
    // printf("unesi x");
    // scanf("%d",&x);
    // for(i=1;i<=n;i++){
    //     p=p*sin(x);
    //     s=s+p;
    // }
    // printf("resenje je:%.5f",s);
    // return 0;

    //4.10 b
    // int i,x,n;
    // float s=0,p=1;
    // printf("unesi n");
    // scanf("%d",&n);
    // printf("unesi x");
    // scanf("%d",&x);
    // for(i=1;i<=n;i++){
    //     p=p*x;
    //     s=s+sin(p);
    // }
    // printf("resenje je:%.5f",s);
    // return 0;
    
    //4.11
    // int i,n;
    // float br,max;
    // printf("n:");
    // scanf("%d",&n);
    // printf("1. broj:");
    // scanf("%f",&br);
    // max=br;
    // for(i=2;i<=n;i++){
    //     printf("\n%d broj:",i);
    //     scanf("%f",&br);
    //     if(br>max){
    //         max=br;
    //     }

    // }
    // printf("najveci br je %.2f:",max);
    // return 0;


    //4.12
    // int i,s=0,zbir;
    // for(i=1;i<=100;i++){
    //     if(i%6==0){
    //         printf("\t%d",i);
    //         s=s+i;
            
    //     }
    // }
    // printf("\n Suma je %d",s);
    // return 0;

    //sve do 4.16 uradjeno al izbrisano jbg

    //4.17
    // int a,b,c,broj,dvbroj;
    // for(a=1;a<=9;a++)
    //     for(b=0;b<=9;b++)
    //         for(c=0;c<=9;c++){
    //             broj=100*a+10*b+c;
    //             dvbroj=10*a+c;
    //             if(broj%dvbroj==0)
    //             printf("%d\t",broj);
    //             }
    //             return 0;

    //4.18
    // int a,b,c,broj,suma=0,br=0;
    // for(a=1;a<=9;a++)
    //     for(b=0;b<=9;b++)
    //         for(c=0;c<=9;c++){
    //         broj=100*a+10*b+c;
            
    //             if(a+b+c==5){
    //                 suma=suma+broj;
    //                 br++;
    //             }}
                
    //     printf("suma je:%d",suma);
    //     printf("broj brojeva:%d",br);
    //     return 0;
    
    

    // int i,n;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     if(n%i==0){
    //         printf("%d",i);
    //     }
    // }
    // return 0;


    // int i,n,suma=0;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(i=1;i<n;i++){
    //     if(n%i==0){
    //         suma=suma+i;
    //     }
    // }
    // if(suma==n)printf("%d je savrsen broj",n);
    // else printf("%d nije savrsen broj",n);
    
    // return 0;


    // int i,ocena,n,brp=0,brn=0;
    // float s=0,procena;
    // printf("n:");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     printf("unesi ocenu ucenika:");
    //     scanf("%d",&ocena);
    //     if(ocena>1){
    //         brp++;
    //         s=s+ocena;
    //     }
        
    // }
    // brn=n-brp;
    // procena=s/brp;
    // printf("%.2f\t",procena);
    // printf("%d\t",brn);
    // return 0;


    

//     int min,sec,hour,n,s=0;
//     printf("n:");
//     scanf("%d",&n);
//     for(hour=1;hour<=23;hour++)
//         for(min=1;min<=59;min++)
//             for(sec=1;sec<=59;sec++){
//                 if(n==(hour/10+hour%10+min/10+min%10+sec/10+sec%10))
//                 printf("\n%d sat %d min %d sec",hour,min,sec);



//             }

            

// return 0;

//4.23
// float x,y,xmin,xmax,dx;
// printf("unesi xmin");
// scanf("%f",&xmin);
// printf("unesi xmax");
// scanf("%f",&xmax);
// printf("unesi dx");
// scanf("%f",&dx);
// printf("\n x y\n ===================\n"); 
// for(x=xmin;x<=xmax;x=x+dx){
//     y=(2*x+1)/(x*x-1);
//     printf("%0.3f %0.3f\n", x, y);
// }
// return 0;


//5.1
//     int i;
// i=1;
// while(i<=5){
//     printf("%d",i);
//     i++;
// }
// return 0;

//5.2
// int i=1;
// while(i<=10){
//     printf("%d",i);
//     i++;
// }
// return 0;


// int i=1;
// while(i<=10){
    
//     printf("%d",i);
//     i+=2;
// }
// return 0;


// int i=10;
// while(i>=1){
//     printf("%d",i);
//     i--;

// }
// return 0;


//5.3

// int i=1,n;
// int suma=0;
// printf("unesi n:");
// scanf("%d",&n);
// while(i<=n){
//     suma=suma+i;
//     i++;
// }
// printf("%d",suma);
// return 0;

//5.4
// int i=1,n;
// int suma=0;
// printf("unesi n:");
// scanf("%d",&n);
// while(i<=n){
//     suma=suma+i;
//     i+=3;
// }
// printf("%d",suma);
// return 0;


//5.5
// int i=1,n;
// float suma=0;
// printf("unesi n:");
// scanf("%d",&n);
// while(i<=n){
//     suma=suma+1.0/pow(2*i+1,2);
//     i++;
// }
// printf("%.3f",suma);
// return 0;


//5.6
// int i,n,m,suma=0;
// printf("unesi n:");
// scanf("%d",&n);
// printf("unesi m:");
// scanf("%d",&m);
// i=n;
// while(i<=m){
//     if(i%2==0){
//         suma+=pow(i,2);
//     }
//     else suma+=pow(i,3);
//     i++;
// }
// printf("suma je %d:",suma);
// return 0;

//5.7 a)
// int i=3,n,fpp=1,fp=1,fn;
// printf("unesi n:");
// scanf("%d",&n);
// printf("f1=1\n");
// printf("f2=1\n");
// while(i<=n){
//     fn=fp+fpp;
//     fpp=fp;
//     fp=fn;
//     printf("f%d=%d\n",i,fn);
//     i++;
// }

// return 0;

//5.7 b)
// int i=3,n,fpp=1,fp=1,fn,suma =2;
// printf("unesi n:");
// scanf("%d",&n);
// while(i<=n){
//     fn=fp+fpp;
//     fpp=fp;
//     fp=fn;
//     suma =suma+fn;
//     i++;
// }
// printf("suma je %d",suma);

// return 0;

//5.8
// int a,i=1,n,rezultat=1;
// printf("unesi a:");
// scanf("%d",&a);
// printf("unesi n:");
// scanf("%d",&n);
// while(i<=n){
//     rezultat*=a;
//     i++;
// }
// printf("resenje je:%d",rezultat);
// return 0;

//5.9
// int brojac=0,suma=0;
// const float stop=0; 
// int realanbr=-1;
// float as;
// while(realanbr !=stop){
//     printf("unesi realan broj:");
//     scanf("%d",&realanbr);
//     suma=suma+realanbr;
//     brojac++;
// }
// as=suma/(brojac-1);
// printf("resenje je%f",as);
// return 0;

//5.10
// int brojac=0,suma=0;
// const float stop=0; 
// int realanbr=-1;
// float as;
// while(realanbr !=stop){
//     printf("unesi realan broj:");
//     scanf("%d",&realanbr);
//     if(realanbr>=2 &&realanbr<=6){
//         suma+=realanbr;
//         brojac++;
//     }
// }
// as=suma/(brojac);
// printf("resenje je%f",as);
// return 0;

//5.11
// int i=1,n,m=0,f=1,gore=1,levo=1,desno=1;
// float rezultat;
// while(m<1||n<1||n>m){
//     printf("unesi m:");
// scanf("%d",&m);
// printf("unesi n:");
// scanf("%d",&n);
// }
// for(i=1;i<=m;i++){
//     gore*=i;
// }
// for(i=1;i<=n;i++){
//     levo*=i;

// }
// for(i=1;i<=(m-n);i++){
//     desno*=i;

// }
// rezultat=gore*1.0/(levo*desno);
// printf("koeficijent je %.2f",rezultat);
// return 0;


//5.12
// int i,m,n,pomocna;
//     float koren,suma=0;
//     printf("unesi m i n");
//     while(m<1||n<1){
//         scanf("%d %d",&m,&n);
//     }
//     if(m>n){
//         pomocna=n;
//         n=m;
//         m=pomocna;
        
//     }
//     if(m%2==0)m++;
//     for(i=m;i<=n;i=i+2){
//         koren=sqrt(i);
//         suma+=koren;
//     }
//     printf("suma korena je %.3f",suma);
//     return 0;

//5.13
// int i,n,znak=1;
// float suma=0;
//     printf("unesi n:");
//     scanf("%d",&n);
//     i=1;
//     while(i<=n){
//         suma=suma+znak*1.0/i;
//         znak=-znak;
//         i++;
//     }
//     printf("suma je %.3f",suma);


//5.14?????????????????????????????????????????????????????????????????????????????
//5.17
// int a,b;
// printf("unesi a:");
// scanf("%d",&a);
// printf("unesi b:");
// scanf("%d",&b);
// while(a!=b){
//     if(a>b){
//         a=a+b;
//     }
//     else{
//         b=b-a;
//     }
// }
// printf("nzd je %d",a);
// return 0;

//5.18
// int n, pom,suma=0,zadnjaCifra;
// printf("unesi n:");
// scanf("%d",&n);
// pom=n;
// while(pom>0){
//     zadnjaCifra=pom%10;
//     suma=suma+zadnjaCifra;
//     pom=pom/10;
// }
// if(n%suma==0){
//     printf("broj je nivenov");

// }
// else printf("nije");
// return 0;

//5.19
// int n,obrnut=0;
// printf("unesi n:");
// scanf("%d",&n);
// while(n>0){
//     obrnut=obrnut*10+n%10;
//     n=n/10;
// }
// printf("obrnut je %d",obrnut);
// return 0;


//5.19 28 =2*2*7
// int n,k,m;
// printf("unesi n:");
// scanf("%d",&n);
// m=n/2;
// for(k=2;k<=(n/2);k++){
//     while(n%k==0){
//         printf("%d\n",k);
//         n=n/k;
//     }
// }
// return 0;

//  int a,b,c;
// printf(" Pitagorini brojevi:\n"); 
// for(a=1;a<=20;a++)
//     for(b=1;b<=20;b++)
//         {
            
//             for(c=1;c*c<=(a*a+b*b);c++){
//                 if(c*c==(a*a+b*b)){
//                     printf(" a=%2d b=%2d c=%2d\n", a,b,c);
//                 }
//             }
//         }
// return 0;


//6.4
// int a,stepen=1;
// printf("unesi granicu a:");
// scanf("%d",&a);
// do{
//     printf("%d\n",stepen);
//     stepen=stepen*2;
// }
// while(stepen<=a);
// return 0;


//DA LI JE UNETI cetvorocifreni BROJ PALINDROM NPR 1441
//  int n,p,d,t,c;
// printf("unesi n:");
// scanf("%d",&n);
// c=n%10;
// t=(n/10)%10;
// d=(n/100)%10;
// p=n/1000;
// if(p==c && d==t){
//     printf("broj je palidnrom");
// }
// else printf("broj nije palidnrom");
// return 0;

// da li je bilo koji broj palindrom

// int n, obrnuti=0,pom;
//  printf(" n= ");
//  scanf("%d", &n);
// pom=n;
//  while(n > 0)
//  {
//  obrnuti = obrnuti*10 + n%10;
//  n /= 10;
//  }
//  printf("\n Obruti: %d\n", obrnuti);
//  if(pom==obrnuti){
//      printf("jeste");
//  }
//  else printf("nije");
//  return 0; 

// prestupna godina
// int godina;
// printf("unesi godinu");
// scanf("%d",&godina);
// if(godina%400==0 ||godina%4==0 && godina%100!=0){
//     printf("%d godina je prestupna",godina);
// } else printf("nije");


// return 0;


// zamena najvece i najmanje cifre u cetvorocifrenom broju
// int n,p,d,t,c,max,min,stepenmin=1,stepenmax=1,rezultat;
// printf("unesi cetvorocifren broj");
// scanf("%d",&n);
// c=n%10;
// t=(n/10)%10;
// d=(n/100)%10;
// p=n/1000;
// max=c;
// min=c;
// if(t>max){
//     max=t;
//     stepenmax=10;
// }
// if(d>max){
//     max=d;
//     stepenmax=100;
// }
// if(p>max){
//     max=p;
//     stepenmax=1000;
// }

// if(t<min){
//     min=t;
//     stepenmin=10;
// }
// if(d<min){
//     min=d;
//         stepenmin=100;

// }
// if(p<min){
//     min=p;
//         stepenmin=1000;

// }

// /* Ideja: 4179, mesta menjamo tako sto oduzmemo 9 i dodamo 1,
//  odnosno oduzemo 100 i dodamo 900 */
// rezultat=n-max*stepenmax+min*stepenmax-min*stepenmin+max*stepenmin;
// printf("%d",rezultat);
// return 0;

//http://www.prog1-i-smer.matf.bg.ac.rs/zbirka_sa_resenjima.pdf
//da li su cifre cetvorocifenog broja poredjane po redosledu ili ne
// int n,p,d,t,c;
// printf("unesi cetvorocifren broj");
// scanf("%d",&n);
// c=n%10;
// t=(n/10)%10;
// d=(n/100)%10;
// p=n/1000;

// if(c>t &&t>d&&d>p){
//     printf("cifre rastu");
// }
// else if(c<t &&t<d&&d<p) printf("cifre opadaju");
// else printf("cifre nemaju lep raspored");
// return 0;


//ako broj ima nule na kraju izbrisi ih
// int n;
// printf("unesi  broj");
// scanf("%d",&n);
// while(n%10==0){
//     n=n/10;
// }
// printf("%d",n);
// return 0;

//umesi broj i sve njegove parne cifre uvecaj za 1
//     int x,y=0,vr=1,cifra;
// printf("unesi broj:");
// scanf("%d",&x);
// while(x>0){
//     cifra=x%10;
//     if(cifra%2==0){
//         cifra++;
        
//     }
//     y=y+cifra*vr;
//     x=x/10;
//     vr=vr*10;
    
    
// }
// printf("%d",y);
// return 0;


// brisanje svakde druge cifre sa desna
// int x,y=0,vr=1,cifra,rbr=0;
// printf("unesi broj:");
// scanf("%d",&x);
// while(x>0){
//     cifra=x%10;
//     if(rbr%2==0){
//         y=y+vr*cifra;
//         vr=vr*10;
//     }
    
//     rbr++;
//     x=x/10;
    
    
    
// }
// printf("%d",y);
// return 0;

// }

//ako je zbir dve susedne cifre ta cifra ona se brise
// int n, novo_n;
// int stepen;
//  int cifra_levo , cifra_sredina , cifra_desno;
//  /* Ucitavanje broja. */
// printf("Unesite broj: ");
//  scanf("%d", &n);
//  if (n <= 0) {
// printf("Neispravan unos.\n");
//  return -1;
// }

// /* Stepen broja 10 sa kojim se mnoze cifre izdvojenog broja. */
//  stepen = 1;
//  /* Nova vrednost broja. */
// novo_n = 0;

// /* Provera da li u zapisu broja postoje barem tri cifre. */
//  while (n > 99) {
// /* Izdvaja se srednja cifra , cifra desno od nje i cifra levo od
//  nje: npr. za trojku 583 8 je srednja cifra , 3 je cifra
// desno , a 5 cifra levo. */
//  cifra_desno = n % 10;
// cifra_sredina = (n / 10) % 10;
//  cifra_levo = (n / 100) % 10;
//  /* U novi broj se smesta desna cifra. */
// novo_n += cifra_desno * stepen;

// // /* Azurira se vrednost stepena. */
// //  stepen = stepen * 10;
// //  /* Provera da li je srednja cifra jednaka zbiru leve i desne
// // cifre. */
// //  if (cifra_levo + cifra_desno == cifra_sredina) {
// //      /* Treba izbaciti srednju cifru , pa broj n se azurira tako
// // sto se podeli sa 100. */
// //  n = n / 100;} else {

// // /* Inace , zadrzava se srednja cifra i odbacuje se samo
// // 49 poslednja. */
// // n = n / 10;
// //  }
// // }

// // /* Na novi broj se dodaje preostali dvocifreni ili jednocifreni
// // 55 broj. */
// // novo_n = n * stepen + novo_n;

// // /* Ispisivanje rezultata. */
// //  printf("%d\n", novo_n);

// // return 0;

// //ispisuje se broj sa najvecom vodecom cifrom
// int n;
//  int x, x_kopija;
// int broj;
//  int vodeca_cifra , max_vodeca_cifra;
// int i;
// 
// /* Citamo vrednost sa ulaza */
//  printf("Unesite broj n: ");
// scanf("%d", &n);
// 
// /* Postavljamo maksimalnu vodecu cifru na 0 - cifre broja su vece
//  ili jednake od 0 pa je ova vrednost neutralna */
// max_vodeca_cifra = 0;

// /* Ucitavamo broj po broj */
//  printf("Unesite n brojeva: ");
// for (i = 0; i < n; i++) {
//  scanf("%d", &x);
//  /* Odredjujemo vodecu cifru broja */
// x_kopija = abs(x);
//  while (x_kopija > 10) {
// x_kopija = x_kopija / 10;
//  }
// vodeca_cifra = x_kopija;

// /* Ako je izdvojena cifra veca od maksimalne vodece cifre */
//  if (vodeca_cifra > max_vodeca_cifra) {
// /* Cuvamo je */
//  max_vodeca_cifra = vodeca_cifra;
// /* I zbog ispisa , cuvamo i broj u kojem se ona pojavljuje */
//  /* Zbog ovoga smo morali i da racunamo vodecu cifru nad
// kopijom broja x kako ne bismo promenili njegovu vrednost */
//  broj = x;
// }
//  }
//  /* Ispisujemo rezultat */
// printf("%d\n", broj);

//dat je trocifren broj ispisi ga da bude najveci moguci
//npr 348 ->843 
// int n,x,y,z,p;
// printf("unesi n:");
// scanf("%d",&n);
// z=n%10;
// y=(n/10)%10;
// x=(n/100)%10;
// printf("%d",a);
// if(y>x){
//     p=x;
//     x=y;
//     y=p;
// }
// if(z>x){
//     p=x;
//     x=z;
//     z=p;
// }
// if(z>y){
//     p=y;
//     y=z;
//     z=p;
// }
// printf("%d%d%d",x,y,z);
// return 0;


//unesen n para i vidis koliko je to novcanica od 5000,1000,100,50,10,1
// int n,n5000,n1000,n100,n50,n10,n1,rez;
// printf("unesi n:");
// scanf("%d",&n);
// n5000=n/5000;n=n%5000;
// n1000=n/1000;n=n%1000;
// n100=n/100;n=n%100;
// n50=n/50;n=n%50;
// n10=n/10;n=n%10;
// n1=n/1;
// printf("%d   %d   %d  %d   %d   %d",n5000,n1000,n100,n50,n10,n1);
// return 0;


//3!+6!+9!..+n!
//     int n,i,suma=0,f=1;
//     printf("unei n:");
//     scanf("%d",&n);
    
//         for(i=1;i<=n;i++){
//             f=f*i;
//             if(i%3==0)
//             suma=suma+f;
//         }
    
//    printf("suma je %d",suma);
// return 0; 


//S=1+1/(1/2) +.1/(1/2 + 1/3) +...+ 1/(1/2+1/3+...+1/n)
    // int n,i;
//     float suma=0,suma1=1;
//     double f=1;
//     printf("unei n:");
//     scanf("%d",&n);
    
//         for(i=2;i<=n;i++){
//             suma=suma+1.0/i;
//             suma1=suma1+1.0/suma;
//         }
    
//    printf("suma je %f",suma1);
// return 0;


//najveci broj od n ucitanih
// int a,n,max,i;
// printf("n:");
// scanf("%d",&n);
// printf("Otkucaj: 1. broj");
// scanf("%d",&a);
// max=a;
// for(i=2;i<=n;i++){
//     printf("Otkucaj: %d. broj",i);
            
//             scanf("%d",&a); 
//     if(a>max)max=a;
// }
// printf("%d",max);
// return 0;


// S=1/32+1/62+1/92+..+1/(3n)2;
// int  i,n;
// float suma=0;
// printf("unesi n:");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//     suma=suma+1.0/(pow(3*i,2));
// }
// printf("%f",suma);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// kolok
// int x,y,n,i,brojb=0,brojc=0;
// float d,p1,p2,p3,p;
// printf("unesi broj tacaka n:");
// scanf("%d",&n);

// for(i=1;i<=n;i++){
//     printf("unesi x i y:");
//     scanf("%d %d",&x,&y);
//     p1=fabs(1.0*(8*(6-y)+10*(y-6)+x*(6-6))/2);
// p2=fabs(1.0*(10*(8-y)+9*(y-6)+x*(6-8))/2);
// p3=fabs(1.0*(8*(8-sy)+9*(y-6)+x*(6-8))/2);
// p=fabs(1.0*(8*(6-8)+10*(8-6)+9*(6-6))/2);
// d=sqrt(pow(x-9,2)+pow(y-3,2));
//     if(d<=1&& d>=0){

//     brojb++;
// }
// else if(p1+p2+p3==p){
//     brojb++;
// }
//  else if(x>=2&&x<=10&&y>=2&&y<=4||x>=2&&x<=10&&y>=6&&y<=8||x>=2&&x<=4&&y>=2&&y<=8||x>=8&&x<=10&&y>=2&&y<=8){
//     brojc++;
// } else if(y<2||y>8){
//     brojb++;
// }else if(x<2||x>10){
//     brojb++;
// }
// }
// printf(" broj belih je %d:\t",brojb);
// printf(" broj crvenih je %d:",brojc);
// return 0;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #define STOP 0
// int x,brojac=-1,gore=0;
// float as=0;
// printf("unesi broj");
// while(x!=STOP){
//     scanf("%d",&x);
//     brojac++;
//     gore+=x;
// }
// as=(1.0*gore)/brojac;
// printf("a sredine je %.4f",as);
// return 0;


// unosi se n brojeva i proverava se koliko se puta promenio znak ue
// int broj,sledecibr,promena=0,n,i;
// printf("unesi n:");
// scanf("%d",&n);
// printf("unesi broj:");
// scanf("%d",&broj);
// for(i=2;i<=n;i++){
//     scanf("%d",&sledecibr);
//     if(broj*sledecibr<0){
//         promena++;
//     }
//     else if(broj*sledecibr==0 && (broj==0||sledecibr==0)){
//         promena++;
//     }
//     broj=sledecibr;
// }
// printf("broj promena je %d",promena);
// return 0;

//U prodavnici se nalazi n artikala čije cene su realni brojevi.
//Napisati program koji učitava n, a potom i cenu svakog od n artikala i određuje
//i ispisuje najmanju cenu.


// int n,i,min,x;
// printf("unesi n:");
// scanf("%d",&n);
// if(n==0){
//     printf("niste uneli nista");
//     return 1;
// }
// printf("unesi cenu:");
// scanf("%d",&x);
// min=x;
// for(i=2;i<=n;i++){
//     printf("unesi cenu:");
//     scanf("%d",&x);
//     if(x<0){
//         printf("cena ne moze biti negativna");
//         return 1;
//     }
//     if(x<min){
//         min=x;
//     }
// }
// printf("najmanja cena je%d",min);
// return 0;

//Zadatak 2.3.22 Program učitava ceo pozitivan broj n, a zatim i n celih
//brojeva. Napisati program koji ispisuje broj sa najvećom cifrom desetica. Ukoliko
//ima više takvih, ispisati prvi.

// int n,i,broj,desetica,max,maxbroj;
// printf("unesi n:");
// scanf("%d",&n);

// max=0;
// for(i=1;i<=n;i++){
//     printf("unesi broj:");
//     scanf("%d",&broj);
//     desetica = (broj / 10) % 10;

//     if(desetica>=max){
//         max=desetica;
//         maxbroj=broj;
//     }
// }
// printf("broj sa najvecom deseticom je %d",maxbroj);
// return 0;


//Zadatak 2.3.23 Program učitava ceo pozitivan broj n, a zatim i n celih
//brojeva. Napisati program koji ispisuje broj sa najvećim brojem cifara. Ukoliko
//ima više takvih, ispisati prvi.


// int n,i,broj,broj1,brcif=0,maxbrcif=0,maxbroj,brojac=0;////////////////////////////////////////////////////////
// printf("unesi n:");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//     printf("unesi broj:");
// scanf("%d",&broj);
// broj1=broj;
// while(broj1!=0){
//     broj1/=10;
//     brcif++;
// }
// if(brcif>maxbrcif){
//     maxbrcif=brcif;
//     maxbroj=broj;
// }
// }
// printf("%d",maxbroj);
// return 0;

// }


//Program učitava ceo pozitivan broj n, a zatim i n celih
//brojeva. Napisati program koji ispisuje broj sa najvećom vodećom cifrom. Vodeća
//cifra je cifra najveće težine u zapisu broja. Ukoliko ima više takvih, ispisati prvi
// int n,i,broj,broj1,brcif=0,cifra,maxbrcif,maxbroj,brojac=0;
// printf("unesi n:");
// scanf("%d",&n);
// maxbrcif=0;
// for(i=1;i<=n;i++){
//     printf("unesi broj:");
// scanf("%d",&broj);
// broj1=broj;
// while(broj1>10){
//     broj1/=10;
    
// }
// cifra=broj1;
// if(maxbrcif<cifra){
//     maxbrcif=cifra;
//     maxbroj=broj;
// }
// }
// printf("%d",maxbroj);
// return 0;


//Vršna su merenja nadmorskih visina na određenom delu
//teritorije i naučnike zanima razlika između najveće i najmanje nadmorske visine.
//Napisati program koji učitava realne brojeve sve do unosa 0 koji označavaju
//nadmorske visine i ispisuje razliku najveće i najmanje nadmorske visine.
// int x,min,max;
// printf("unesi visinu:");
// scanf("%d",&x);
// min=x;
// max=x;
// while(x!=0){
    
    
//     if(x>max){///////////////MORA NA KRAJU SCANF OBRATI PAZNJU
//         max=x;
//     }
//     if(x<min){
//         min=x;
//     }
//     printf("unesi visinu:");
//     scanf("%d",&x);
    
// }
// printf("razlika je %d",(max-min));
// return 0;



//SUMA KUBOVA DO N
// int suma=0,i,n,f=1;
// printf("unesi n:");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//     f=i*i*i;
//     suma=suma+f;
// }
// printf("%d",suma);
// return 0;


// int suma=0,i,n,f=1;
// printf("unesi n:");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//     f=i*i*i;
//     suma=suma+f;
//     printf("\t%d  %d",i,suma);
// }

// return 0;


// x+2x^2+3x^3
// int i,suma=0,f=1,x,n;
// printf("unesi x:");
// scanf("%d",&x);
// printf("unesi n:");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//     f=pow(x,i);
//     suma=suma+i*f;
// }
// printf("%d",suma);
// return 0;

//1+1/x+1/x^2...
// int i,f=1,x,n;
// float suma=0;
// printf("unesi x:");
// scanf("%d",&x);
// printf("unesi n:");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//     f=pow(x,i);
//     suma=suma+1.0/f;
// }
// printf("%d",suma);
// return 0;

//neki eps neka govna
//  int i=1;
// float x,eps,clan=1,suma=0;
// printf("unesi x:");
// scanf("%f",&x);
// printf("unesi eps:");
// scanf("%f",&eps);
// while(clan>eps){
//     suma=suma+clan;
//     clan=clan*x/i;
//     i++;
    
// }
// printf("%f ",suma);
// return 0;


//   int i=1;
// float x,eps,clan=1,suma=0,znak=-1.0;
// printf("unesi x:");
// scanf("%f",&x);
// printf("unesi eps:");
// scanf("%f",&eps);
// while(fabs(clan) > eps){
//     suma=suma+clan;
//     clan=clan*x/i;
//     clan*=znak;
//     i++;
    
    
// }
// printf("%f ",suma);
// return 0;


// int i,n,p=1;
//     float suma=1.0,x,clan=1;
        
//     printf("Unesite prirodan broj n: ");
//     scanf("%d", &n);    
//     for(i=2;i<=n;i++){
//         p=p*i;
//         clan=1+1.0/p;
//         suma=suma*clan;
//     }
        
    
//     printf("suma je %.3f",suma);
//     return 0;

// int i,n,p=-3,znak=-1;
//     float suma=0,x,clan=3;
        
//     printf("Unesite prirodan broj n: ");
//     scanf("%d", &n);    
//     for(i=5;i<=n;i+=2){
//         p*=znak*i;
        
//         suma=suma+p;
        
//     }
        
    
//     printf("suma je %.3f",suma);
//     return 0;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// int x,y;
// float p1,p2,p3,p;
// printf("unesi x y:");
// scanf("%d %d",&x,&y);
// p=fabs(1.0*(-1*(1-3)+3*(3-1)+2*(1-1))/2);
// p1=fabs(1.0*(-1*(1-y)+3*(y-1)+x*(1-1))/2);
// p2=fabs(1.0*(-1*(3-y)+2*(y-1)+x*(1-3))/2);
// p3=fabs(1.0*(3*(3-y)+2*(y-1)+x*(1-3))/2);
// if(p1+p2+p3==p){
//     printf("tacka se nalazi u trouglu");
// }
// else printf("jbg");
// return 0;



// int x,x1,y,stepen=1,cifra,br=0,prva,zadnja;
// printf("unesi x:");
// scanf("%d",&x);

// br=log10(x);
// prva=x/pow(10,br);
// zadnja=x%10;
// y=x-zadnja-prva*pow(10,br)+zadnja*pow(10,br)+prva;
// if(zadnja==0){
//     zadnja=(x/10)%10;
//    y=x-zadnja-prva*pow(10,br)+zadnja*pow(10,br)+prva;
// }
// printf(" %d",br);
// return 0;



// int q,m,s,h,i,sek,m1,s1,h1;
//     printf("unesite q");
//     scanf("%d",&q);
//     printf("unesite vreme poletanja");
//     scanf("%d %d %d",&h1,&m1,&s1);
//     sek=h1*3600+m1*60+s1+q;
//     h=sek/3600;
//     m=(sek%3600)/60;
//     s=(sek%3600)%60;
//     if(h>=24) h=h-24;
//     printf("%d %d %d ",h,m,s);
    
//     return 0;



// int a,b,i,d;
//     while(1){
//     printf("unesi a:");
//     scanf("%d",&a);
//     printf("unesi b:");
//     scanf("%d",&b);
//     if(a>0&&b>0) break;
//     }
//     for(i=1;i<=a;i++){
//         if(a%i==0&b%i==0){
//             d=i;
            
//         }
//     }
    
//     if(d==1){
//         printf("uzajamno su prosti");
//     }
//     else printf("nisu");



// int p,n,i=1,br,s1=0,s2=0;
//     printf("unesi p:");
//     scanf("%d",&p);
//     printf("unesi n:");
//     scanf("%d",&n);
//     while(i<=n){
//         printf("unesi br:");
//         scanf("%d",&br);
//         if(i>p){
//             s1+=br;
//         }
//         if(i<p){
//             s2+=br;
//         }
//         i++;
//     }
//     if(s1==s2) printf("uredjen");
//     else printf("neuredjen");
//     return 0;



// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int i,n,a,b,c,d,broj,suma,suma1=0,S;
//     printf("unesi sumu");
//     scanf("%d",&suma);
//     while(1){
//         printf("unesi broj");
//         scanf("%d",&broj);
        
//         a=broj%10;
//         b=(broj/10)%10;
//         c=(broj/100)%10;
//         d=(broj/1000)%10;
//         for(i=2;i<=3;i++){
//            if(a%i==0 ||b%i==0 ||c%i==0 ||d%i==0)
//            broj=0;
//         }
        
//         suma1=suma1+broj;
//          if(suma1>suma) {
//             break;
//         }
               
//         }
    
//     printf ("suma = %d" ,suma1);
//     return 0;
// }





///123 /1/2/6
    // int n,broj,cifra,fakt=1,i,brojac=0,brojac1=0;
    // printf("unesi broj");
    // scanf("%d",&broj);
    // n=broj;
    // while(broj>0){
    //     fakt/=fakt;
    //     brojac++;
    //     cifra=broj%10;
    //     broj/=10;


    //     printf("\ncifre su %d",cifra);
    //     for(i=1;i<=cifra;i++){
    //         fakt*=i;
    //     }
        
    //     printf("fakt je %d",fakt);
    //     if(n%fakt==0){
    //         brojac1++;
    //     }
                        

        
        
    // }
    // if(brojac1==brojac) printf("moze");
    // else printf("nemoze");
   
    
    
    // return 0;



    //postovanje za zadatak ////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // int n, m, broj, sumaCifara, predposlednjaCifra, brojeviKojiNeOdgovaraju = 0, brojeviKojiOdgovaraju = 0;
    // printf("Unesite n i m ");
    // scanf("%d %d", &n, &m);
    // while(1){
    //     int brojCifara = 1;
    //     printf("Unesite broj");
    //     scanf("%d", &broj);
    //     //provera da li je broj n-tocifren
    //     int temp = broj;
    //     int sumaCifara = 0;
    //     while(temp / 10 != 0){
    //         brojCifara++;
    //         sumaCifara += temp % 10;
    //         temp /= 10;
    //         if(brojCifara == 2){
    //             predposlednjaCifra = temp % 10;
                
    //         }
    //     }

    //     if(brojCifara == n & sumaCifara % predposlednjaCifra == 0){
    //         brojeviKojiOdgovaraju++;
            
    //     }
    //     else{
    //         brojeviKojiNeOdgovaraju++;
    //     }
    //     if(brojeviKojiOdgovaraju == m){
    //         break;
    //     }
    // }
    // printf("\n%d ", brojeviKojiNeOdgovaraju);
    // return 0;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// int n,broj,cifra,f=1,i,brojac=0,brojac1=0,s=0;
//     printf("unesi broj:");
//     scanf("%d",&broj);
//     n=broj;
//     while(broj>0){
//         f/=f;
//         brojac++;
//         cifra=broj%10;
//         broj/=10;
//         printf("\ncifre su:%d",cifra);
//         for(i=1;i<=cifra;i++){
//             f*=i;
//         }
//         s=s+f;
                
//         if(n%f==0) brojac1++;

        
//     }
//     printf("\tf je:%d",s);
//     if(n%s==0) printf("jes");
//     else printf("nije");
    
//     return 0;


// int n,brojac=0,i=1,pom,cifra,parni=0,neparni=0;
//     printf("unesi n:");
//     scanf("%d",&n);
//     pom=n;
//     while(pom>0){
//         pom=pom/10;
        
//         brojac++;
        
//     }
//     for(i=1;i<=brojac;i++){
//         cifra=n%10;
//         if(i%2==0){
//             parni=parni+cifra;
//         }
//         else  neparni+=cifra;
//         n/=10;
//     }
//     if(parni==neparni)
//     printf("bravo");
//     else printf("zaomi");
//     return 0;

// #include <stdio.h>
// #include <math.h>
// int Suma(int a)
// {
//  int s=0;
//  while (a!=0)
//  { 
//       s+=a%10;
//  a/=10;
//  }
//  return s;
// }
// int main()
// {
//  int i, d, g;
//  printf(" Donja granica= ");
//  scanf("%d", &d);
//  printf(" Gornja granica= ");
//  scanf("%d", &g);
//  for(i=d; i<=g; i++)
//  printf("\n%d\t%d", i, Suma(i));

//  return 0;
// }



// #include <stdio.h>
// long fakt(int par){
//     int i=1;
//     int f=1;
//     for(i=1;i<=par;i++){
//         f*=i;
//     }
//     return f;
// }
// int main()
// {int n,k,resenje;

//     printf("unesi n i k");
//     scanf("%d %d",&n,&k);
//     resenje=fakt(n)/(fakt(k)*fakt(n-k));
//     printf("resenje je %d",resenje);
//     return 0;
// }


//suma cifara brojeva u intervalu

// #include <stdio.h>
// int funkcija(int a,int b){
//     int i,suma=0,cifra;
//     for(i=a;i<=b;i++){
//         int x=i;
//         while(x!=0){
//             cifra=x%10;
//             suma+=cifra;
//             x/=10;
//         }
//         printf("%d\t%d\t",i,suma);
//         suma=0;
        
//     }
// }

// int main()
// {  int a,b;
//    printf("unesi granice:");
//    scanf("%d %d",&a,&b);
//    printf("%d",funkcija(a,b));
//    return 0;
// }

// #include <stdio.h>
// //1!+2!+3!
// int funkcija(int par){
//     int i,f=1;
//     for(i=1;i<=par;i++){
//        f*=i; 
//     }
//     return f;
// }

// int main()
// {  int n,i,suma=0;
//    printf("unesi granice:");
//    scanf("%d",&n);
//    for(i=1;i<=n;i++){
//        suma=suma+funkcija(i);
//    }
//    printf("%d",suma);
//    return 0;
// }


//nizovi

// Саставити програм који ће за унети низ (дужине n) целих бројева одредити и исписати:
// а) суму парних и суму непарних бројева;
// б) суму елемената са парним индексима и суму елемената са непарним индексима. 

// int i,n,sp,sn,niz[MAX];
// printf("unesi n");
// scanf("%d",&n);
// for(i=0;i<n;i++){
//     scanf("%d",&niz[i]);
//     if(niz[i]%2==0){
//         sp+=niz[i];
//     }
//     else sn+=niz[i];

// }

// int i,n,sp,sn,niz[MAX];
// printf("unesi n");
// scanf("%d",&n);
// for(i=0;i<n;i++){
//     scanf("%d",&niz[i]);
//     if(i%2==0){
//         sp+=niz[i];
//     }
//     else sn+=niz[i];

// }


// int i,n,s=0,nizA[100],nizB[100];
// printf("unesi n");
// scanf("%d",&n);
// for(i=0;i<n;i++){
//     scanf("%d",&nizA[i]);
// }
// for(i=0;i<n;i++){
//     scanf("%d",&nizB[i]);
// }
// for(i=0;i<n;i++){
//     s+=nizB[i]*nizA[i];
// }
// printf("%d",s);
// return 0;



// int i,n,m,s=0,nizA[MAX],nizB[MAX],nizC[MAX];
// printf("unesi n");
// scanf("%d",&n);
// printf("unesi m");
// scanf("%d",&m);
// for(i=0;i<n;i++){
//     scanf("%d",&nizA[i]);
// }
// for(i=0;i<m;i++){
//     scanf("%d",&nizB[i]);
// }
// for(i=0;i<n+m;i++){
//     if(i<n)nizC[i]=nizA[i];
//     else nizC[i]=nizB[i-n];
//     printf(" %d",nizC[i]);
// }

// return 0;



// int i, n, nizA[MAX], nizB[MAX], nizC[MAX];
//  printf(" Broj elemenata niza: ");
//  scanf("%d", &n);
//  printf(" Elementi niza A: ");
//  for(i=0; i<n; i++)
//  scanf("%d", &nizA[i]);
//  printf(" Elementi niza B: ");
//  for(i=0; i<n; i++)
//  scanf("%d", &nizB[i]);
//  printf(" Elementi niza C: ");
//  for(i=0; i<n; i++)
//  {
//  nizC[i]=nizA[i]+nizB[i];
//  printf("%d ",nizC[i]);
//  }
//  return 0;


// int nizA[MAX], nizB[MAX], nizC[MAX], i;
//  printf (" Elementi niza A: ");
//  for(i=0; i<MAX; i++)
//  scanf ("%d", &nizA[i]);
//  printf (" Elementi niza B: ");
//  for(i=0; i<MAX; i++)
//  scanf ("%d", &nizB[i]);
//  printf (" Elementi niza C: ");
//  for(i=0; i<MAX; i++)
//  {
//  nizC[i]=nizA[i]+nizB[MAX-1-i];
//  printf ("%d ", nizC[i]);
//  }
//  getche();
//  return 0;


// 
//1.5
    // int niz[100],i=0,n;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(i=0;i<n;i++){
    //     scanf("%d",&niz[i]);
    // }
    // for(i=n-1;i>=0;i--){
    //     printf("%d ",niz[i]);
    // }
    
    
    
    

    // return 0;

    //10.7
    // int niz[100],n,suma=0;
    // float as;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&niz[i]);
    //     suma+=niz[i];
    // }
    // as=(1.0*suma)/n;
    // printf("%f",as);
    // return 0;

    //10.8
    // int niz[100],n,suma=0,brojac=0;
    // float as;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&niz[i]);
    //     if(niz[i]%3==0){
    //         suma+=niz[i];
    //         brojac++;
    //     }
    // }
    // as=(1.0*suma)/brojac;
    // printf("%f",as);
    // return 0;

    //10.9
    // int niz[100],n,sp=0,sn=0;
    
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&niz[i]);
    //     if(i%2==0){
    //         sp+=niz[i];
    //     }
    //     else sn+=niz[i];
        
    // }
    
    // printf("%d ",sp);
    // printf("%d ",sn);
    // return 0;

    //10.10
    // int nizx[100],nizy[100],n,s=0;
    
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&nizx[i]);
    //     scanf("%d",&nizy[i]);
    //     s+=nizx[i]*nizy[i];
    // }
    
    
    
    // printf("%d ",s);
    
    // return 0;

    //10.11
    // int nizx[100],nizy[100],n,m,nizxy[100];
    
    // printf("unesi n:");
    // scanf("%d",&n);
    // printf("unesi m:");
    // scanf("%d",&m);
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&nizx[i]);
        
    // }
    // for(int i=0;i<m;i++)
    // {
    //     scanf("%d",&nizy[i]);
        
    // }
    // for(int i=0;i<n+m;i++)
    // {
    //     if(i<n)nizxy[i]=nizx[i];
    //     else nizxy[i]=nizy[i-n];
        
    // }
    
    
    
    // for(int i=0;i<n+m;i++){
    //     printf("%d ",nizxy[i]);
    // }
    
    // return 0;

    //10.12
    // int nizx[100],nizy[100],n,nizxy[100];
    
    // printf("unesi n:");
    // scanf("%d",&n);
    
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&nizx[i]);
        
    // }
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&nizy[i]);
        
    // }
    // for(int i=0;i<2*n;i++)
    // {
    //     nizxy[i]=nizx[i]*nizy[i];
        
    // }
    
    
    
    // for(int i=0;i<n;i++){
    //     printf("%d ",nizxy[i]);
    // }
    
    // return 0;


    //10.14
        // int nizx[100],nizy[100],n,nizxy[100];
    
    // printf("unesi n:");
    // scanf("%d",&n);
    
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&nizx[i]);
        
    // }
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&nizy[i]);
        
    // }
    // for(int i=0;i<n;i++)
    // {
    //     nizxy[i]=nizx[i]+nizy[n-i-1];
        
    // }
    
    
    
    // for(int i=0;i<n;i++){
    //     printf("%d ",nizxy[i]);
    // }
    
    // return 0;

    //10.15
    // int nizx[100],nizy[100],n,nizxy[100],br=0,m;
    
    // printf("unesi n:");
    // scanf("%d",&n);
    // printf("unesi m:");
    // scanf("%d",&m);
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&nizx[i]);
        
    // }
    // for(int i=0;i<m;i++)
    // {
    //     scanf("%d",&nizy[i]);
        
    // }
    // for(int i=0;i<n;i++)
    // {if(nizx[i]%2==0){
    //     nizxy[i]=nizx[i];
    //     br++;}
    // }
    
    // for(int i=0;i<m;i++){
    //     if(nizy[i]%2==0){
    //     nizxy[br]=nizy[i];
    //     br++;}
    // }
    
    // for(int i=0;i<br;i++){
    //     printf("%d ",nizxy[i]);
    // }
    
    
    // return 0;

    // //10.16
    // int nizx[100],nizy[100],n,nizxy[100];
    
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&nizx[i]);
        
    // }
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&nizy[i]);
        
    // }
    // for(int i=0;i<n;i++)
    // {
    //     if(nizx[i]<nizy[i]) nizxy[i]=nizx[i];
    //     else if(nizx[i]>nizy[i]) nizxy[i]=nizy[i];
    //     else nizxy[i]=0;
    // }
    
    // for(int i=0;i<n;i++){
    //     printf("%d ",nizxy[i]);
    // }
    
    
    // return 0;

    // //10.17
    // int nizx[100],nizy[100],n,nizz[100],j=0,k=0;
    
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&nizx[i]);
        
    // }
    // for(int i=0;i<n;i++)
    // {
    //     if(nizx[i]<0) {
    //         nizy[j]=nizx[i];
    //         j++;
    //     }
    //     else {
    //         nizz[k]=nizx[i];
    //         k++;
    //     }
    // }
    // printf("\nel niza y su\n");
    // for(int i=0;i<j;i++){
    //     printf("%d ",nizy[i]);
    // }
    // printf("\nel niza z su\n");
    // for(int i=0;i<k;i++){
    //     printf("%d ",nizz[i]);
    // }
    
    
    // return 0;

    // //10.18
    // int nizx[100],nizy[100],n,nizz[100],j=0,suma=0;
    // float as;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&nizx[i]);
    //     suma+=nizx[i];
    // }
    // as=suma*1.0/n;
    // for(int i=0;i<n;i++)
    // {
    //     if(nizx[i]>as){
    //         nizy[j]=nizx[i];
    //         j++;
    //     }
    // }
    // printf("\nel niza y su\n");
    // for(int i=0;i<j;i++){
    //     printf("%d ",nizy[i]);
    // }
    
    
    
    // return 0;


    // //10.19
    // int nizx[100],nizy[100],n,nizz[100],j=0,suma=0;
    // float as;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&nizx[i]);
    //     suma+=nizx[i];
    //     nizy[i]=suma;
    // }
    // printf("\nel niza y su\n");
    // for(int i=0;i<n;i++){
    //     printf("%d ",nizy[i]);
    // }
    
    
    
    // return 0;
    

    //#include <stdio.h>
// int razliciti(int niz[],int n){
//     int i,j,br=0;
//     for(i=0;i<n;i++){
//         int flag=1;
//         for(j=i+1;j<n;j++){
//             if(niz[i]==niz[j])
//             flag=0;
//             break;
            
//         }
//         if(flag==1)br++;
//     }
//     return br;
// }
// int main()
// {   int n ,niz[100],i;
//     printf("unesi n:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     printf("%d",razliciti(niz,n));
    
    

//     return 0;
// }
    


// #include <stdio.h>
// void fibonaci(int niz[],int n){
//     int i;
//     for(i=0;i<n;i++){
//     if(i<2)niz[i]=1;
//     else niz[i]=niz[i-1]+niz[i-2];
//     }
// }

// void prikaza(int niz[],int n){
//     int i;
//     for(i=0;i<n;i++){
//         printf("%d ",niz[i]);
//     }
// }
// int main()
// {   int n ,niz[100],i;
//     printf("unesi n:");
//     scanf("%d",&n);
    
//     fibonaci(niz,n);
//     prikaza(niz,n);
    
    
    

//     return 0;
//}

// int niz[100],n,i,max;
//     printf("unesi n:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     max=niz[0];
//     for(i=1;i<n;i++){
//         if(niz[i]>max)max=niz[i];
//     }
//     printf("%d",max);
    

//     return 0;


// int niz[100],n,i,max,min;
//     printf("unesi n:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     max=niz[0];
//     min=niz[0];
//     for(i=1;i<n;i++){
//         if(niz[i]>max)max=niz[i];
//         if(niz[i]<min)min=niz[i];
//     }
//     for(i=0;i<n;i++){
//         if((niz[i]>min*2)&&(niz[i]<(max/2)))printf("%d ",niz[i]);
//     }
    

//     return 0;


// int niz[100],n,i,min;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(i=0;i<n;i++){
    //     scanf("%d",&niz[i]);
    // }
    // for(i=0;i<n;i++){
    //     if(niz[i]%2==0){
    //         min=niz[i];
    //         break;
    //     }
    //     if(i==n){
    //         return 1;
    //     }
    // }
    
    
    
    // for(i=1;i<n;i++){
    //     if(niz[i]%2==0&&niz[i]<min)min=niz[i];
        
    // }
    // printf("%d",min);
    

    // return 0;


    // int niz[100],n,i,max;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(i=0;i<n;i++){
    //     scanf("%d",&niz[i]);
    // }
    // max=niz[0];
    // printf("%d ",niz[0]);
    // for(i=2;i<n;i+=2){
    //     printf("%d ",niz[i]);
    //     if(niz[i]>max)max=niz[i];
    // }
    
    
    
    
    // printf("\n%d",max);
    

    // return 0;


    // int niz[100],n,i,max;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(i=0;i<n;i++){
    //     scanf("%d",&niz[i]);
    // }
    // max=niz[1];
    // printf("%d ",niz[0]);
    // for(i=3;i<n;i+=2){
    //     printf("%d ",niz[i]);
    //     if(niz[i]>max)max=niz[i];
    // }
    
    
    
    
    // printf("\n%d",max);
    

    // return 0;

    // int niz[100],n,i,max,nizf[100],br=0;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(i=0;i<n;i++){
    //     scanf("%d",&niz[i]);
    // }
    // nizf[0]=1;
    // nizf[1]=1;
    // for(i=2;i<n;i++){
    //     nizf[i]=nizf[i-1]+nizf[i-2];
    // }
    // for(i=0;i<n;i++){
    //     if(niz[i]==nizf[i])br++;
    // }
    // if(n==br)printf("jeste");
    // else printf("nije");
    

    // return 0;



    // int niz[100],n,i,max,nizf[100],pom;
    // printf("unesi n:");
    // scanf("%d",&n);
    // for(i=0;i<n;i++){
    //     scanf("%d",&niz[i]);
    // }
    // pom=niz[0];
    // for(i=0;i<n;i++){
    //     niz[i]=niz[i+1];
        
    // }
    // niz[n-1]=pom;
    // for(i=0;i<n;i++){
    //     printf("%d ",niz[i]);
    // }
    

    // return 0;



//     #include <stdio.h>
// void rotiranje(int niz[],int n){
//     int pom,i;
//     pom=niz[0];
//     for(i=0;i<n;i++){
        
//         niz[i]=niz[i+1];
//     }
//     niz[n-1]=pom;
// }

// int main()
// {   int niz[100],n,i,max,nizf[100],pom,x;
//     printf("unesi n:");
//     scanf("%d",&n);
//     printf("unesi x:");
//     scanf("%d",&x);
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
    
//     for(i=0;i<x;i++){
//         rotiranje(niz,n);
        
//     }
    
//     for(i=0;i<n;i++){
//         printf("%d ",niz[i]);
//     }
    

//     return 0;



// void rotiranje(int niz[],int n){
//     int pom,i;
    
//     for(i=0;i<n;i+=2){
//      pom=niz[i];
//      niz[i]=niz[i+1];
//      niz[i+1]=pom;
//     }
// }
// void citanje(int niz[],int n){
//     int i;
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
// }
// void printanje(int niz[],int n){
//     int i;
//     for(i=0;i<n;i++){
//         printf("%d",niz[i]);
//     }
// }

// int main()
// {   int niz[100],n,i,max,nizf[100],pom,x;
//     printf("unesi n:");
//     scanf("%d",&n);
    
    
//     citanje(niz,n);
//     rotiranje(niz,n);
//     printanje(niz,n);
    
    

//     return 0;


// int niz[100],n,i,max,nizf[100],pom,x,nadjen,j;
//     printf("unesi n:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
    
//     for(i=0;i<n;i++){
//     nadjen=0;
//      for(j=i+1;j<n;j++){
//          if(niz[i]==niz[j]){
//              nadjen=1;
//              break;
//          }
         
         
//      }
//      if(nadjen==0)printf("%d ",niz[i]);
//     }
    
    
//     citanje(niz,n);
    
    
    

//     return 0;


// int niz[100],n,i,max,nizf[100],pom,x,nadjen,j;
//     printf("unesi n:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
    
//     for(i=0;i<n-1;i++){
//      if(niz[i]>niz[i+1]){
//          pom=niz[i];
//          niz[i]=niz[i+1];
//          niz[i+1]=pom;
//      }
//     }
    
//     printanje(niz,n);

    
    
    

//     return 0;


// int niz[100],n,i,max,nizf[100],pom,x,nadjen,j;
//     printf("unesi n:");
//     scanf("%d",&n);
//     printf("unesi x:");
//     scanf("%d",&x);
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
    
//     for(i=n-1;i>=0&&niz[i]>x;i--){
//         niz[i+1]=niz[i];
        
//     }
//     printf("%d ",i);
//     niz[i+1]=x;
//     n++;
    
//     printanje(niz,n);

    
    
    

//     return 0;

///////////////////////////////43///////////////////////////////////////////////////////////////

//#include <stdio.h>
// void printanje(int niz[],int n){
//     int i;
//     for(i=0;i<n;i++){
//         printf("%d ",niz[i]);
//     }
// }

// int main()
// {
//     int niza[100],n,i,max,nizb[100],pom,x,nadjen,j,nizc[100],m;
    
//     printf("unesi n:");
//     scanf("%d",&n);
//     printf("unesi m:");
//     scanf("%d",&m);
//     for(i=0;i<n;i++){
//         scanf("%d",&niza[i]);
//     }
//     for(i=0;i<m;i++){
//         scanf("%d",&nizb[i]);
//     }
    
//     for(i=0;i<n+m;i++){
//         if(i<n)nizc[i]=niza[i];
//         else nizc[i]=nizb[i-n];
//     }
    
    
//     for(i=0;i<n+m-1;i++){
//         for(j=i+1;j<n+m;j++){
//      if(nizc[i]>nizc[j]){
//          pom=nizc[i];
//          nizc[i]=nizc[j];
//          nizc[j]=pom;
//      }
//         }
//     }
    
//     printanje(nizc,n+m);

    
    
    

//     return 0;
// }



// //44/////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// void printanje(int niz[],int n){
//     int i;
//     for(i=0;i<n;i++){
//         printf("%d ",niz[i]);
//     }
// }

// int main()
// {
//     int niz[100],n,brojac=1,i,max,nizb[100],pom,x,nadjen,j,nizc[100],maxbr,maxi;
    
//     printf("unesi n:");
//     scanf("%d",&n);
    
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     for(i=0;i<n-1;i++){
//         for(j=i+1;j<n;j++){
//      if(niz[i]>niz[j]){
//          pom=niz[i];
//          niz[i]=niz[j];
//          niz[j]=pom;
//      }
//         }
//     }
//     maxbr=0;
//     maxi=0;
//     for(i=0;i<n-1;i++){
//         if(niz[i]==niz[i+1]){
//             brojac++;
            
//         }
//         if(brojac>maxbr){
//             maxbr=brojac;
//             maxi=niz[i];
//         }
//     }
    
    
//     printanje(niz,n);
//     printf("\n%d %d",maxbr,maxi);

    
    
    

//     return 0;



//     int i,j,n,m,mat1[100][100],mat2[100][100],mat3[100][100];
//     printf("unesi n");scanf("%d",&n);
//     printf("unesi m");scanf("%d",&m);
//     for(i=0;i<m;i++)
//      for(j=0;j<n;j++){
//          scanf("%d",&mat1[i][j]);
//      }
     
//      for(i=0;i<m;i++)
//      for(j=0;j<n;j++){
//          scanf("%d",&mat2[i][j]);
//      }
//      for(i=0;i<m;i++){
//      for(j=0;j<n;j++){
//          printf("%d ",mat1[i][j]);
        
//      }
//      printf("\n");
//      }
//      for(i=0;i<m;i++){
//      for(j=0;j<n;j++){
//          printf("%d ",mat2[i][j]);
    
//      }
//      printf("\n");
//      }
//      for(i=0;i<m;i++){
//      for(j=0;j<n;j++){
//          printf("%d ",mat1[i][j]+mat2[i][j]);
        
//      }
//      printf("\n");
//      }
//      return 0;



//      int i,j,n,m,mat1[100][100],suma1=0,suma2=0;
//     printf("unesi n");scanf("%d",&n);
    
//     for(i=0;i<n;i++)
//      for(j=0;j<n;j++){
//          scanf("%d",&mat1[i][j]);
//      }
     
     
//      for(i=0;i<n;i++){
//      for(j=0;j<n;j++){
//          printf("%d ",mat1[i][j]);
        
//      }
//      printf("\n");
//      }
//      for(i=0;i<n;i++)
//      for(j=0;j<n;j++){
//          if(i==j){
//              printf("%d ",mat1[i][j]);
//              suma1+=mat1[i][j];
//          }
//      }
//      printf("%d",suma1);
     
//      for(i=0;i<n;i++)
//      for(j=0;j<n;j++){
//          if(i+j==n-1){
//              printf("%d ",mat1[i][j]);
//              suma2+=mat1[i][j];
//          }
//      }
//      printf("%d",suma2);
     
      
//      return 0;



// int i,j,n,m,mat1[100][100],suma1=0,suma2=0;
//     printf("unesi n");scanf("%d",&n);
    
//     for(i=0;i<n;i++)
//      for(j=0;j<n;j++){
//          scanf("%d",&mat1[i][j]);
//      }
     
     
//      for(i=0;i<n;i++){
//      for(j=0;j<n;j++){
//          printf("%d ",mat1[i][j]);
        
//      }
//      printf("\n");
//      }
//      for(i=0;i<n;i++){
//      for(j=0;j<n;j++){
//          suma1+=mat1[i][j];
         
//      }
//      printf("%d ",suma1);
//      suma1=0;
//      }
   

     
      
//      return 0;


//      int i,j,n,m,mat1[100][100],suma1=0,suma2=0,brvr;
//     printf("unesi n");scanf("%d",&n);
//     printf("unesi brvr");scanf("%d",&brvr);
//     for(i=0;i<n;i++)
//      for(j=0;j<n;j++){
//          scanf("%d",&mat1[i][j]);
//      }
     
     
//      for(i=0;i<n;i++){
//      for(j=0;j<n;j++){
//          printf("%d ",mat1[i][j]);
        
//      }
//      printf("\n");
//      }
     
//      for(j=0;j<n;j++){
//          suma1+=mat1[brvr-1][j];
         
//      }
//      printf("%d",suma1);
     
   

     
      
//      return 0;


    //  int i,j,n,m,mat1[100][100],suma1=0,suma2=0,brvr;
    // printf("unesi n");scanf("%d",&n);
    // for(i=0;i<n;i++)
    //  for(j=0;j<n;j++){
    //      scanf("%d",&mat1[i][j]);
    //  }
     
     
    //  for(i=0;i<n;i++){
    //  for(j=0;j<n;j++){
    //      printf("%d ",mat1[i][j]);
        
    //  }
    //  printf("\n");
    //  }
     
    //  for(j=0;j<n;j++){
    //      if(j%2==0){
    //          for(i=0;i<n;i++)
    //          printf("%d ",mat1[i][j]);
    //      }
    //      else for(i=n-1;i>=0;i--)
    //      printf("%d ",mat1[i][j]);
    //  }
     
     
   

     
      
//      return 0;



//      int i,j,n,m,suma1=0,suma2=0;
//     float del,mat1[100][100];
//     printf("unesi n");scanf("%d",&n);
//     for(i=0;i<n;i++)
//      for(j=0;j<n;j++){
//          scanf("%f",&mat1[i][j]);
//      }
     
     
//      for(i=0;i<n;i++){
//      for(j=0;j<n;j++){
//          printf("%f ",mat1[i][j]);
        
//      }
//      printf("\n");
//      }
     
//      for(i=0;i<n;i++){
//          if(mat1[i][i]!=0){
//              del=mat1[i][i];
//             for(j=0;j<n;j++){
                
//                 mat1[i][j]/=del;
//             }
//          }
//          else {
//              for(j=0;j<n;j++){
//                 mat1[i][j]=0;
//                 mat1[i][i]=1;
//             }
//          }
         
//      }
//       for(i=0;i<n;i++){
//      for(j=0;j<n;j++){
//          printf("%f ",mat1[i][j]);
        
//      }
//      printf("\n");


//      int i,j,n,m,suma1=0,suma2=0,x,mat1[100][100];

//     printf("unesi n");scanf("%d",&n);
//     printf("unesi x");scanf("%d",&x);
//     for(i=0;i<n;i++)
//      for(j=0;j<n;j++){
//          scanf("%d",&mat1[i][j]);
//      }
     
     
//      for(i=0;i<n;i++){
//      for(j=0;j<n;j++){
//          printf("%d ",mat1[i][j]);
        
//      }
//      printf("\n");
//      }
     
//      for(i=0;i<n;i++)
//      for(j=0;j<n;j++){
//          if(i>j){
//              mat1[i][j]+=x;
//          }
//          else if(i<j)mat1[i][j]-=x;
        
//      }
     
     
     
     
//       for(i=0;i<n;i++){
//      for(j=0;j<n;j++){
//          printf("%d ",mat1[i][j]);
        
//      }
//      printf("\n");
//      }

//      return 0;


//      int i,j,n,m,suma1=0,suma2=0,x,mat1[100][100],m1,m2,pom;

//     printf("unesi n");scanf("%d",&n);
//     printf("unesi m");scanf("%d",&m);
//     printf("unesi m1 i m2");scanf("%d %d",&m1,&m2);
//     for(i=0;i<m;i++)
//      for(j=0;j<n;j++){
//          scanf("%d",&mat1[i][j]);
//      }
     
     
//      for(i=0;i<m;i++){
//      for(j=0;j<n;j++){
//          printf("%d ",mat1[i][j]);
        
//      }
//      printf("\n");
//      }
    
//      for(i=0;i<n;i++){
//       pom=mat1[i][m1];
//       mat1[i][m1]=mat1[i][m2];
//       mat1[i][m2]=pom;
//      }
     
     
     
     
//       for(i=0;i<m;i++){
//      for(j=0;j<n;j++){
//          printf("%d ",mat1[i][j]);
        
//      }
//      printf("\n");
//      }

//      return 0;




// int i, j, n, pom, mat[100][100];
//  printf(" n= ");
//  scanf("%d", &n);
//  printf("\n");
//  for(i=0; i<n; i++)
//  for(j=0; j<n; j++)
//  {
//  printf(" element[%d][%d] = ", i, j);
//  scanf("%d", &mat[i][j]);
//  }
//  printf("\n Zadata matrica: \n");
//  for(i=0; i<n; i++)
//  {
//  for(j=0; j<n; j++)
//  printf(" %d",mat[i][j]);
//  printf("\n");
//  }
//  for(i=0; i<n; i++)
//  for(j=i+1; j<n; j++)
//  {
//  pom=mat[i][j];
//  mat[i][j]=mat[j][i];
//  mat[j][i]=pom;
//  }
//  printf ("\n Transponovana matrica:\n");
//  for(i=0; i<n; i++)
//  {
//  for(j=0; j<n; j++)
//  printf(" %d",mat[i][j]);
//  printf("\n");
//  }
//  return 0; 



// int main()
// {  int i,j,mat[i][j],m,kupus=0,br=0;
// char a;

// printf("unesi m");
// scanf("%d",&m);

// for(i=0;i<m;i++)
//  for(j=0;j<m;j++){
//      scanf("%d",&mat[i][j]);
//  }
 
//  for(i=0;i<m;i++){
//  for(j=0;j<m;j++){
//      printf("%d ",mat[i][j]);
//  }
//  printf("\n");
// }
// while(a!='k'){
//     printf ("\n Enter the character \n");
// scanf("%c",&a);
// for(i=0;i<m;i++)
// for(j=0;j<m;j++){
//     if(a=='l'){
//         j--;
//         br++;
//     }
//     if(a=='d'){
//         j++;
//         br++;
//     }
//     if(a=='g'){
//         i++;
//         br++;
//     }
//     if(a=='n'){
//         i--;
//         br++;
//     }
//     if(mat[i][j]==1){
//         kupus++;
//     }
    
// }
// }
// printf("\n%d  %d",kupus,br);
// return 0;


// int i,niz[100],n,budzet,pom,j,suma=0;
// printf("unesi n i budzet");
// scanf("%d  %d",&n,&budzet);
// for(i=0;i<n;i++){
//     scanf("%d",&niz[i]);
// }
// for(i=0;i<n-1;i++){
//  for(j=i+1;j<n;j++){
//      if(niz[i]>niz[j]){
//          pom=niz[i];
//          niz[i]=niz[j];
//          niz[j]=pom;
//      }
//  }
// }


//     for(i=0;i<n;i++){
//         suma+=niz[i];
//         if(suma>budzet)break;
//     }
//     printf("%d",i);
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//#include <stdio.h>

// #define MAX 100
// void funkcija(int niz[],int n,int budzet){
//         float suma=0;
//         int i,j,k;
//         int pom;
        
        
//         for(i=0; i<n-1; i++)
//  for(j=i+1; j<n; j++)
//  if(niz[i] > niz[j])
//  {
//  pom=niz[i];
//  niz[i]=niz[j];
//  niz[j]=pom;
//  } 

//  for(i=0;i<n;i++){
//      if(suma>budzet)break;
//      suma+=niz[i];

     
//  }
        
//         printf("%d",i-1);
//     }
//     int main(){
//         int n,i,niz[MAX],budzet;
//         printf("unesi broj cena:");
//         scanf("%d",&n);
//        printf("Unesi niz");
//        for(i=0;i<n;i++){
//            scanf("%d",&niz[i]);
//        }
//        printf("unesi budzet");
//        scanf("%d",&budzet);
//        funkcija(niz,n,budzet);
//        return 0;
//     }


// // int i,niz[100],n,budzet,pom,j,suma=0,makica[100][100],x,br=0;
// // printf("unesi n");
// // scanf("%d",&n);
// // for(i=0;i<n;i++)
// //     scanf("%d",&niz[i]);
    
    

// // for(i=0;i<n;i++){
// //  for(j=i+1;j<n;j++){
// //      if(niz[i]>niz[j]){
// //          pom=niz[i];
// //          niz[i]=niz[j];
// //          niz[j]=pom;
// //      }
// //  }
// // }

// // for(i=0;i<n;i++){
// //     printf("%d ",niz[i]);
// // }
// // x=niz[1]-niz[0];
// // for(i=0;i<n;i++){
// //     if(niz[i+1]-niz[i]==x)br++;
// // }
// // if(br+1==n)printf("jes");
// // else printf("nije");
// // return 0;


// //     int main()
// // { int i,mat[100][100],n,budzet,pom,j,suma=0,makica[100][100];
// // printf("unesi n");
// // scanf("%d",&n);
// // for(i=0;i<n;i++)
// // for(j=0;j<n;j++){
// //     scanf("%d",&mat[i][j]);
// // }
// // for(i=0;i<n;i++){
// //  for(j=0;j<n;j++){
// //    if(mat[i][j]%2==0&&i+j==3){
// //        makica[i][j]=mat[i][j];}
// //        else makica[i][j]=0;
   
// //  }
// // }


//     // for(i=0;i<n;i++){
//     //     for(j=0;j<n;j++){
//     //         printf("%d ",makica[i][j]);
//     //     }
//     //     printf("\n");
//     // }
    
// // return 0;




// //KUPUS URADJEN
// // int i,j,mat[100][100],m,kupus=0,br=0,a;


// // printf("unesi m");
// // scanf("%d",&m);

// // for(i=0;i<m;i++)
// // for(j=0;j<m;j++){
// //     scanf("%d",&mat[i][j]);
// // }
 
// // for(i=0;i<m;i++){
// //         for(j=0;j<m;j++){
// //             printf("%d ",mat[i][j]);
// //         }
// //         printf("\n");
// //     }
    
// // i=0;
// // j=0;
// // while(a!='k'){
// //     a=getchar();
    
// //     if(a=='l'){
// //         j--;
// //         br++;
// //         if(mat[i][j]==1){
// //         kupus++;
// //     }
// //     }
// //     if(a=='d'){
// //         j++;
// //         br++;
// //         if(mat[i][j]==1){
// //         kupus++;
// //     }
// //     }
// //     if(a=='g'){
// //         i--;
// //         br++;
// //         if(mat[i][j]==1){
// //         kupus++;
// //     }
// //     }
// //     if(a=='n'){
// //         i++;
// //         br++;
// //         if(mat[i][j]==1){
// //         kupus++;
// //     }
// //     }
    

// // }
// // printf("\n%d  %d",kupus,br);
// // return 0;



// // int i,j,br=0,n1,n2;
// // char a[100],b[100];
// // gets(a);
// // n1=strlen(a);
// // gets(b);
// // n2=strlen(b);
// // for(i=0;i<n1;i++){
// //     for(j=0;j<n2;j++){
// //         if(a[i]==b[j]){
            
// //             br++;
// //             break;
            
// //         }
        
// //     }
    
    
// // }
// // if(n1==br)printf("jesu");
// // else printf("%d ",br);
// // return 0;


// int i,j,niz[100],n,br1=0,br2=0;
// printf("unesi n:");scanf("%d",&n);
// for(i=0;i<n;i++)
// scanf("%d",&niz[i]);
// for(i=0;i<n;i++){
//     for(j=i-1;j>=0;j--)br1+=niz[j];
//     for(j=i+1;j<n;j++)br2+=niz[j];
    

//     if(br1==br2)printf("uravnotezen je za %d",i);
//     br1=0;
//     br2=0;
// }
// return 0;







// // int i,j,niz1[100],niz2[100],niz3[100],n,br=0;
// // printf("unesi n");
// // scanf("%d",&n);
// // for(i=0;i<n;i++){
// //         scanf("%d",&niz1[i]);
// //     }
// // for(i=0;i<n;i++){
// //         scanf("%d",&niz2[i]);
// //     }
    
// //     for(i=0;i<n;i++){
// //         for(j=0;j<n;j++){
// //             if(niz1[i]==niz2[j]){
// //                 niz3[br]=niz1[i];
// //                 br++;
// //             }
// //         }
// //     }
// //     for(i=0;i<br;i++){
// //         printf("%d ",niz3[i]);
// //     }
   
// // return 0;


// // void preslikavanje(int niz1[],int niz2[],int n){
// //     int i,j,niz3[100],br=0;
// //         for(i=0;i<n;i++){
// //         for(j=0;j<n;j++){
// //             if(niz1[i]==niz2[j]){
// //                 niz3[br]=niz1[i];
// //                 br++;
// //             }
// //         }
// //     }
// //     for(i=0;i<br;i++){
// //         printf("%d ",niz3[i]);
// //     }
    
// // }





// // int main()
// // { int i,j,niz1[100],niz2[100],niz3[100],n,br=0;
// // printf("unesi n");
// // scanf("%d",&n);
// // for(i=0;i<n;i++){
// //         scanf("%d",&niz1[i]);
// //     }
// // for(i=0;i<n;i++){
// //         scanf("%d",&niz2[i]);
// //     }
// //     preslikavanje(niz1,niz2,n);
   
// // return 0;
// // }




// // int **a,br=0,s=0,i,j,n,m,max=0,imax=0,smax=0;
// //     printf ("bez zajebancije n : "); scanf ("%d" , &n);
// //     printf ("bez zajebancije m : "); scanf ("%d" , &m);
// //     a=(int **)malloc(m*sizeof(int*));
// //     if (a==NULL) {
// //         printf ("nema se");
// //         exit(1);
// //     }
// //     for (i=0;i<m;i++) {
// //         a[i]=(int *)malloc(n*sizeof(int*));
        
// //         if (a==NULL) {
// //            for (j=0;j<i;i++) {
// //                free(a[j]);
// //                free(a);
// //                exit(1);
// //            }
        
            
// //         }
        
// //     }
    
// //     printf ("unesi matricu : ");
// //     for (i=0;i<m;i++){
// //     for(j=0;j<n;j++) {
// //      scanf ("%d" ,&a[i][j] );  
// //     }
// //     }
    
// //     for (i=0;i<m;i++){
// //     for (j=0;j<n;j++) {
        
// //         if (a[i][j]>0) br++;
// //         s+=a[i][j];
// //         if(br>max){
// //             max=br;
// //             imax=i;
            
// //             smax=s;
            
// //         }
// //         if(max==br){
// //             if(s>smax){
// //                 smax=s;
// //                 imax=i;
// //             }
// //         }
        
// //     }    
// //     s=0;
// //     br=0;
    
// //     }
// // printf("%d",imax+1);
    
// //     return 0;


// // int *a=NULL , duzina=0, alocirano=0, n, i;
// //  printf("\n Unosite brojeve. Za kraj unosa unesite 0:\n");
// //  do
// //  {
// //  scanf("%d", &n);
// //  /*Ukoliko nema vise slobodnih mesta, vrsi se prosirivanje.*/
// //  if(duzina==alocirano)
// //  {
// //  /*Niz se prosiruje na 10 elemenata vise.*/
// //  alocirano+=KORAK;
// //  a=realloc(a, alocirano*sizeof(int));
// //  }
// //  a[duzina]=n;
// //  duzina++;
// //  } while(n!=0);
// //  printf("\n Obrnuti niz: ");
// //  for(i=duzina-2; i>=0; i--)
// //  printf(" %d",a[i]);
// //  free(a);
// //  getche();
// //  return 0; 





// // int n, i,j=0,k=0;
// //  char s[100+1];
// //  printf("\n Unesite string: ");
// //  gets(s);
// //  n=strlen(s);
// //  printf("\n Novi string: ");
// //  for(i=0; i<n; i++){
// //      if(s[i]=='/'&&s[i+1]=='*'){
// //          j=i;
// //      }
// //  }
// //  for(i=0; i<n; i++){
// //      if(s[i]=='/'&&s[i-1]=='*'){
// //          k=i;
// //      }
// //  }
 
// //  for(i=0;i<n;i++){
// //      if(i<j||i>k)printf("%c", s[i]);
// //  }
 
 
// //  return 0;




// // // #include <stdio.h>

// // // struct zaposleni{
// //     char ime[100];
// //     char prezime[100];
// //     char radno[100];
// //     float plata;
// // };



// // int main()
// // {int n,i;
// //     struct zaposleni radnik[100];
    
// // printf("unesi n:");
// // scanf("%d",&n);
// // for(i=0;i<n;i++){
// //  printf("\n Unesite podatke o zaposlenom %d\n",i+1);
// //  printf(" Unesite ime: ");
// // scanf("%s",&radnik[i].ime);
// //  printf(" Unesite prezime: ");
// //  scanf("%s",&radnik[i].prezime);
// //  printf(" Unesite radno mesto: ");
// //  scanf("%s",&radnik[i].radno);
// //  printf(" Unesite platu: ");
// //  scanf("%f",&radnik[i].plata);
// // }
// // for(i=0;i<n;i++){
// //     printf("\npodaci o zaposlenom %d",i+1);
// //     printf("\nime:%s",radnik[i].ime);
// //     printf("\nprezime:%s",radnik[i].prezime);
// //     printf("\nradno:%s",radnik[i].radno);
// //     printf("\nplata:%f",radnik[i].plata);
// // }
// // return 0;
// // }



// // #include <stdio.h>

// // struct fakultet{
// //     char ime[100];
// //     char prezime[100];
// //     int indeks;
// //     int brpr;
// //     float prosek;
// // };


// // #include <stdio.h>
// // typedef struct ucenici{
// //     char ime[30];
// //     char prezime[30];
// //     char adresa[30];
// //     int razred;
// //     int odeljenje;
// // }UCENICI;

// // int main()
// // {   UCENICI ucenik[100];
    
// //     FILE *dato;
// //     if((dato=fopen("ucenici.txt","w"))==NULL){
// //         printf("greska");
// //         return 1;
// //     }
// //     printf("unesi n");
// //     scanf("%d",&n);
// //     for(i=0;i<n;i++){
// //         printf("unesi ime:")
// //         scanf("%s",ucenik[i].ime);
// //         printf("unesi prezime:")
// //         scanf("%s",ucenik[i].prezime);
// //         printf("unesi adresa:")
// //         scanf("%s",ucenik[i].adresa);
// //         printf("unesi razred:")
// //         scanf("%d",ucenik[i].razred);
// //         printf("unesi odeljenje:")
// //         scanf("%d",ucenik[i].odeljenje);
// //         fprintf(dato,"%s %s %s %d %d",ucenik[i].ime,ucenik[i].prezime,ucenik[i].adresa,ucenik[i].razred,ucenik[i].odeljenje)
// //     }
// //     fclose(dato);
// //         printf("unesi x");
// //     scanf("%d",&x);
// //     if((dato=fopen("ucenici.txt","r"))==NULL){
// //         printf("greska");
// //         return 1;
// //     }
// //     for(i=0;i<n;i++){
// //         fscanf(dato,"%s%s%s%d%d",&ucenik[i].ime,&ucenik[i].prezime,&ucenik[i].adresa,&ucenik[i].razred,&ucenik[i].odeljenje)
// //         if(ucenik[i].razred==x){
// //             printf("%s%s%s%d%d",ucenik[i].ime,ucenik[i].prezime,ucenik[i].adresa,ucenik[i].razred,ucenik[i].odeljenje)
// //         }
// //     }
// //     fclose(dato);
// //     return 0;
//     //dal se pada





// // int main()
// // {int n,i;
// // float prosekoc=0;
// // struct fakultet student[n];
// // printf("unesi br studenata:\n");
// // scanf("%d",&n);
// // for(i=0;i<n;i++){
// // printf("unesi podatke o %d studentu :\n",i+1);
// // printf("ime:\n");
// // scanf("%s",&student[i].ime);
// // printf("prezime:\n");
// // scanf("%s",&student[i].prezime);
// // printf("indeks:\n");
// // scanf("%d",&student[i].indeks);
// // printf("broj prenetih:\n");
// // scanf("%d",&student[i].brpr);
// // printf("broj prosek:\n");
// // scanf("%f",&student[i].prosek);
// // prosekoc+=student[i].prosek;
// // }
// // prosekoc=prosekoc*1.0/n;
// // printf("student koji su primljeni :\n");
// // for(i=0;i<n;i++){
// //     if(student[i].prosek>prosekoc&&student[i].brpr<5){
        
// //         printf("ime: %s %s %d\n",student[i].ime,student[i].prezime,student[i].indeks);
        
// //     }


// // int i, j, m, n;
// //  double **a;
// //  double trag, norma, vdnorma;
// //  printf("\n Broj vrsta: ");
// //  scanf("%d", &m);
// //  printf(" Broj kolona: ");
// //  scanf("%d", &n);
// //  /*dinamicki alociramo prostor za n pokazivaca na double-ove*/
// // a=(int**)malloc(m*int*);
// // if(a==NULL){
// //     exit(1);
// // }
// // for(i=0;i<m;i++){
// //     a[i]=(int*)malloc(n*int);
// //     if(a[i]==NULL){
// //         for(j=0;j<i;j++)
// //         free(a[j]);
// //         free(a);
// //         exit(1);
// //     }
// // }
// //  printf("\n Unesite elemente matrice:\n");
// //  for(i=0; i<m; i++)
// //  for(j=0; j<n; j++)
// //  {
// //  printf(" a[%d][%d] = ", i, j);
// //  scanf("%lf", &a[i][j]);
// //  }
// //  printf("\n Uneli ste matricu:\n");
// //  for(i=0; i<m; i++)
// //  {
// //  for(j=0; j<n; j++)
// //  printf(" %.2f", a[i][j]);
// //  printf("\n");
// //  }
// //  trag=0.0;
// //  for(i=0; i<n; i++)
// //  trag += a[i][i];
// //  printf(" Trag matrice: %.2f\n",trag);
// //  norma=0.0;
// //  for(i=0; i<m; i++)
// //  for(j=0; j<n; j++)
// //  norma += a[i][j]*a[i][j];
// //  norma=sqrt(norma);
// //  printf(" Euklidska norma matrice: %.2f\n", norma);
// //  vdnorma = 0.0;
// //  for(i=0; i<m; i++)
// //  for(j=i+1; j<n; j++)
// //  vdnorma+=fabs(a[i][j]);
// //  printf(" Gornja vandijagonalna norma matrice: %.2f\n", vdnorma);
// //  for(j=0;j<m;j++){
// //     free(a[j]);
// //     free(a);
// //  }
// //  return 0;







































////////////////////////////////////////////////////////////////////////////////////////
//Write a program in C++ to find the is of a number.
    // int number,ldigit,i,fdigit;
    // cout<<"unesi broj";
    // cin >>number;
    // ldigit=number%10;
    // while(number>=1){
    //     fdigit=number%10;
    //     number/=10;
    // }
    // cout<<"sum of first and last digit is "<<ldigit+fdigit;
    // return 0;




 //Write a program in C++ to display the number in reverse order.
//    int number,digit,new1;
//    cout<<"unesi broj";
//    cin>>number;
//    while(number>=1){
//        new1=new1*10+number%10;
//        number/=10;
//    }
//    cout<<"broj je "<<new1;

//Write a C++ program to compute the sum of three given integers. 
    //If the two values are same return the third value
    
//     int sum(int x1,int x2,int x3){
//     if(x1==x2)return x3;
//     else if(x1==x3)return x2;
//     else if(x3==x2)return x1;
//     else return (x1+x2+x3);

    
// }
//     int x1,x2,x3;
//     cout<<"unesi 3 broja";
//     cin>>x1>>x2>>x3;
//     cout<<sum(x1,x2,x3);
//     return 0;












































////////////////////////////////////////////////////
//c+++++++++++++++++++++++

// #include <math.h>
// #include <iostream>
// // za unete koefecijente kvadratne jednacine izracunati i ispisati resenja
// using namespace std;
// /*ax2+bx+c=0
// D,x1,x2 
// D=b*b-4ac
// Tri slucaja
// D manje od 0 -nema realnih resenja
// D jednako 0 - -x=-b/2*a 
// D vece od 0 - ima dava resenjea:
// x1=-b+koren(D)/2*a
// x2=-b+koren(D)/2*a */
// int main()
// {
//  float a,b,c,D,x1,x2;
//  cout<<"Unesite koefecijente \n";
//  cin>>a>>b>>c;
//  D=pow(b,2)-4*a*c;
//  if(D<0){
//      cout<<"Jednacina nema realnih resenja\n";
//  }
//  else if (D=0){
//      x1=-b/(2*a);
//      cout<<"Jednacina ima jedno resenje i to je "<<x1<<"\n";
//  }
//  else{
//      x1=(-b+sqrt(D))/(2*a);
//      x2=(-b-sqrt(D))/(2*a);
//      cout<<"Resenja jednacine su "<<x1<<" i "<<x2<<"" ;
//  }
//  return 0;
// }

// #include <math.h>
// #include <iostream>
// // Uneti redni broj meseca i godinu i ispisati koliko dana ima mesec u godini
// using namespace std;

// int main()
// {
//   int m,g;
//   cout<<"Unesite redni broj i godinu \n";
//   cin>>m>>g;
//   switch(m){
//       case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//       cout<<"31 dan";
//       break;
//       case 4: case 6: case 9: case 11:
//       cout<<"30 dana \n";
//       break;
//       case 2:
//       if((g%4==0 && g%100!=0)||(g%400==0))
//       cout <<"29 dana \n";
//       else 
//       cout<<"28 dana \n";
//       break;
//       default:
//       cout<<"Pogresan redni broj  meseca \n";
//       break;
//   }
//   return 0;
// }

// #include <math.h>
// #include <iostream>

// using namespace std;

//  // korisnik unosi oznaku polja na koje se nalazi crni top kao i oznaka polja na koje top zeli da napadne
//  //Ispisati poruku da li top moze da napadne uneto polje
// int main()
// {
//  int x,y,x1,y1,x2,y2;
//  cout<<"Unesite polje table,poziciju topa i polje gde top zeli da napadne";
//  cin>>x>>y>>x1>>x2>>x2>>y2;
//  if( x1==x2 || y1==y2){
//      cout<<"Top moze da napadne";
//  }
//  else 
//  cout<<"Top ne moze da napadne";

//  return 0;
// }