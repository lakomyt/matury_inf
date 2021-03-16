#include <iostream>
#include <fstream>
using namespace std;

bool check(string pass){
    char znaki[4];
    for(int i=0; i<=pass.length()-4; i++){
        znaki[0] = pass[i];
        znaki[1] = pass[i+1];
        znaki[2] = pass[i+2];
        znaki[3] = pass[i+3];
        bool sorted=0;
        while(sorted == 0){
            sorted = 1;
            for(int q=1; q<4; q++){
                if(znaki[q] < znaki[q-1]){
                    sorted = 0;
                    char temp = znaki[q];
                    znaki[q] = znaki[q-1];
                    znaki[q-1] = temp;
                }
            }
        }
        if(znaki[3]-znaki[2] == 1 and znaki[2]-znaki[1] == 1 and znaki[1]-znaki[0] == 1){
            return 1;
        }
    }
    return 0;
}

int main(){
    ifstream dane;
    dane.open("hasla.txt");
    string pass;
    int c=0;
    for(int i=0; i<200; i++){
        dane >> pass;
        if(pass.length()>3){
            if(check(pass)){
                c++;
            }
        }
    }
    cout << c;
}