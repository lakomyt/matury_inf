#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

int to_decimal(string number){
    int number_dec = 0;
    char base = number[number.length()-1];
    for (int i=number.length()-2; i>=0; i--){
        number_dec += (int)(number[i]-'0') * pow((int)(base-'0'),number.length()-2-i);
    }
    return number_dec;
}

int main(){
    fstream dane;
    dane.open("liczby.txt");
    string liczby[999];
    for (int i=0; i<999; i++){
        dane >> liczby[i];
    }
    int min = to_decimal(liczby[0]);
    string min_code = liczby[0];
    int max = to_decimal(liczby[1]);
    string max_code = liczby[1];
    for (int i=0; i<999; i++){
        int liczba = to_decimal(liczby[i]);
        if (liczba>max){
            max = liczba;
            max_code = liczby[i];
        }
        else if (liczba<min){
            min = liczba;
            min_code = liczby[i];
        }
    }
    cout << "Liczba min: " << min_code << " wartosc dziesietna: " << min << endl;
    cout << "Liczba max: " << max_code << " wartosc dziesietna: " << max << endl;
}