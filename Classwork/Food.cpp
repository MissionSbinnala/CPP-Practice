#include<iostream>
using namespace std;

class Food {
private:
	string name;
	float price;
public:
	Food(string n, float p) {
		name = n;
		price = p;
	}
	void PrintFood() {
		cout << name << "\t" << price <<"Ԫ"<< endl;
	}
};

int main() {
	Food food[3] = { Food("���", 5),Food("����", 2),Food("����", 3.5) };
	food[0].PrintFood();
	food[1].PrintFood();
	food[2].PrintFood();
	return 0;
}