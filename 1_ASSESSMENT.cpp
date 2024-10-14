// Create a Car class with some attributes
#include <iostream>
#include <string>
using namespace std;
class Car
{
  public:
	string brand;
	string model;
	int year;
};
int main()
{
	// Create an object of Car
	Car carObj1;
	carObj1.brand = "Toyota";
	carObj1.model = "INNOVA";
	carObj1.year = 1999;
	// Create another object of Car
	Car carObj2;
	carObj2.brand = "mahindra";
	carObj2.model = "Thar";
	carObj2.year = 1969;
	// Print attribute values
	cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
	cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
	return 0;
}
