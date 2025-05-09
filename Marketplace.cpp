#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int max_products = 150;

int id[max_products];
string name[max_products];
double price[max_products];

int counts = 0;

void dodaty_product(int id1, const string& name1, double price1) {
	id[counts] = id1;
	name[counts] = name1;
	price[counts] = price1;
	counts++;
}

void spisok_produktow() {

	cout << setw(5) << left << "id" << setw(30) << "Name" << setw(10) << "Price" << "\n";

	cout << setw(5) << setfill('-') << "" << setw(30) << "" << setw(10) << "" << setfill(' ') << "\n";

	for (int i = 0; i < counts; i++) {
		cout << setw(5) << left << id[i] << setw(30) << name[i] << setw(10)
			 << price[i] << "$"<<"\n";
	}
}

int main()
{
	int kolichevstwo = 0;
	cout << "How many products you want to add? ";
	cin >> kolichevstwo;

	for (int i = 0; i < kolichevstwo; i++) {
		int id;
		string name;
		double price;


		cout << "Write the product id " << i + 1<<" ";
		cin >> id;
		cout << "Write the product name " << i + 1 << " ";
		cin >> name;
		cout << "Write the product price " << i + 1 << " ";
		cin >> price;

		dodaty_product(id, name, price);
	}
	spisok_produktow();
	 

   
}
