#include <iostream>
#include <cmath>
using namespace std;

template <class Template>
Template square(Template x);
void Newline();

int main(){
    int in, out;
    double d_in, d_out;
    
    Newline();
    //Integral number set.
    cout << "Please input integral number that you want to do square : ";
    cin >> in ;

    //Decimal numbet set.
    cout << "Please input decimal number that you want to do square : ";
    cin >> d_in ;

    //Integral square output.
    out = square(in);
    cout << "Integral number that was been to square is " << out << "." << endl;
    
    //Decimal number output.
    d_out = square(d_in);
    cout << "Decimal number that was been to square is " << d_out << "." << endl;


    Newline();
    return 0;
}

template <class Template>
Template square(Template x){
    Template square;
    square = pow(x,2);
    return square;
}

void Newline(){
    cout << "=================================" << endl;
}