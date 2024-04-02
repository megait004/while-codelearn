#include<iostream>
using namespace std;
int main(){
	
	int n;
	int dem;
	cin >> n;
	for(int i=1;i<=n;i++){
		if(n%i==0&&i<=n){
	  	//cout << i << endl;
		dem=dem+1;
			  
		}
		
		
	}
	cout << dem;

	return 0;
	
}