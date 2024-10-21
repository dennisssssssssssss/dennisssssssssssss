#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*EX 1
    int a;
    printf("a=");
    scanf("%d",&a);
    if(a%2==0)
        printf("numarul este par");
    else printf("numarul nu este par");*/

    /*EX 2
    float a;
    printf("Nota la examen este :");
    scanf("%f",&a);
    if(a>=5)
        printf("Ai promovat");
    else printf("Nu ai promovat");*/

    /*EX 3
    int maxi=0,a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("%d", a>b? a:b);*/
    //maxi=a;
    //else maxi=b;
    //printf("maximul dintre cele doua numere este :%d",maxi);

    //*EX4
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    //maxi=(a>b)?(a>c? a:c):(b>c? b:c);
    //printf("maximul dintre cele trei numere este :%d",maxi);
    if(a>b && a>c)
    printf("maximul este valoarea %d",a);
    else if(b>a && b>c)
        printf("maximul este valoarea %d",b);
    else printf("maximul este valoarea %d",c);*/


    /*EX 5
    int L,l;
    int A,P;
    printf("L=");
    scanf("%d",&L);
    printf("l=");
    scanf("%d",&l);
    A=L*l;
    P=2*(L+l);
    if(L>l)
        printf("Perimetrul =%d\nAria =%d",P,A);
    else printf("numerele nu pot fi laturile unui triunghi");*/

    /*float nota;
    printf("Ce nota ai luat la PCLP?");
    scanf("%f",&nota);
    printf("Ai luat nota %.2f",nota);
    printf(nota>=5?"\nDa":"\nNu");
        //printf("\nFelicitari !Ai promovat");
    //else printf("\nNu ai promovat");*/

    /*EX 6
     int s,a,b,c;
     float A,P;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    if(a<b+c && b<a+c && c<a+b)
    {
        printf("perimetrul este :%d\n",a+b+c);
        printf("aria este :%.2f\n",A);
        printf("inaltimea din a :%.2f\n",(2*A)/a);
        printf("inaltimea din b :%.2f\n",(2*A)/b);
        printf("inaltimea din c :%.2f\n",(2*A)/c);
    } else printf("laturile nu reprezinta un triunghi");*/

    /*EX 7
    int x,y;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    if(x>0 && y>0)
        printf("cadranul 1");
    else if(x<0 && y>0)
        printf("cadaranul 2");
    else if(x<0 && y<0)
        printf("cadranul 3");
    else printf("cadranul 4");*/


    //*EX 8
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    if(a>=10)
        printf("%d",2*a-2*b);
    else if(a>-3 && a<10)
        printf("%d",a*b);
    else {
        a=5;
        printf("%d",a);
    }

    return 0;


}
