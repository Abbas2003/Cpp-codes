#include<iostream>
using namespace std;

int main(){
	int firstLargest=0, secondLargest=0, thirdLargest=0, size, array[size];
//	Size of Array
	cout << "Enter size of array: ";
	cin >> size;
	if (size <= 3){
		cout << "Please enter more then three." << endl;
	} else {
	
	array[size];
//	Taking user-input an array
	for(int i=0; i<size; i++){
		cout << "Enter element: ";
		cin >> array[i];
	}
	
//	Displaying Array
	cout << "You Array: ";
	for(int i=0; i<size; i++){
		cout << array[i] << endl;
	}	
	
		for (int i=0; i<size; i++){
			if(array[i] > firstLargest){
				thirdLargest = secondLargest;
        		secondLargest = firstLargest;
        		firstLargest = array[i];
    }
   			else if (array[i] > secondLargest && array[i] != firstLargest) {
        		thirdLargest = secondLargest;
        		secondLargest = array[i];
    }
    		else if (array[i] > thirdLargest && array[i] != firstLargest && array[i] != secondLargest) {
        		thirdLargest = array[i];
    }
			}
			
			cout << "First Largest number: " << firstLargest << endl;
			cout << "Second Largest number: " << secondLargest << endl;
			cout << "Third Largest number: " << thirdLargest << endl;	
	}
	
	
	return 0;
}
