/*
C program to implement jacobi's method for solving a system of 
linear equations.

Jacobis method works when all of the diagonal elements of the 
augmented matrix is not equal to 0. 
So we can rearrange the equations to write:

        x1 = b1/a11 - a12/a11 x2 - a13/a23 x3 -...        (1)
        x2 = b2/a22 - a21/a22 x1 - a23/a22 x3 -...
        x3 = b3/a33 - a31/a33 x1 - a32/a33 x2 -...
        .
        .
        
 and so on for all equations.
*/

/*
We then take an initial approximate value for each of x1, x2, x3, ... and 
then from (1) and the other equations we obtain the next approximations for the 
values of x1, x2, x3...

We continue this process till the difference between two successive 
approximations does not become smaller than epsilon(specified).

*/

/*
This method is guarenteed to converge if the diagonal elements of the matrix
are non-zero and S = [sum of absolute value of the coefficients (aij/aii)
where j runs from 1 to n, j != i, i runs from  1 to n] is <=1 ie S <= 1.

In matrix notation, the process is written as:
    X(n+1) = BX(n) + C
    where, 
    X(n+1)  is the (n+1)th approx to the variables,
    X(n)    is the (n)th approx to the variables, 
    B       is the coefficient matrix after rearrangement, 
    C       is the constant matrix [b1/a11, b2/a22, ...]
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>       /*for fabs() function*/

#define SIZE 4       /*depends on the size, can be changed as per requirements*/

/*
Augmented Matrix Input takes the input for the augmented matrix of the 
system to be solved.
    @Input : mat[SIZE][SIZE+1] as augmented matrix
    @Output : None
*/

void Augmented_Matrix_Input(double mat[SIZE][SIZE+1]) {
	int i, j;
	printf("ENTER THE MATRIX ELEMENTS:\n");
	for(i = 0; i < SIZE; i++) {
		for(j = 0; j < SIZE + 1; j++) {    /*augmented matrix, size+1*/
			scanf("%lf", &mat[i][j]);
		}		
	}	
}

/*
MatMult is a function that multiplies the two matrices.
    @Input : A, B, C three matrices to be multiplied. The matrices are of 
    appropriate dimensions. The result is stored in C.
    @Output : None
*/

void MatMult(double A[][SIZE], double B[][1], double C[][1]) {
	int i, j, k;
	for(i = 0; i < SIZE; i++) {
	    C[i][0] = 0.0;
	        for(k = 0; k < SIZE; k++) {
		    C[i][0] += A[i][k] * B[k][0];
	        }
	}
}

/*
MatAdd is a function to add two matrices.
    @Input : A, B, C three double matrices of apt dimensions. The addition is
    handled in the function only and stored in C.
    @Output : None
*/

void MatAdd(double A[][1], double B[][1], double C[][1]) {
	int i, j;
	for(i = 0; i < SIZE; i++) {
		C[i][0] = A[i][0] + B[i][0];
	}
}

/*check_Mat function checks if further iterations need to be performed
    @Input = double X[][0] double Xprev[][0],
	     epsilon, checks if 2 values of the prev iterration
	     and curr iteration are less than epsilon or not.
    @Output = int 0 or 1, truth value of the check
*/

int check_Mat(double X[][1], double Xtemp[][1], double epsilon) {
	int i, count = 0;
    /*Check if relative error greater than tolerance or not */
	for(i = 0; i < SIZE; ++i) {
	    if(fabs( (Xtemp[i][0] - X[i][0]) / Xtemp[i][0] ) > epsilon) {
		    count++;
	    }
	}
	if(count)
	    return 1;
	else
	    return 0;
}

/*
Jacobi function calculates the solutions for the system.
    @Input : double pointer mat, the augmented matrix for the system.
	The calculation is done inside the function and the result is shown.
    @Output : None
*/

void Jacobi(double mat[SIZE][SIZE+1]) {
	double B[SIZE][SIZE];   /*Modified Coefficient matrix */
	double C[SIZE][1];      /*Constants matrix*/
	double X[SIZE][1];      /*Matrix for storing the iterative values*/
	double Xtemp[SIZE][1];  /*Temporary storage of Iterative values*/
	double Xprev[SIZE][1];  /*Stores previous Values for error checking*/
	register int i, j, t;

	/*epsilon is the required precesion, can change its value*/
	
	double epsilon = 0.000001;
	
	/*Initial approx is [0, 0, 0....]*/
	
	for(i = 0; i < SIZE ; i++) {
		Xprev[i][0] = Xtemp[i][0] = X[i][0] = 0.0;
	}
	
	/*Check if diagonal elements are non zero. If zero, show error and break*/
	
	for(i = 0; i < SIZE; i++) {
		if(fabs(mat[i][i] ) < epsilon){
			printf("CANNOT SOLVE!!!\n");
			exit(EXIT_FAILURE);
		}
	}
	
	/*Sets the matrix B as per structure shown above*/
	
	for(i = 0; i < SIZE; i++) {
		for(j = 0; j < SIZE ; j++) {
			/*If diagonal, set to 0. Else, divide by diagonal element*/
			if(i!=j) {
				B[i][j] = - mat[i][j] / mat[i][i];				
			} else {
				B[i][j] = 0.0;
            }
		}
  	}
	/*Set value of C as per structure shown above*/
	for(i = 0;i < SIZE; i++){
		C[i][0] = mat[i][SIZE] / mat[i][i];
	}

	MatMult(B, X, Xtemp);
	MatAdd(C, Xtemp, X);

	while(check_Mat(X, Xprev, epsilon)) {
		for(t = 0;t < SIZE; ++t) {
	    	Xprev[t][0] = X[t][0];
		}
		MatMult(B, X, Xtemp);
	    MatAdd(C, Xtemp, X);
	}
	
	for(j = 0;j < SIZE;j++) {
		printf("X[%d] = %lf\n", j, X[j][0]);
	}	
}

int main(){
	double mat[SIZE][SIZE+1];
	Augmented_Matrix_Input(mat);
	Jacobi(mat);
	return EXIT_SUCCESS;	
}

