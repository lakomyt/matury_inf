#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

int to_decimal(string number_oct){
    int number = 0;
    for (int i=number_oct.length()-2; i>=0; i--){
        number += (int)(number_oct[i]-'0') * pow(8,number_oct.length()-2-i);
    }
    return number;
}

int main(){
    fstream dane;
    dane.open("liczby.txt");
    string liczby[999];
    for (int i=0; i<999; i++){
        dane >> liczby[i];
    }
    int sum = 0;

    for (int i=0; i<999; i++){
        char system = liczby[i][liczby[i].length()-1];
        if (system == '8'){
            sum += to_decimal(liczby[i]);
        }
    }
    cout << "Suma liczb óśemkowych (dziesiętnie): " << sum;
}