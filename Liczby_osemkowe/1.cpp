#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream dane;
    dane.open("liczby1.txt");
    int min = 1000000;
    int max = 0;
    int liczba;
    for (int i=0; i<1000; i++){
        dane >> liczba;
        if (liczba < min){
            min = liczba;
        }
        else if (liczba > max){
            max = liczba;
        }
    }
    cout << "min: " << min << ", max: " << max;
    return 0;
}