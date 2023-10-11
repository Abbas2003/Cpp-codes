#include<iostream>
using namespace std;

int main() {
	int array[10],initial,max=0;
	cout << "How many array elements you want? ";
	cin >> initial;
	
	for (int i=0; i<initial; i+=1){
		cout << "Enter the element";
		cin >> array[i];
	}
	
	cout << "Your array:" << endl;
	
	for (int i=0; i<initial; i+=1){
		cout << array[i] << endl;
	}
	
	for(int i=0; i<initial; i++){
		if(array[i] > max){
			max = array[i];
		}
	}
	
	cout << "Largest number in an array is: " << max;
	
	return 0;
}
