#include "cordic.h"
#include <iostream>

int main () {
	THETA_TYPE pi = 3.1415926;
	THETA_TYPE theta;
	COS_SIN_TYPE cos;
	COS_SIN_TYPE sin;
	for (int i = 0; i < 90; i=i+15){
		theta = i*pi/180;
		cordic (theta, sin, cos);
		std::cout << "Sine : "   << sin << std::endl;
		std::cout << "Cosine : " << cos << std::endl;
	}
	return 0;
}
