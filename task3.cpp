#include <iostream>
#include "math.h"
using namespace std;
int main(){
	unsigned long long count = ~0ULL;
	float years = count/7e14;
	cout << ceil(years);
}
