#include <stdio.h>
#include <stdlib.h>

void main() {
    int a;
    int b;
    printf("input nilai A : ");scanf("%d",&a);
    printf("input nilai B : ");scanf("%d",&b);
    printf("%s",a > b? "A lebih besar dari B" : "B lebih besar dari A");
}