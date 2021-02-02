#include <iostream>
#include <fstream>
using namespace std;

int rev(int liczba){
    int reversed = 0;
    while (liczba > 0){
        reversed = reversed*10 + liczba % 10;
        liczba = liczba/10;
    }
    return reversed;
}

int main(){
    ifstream dane;
    dane.open("liczby.txt");
    int c=0;
    int liczba;
    for (int i=0; i<1000; i++){
        dane >> liczba;
        int reversed = rev(liczba);
        int sum = liczba + reversed;
        int sum_reversed = rev(sum);
        if (sum_reversed == sum){
            c++;
        }
    }
    cout << c;
}
