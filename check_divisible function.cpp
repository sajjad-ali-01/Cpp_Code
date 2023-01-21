#include<iostream>
using namespace std;
void check_divisible(int n){
	for(int i=1;i<=n;i++){
		if(i % 4 == 0){
			cout<<"number is devisible by 4 =";
		}
		else{
			cout<<"non";
		}
	}
}
int main(){
	
	check_divisible(18);
}
