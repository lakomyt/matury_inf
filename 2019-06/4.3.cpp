#include <iostream>
#include <fstream>
using namespace std;

int Weight(int number){
    if(number < 10){
        return number;
    }
    else{
    int sum = 0;
    while (number > 9){
        sum += number % 10;
        number = number / 10;
    }
    sum += number % 10;
    if (sum < 10){
        return sum;
    }
    else{
        return Weight(sum);
    }
    }
}

int main(){
    ifstream dane;
    dane.open("pierwsze.txt");
    int liczby[200];
    for (int i=0; i<200; i++){
        dane >> liczby[i];
    }
    int c = 0;
    for (int i=0; i<200; i++){
        if (Weight(liczby[i]) == 1){
            c++;
        }
    }
    cout << c;
}