#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(){

    printf("\t\t  Program Persamaan Akar Akar Kuadrat  \n");

    float a,b,c,D,x1,x2;
    bool login = true;
    while (login){
    printf("\nMasukkan bilangan a : ");scanf("%f",&a);
    printf("Masukkan bilangan b : ");scanf("%f",&b);
    printf("Masukkan bilangan c : ");scanf("%f",&c);

    if (a > 0){
        D = (b * b) -(4 * a * c);
        if(D>= 0){
        x1 = (-b + (sqrt(D))/(2*a));
        x2 = (-b - (sqrt(D))/(2*a));
        printf("Nilai x1 = %d",x1);
        printf("\nNilai x2 = %d",x2);
        }
    else{
        printf("\nAkar Imajiner\n");
    }
    login = false;
    }
    else{
        printf("Silahkan Ulang Bilangan a Harus Lebih Besar Dari 0\n");

    }
    }
}
