#include<iostream>
#include"Products.h"

using namespace std;

void Product::get() {
	cin >> id >> price >> number;
}

void Product::set() {
	cout << id << "\t" << (int)price << "grn" << (price - (int)price) * 100 << "kop" << "\t" << number << endl;
}

double Product::get_price() {
	return price;
}

void Product::set_price(double price_new) {
	price = price_new;
}

int Product::get_id() {
	return id;
}

void Product::set_id(int id_new) {
	id = id_new;
}

int Product::get_number() {
	return number;
}

void Product::set_number(int number_new) {
	number = number_new;
}