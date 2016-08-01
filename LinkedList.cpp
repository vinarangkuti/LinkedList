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