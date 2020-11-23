#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream dane;
    dane.open("pary.txt");
    int liczba;
    string slowo;
    for (int i=0; i<100; i++){
        dane >> liczba;
        dane >> slowo;
        int max = 1;
        char Mletter = slowo[0];
        int c = 1;
        char letter = slowo[0];
        for (int l=1; l<slowo.length(); l++){
            if (slowo[l] == slowo[l-1]){
                c++;
            }
            else{
                if (c > max){
                    Mletter = letter;
                    max = c;
                }
                c = 1;
                letter = slowo[l+1];
            }
        }
        if (c > max){
            Mletter = letter;
            max = c;
        }
        for (int q=0; q<max; q++){
            cout << Mletter;
        }
        cout << " " << max << endl;
    }
}