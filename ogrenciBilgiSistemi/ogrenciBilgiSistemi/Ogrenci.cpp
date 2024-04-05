#include <iostream>
#include "Ogrenci.h"
using namespace std;

Ogrenci::Ogrenci(int _id, string _ad, int _sinavNot) {
	id = _id;
	ad = _ad;
	sinavNot = _sinavNot;
}
void Ogrenci::set›d(int _id) {
	id = _id;
}
void Ogrenci::setad(string _ad) {
	ad = _ad;
}
void Ogrenci::setsinavNot(int _sinavNot) {
	sinavNot = _sinavNot;
}
int Ogrenci::getid() {
	return id;
}
string Ogrenci::getad() {
	return ad;
}
int Ogrenci::getSinavNot() {
	return sinavNot;
}
void Ogrenci::bilgileriYaz() {
	cout << "id: " << id << " || ad soyad : " << ad << " || sinavnotu: " << sinavNot << endl;
}