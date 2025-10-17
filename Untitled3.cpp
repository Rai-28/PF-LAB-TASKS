#include <iostream>
using namespace std;
int main() 
{
	int choice;
	float radius, length, width, base, height, area;
	
	cout <<"1. area  of circle" << endl;
	cout << "2. area of rectangle" << endl;
	cout << "3. area of triangle" << endl;
	cout << "4. quit" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "enter radius" << endl;
		cin >> radius;
		area= (3.15)*radius*radius;
		cout << "area of circle" << area << endl;
	break;
	case 2:
		cout << "enter length and width" << endl;
		cin >> length >> width;
		area= length*width;
		cout << "area of rectangle" << area << endl;
	break;
	case 3:
		cout <<" enter base and height"<< endl;
		cin >> base>>height;
		area= (1/2)*base*height;
		cout <<"area of triangle" << area << endl;
	break;
	default :
		cout << "quit" << endl;
	break;
}
}
