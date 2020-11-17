#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string odszyfruj(string slowo, int k){
    for (int i=0; i < slowo.length(); i++){
        int v = k%26;
        slowo[i] = slowo[i] - v;
        if (slowo[i] < 'A'){
            slowo[i]+=26;
        }
    }
    return slowo;
}

int main(){
    ifstream dane;
    dane.open("dane_6_2.txt");
    ofstream out;
    out.open("wyniki_6_2.txt");
    string slowo;
    int k;
    for (int i=0; i<3000; i++){
        dane >> slowo;
        dane >> k;
        out << odszyfruj(slowo,k) << endl;
    }
}