#include <iostream>

using namespace std;

int main()

{
    int v,t,S ;

    cout << "\t\t\Pelita bangsa\n\n" << endl;
    cout << "==========================================\n" << endl;
    cout << "Nama : Rafi Alwan Setyawan \nNIM  : 311810325\n" << endl;
    cout << "==========================================\n" << endl;

    cout << "\t     Hitung Jarak Tempuh\n" << endl;

    cout << "Masukan kecepatan (m/s)        : ";
    cin>>v;
    cout << "Masukan waktu (detik)          : ";
    cin>>t;

    S=v*t;

    cout << "==========================================\n" << endl;
    cout<<"jarak tempuh yang dicapai      : "<<S<<" m\n\n";

    return 0;
}

