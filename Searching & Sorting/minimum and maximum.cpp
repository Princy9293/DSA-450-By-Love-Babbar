#include<iostream>
using namespace std;

void findMinMax(int arr[], int n) {
	
	int min;
	int max;

	if(n==1) {
		min=arr[0];
		max=arr[0];
	
	}

		if(arr[0]>arr[1]) {
		min=arr[1];
		max=arr[0];
		}
		else {
		max=arr[1];
	max=arr[0];
		}
	
	
	for(int i=2;i<n;i++) {
			if(arr[i]>max) {
				max=arr[i];
			}
			else if(arr[i]<min) {
				min=arr[i];
			}

	}
	
	cout<<"min: "<<min<<"max: "<<max<<endl;
}
int main() {
	int arr[]={1,2,3,4,5};
	findMinMax(arr,5);
	return 0;
	
}
