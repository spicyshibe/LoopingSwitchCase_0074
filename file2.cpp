#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    
    cout << "perulangan while" << endl;
    int x;
    int perulanganWhile = 0;
    int perulanganDoWhile = 0;
    srand(time(0));
    x = rand() % 10;

    cout << "nilai x awal : " << x << endl;
    while(x < 7){
        cout << "nilai x : " << x << "lari keliling lapangan" << endl;
        x = rand() % 10;
        perulanganWhile++;
    }
    cout << "nilai x akhir : " << x << endl;
    do{ 
        cout << "nilai x : " << x << "lari keliling lapangan" << endl;
        x = rand() %10;
        perulanganDoWhile++;

    }while (x < 7);
    cout << "nilai x akhir :" << x << endl;
    cout << "jumlah perulangan : " << perulanganDoWhile << endl;

}