#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

bool prime(int number){
    int d = 0;
    if (number == 1){
        return 0;
    }
    for (int i=1; i<=sqrt(number); i++){
        if (number % i == 0){
            d++;
        }
    }
    if (d==1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    fstream dane;
    dane.open("punkty.txt");
    int punkty[1000][2];
    for (int i=0; i<1000; i++){
        dane >> punkty[i][1];
        dane >> punkty[i][2];
    }
    int c=0;
    for (int i=0; i<1000; i++){
        if (prime(punkty[i][1]) and prime(punkty[i][2])){
            c++;
        }
    }
    cout << "Ilość punktów z liczbami pierwszymi: " << c;
}