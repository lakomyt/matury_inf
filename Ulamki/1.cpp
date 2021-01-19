#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream dane;
    dane.open("dane_ulamki.txt");
    int a,b;
    int minA, minB;
    dane >> minA;
    dane >> minB;

    for (int i=0; i<998; i++){
        dane >> a;
        dane >> b;

        if (a*minB < minA*b){
            minA = a;
            minB = b;
        }
        else if (a*minB == minA*b && b < minB){
            minA = a;
            minB = b;
        }
    }

    cout << minA << " " << minB << endl;

    return 0;
}