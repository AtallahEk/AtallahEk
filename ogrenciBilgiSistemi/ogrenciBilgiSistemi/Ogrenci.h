#pragma once
#include <iostream>
using namespace std;

class Ogrenci {

private:
	int id;
	string ad;
	int sinavNot;

public:
	Ogrenci(int _id, string _ad, int _sinavNot);
	void set›d(int _id);
	void setad(string _ad);
	void setsinavNot(int _sinavNot);
	int getid();
	string getad();
	int getSinavNot();
	void bilgileriYaz();
};