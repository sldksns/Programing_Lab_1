#include <iostream>
#include "math.h"
using namespace std;
int main(){
	int n;
	int p = 0;
	int q = 0;
	cin >> n;
	while(pow(p,2)+pow(q,2) < n){
		p++;
	}
	cout << p << " " << q;
}
