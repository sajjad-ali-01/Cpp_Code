#include<iostream>
using namespace std;
int main()
{
	int Num, P;
	cout<<"Enter  any positive  Number"<<endl;
	cin>>Num;
	cout<<"Prime Numbers between 1 and "<<Num<<" = ";
	for(int i=2;i<=Num;i++){
		P=0;
		for(int j=2;j<=i/2;j++){
			if(i % j ==0){
				P=1;	
			}
		}
		if(P==0 && Num!=1){
			cout<<i<<"  ";
		}
		
	}

} 

