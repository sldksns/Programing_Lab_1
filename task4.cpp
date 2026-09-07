#include <iostream>
#include "math.h"
using namespace std;
int main(){
	float a;
	float b;
	cin >> a;
	cin >> b;
	float y = sqrt( fabs( ( pow(a , pow(sin(b),2) + cos(pow(b,3) ) )+ cbrt(pow(b,2)) )/ (sqrt(sqrt(fabs((a * tan(b))/(1 - pow(M_E, sqrt(a))) )))) ) );
	cout << y;
}
