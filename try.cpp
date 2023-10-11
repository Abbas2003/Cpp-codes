#include <iostream>
#include <climits>
using namespace std;

int main() {
    int size, arr[size];
//    int size = sizeof(arr) / sizeof(arr[0]);

	cout << "How many array elements you want? ";
	cin >> size;
	if(size < 3){
		cout << "Please enter more then 3!";
	} else {
		
	arr[size];
	for (int i=0; i<size; i+=1){
		cout << "Enter the element: ";
		cin >> arr[i];
	}

    int firstMax = 0;
    int secondMax = 0;
    int thirdMax = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > firstMax) {
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            thirdMax = secondMax;
            secondMax = arr[i];
        } else if (arr[i] > thirdMax && arr[i] != secondMax) {
            thirdMax = arr[i];
        }
    }

    std::cout << "First Maximum: " << firstMax << std::endl;
    std::cout << "Second Maximum: " << secondMax << std::endl;
    std::cout << "Third Maximum: " << thirdMax << std::endl;
    
    }

    return 0;
}

