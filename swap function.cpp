#include<iostream>
using namespace std;
//function declaration
void swap(int &p, int &t){
	int n;
	n = p; //save value of p
	p = t; //add value of p into t
	t = n; 
}
int main(){
	int a = 300;
	int b = 200;
	cout<<"Before swap, value of a: "<<a<<endl;
	cout<<"Before swap, value of b: "<<b<<endl;
	swap(a, b); //calling function to swap values.	
	cout<<"After swap value of a: "<<a<<endl;
	cout<<"After swap value of b: "<<b<<endl;
	return 0;
}


