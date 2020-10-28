#include <iostream>
#include <fstream>
using namespace std;

bool Prime(int number){
    if (number == 1){
        return 0;
    }
    else{
        int d = 0;
        for (int x=2; x<number/2+1; x++){
            if (number % x == 0){
                d++;
            }
        }
        if (d == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int main(){
    ifstream dane;
    dane.open("liczby.txt");
    int liczby[300];
    for (int i=0; i<300; i++){
        dane >> liczby[i];
    }
    ofstream out;
    out.open("wyniki4_1.txt");
    for (int i=0; i<300; i++){
        if(liczby[i] >= 100 and liczby[i] <= 5000){
            if (Prime(liczby[i])){
                out << liczby[i] << endl;
            }
        }
    }
}