#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main(){
    fstream dane;
    dane.open("dane4.txt");
    int liczby[1000];
    for (int i=0; i<1000; i++){
        dane >> liczby[i];
    }

    int luki[999];
    for (int i=0; i<999; i++){
        luki[i] = abs(liczby[i]-liczby[i+1]);
    }

    int ilosc_luki[999];
    for (int i=0; i<999; i++){
        ilosc_luki[i] = 0;
    }
    for (int i=0; i<999; i++){
        int luka = luki[i];
        for (int j=i; j<999; j++){
            if (luka == luki[j]){
                ilosc_luki[i]++;
            }
        }
    }

    int max_ilosc = ilosc_luki[0];
    int max_index = 0;
    for (int i=0; i<999; i++){
        if (ilosc_luki[i] > max_ilosc){
            max_ilosc = ilosc_luki[i];
            max_index = i;
        }
    }
    cout << "Krotność najczęstszej: " << max_ilosc << endl;
    for (int i=0; i<999; i++){
        if (ilosc_luki[i] == max_ilosc){
            cout << "Luka: " << luki[i] << endl;
        }
    }
}