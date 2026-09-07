#include <iostream>
#include "math.h"
using namespace std;
int main(){
	int rad;
	cin >> rad;
	float pi = M_PI;
	float circle_lenght = 2*pi*rad;
	float circle_square = pi*pow(rad,2);
	float sphere_square = 4*circle_square;
	float ball_volume = (sphere_square*rad)/3.;
	cout << circle_lenght << " " <<  circle_square << " " << sphere_square << " " << ball_volume; 
	return 0;
}
