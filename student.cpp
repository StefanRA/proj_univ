#include "pch.h"
#include "student.h"
#include <iostream>

int Student :: getNrMatricol(){
	return NrMatricol;
}

int Student :: getAnStudii() {
	return AnStudii;
}

string Student :: getFormaFinantare() {
	return FormaFinantare;
}

void Student::citire() {
	cin >> NrMatricol >> AnStudii >> FormaFinantare;
}


void Student::afisare() {
	cout << NrMatricol << AnStudii << FormaFinantare;
}