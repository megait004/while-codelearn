#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int dem;
	int i=1;
	while(i<=n){
		if(n%i==0&&i<=n){
			dem=dem+1;
			
		}
		i++;
	}
	cout << dem;
	return 0;
}