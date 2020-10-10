#include<stdio.h>
#include<stdlib.h>
void merge(int A[], int p, int q, int r){
	int i,j,k;
	int n1 = (q - p) + 1 ;
	int n2 =(r - q);
	int L[n1], R[n2];
	for( i =0; i< n1; i++){
		L[i]= A[p + i];
	}
	for(j =0; j < n2; j++){
		R[j] = A[q + 1 +j ];
	}
	i = 0;
	j = 0;
	k = p;
	while ( i< n1 && j < n2){
		if(L[i] <= R[j]){
			A[k]= L[i];
			i++;
		}
		else{
			A[k]= R[j];
			j++;
		}
		k++;	
	}
	while( i < n1){
		A[k] = L[i];
		i++;
		k++;
	}
	while( j < n2){
		A[k]= R[j];
		j++;
		k++;
	}
}
void mergesort(int A[], int p, int r){
	if (p < r){
		int q = p +(r -1)/2;
		mergesort(A, 1, q);
		mergesort(A, q+1, r);
		merge(A,p,q,r);
	}
}
void printArray(int A[], int size){
	int i;
	for(i =0; i < size ; i++){
		printf("%d",A[i]);
	printf("\n");
	}
}
int main(){
	int A[] = {75,22,7,55,1};
	int A_size = sizeof(A)/ sizeof(A[0]);
	printArray(	A, A_size);
	mergesort(A, 0, A_size -1);
	printArray(A, A_size);
	return 0;
}
