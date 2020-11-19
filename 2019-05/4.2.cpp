#include <iostream>
#include <fstream>
using namespace std;

int silnia(int cyfra){
    int s = 1;
    for(int i=1; i<=cyfra; i++){
        s *= i;
    }
    return s;
}

int silnia_cyfr(int liczba){
    int s = 0;
    while (liczba >= 1){
        s += silnia(liczba%10);
        liczba = liczba / 10;
    }
    return s;
}

int main(){
	ifstream dane;
	dane.open("liczby.txt");
	for (int i=0; i<500; i++){
        int n;
		dane >> n;
        if (silnia_cyfr(n) == n){
            cout << n << endl;
        }
    }
}