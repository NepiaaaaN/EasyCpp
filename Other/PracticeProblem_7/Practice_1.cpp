#include <iostream>
#include <cmath>
using namespace std;

int square(int x);
void Newline();

int main(){
    int in, out;
    
    Newline();
    cout << "Please input number that you want to do square : ";
    cin >> in ;
    out = square(in);
    cout << "Number that was been to square is " << out << "." << endl;
    Newline();
    return 0;
}

int square(int x){
    int square;
    square = pow(x,2);
    return square;
}

void Newline(){
    cout << "=================================" << endl;
}