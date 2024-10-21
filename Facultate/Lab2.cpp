#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
 
     1.
  
  #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Serban Ioana \nGrupa A\bB Dual \nCalculatoare\n");

    return 0;
}


2.
  
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("NrMatricol\tStudent \tMedia \n111\t\tPopescu\tIon\t10 \n2\t\tIonescu\tAna\t9.75 \n35\t\tPopa\tDan\t8.45\n");
    return 0;
}



3.
  
  #include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%o\n",123);
    printf("%x",123);
    return 0;
}


4.
  
  #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("numarul pe care l-ai citit: %d",n);
    return 0;
}


5.
  
  #include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,m;
    scanf("%f %f", &n, &m);
    printf("numerele reale: %f, %f",n,m);
    return 0;
}


6.
  
  #include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf ("%d%d",&a,&b);
    int suma = a+b;
    float media=(a+b)/2;
    printf("suma lui %d si %d este %d\n", a, b, suma);
    printf("media numerelor %d si %d este %f\n",a, b,media);
    return 0;
}


7.
  
  #include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,p,a;
    scanf("%d",&l);
    printf("latura este %l", l);
    p=4*l;
    a=l*l;
    printf("perimetrul: %d\n",p);
    printf("aria: %d",a);
    return 0;
}


8.
  
  #include <stdio.h>
#include <stdlib.h>

int main()
{
    float l,L,p,a;
    scanf("%f %f",&l,&L);
    p=2*l+2*L;
    a=l*L;
    printf("perimetrul: %.2f",p);
    printf("\naria: %.2f",a);
    return 0;
}


9.
  
  #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,p,s,aria;
    scanf("%f%f%f",&a,&b,&c);
    p=a+b+c;
    s=p/2;
    aria=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("perimetru: %.2f",p);
    printf("\naria: %.2f", aria);
    return 0;
}


10.
  
  #include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x,n;
    scanf("%f",&x);
    n=fabsf(x-4)+fabsf(5-x);
    printf("|x-4|+|5-x|=%.2f",n);
    return 0;
}   
      /*EX 11
    float x, rezultat;

    // Citirea numărului real de la tastatură
    printf("Introduceți un număr real x: ");
    scanf("%f", &x);
    rezultat =((8*x - 16)/(x*x+x+1))*((x*x-1)/(x*x+3*x+5));
    printf("Rezultatul expresiei este: %.2f\n", rezultat);*/

     /*Ex 12
     int a,r;
     float A,L,pi;
     printf("raza cercului este :");
     scanf("%d",&r);
     pi=3.14;
     A=pi*r*r;
     L=2*pi*r;
     printf("Lungimea cercului este :%.3f\nAria cercului este :%.3f",L,A);*/


       /*EX 13
     char un_caracter='a';
     int un_numar=2,vector[10]={5};
     float un_numar_real=3.14;
     double un_alt_numar_real=5.654;
     long int x;
     long long y;
     printf("%zu octeti",sizeof(un_caracter));
     printf("\n%zu octeti",sizeof(un_numar));
     printf("\n%zu octeti",sizeof(vector));
     printf("\n%zu octeti",sizeof(un_numar_real));
     printf("\n%zu octeti",sizeof(un_alt_numar_real));
     printf("\n%zu octeti",sizeof(x));
     printf("\n%zu octeti",sizeof(y));*/

        /*Ex 14
      time_t current_time;
      current_time=time(NULL);
      printf("CARNET NOTE\n");
      printf("Data si ora curenta: %s",ctime(&current_time));
      printf("Student : Andronic Denis\n");
      printf("Nr.\tCrt.\tDisciplina\tNota examen\n--------------------------------------------\n");
      float a,b,c;
      printf("1.\tPCLP\t\t\t: ");
      scanf("%f",&a);
      printf("2.\tGAC\t\t\t: ");
      scanf("%f",&b);
      printf("3.\tAM\t\t\t: ");
      scanf("%f",&c);
      printf("Media pentru semestrul I este : %.2f",(a+b+c)/3);*/



    return 0;
}
