#include<iostream>
#include"Products.h"
#include"Sort.h"
#include "Print.h"

using namespace std;

int main() {
	Product mas[4];
	cout << "code\t" << "price\t" << "number" << endl;
	mas[0].get();
	for (int i = 1; i < 4; i++) {
		mas[i].get();
		for (int j = 0; j < i; j++) {
			while ((mas[j].get_id() == mas[i].get_id()))
			{
				cout << "Please enter a unique ID code"<<endl;
				mas[i].get();
			}
		}
	}
	Sort(mas);
	for (int i = 0; i < 4; i++) {
		mas[i].set();
	}
	cout << endl << "Enter the maximum quantity\n";
	int n;
	cin >> n;
	Print(mas, n);
	system("pause");
	return 0;
}