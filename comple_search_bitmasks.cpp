// Competitive Programmer's Handbook. Antti Laaksonen  Chapter 5 Complete search 
// Generating subsets Method 2  bit representation of integers.
//
// Printing numbers in binary format in C++ 
// https://katyscode.wordpress.com/2012/05/12/printing-numbers-in-binary-format-in-c/


#include <iostream>
using namespace std;

int main() {
	int n=6;
	int x[6] ={ 1, 2, 3, 4, 5,6};
	int k = 12;
	
	cout << (1<<n) <<  endl;
	for (int b = 0; b < (1<<n); b++) {
		  cout << b <<": ";
		  for (int i = n-1 ; i >= 0; i--){
    			cout << ((b >> i) & 1);
		   }
		   cout  <<  endl;
			
	}
	return 0;
}