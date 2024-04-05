#include<iostream>
using namespace std;
int main(){
	int a ,b ;// bài này sẽ là nhập vào 2 số bất kỳ nhưng chỉ hiển thị từ a đến 50 ;
	cin  >> a >> b;
	for(int i=a;i<=b;i++){
		if(i>50){
			break;
		}
		cout << i << endl;
		
	}
	return 0;
}