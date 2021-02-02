#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream dane;
    dane.open("liczby.txt");
    int c=0;
    int liczba;
    for (int i=0; i<1000; i++){
        int d = 2;
        int dp = 2;
        int dc = 0;
        dane >> liczba;
        while(liczba > 1){
            if(liczba % d == 0){
                liczba = liczba/d;
                if (dp != d and d % 2 != 0){
                    dc++;
                }
                dp = d;
            }
            else{
                d++;
            }
        }
        if (dc == 3){
            c++;
        }
    }
    cout << c;
}
