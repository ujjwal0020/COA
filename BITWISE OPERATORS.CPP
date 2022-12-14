#include <iostream>
using namespace std;

int main() {
	// a = 5(00000101), b = 9(00001001)
	int a = 5, b = 9;

	// The result is 00000001
	cout<<"a = " << a <<","<< " b = " << b <<endl;
	cout << "a & b = " << (a & b) << endl;  //bitwise and

	// The result is 00001101
	cout << "a | b = " << (a | b) << endl;   //bitwise or

	// The result is 00001100
	cout << "a ^ b = " << (a ^ b) << endl;     //bitwise x-or

	// The result is 11111010
	cout << "~a = " << (~a) << endl;           //bitwise not

	// The result is 00010010
	cout<<"b << 1" <<" = "<< (b << 1) <<endl;         //bitwise left shift

	// The result is 00000100
	cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;         //bitwise right shift

	return 0;
}
