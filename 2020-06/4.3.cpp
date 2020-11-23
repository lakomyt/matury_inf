#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream dane;
    dane.open("pary.txt");
    int liczby[100];
    string slowa[100];
    int min = 0;
    for (int i=0; i<100; i++){
        dane >> liczby[i];
        dane >> slowa[i];
        if (liczby[i] == slowa[i].length()){
            if (liczby[i] < liczby[min]){
                min = i;
            }
            else{
                for (int x=0; x<slowa[i].length(); x++){
                    if(slowa[i][x] < slowa[min][x]){
                        min = i;
                        break;
                    }
                }
            }
        }
    }
    cout << liczby[min] << " " << slowa[min];
}