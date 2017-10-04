#include <iostream>

using namespace std;

inline int zs(int i){
	return i+1;
}

int main(){
	int num;
	num=1;
	cin >> num;
	cout << zs(num) << endl;
	cout << "num = " << num << endl;
	cout << "Hello world!" << endl;


	
	return 0;
}
