#include <iostream>
#include <cmath>
using namespace std;
struct Comp_nums{
double real1 , real2 ,img1 , img2 ;};
void add( Comp_nums &c ){
	cout<<endl<<"The sum of the two complex numbers: "<<endl
   <<" (" << c.real1 << "+" << c.img1  << "i) + (" << c.real2 << "+" << c.img2 << "i) "
    << "= " << c.real1+c.real2 << "+" << c.img1 + c.img2 << "i" ;}
void subt( Comp_nums &c ){
cout<<endl<<"\nThe subtraction of the two complex numbers: "<<endl
  <<  "(" << c.real1 << "+" << c.img1 << "i) – (" << c.real2 << "+" << c.img2 << "i) " ;
	if( c.img1 - c.img2 < 0 ){
  cout<<" = " << c.real1-c.real2 << "+(" << c.img1 - c.img2 << ")i" ;}
else{
  cout << "= " << c.real1-c.real2 << "+" << c.img1 - c.img2 << "i" ;}
}
void multiply( Comp_nums &c ){
cout<<endl<<"\nThe product of the two complex numbers: "<<endl
  << "(" << c.real1 << "+" << c.img1 << "i) * (" << c.real2 << "+" << c.img2 << "i) "
  << "= " << (c.real1*c.real2)- (c.img1*c.img2) << "+" << (c.img1*c.real2) + (c.img2*c.real1) << "i" ;}
void divide( Comp_nums &c){
cout<<endl<<"\nThe division of the two complex numbers: "<<endl
  << " (" << c.real1 << "+" << c.img1 << "i) / (" << c.real2 << "+" << c.img2 << "i) "
  << "= (" << (c.real1*c.real2)+(c.img1*c.img2) << "/" << pow(c.real2,2) + pow(c.img2,2) 
  << ")+(" << (c.img1*c.real2) - (c.img2*c.real1) << "/" << pow(c.real2,2) + pow(c.img2,2) << ")i" ;}
int main(){
Comp_nums c ;
cout<<"Enter the real and imaginary value of the first complex number"<<endl ;
cin >> c.real1 >> c.img1 ;
cin.ignore() ;
cout<<endl<<"Enter the real and imaginary value of the second complex number"<<endl ;
cin>> c.real2 >> c.img2 ;
cin.ignore() ;
add(c) ; 
subt(c) ; 
multiply(c) ; 
divide(c) ;
return 0 ;} 
