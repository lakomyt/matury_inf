#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream dane;
    dane.open("liczby.txt");
    string liczby[1000];
    for (int x=0; x<1000; x++){
        dane >> liczby[x];
    }
    int ilosc=0;
    for (int x=0; x<1000; x++){
        int zera = 0;
        int dlugosc = liczby[x].length();
        for (int l=0; l<liczby[x].length(); l++){
            if (liczby[x][l]=='0'){
                zera++;
            }
        }
        if (dlugosc / 2 < zera){
            ilosc++;
        }
    }
    cout << ilosc;
}