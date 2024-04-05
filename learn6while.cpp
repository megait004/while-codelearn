#include<iostream>
using namespace std ;
int main(){
	int a , b ;
	cin >> a >> b;
	while(a<=b){
       if(a%2!=0){
       	cout << a << endl;
	   }
	   a++;
	}
	return 0;
}