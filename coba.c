#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

struct Parkir{
    char nama_kendaraan[100];
    float lama_parkir;
}parkir[3];
void main(){
    float pembayaran = 0,bagi = 0;
    for(int i = 0; i < 3; i++){
        printf("Input Nama Kendaran : ");gets(parkir[i].nama_kendaraan);
        printf("Input Lama Parkir Dalam bentuk menit : ");scanf("%f",&parkir[i].lama_parkir);
        bagi = parkir[i].lama_parkir / 60;
        pembayaran = bagi * 2000;
        printf("Pembayaran Anda : Rp %.0f\n\n",pembayaran);
        pembayaran = 0;
        getchar();
    }
}
struct node{
    int number;
    struct node *next;
    struct node *prev;
}*head,*check,*new,*buff,*tail;
void tampil(){
    check = head;
    printf("==============================================================\n");
    while(check != NULL){
        printf("| %d | -> ",check -> number);
        check = check -> next;
    }printf("NULL\n");
    printf("==============================================================\n\n");
}
void tambah_depan(int data){
    new = malloc(0);
    new -> number = data;
    if(head == NULL){
        head = new;
        head -> next = NULL;
    }
    else{
        new -> next = head;
        head = new;
    }
}
void tambah_belakang(int data){
    new = malloc(0);
    new -> number = data;
    if(head == NULL){
        head = new;
        head -> next = NULL;
    }
    else{
        check = head;
        while(check -> next != NULL){
            check = check -> next;
        }
        check -> next = new;
        new -> next = NULL;
    }
}
void soal2(){
    system("cls");
    tampil();
    int data;
    printf("Input Angka : ");scanf("%d",&data);
    if(data % 2 == 0){
        tambah_depan(data);
    }
    else{
        tambah_belakang(data);
    }
    main();
}
void tampill(){
    check = tail;
    printf("=========================================================\n");
    while(check != NULL){
        printf("| %d | -> ",check -> number);
        check = check -> prev;
    }printf("NULL\n");
    printf("==========================================================\n\n");
}
void tambah_depan_ddl(int data){
    new = malloc(0);
    new -> number = data;
    if(head == NULL){
        head = tail;
        head = tail = new;
    }
    else{
        head -> prev = new;
        new -> next = head;
        head = new;
    }
    head -> prev = NULL;
    tail -> next = NULL;
}
void hapus_belakang(){
    if(head == NULL){
        printf("Data kosong\n");
    }
    else if(head -> next == NULL){
        free(head);
        head = tail = NULL;
    }
    else{
        buff = tail;
        free(tail);
        tail = buff -> prev;
        tail -> next = NULL;
    }
}
void soal3(){
    system("cls");
    tampil();
    tampill();
    int data;
    printf("Input Angka : ");scanf("%d",&data);
    if(data % 2 == 0){
        tambah_depan_ddl(data);
    }
    else{
        hapus_belakang();
    }
    main();
}
void main(){
    soal1();
}