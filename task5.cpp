#include <iostream>
#include "math.h"
using namespace std;
int main(){
	unsigned short hours, minuts;
	hours = 13;
	minuts = 30;
	float h_degrees = hours%12 * 30 + (minuts/60.)*30;
	float m_degrees = minuts * 6;
	float delta = fabs(h_degrees - m_degrees); 
	float answer = (delta > 180) ? 360 - delta : delta;
	cout << answer;
}
