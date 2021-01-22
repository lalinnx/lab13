#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int x=1; x<N; x++){
		for(int i=x;i>0;i--){
			if(d[i]>d[i-1]){
				T z= d[i];
				d[i]=d[i-1];
				d[i-1]=z;
			}
		}
		cout << "Pass "<< x <<":";
		for(int p = 0; p < 10; p++) cout << d[p] << " "; 
		cout <<"\n";
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
