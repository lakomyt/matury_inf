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
    ifstream dane("probka.txt");
    for(int i=0; i<5; i++){
        string slowo;
        string szyfr;
        dane >> slowo;
        dane >> szyfr;
        for (int A=0; A<26; A++){
            for (int B=0; B<26; B++){
                if(szyfruj(slowo,A,B) == szyfr){
                    cout << "Klucz szyfrujący: (" << A << ", " << B << ")" << endl;
                }
                if(szyfruj(szyfr,A,B) == slowo){
                    cout << "Klucz deszyfrujący: (" << A << ", " << B << ")" << endl;
                }
            }
        }
    }
}