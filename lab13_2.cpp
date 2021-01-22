#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double A[][N]){
	for (int i=0;i<N;i++){
		cout <<"Row " << i+1 <<": ";
		for (int x=0;x<N;x++) cin >> A[i][x];
	}
}

void findLocalMax(const double A[][N], bool B[][N]){
	for (int i=0;i<N;i++){
		for (int x=0;x<N;x++) B[i][x]=0;
	}
	for (int i=1;i<N-1;i++){
		for (int x=1;x<N-1;x++){
			if(A[i][x]>=A[i-1][x] && A[i][x]>=A[i][x-1] && A[i][x]>=A[i+1][x] && A[i][x]>=A[i][x+1]) B[i][x]=1;
		}
	}
}

void showMatrix(const bool B[][N]){
	for (int i=0;i<N;i++){
		for (int x=0;x<N;x++){
		    cout << B[i][x] << " ";
		}
		cout << "\n";
	}
}