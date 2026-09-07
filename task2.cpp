#include <iostream>
#include "math.h"
using namespace std;
int main(){
	int count;
	cin >> count;
	int hours = count/3600;
	int minuts = (count%3600)/60;
	int seconds = (count%3600)%60;
	cout << hours << " " <<  minuts << " " << seconds;
}
