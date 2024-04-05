#include<iostream>
using namespace std;
int main(){
	int a ,b;
	cin >> a >> b;
	int result =1; // khai báo biến kết quả để mỗi khi lặp lấy kết quả nhân lại cho a
	while(b>0){	// phaỉ cho điều kiện b lớn hơn 0 vì b là số lần lặp 
	
		result*=a;
		b--;
	}
	cout << result;
	return 0;
}