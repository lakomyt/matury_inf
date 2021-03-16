#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream dane;
    dane.open("hasla.txt");
    string hasla[200];
    for(int i=0; i<200; i++){
        dane >> hasla[i];
    }
    bool sorted = 0;
    while (sorted == 0){
        sorted = 1;
        for(int i=1; i<200; i++){
            if(hasla[i] < hasla[i-1]){
                sorted = 0;
                string temp = hasla[i];
                hasla[i] = hasla[i-1];
                hasla[i-1] = temp;
            }
        }
    }
    for(int i=1; i<200; i++){
        if(hasla[i] == hasla[i-1]){
            cout << hasla[i] << endl;
        }
    }
}