#include<iostream>
#include <string>
using namespace std;

int main(){
	int shift = 0;
	char strArr[] = "AAAA";
	cout << "Please enter words to encrypt" << endl;
	cin >> strArr;
	cout <<"Thank you, now enter Caesar shift" << endl;
	cin >> shift;
	char *pStrArr = strArr;
	
	while(*pStrArr){                                                                                                              
		*pStrArr += shift;
		pStrArr += 1;
	}
	cout << strArr << endl;
	return 0;
}
