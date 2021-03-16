#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream dane;
    dane.open("hasla.txt");
    string pass;
    int a,b,c,t=0;
    for(int i=0; i<200; i++){
        a=0;
        b=0;
        c=0;
        dane >> pass;
        for(int j=0; j<pass.length(); j++){
            if(pass[j] <= '9' and pass[j] >= '0'){
                a=1;
            }
            if(pass[j] <= 'z' and pass[j] >= 'a'){
                b=1;
            }
            if(pass[j] <= 'Z' and pass[j] >= 'A'){
                c=1;
            }
        }
        if(a+b+c == 3){
            t++;
        }
    }
    cout << t;
}