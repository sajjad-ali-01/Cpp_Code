#include<iostream>
using namespace std;
int fib(int nums);

int main(){
	int k,nums;
	cout<<"Enter number of terms of series: ";
	cin>>nums;
	cout<<endl<<"fibonnaci series is: ";
	while(k<nums){
		cout<<" "<<fib(k);
		k++;
	}
	return 0;
	
}

int fib(int nums){
	if (nums==1 || nums==0){
		return (nums);
	}
	else {
		return (fib(nums-1)+fib(nums-2));
	}
}
