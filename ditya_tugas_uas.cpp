#include <iostream>

using namespace std;

//deklarasi struct dengan nama warga 

struct Warga{
	string kelurahan;
	int terkonfirmasi, sembuh, meninggaldunia; 

	// membuat variabel pointer dengan Nama struct itu sendiri 
	Warga *next;
}; 

//variabel global 
Warga *head, *tail, *cur, *newnode, *del;

//membuat fungsi untuk menamabahkan linked list
void tambahSingLinkedList(string kelurahan, int terkonfirmasi, int sembuh,int meninggaldunia){
	head= new Warga();
	head->kelurahan=kelurahan;
	head->sembuh = sembuh;
	head->meninggaldunia = meninggaldunia;
	head->next = NULL;
	tail=head;
}

//membuat fungsi untuk menambah ke awal single list
void addFirst(string kelurahan, int terkonfirmasi, int sembuh, int meninggaldunia){
	newnode = new Warga();
	newnode->kelurahan = kelurahan;
	newnode->terkonfirmasi = terkonfirmasi;
	newnode->sembuh = sembuh;
	newnode->meninggaldunia = meninggaldunia;
	newnode->next = head;
	head=newnode;
}

//membuat fungsi untuk menambah di akhir
void addLast(string kelurahan,int terkonfirmasi, int sembuh,int meninggaldunia){
	newnode = new Warga();
	newnode->kelurahan = kelurahan;
	newnode->terkonfirmasi = terkonfirmasi;
	newnode->sembuh = sembuh;
	newnode->meninggaldunia = meninggaldunia;
	newnode->next = NULL;
	tail->next = newnode;
	tail=newnode;
}

//membuat fungsi untuk mengahapus elemen pertama
void removeFirst(){
	del = head;
	head=head->next;
	delete del;
}

//membuat fungsi untuk menghapus elemn terahir
void removeLast(){
	del = tail;
	cur =  head;
	while(cur->next !=tail){
	cur = cur->next;
	}
	tail = cur;
	tail = cur->next = NULL;
	delete del;
}

//membuat fungsi untuk mencetak 
void printSingleList(){
	cur = head;
	while(cur!=NULL){
		cout << "Data Kasus Covid-19 Kacamatan Pasti"<<endl;
		cout << "Nama Kelurahan  : " << cur->kelurahan <<endl;
		cout << "Jumlah warga terkonfirmasi covid-19  : " << cur->terkonfirmasi <<endl;
		cout << "Jumlah Warga yang sembuh : " <<cur->sembuh <<endl;
		cout << "Jumlah Warga yang meninggal :" <<cur->meninggaldunia <<endl;
			
		cur = cur->next;

	}
 }

//membuat fungsi utama

int main(){
	tambahSingLinkedList("Desa Angan-angan",700,500,50);
	printSingleList();
	cout<<"\n\n"<<endl;
	
	addFirst("Desa Gak Mau Tau",600,400,20);
	printSingleList();
	cout<<"\n\n"<<endl;
	
	addLast("Desa Cuek", 500, 400,20);
	printSingleList();
	cout<<"\n\n"<<endl;
	
	removeFirst();
	printSingleList();
	cout<<"\n\n"<<endl;
	
	removeLast();
	printSingleList();
	cout<<"\n\n"<<endl;

}



