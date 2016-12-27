#pragma once

class Product {
private:
	int id;
	double price;
	int number;
public:
	Product() {
		this->id = 0;
		this->price = 0.0;
		this->number = 0;
	}
	Product(int id, double price, int number) {
		this->id = id;
		this->number = number;
		this->price = price;
	}
	void get();
	void set();
	double get_price();
	void set_price(double price_new);
	int get_id();
	void set_id(int id_new);
	int get_number();
	void set_number(int number_new);
};