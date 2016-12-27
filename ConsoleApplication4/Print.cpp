#include"Products.h"
#include"Print.h"

void Print(Product arr[], int n) {
	for (int i = 0; i < 4; i++) {
		if (arr[i].get_number() <= n) {
			arr[i].set();
		}
	}
}