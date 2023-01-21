#include<iostream>
using namespace std;

int f(int x){
	
	if(x % 2 ==0){
		cout<<" even number";
	}
	else{
		cout<<" odd number";
	}
	return x;
	
}

int main(){
	int c;
	cout<<"enter any number: ";
	cin>>c;
	f(c);
}
