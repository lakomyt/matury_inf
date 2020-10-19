#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream dane;
    dane.open("liczby.txt");
    string liczby[999];
    for (int i=0; i<999; i++){
        dane >> liczby[i];
    }
    int counter = 0;
    for (int i=0; i<999; i++){
        char system = liczby[i][liczby[i].length()-1];
        if (system == '8'){
            counter++;
        }
    }
    cout << "Liczby zapisane ósemkowo: " << counter;
}