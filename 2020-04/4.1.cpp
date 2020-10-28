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
    int min = abs(liczby[0]-liczby[1]);
    int max = abs(liczby[0]-liczby[1]);
    for (int i=0; i<999; i++){
        if (abs(liczby[i]-liczby[i+1]) < min){
            min = abs(liczby[i]-liczby[i+1]);
        }
        else if(abs(liczby[i]-liczby[i+1]) > max){
            max = abs(liczby[i]-liczby[i+1]);
        }
    }
    cout << "Min: " << min << ", max: " << max;
}