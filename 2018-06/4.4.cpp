#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream dane_a;
    dane_a.open("przyklad1.txt");
    ifstream dane_b;
    dane_b.open("przyklad2.txt");
    ofstream out;
    out.open("wyniki4_4.txt");
    for (int i=0; i<5; i++){
        int A[10];
        int B[10];
        for (int x=0; x<10; x++){
            int a;
            dane_a >> a;
            int b;
            dane_b >> b;
            A[x] = a;
            B[x] = b;
        }
        int a = 0;
        int b = 0;
        while (a < 10 and b < 10){
            if (A[a] <= B[b]){
                out << A[a] << " ";
                a++;
            }
            else if (A[a] > B[b]){
                out << B[b] << " ";
                b++;
            }
        }
        if (a==10){
            for (int q=b; q<10; q++){
                out << B[q] << " ";
            }
        }
        else if (b==10){
            for (int q=a; q<10; q++){
                out << A[q] << " ";
            }
        }
        out << endl;
    }
}