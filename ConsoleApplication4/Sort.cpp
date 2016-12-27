#include"Sort.h"
#include "Products.h"

void Sort(Product arr[]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[j].get_price() > arr[j + 1].get_price()) {
				double tmp;
				tmp = arr[j].get_price();
				arr[j].set_price(arr[j+1].get_price());
				arr[j+1].set_price(tmp);
				int cod, num;
				cod = arr[j].get_id();
				arr[j].set_id(arr[j+1].get_id());
				arr[j + 1].set_id(cod);
				num = arr[j].get_number();
				arr[j].set_number(arr[j + 1].get_number());
				arr[j + 1].set_number(num);
			}
		}
	}
}