#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream dane;
	dane.open("liczby.txt");
	int c=0;
	for (int i=0; i<500; i++){
		int n;
		dane >> n;
		bool y=1;
		while (n > 1){
			if (n % 3 != 0){
				y=0;
			}
			n = n/3;
		}
		if (y==1){
			c++;
		}
	}
	cout << c;
}