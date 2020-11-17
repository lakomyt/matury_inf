#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string szyfruj(string slowo, int k=107){
    for (int i=0; i < slowo.length(); i++){
        slowo[i] = (slowo[i] - 'A' + k) % 26 + 'A';
    }
    return slowo;
}

int main(){
    ifstream dane;
    dane.open("dane_6_1.txt");
    ofstream out;
    out.open("wyniki_6_1.txt");
    string slowo;
    for (int i=0; i<100; i++){
        dane >> slowo;
        out << szyfruj(slowo) << endl;
    }
}