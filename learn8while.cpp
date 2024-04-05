#include<iostream>
using namespace std ;
int main(){
	int a ;
	cin >> a ;
	while (a<=1000){
		if(a%10==0){
			cout << a  <<endl;
			
		}
		a++;
	}
	return 0;
}