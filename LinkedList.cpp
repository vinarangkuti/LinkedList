#include <stdio.h>
#include <stdlib.h>
//definisikan struct
struct SNode{
	 int data;
struct SNode *next;
};
struct SNode *n_awal, *n_tampil;
int iterasi;

//inisialisasi linked list
void inisialisasi(){
	 n_awal = NULL;
}
//tampilkan linked list
void tampil_list(){

	n_tampil = n_awal;
     while(n_tampil != NULL){
      printf("%d ", n_tampil -> data);
         n_tampil = n_tampil -> next;
 }
    printf("\n");
}

//method untuk insert node baru
void insert_node(int data){

	 //node baru yang akan di insert
     struct SNode *n_insert;
     n_insert = (struct SNode *)malloc(sizeof(struct SNode));; 
     n_insert -> data = iterasi;
     n_insert -> next = NULL;
    
     //kondisi linked list masih kosong
     if (n_awal == NULL){
         n_awal = n_insert;
       
     } else {

     struct SNode *n_bantu; // untuk bantuan mencari node terakhir
      n_bantu = n_awal;

      // cari node terakhir
          while (n_bantu -> next != NULL){
                n_bantu = n_bantu -> next;    
          }
          
     //hubungkan node terakhir dengan node baru
          if(n_bantu -> next == NULL)
          {