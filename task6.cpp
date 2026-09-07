#include <iostream>
#include "math.h"
using namespace std;
int main(){
	int rub, cop, sum, step = 0, best_step = 0, best_sum;
	rub = 35;
	cop = 99;
	sum = rub * 100 + cop;
	best_sum = sum;
	do{
		sum -= 29;
		cop = sum/100;
		rub = sum%100;
		sum = rub * 100 + cop;
		step+=1;
		if(sum > best_sum){
			best_sum = sum;
			best_step = step;
		}
	}while(sum > 0 && step < 1000);
	cout <<  best_step;
}
