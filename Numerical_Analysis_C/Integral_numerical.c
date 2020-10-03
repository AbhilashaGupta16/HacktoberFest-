/*C program to implement trapezoidal rule and simpson's rule*/
/*Trapezoidal rule works by dividing the integral into trapezoids
This method has sometimes slow convergence compared to Simpsons rule.*/

#include<stdio.h>
#include<stdlib.h>
#define TWO_BY_THREE (double)2.0/3.0
#define FOUR_BY_THREE (double)4.0/3.0

/*Function whose integral needs to be evaluated.
Here we have taken 1+x^3 */

double f(double x) {
	return 1 + x*x*x;
}

void Trapezoidal_Integral(double x_0, double x_n, int n) {
    /*initial and final values x_0, x_n. n is the number of points*/
	/*We divide region into n+1 points incl. x_0 and x_n. */
	double integral, sum;
	int i;
	double h = (x_n - x_0) / (n);    /*interval spacing*/
	sum =(f(x_n) + f(x_0)) / 2.0;    /*initial value of sum*/
	for(i = 1;i < n; i++){
		x_0 = x_0 + h;
		sum = sum + f(x_0);    /*Stores the values as per trap. Rule*/
	}
	integral = h * sum;
	printf("The integral is : %lf\n", integral);
}

/*function for simpsons rule for evaluating the integral*/

void Simpson_Integral(double x_0, double x_n, int n) {/*n is even*/
    /*initial and final values x_0, x_n. n is the number of points*/
	/*We divide region into n+1 points incl. x_0 and x_n. */
	double integral, sum;
	int i;
	double h = (x_n - x_0) / n;    /*interval spacing*/
	sum =(f(x_n) + f(x_0)) / 3.0;    /*initial value of sum*/
	for(i = 1;i < n; i++){
		x_0 = x_0 + h;
		sum += f(x_0) * ( (i % 2) ? TWO_BY_THREE: FOUR_BY_THREE );
		/*Stores the values as per Simpson Rule*/
	}
	integral = h * sum;
	printf("The integral is : %lf", integral);
}



int main() {
	Trapezoidal_Integral(0.0, 3.0, 10000);
	Simpson_Integral(0.0, 3.0,10000);
	return EXIT_SUCCESS;
}

