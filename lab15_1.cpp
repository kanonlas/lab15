#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){

	 for(int i = 1; i < N; i++){

		for(int j = i; j > 0; j--){
		if(d[j-1] < d[j]){
			T w = d[j];
              d[j] = d[j-1];
	          d[j-1] = w;
		}
		}
	    cout << "pass " << i << ":";
		for(int i = 0; i < N; i++) cout << d[i] << " ";
		cout << "\n";
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

/*template <typename T>
void insertionSort(T d[],int N){
    for(int i = 0; i < N; i++){
		if(d[i] > d[i+1]){
			swap(d, i, i+1);
			for(int i = 0; i < N; i++) cout <<"Pass 1 :" << d[i] << " ";
		}else if(d[i] <= d[i-1]){
			break;
		}
}
}*/
