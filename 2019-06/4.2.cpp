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

int Reverse(int number){
    int reversed = 0;
    while (number > 9){
        int digit = number % 10;
        reversed = reversed*10+digit;
        number = number / 10;
    }
    reversed = reversed*10+number;
    return reversed;
}

int main(){
    ifstream dane;
    dane.open("pierwsze.txt");
    int liczby[200];
    for (int i=0; i<200; i++){
        dane >> liczby[i];
    }
    ofstream out;
    out.open("wyniki4_2.txt");
    for (int i=0; i<200; i++){
        if(Prime(Reverse(liczby[i]))){
            out << liczby[i] << endl;
        }
    }
}