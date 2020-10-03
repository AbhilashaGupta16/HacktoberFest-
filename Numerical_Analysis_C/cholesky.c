/*
 * File created by Sandip Dutta 
 * 04.05.2020 22:41:49 
*/

// To implement Cholesky Matrix Decomposition in C
// Cholesky method is a method which reduces a matrix to
// the form : A = L * L^t, Where L is a Lower triangluar matrix
// L^t is the conjugate transpose of L. 
// Here A must be a Hermitian positive definite matrix

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// SIZE is the matrix size for this particular program
#define SIZE 3
//VALUE gives the value of matrix element at index (i, j)
#define VALUE(L,i,j) (*(L + i * SIZE + j)) 

double* Cholesky_Decomposition(double *A);
void print_matrix(double *A);

int main(){
    // Input matrix, entered as array
	double mat[]= { 
		4.0, 12.0, -16.0,
		12.0, 37.0, -43.0,
		-16.0, -43.0, 98.0
		};
	
	double* decomposed_matrix = Cholesky_Decomposition(mat);
	print_matrix(decomposed_matrix);
	free(decomposed_matrix);	
    
	return 0;
}

/*
 * 
 * name: Cholesky_Decomposition
 * @param : double *A, contains a pointer to the matrix to be factorised
 * @return : double* L, pointer to decomposed matrix
 * 
 */

double* Cholesky_Decomposition(double *A){
	register int i, j, k;
	// sum is the sum of elements before jth index of each loop
	double sum_ = 0.0;
	//L will contain the decomposition of the matrix A	
	double* L = (double*)calloc(SIZE*SIZE, sizeof(double));
	
	for(i = 0; i < SIZE; ++i){
		// j till i to scan elements below main diagonal of matrix A		
		for(j = 0; j < i + 1; ++j){
			//reset sum for each loop of j as per formula	
			sum_ = 0.0;
			// Calculate sum		
			for(k = 0; k < j; ++k)
			    sum_ += VALUE(L,i,k)* VALUE(L,j,k);
			// if i == j then put the value as is the formula    
			if(i == j){					
			    VALUE(L,i,j) = sqrt(VALUE(A,j,j) - sum_);
			}
			else{				
				VALUE(L,i,j) = (VALUE(A,i,j) - sum_) / VALUE(L,j,j);
			}
		}
		
	}
	// Return pointer to decomposed matrix
	return L;
}

/*
 * 
 * name: print_matrix
 * @param: double* A, matrix to be printed
 * @return: None
 * 
 */

void print_matrix(double* A){
	register int i, j;
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; ++j){
			printf("%3.2lf\t" , VALUE(A,i,j));
		}
		printf("\n");
	}
}
					
					
			
			
	
	

