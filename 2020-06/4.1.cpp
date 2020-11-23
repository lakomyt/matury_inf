#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isPrime(int n){
    if (n==1){
        return 0;
    }
    for (int i=2; i < n/2+1; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    fstream dane;
    dane.open("pary.txt");
    int liczba;
    string slowo;
    for (int i=0; i<100; i++){
        dane >> liczba;
        dane >> slowo;
        if (liczba % 2 == 0 and liczba > 4){
            for (int j=1; j<liczba; j+=2){
                if (isPrime(j)){
                    if (isPrime(liczba-j)){
                        cout << liczba << " " << j << " " << liczba-j << endl;
                        break;
                    }
                }
            }
        }
    }
}