#include <iostream>
using namespace std;


float LuasPersegiPanjang (float p,float l) {
    return p * l;
}

float LuasLingkaran(float r){
    return 3.14 * r * r;
}

int main (){
    int pilihan;
    float panjang, lebar, jejari;
    
    do{
        cout << "=====menu=====" << endl;
        cout << "1. menghitung Luas Persegi Panjang " << endl;
        cout << "2. menghitung Luas Lingkaran " << endl;
        cout << "3. exit " << endl;
        cout << "Pilihan (1/2/3) : ";
        cin >> pilihan;

        switch(pilihan){
            case 1 : 
            cout << "menghitung luas persegi panjang" << endl;
            cout << "masukkan panjang : ";
            cin >> panjang;
            cout << "masukkan Lebar : ";
            cin >> lebar;
            cout << "Luas Persegi Panjang : " << LuasPersegiPanjang(panjang, lebar) << endl;
            cout << endl;
            break;

            case 2 : 
            cout << "menghitung luas lingkaran " << endl;
            cout << "Masukkan jejari : ";
            cin >> jejari;
            cout << "Luas Lingkaran : " << 
            LuasLingkaran(jejari) << endl;
            cout << endl;
            break;

            case 3 : 
            break;
            default :
            cout << "pilihan anda salah" << endl;
            cout << endl;
            break;


        }
        
        }while(pilihan != 3);
    }

