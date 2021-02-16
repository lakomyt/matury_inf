#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string szyfruj(string slowo, int A, int B){
    string out="";
    int l;
    for (int i=0; i<slowo.length(); i++){
        l = ((int)slowo[i]-97)*A+B;
        l = l%26+97;
        out = out + (char)l;
    }
    return out;
}

int main(){
    ifstream dane("tekst.txt");
    for(int i=0; i<805; i++){
        string slowo;
        dane >> slowo;
        if (slowo.length() >= 10){
            cout << szyfruj(slowo, 5, 2) << endl;
        }
    }
}