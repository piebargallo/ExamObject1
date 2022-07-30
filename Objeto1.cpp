using namespace std;
#include <bits/stdc++.h>

// Def class steam_locomotive
class steam_locomotive {

	// Access specifier
	public:

		// Def attributes
		string maker, model;
		int year_manufactury;

	// Def methods
	void print_maker();
	void print_model();
	void print_year();

	void kinetic_energy(float mass, float maximum_speed) {

		float resultE;
		resultE = (mass * (maximum_speed * maximum_speed)) / 2;
		cout << "The kinetic energy is: " << resultE << " Joules" << endl;

	}

	void mechanical_performance(float useful_power, float applied_power) {

		float resultP;
		resultP = (useful_power / applied_power) * 100;
		cout << "The mechanical performace is: " << resultP << "%";

	}

}; // End class

// Def methods outside class
void steam_locomotive::print_maker() {
	
	cout << "The maker of locomotive is: " << maker << endl;

}

void steam_locomotive::print_model() {
	
	cout << "The model is: " << model << endl;
	
}

void steam_locomotive::print_year() {
	
	cout << "Year of manufactury is: " << year_manufactury<< endl;		

} // End methods outside class

// Driver code
int main() {

	// Declare an object of class steam_locomotive
	steam_locomotive s1;

	// accessing data member
	float massa = 10;
	float speed = 25;
	float useful = 50;
	float applied = 250;

	// accessing member function
	s1.maker = "General Industries";
	s1.print_maker();
	s1.model = "Mikado";
	s1.print_model();
	s1.year_manufactury = 1969;
	s1.print_year();
	s1.kinetic_energy(massa, speed);
	s1.mechanical_performance(useful, applied);

	return 0;

} // End driver