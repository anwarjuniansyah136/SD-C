#include <stdio.h>

void main(){
    int a,b,c,d;
    printf("Input Nilai Ke - 1 : ");scanf("%d",&a);
    printf("Input Nilai Ke - 2 : ");scanf("%d",&b);
    printf("Input Nilai Ke - 3 : ");scanf("%d",&c);
    printf("Input Nilai Ke - 4 : ");scanf("%d",&d);
    if(a > b && a > c && a > d){
        printf("Nilai Terbesar Adalah Nilai Pertama dengan nilai %d ",a);
    }
    if(b > a && b > c && b > d){
        printf("Nilai Terbesar Adalah Nilai Kedua dengan nilai %d",b);
    }
    if(c > a && c > b && c  > d){
        printf("Nilai Terbesar Adalah Nilai Ketiga dengan nilai %d",c);
    }
    if(d > a && d > b && d > c){
        printf("Nilai Terbesar Adalah Nilai Ke 4 dengan nilai %d",d);
    }
}