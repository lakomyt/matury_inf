#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int to_oct(int dec){
    int oct = 0;
    int c=0;
    while (dec > 0){
        oct = oct + dec%8*pow(10,c);
        dec = dec/8;
        c++;
    }
    return oct;
}

int how_many_sixes(int n){
    int c = 0;
    while(n > 0){
        if (n%10 == 6){
            c++;
        }
        n = n/10;
    }
    return c;
}

int main(){
    ifstream dane;
    dane.open("liczby2.txt");
    int liczba;
    int c = 0;
    int c8 = 0;
    for (int i=0; i<1000; i++){
        dane >> liczba;
        c += how_many_sixes(liczba);
        c8 += how_many_sixes(to_oct(liczba));
    }
    cout << "Ilość 6: " << c << endl << "Ilosc 6 w postaci 8: " << c8 << endl;
    cout << to_oct(123);
    return 0;
}