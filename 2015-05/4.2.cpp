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
    int osiem=0;
    int dwa=0;
    for (int x=0; x<1000; x++){
        if (liczby[x][liczby[x].length()-1] == '0'){
            dwa++;
        }
        if (liczby[x][liczby[x].length()-1] == '0' and liczby[x][liczby[x].length()-2] == '0' and liczby[x][liczby[x].length()-3] == '0'){
            osiem++;
        }
    }
    cout << "dwa: " << dwa << " osiem: " << osiem;
}