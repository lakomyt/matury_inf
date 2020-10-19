#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool includes_zero(string liczba){
    int zera = 0;
    for (int i=0; i<liczba.length()-1; i++){
        if (liczba[i] == '0'){
            zera++;
        }
    }
    if(zera>0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    fstream dane;
    dane.open("liczby.txt");
    string liczby[999];
    for (int i=0; i<999; i++){
        dane >> liczby[i];
    }
    int counter = 0;
    for (int i=0; i<999; i++){
        if (liczby[i][liczby[i].length()-1] == '4'){
            if (!includes_zero(liczby[i])){
                counter++;
            }
        }
    }

    cout << "Liczby czwórkowe nie zawierające zera: " << counter;
}