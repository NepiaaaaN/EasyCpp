#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    for(int i=1; i<=30; i++){
        cout << setfill('-') << setw(3) << i;
    if(i%5 == 0) cout << endl;
    }
    return 0;
}