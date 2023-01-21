#include<iostream>
using namespace std;
int main() {
	int arr1[10],arr2[10];
	for(int i=0;i<10;i++){
		cout<<"enter number:";
		cin>>arr1[i];
	}
	int j=0;
	for(int i=9;i>=0;i--){
		arr2[i]=arr1[j];
		j++;
	}
	for(int i=0;i<10;i++){
		cout<<" "<<arr2[i];
	}
	return 0;
}