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