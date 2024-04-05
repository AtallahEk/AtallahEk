#include <iostream>
#include <list>
#include "Ogrenci.h"
using namespace std;


void menuyuGostr() {
	cout << "* * * * * * * * * * * " << endl;
	cout << "* * * * * * * * * * * " << endl;
	cout << "* *      MENU     * * " << endl;
	cout << "* * * * * * * * * * * " << endl;
	cout << "* * * * * * * * * * * " << endl;
	cout << "1. Yeni kayit ekle" << endl;
	cout << "2. Tum listeyi goster" << endl;
	cout << "3. Ogrenci id ye gore kayit sil" << endl;
	cout << "4. Ogrenci ara" << endl;
	cout << "5. Cikis" << endl;
}
void ogrenciEkle(list<Ogrenci>*lst) {
	int id;
	string ad,soyad,isim;
	int sinavNot;
	cout << "lutfen ogrenci id girinz: ";
	cin >> id;
	cout << "Ad girinz: ";
	cin >> ad>>soyad;
	isim = ad + " " + soyad;
	cout << "ogrenci  sinav notunu giriniz: ";
	cin>> sinavNot;
	Ogrenci ogr(id,isim, sinavNot);
	lst->push_back(ogr);
}
void showList(list<Ogrenci>* lst) {
	list<Ogrenci>::iterator it;
	cout << "- - - - Tum ogrenci listesi - - - -\n";
	for (it = lst->begin(); it !=lst->end();it++)
	{
		it->bilgileriYaz();
	}
	cout << endl;
}
void ogrenciSil(list<Ogrenci>* lst) {
	int id;
	cout << "lutfen silenecek ogrenci id giriniz: ";
	cin >> id;
	list<Ogrenci>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++) {
		if (it->getid() == id)
			break;
	}
	if (it == lst->end())
		cout << "Belirtilen id bulunamamistir,silme yapilamdi!";
	else
	lst->erase(it);
}
void ogrenciAra(list<Ogrenci>* lst) {
	int id;
	cout << "lutfen aranacak ogrenci id giriniz: ";
	cin >> id;
	list<Ogrenci>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++) {
		if (it->getid() == id)
			break;
	}
	if (it == lst->end())
		cout << "Belirtilen id bulunamamistir!";
	else {
		cout << endl << "Aradiginiz ogrenci bilgileri: \n";
		it-> bilgileriYaz();
		cout << endl;
	}

}
int main() {
	
	list<Ogrenci>* ogrenciLÝst= new list<Ogrenci>();

	int secim = 0;
	do
	{
		menuyuGostr();
		cout << "seciminiz: ";
		cin >> secim;
		if (secim == 1)
			ogrenciEkle(ogrenciLÝst);
		else if (secim == 2)
			showList(ogrenciLÝst);
		else if (secim == 3)
			ogrenciSil(ogrenciLÝst);
		else if (secim == 4)
			ogrenciAra(ogrenciLÝst);
		else if (secim == 5)
			break;
		else
			cout << "*** Hatali secim yaptiniz, yeniden deneyin! ***" << endl;

	} while (secim !=5);
	return 0;
}