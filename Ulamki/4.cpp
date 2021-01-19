#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ifstream dane;
    dane.open("dane_ulamki.txt");

    int b = 2*2*3*3*5*5*7*7*13;
    int suma = 0;
    int x,y;

    for (int i=0; i<1000; i++){
        dane >> x;
        dane >> y;

        suma = suma + x * (b/y);
    }

    cout << suma << endl;

    return 0;
}