#include <iostream>
#include <fstream>
using namespace std;

void sorguYes(int index) {
	cout << "Yes " << index << endl;
}

void sorguNo(int index){
	cout << "No " << index << endl;
}

void bubbleSort(int arr[], int N){
    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
	}
}

int binarySearch(int arr[], int N, int target){
    int left= 0;
    int right=N;
    while(left < right){
        int mid= left+(right - left)/2;
        if(arr[mid]<target){
            left = mid+1;
        }else{
            right = mid;
        }
    }
    return left;
}

int diffInt(int arr[], int left, int right){
    int counter=0;
    if(left >= right) return 0;

    for(int i = left; i < right; i++){
        if(arr[i] != arr[i+1]) counter++;
    }

    return counter;
    
}

int main()
{
    ifstream myFile("lab_input02-B.txt");
    if (!myFile.is_open()) return -1;

    int N,Q,target;
    myFile >> N;

    int* arr = new int[N];

    for(int i=0; i<N; i++){
        myFile>>arr[i];
	}

	bubbleSort(arr, N);

    myFile >> Q;

    for (int i = 0; i < Q / 2; i++) {
        int x1, x2;
        myFile >> x1 >> x2;

		int leftIndex = binarySearch(arr, N, x1);
        int rightIndex = binarySearch(arr, N, x2);

        if(leftIndex < N && arr[leftIndex] == x1) sorguYes(leftIndex+1);
		else sorguNo(leftIndex + 1);

		if(rightIndex < N && arr[rightIndex] == x2) sorguYes(rightIndex + 1);
		else sorguNo(rightIndex + 1);

        if (leftIndex >= rightIndex){
            cout << 0 << endl;
        }else{
           int diff = diffInt(arr, leftIndex, rightIndex - 1);
           cout << diff + 1 << endl;
        }
    }

	myFile.close();
	delete[] arr;

    return 0;
}

