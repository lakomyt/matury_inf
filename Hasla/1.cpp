#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream dane;
    dane.open("hasla.txt");
    string pass;
    int c,t=0;
    for(int i=0; i<200; i++){
        c=0;
        dane >> pass;
        for(int j=0; j<pass.length(); j++){
            if(pass[j] <= '9' and pass[j] >= '0'){
                c++;
            }
        }
        if(pass.length() == c){
            t++;
        }
    }
    cout << t;
}