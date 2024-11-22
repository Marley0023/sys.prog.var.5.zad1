
using namespace std;
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define t 3
#define z (1 / tan(t)+2)
#define y 4
#define x 8*z/(exp(t) + 2)-pow(y, 2)

int main()
{
	printf("%f\t\n", x);
	return 0;
}

