#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream dane;
    dane.open("liczby.txt");
    string liczby[1000];
    for (int x=0; x<1000; x++){
        dane >> liczby[x];
    }
    int max = 0;
    int min = 0;
    for (int x=0; x<1000; x++){
        if (liczby[x].length() >= liczby[max].length()){
            if (liczby[x].length() == liczby[max].length()){
                for (int l=0; l<liczby[x].length(); l++){
                    if (liczby[x][l] != liczby[max][l] and liczby[x][l] == '1'){
                        max = x;
                        break;
                    }
                    else if (liczby[x][l] != liczby[max][l]){
                        break;
                    }
                }
            }
            else{
                max = x;
            }
        }
        else if (liczby[x].length() <= liczby[min].length()){
            if (liczby[x].length() == liczby[min].length()){
                for (int l=0; l<liczby[x].length(); l++){
                    if (liczby[x][l] != liczby[min][l] and liczby[x][l] == '0'){
                        min = x;
                        break;
                    }
                    else if (liczby[x][l] != liczby[min][l]){
                        break;
                    }
                }
            }
            else{
                min = x;
            }
        }
    }
    cout << "min: " << min+1 << " max: " << max+1;
}