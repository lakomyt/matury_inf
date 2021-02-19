#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int min(int a, int b){
    if (a<b){
        return a;
    }
    return b;
}

int tail(string A, string B){
    int l=0;
    int i = 1;
    while (i < min(A.length(), B.length()) and A[A.length()-i] == B[B.length()-i]){
        l++;
        i++;
    }
    return l;
}

int main(){
    ifstream dane("napisy.txt");
    string A[200],B[200];
    int l;
    int maxL = 0;
    for (int i=0; i<200; i++){
        dane >> A[i];
        dane >> B[i];
        l = tail(A[i], B[i]);
        if (l > maxL){
            maxL = l;
        }
    }
    cout << "Najdłuższa końcówka: " << maxL << endl;
    for (int i=0; i<200; i++){
        if(tail(A[i], B[i]) == maxL){
            cout << A[i] << " " << B[i] << endl;
        }
    }
}