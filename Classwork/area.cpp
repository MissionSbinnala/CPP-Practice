#include<iostream>
using namespace std;

double Area(double radius = 1.0) {
	double area;
	area = 3.141592653 * radius * radius;
	return area;
}

double Area(double length, double width) {
	double area;
	area = length * width;
	return area;
}

int main() {
	double a, b, area = 0;
	int c;
	cout << "��ѡ��ͼ��(1ΪԲ�Σ�2Ϊ����):\n";
	cin >> c;
	switch (c) {
	case 1:
		cout << "������뾶��\n";
		cin >> a;
		area = Area(a);
		break;
	case 2:
		cout << "�����볤�Ϳ�\n";
		cin >> a >> b;
		area = Area(a, b);
		break;
	}
	cout << "�����" << area;
	return 0;
}