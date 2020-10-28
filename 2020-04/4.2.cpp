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
    int diff = -1;
    int c = 0;
    int last = 0;

    int Ndiff = -1;
    int Nc = 0;
    int Nlast = 0;
    for (int i=0; i<998; i++){
        if (abs(liczby[i]-liczby[i+1]) == abs(liczby[i+1]-liczby[i+2])){
            if (abs(liczby[i]-liczby[i+1]) == Ndiff){
                Nc++;
                Nlast = i+2;
            }
            else{
                Nc = 3;
                Nlast = i+2;
                Ndiff = abs(liczby[i]-liczby[i+1]);
            }
        }
        else{
            if(c < Nc){
                c = Nc;
                last = Nlast;
                diff = Ndiff;
            }
            else{
                Nc = 0;
                Ndiff = -1;
            }
        }
    }
    cout << "Luka: " << diff << ", długość: " << c << ",\npierwszy: " << liczby[last-c] << ", ostatni: " << liczby[last];
}