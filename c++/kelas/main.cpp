#include <iostream>
#include "Titik.cpp"  // Menyertakan file Titik.cpp

using namespace std;

int main() {
    Titik t1;          // Membuat objek Titik dengan konstruktor default
    Titik t2(11, 9);    // Membuat objek Titik dengan koordinat (11, 9)

    t1.setX(18);        // Mengubah koordinat X objek t1
    t1.setY(28);        // Mengubah koordinat Y objek t1

    // Menampilkan koordinat objek t1
    cout << "t1 : nilai X : " << t1.getX() << endl;
    cout << "t1 : nilai Y : " << t1.getY() << endl;

    // Menampilkan koordinat objek t2
    cout << "t2 : nilai X : " << t2.getX() << endl;
    cout << "t2 : nilai Y : " << t2.getY() << endl;

    return 0;
}
