#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream dane;
    dane.open("liczby2.txt");

    int liczba, liczba_p, aktualna;
    dane >> liczba_p;
    int l = 1;
    aktualna = liczba_p;

    int l_max = 1;
    int liczba_max = liczba;

    for (int i=0; i<999; i++){
        dane >> liczba;
        if (liczba >= aktualna){
            l++;
            aktualna = liczba;
        }
        else{
            if (l > l_max){
                l_max = l;
                liczba_max = liczba_p;
            }
            l = 1;
            liczba_p = liczba;
            aktualna = liczba;
        }
    }
    cout << "Pierwszy element: " << liczba_max << ", dlugosc: " << l_max;
    return 0;
}