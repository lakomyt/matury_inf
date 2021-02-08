#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int from_oct(int oct){
    int n = 0;
    int c = 0;
    while (oct > 0){
        n = n + oct%10*(pow(8,c));
        c++;
        oct = oct/10;
    }
    return n;
}

int main(){
    ifstream dane1;
    ifstream dane2;
    dane1.open("liczby1.txt");
    dane2.open("liczby2.txt");
    int liczbaA;
    int liczbaB;
    int cA = 0;
    int cB = 0;
    for (int i=0; i<1000; i++){
        dane1 >> liczbaA;
        dane2 >> liczbaB;
        if (liczbaB == from_oct(liczbaA)){
            cA++;
        }
        else if(from_oct(liczbaA) > liczbaB){
            cB++;
        }
    }
    cout << "Liczby o takiej samej wartości: " << cA << endl << "Liczby z pliku liczby1 wieksze od liczby2: " << cB;
    return 0;
}