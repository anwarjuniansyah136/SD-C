#include <stdio.h>
#include <conio.h>
#include <windows.h>

struct node{
    int number;
    struct node *next;
}*head,*new,*check,*check2,*temp;

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
        new -> next = NULL;
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
void tambah_tengah(int data){
    new = malloc(0);
    new -> number = data;
    int length = 0;
    if(head == NULL){
        head = new;
        head -> next = NULL;
    }
    else{
        check = head;
        while(check != NULL){
            length++;
            check = check -> next;
        }
        if(length % 2 == 0){
            length = length / 2 - 1;
        }
        else{
            length = length / 2;
        }
        check = head;
        for(int i = 0; i < length; i++){
            check = check -> next;
        }
        check2 = check -> next;
        check -> next = new;
        new -> next = check2;
    }
}
void tambah_index(int data,int index){
    new = malloc(0);
    new -> number = data;
    int length = 0;
    check = head;
    while(check != NULL){
        length++;
        check = check -> next;
    }
    if(head == NULL){
        printf("Data Masih Kosong\n");
    }
    else if(index > data){
        printf("Index Tidak Ada\n");
    }
    else if(index <= 0){
        printf("Index Tidak Ada\n");
    }
    else if(index == 1){
        new -> next = head; 
        head = new;
    }
    else{
        check = head;
        for(int i = 0; i < index - 2; i++){
            check = check -> next;
        }
        check2 = check -> next;
        check -> next = new;
        new -> next = check2;
    }
}
void tampil(){
    check = head;
    printf("================================================================================\n");
    while(check != NULL){
        printf("| %d | -> ",check -> number);
        check = check -> next;
    }printf("NULL\n");
    printf("================================================================================\n\n");
}
void menu(){
    int pilih,data,index;
    system("cls");
    tampil();
    printf("1.Tambah Depan\n2.Tambah Belakang\n3.Tambah Tengah\n4.Tambah By index\nPilih: ");scanf("%d",&pilih);
    if(pilih == 1){
        printf("Input Data : ");scanf("%d",&data);
        tambah_depan(data);
    }
    else if(pilih == 2){
        printf("Input Data : ");scanf("%d",&data);
        tambah_belakang(data);
    }
    else if(pilih == 3){
        printf("Input Data : ");scanf("%d",&data);
        tambah_tengah(data);
    }
    else if(pilih == 4){
        printf("Input Data : ");scanf("%d",&data);
        printf("Input Index : ");scanf("%d",&index);
        tambah_index(data,index);
    }
}
void main(){
    menu();
    main();
}