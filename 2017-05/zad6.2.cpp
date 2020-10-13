#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
using namespace std;

int main(){
    int obraz[200][320];
    ifstream dane;
    dane.open("dane.txt");
    for (int i=0; i<200; i++){
        for (int j=0; j<320; j++){
            dane >> obraz[i][j];
        }
    }
    int niepalindromy = 0;
    for (int wiersz=0; wiersz<200; wiersz++){
        for (int kolumna=0; kolumna<160; kolumna++){
            if (obraz[wiersz][kolumna] != obraz[wiersz][319-kolumna]){
                niepalindromy++;
                break;
            }
        }
    }
    cout << niepalindromy;
}

