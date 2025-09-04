#include <iostream>
#include <string>
using namespace std;

class Halo {
private:
    string kata;

public:
    Halo() {
        kata = "halo dunia";
    }

    void tulis() {
        cout << kata << endl;
    }

    ~Halo() {
    
    }
};

int main() {
    Halo h;        // buat objek
    h.tulis();     // panggil fungsi
    return 0;      // exit sukses
}

/*Di terminal (misal PowerShell atau CMD), masuk ke folder tempat file halo.cpp berada, lalu ketik:

g++ halo.cpp -o halo
g++ → compiler C++
halo.cpp → nama file sumber
-o halo → nama file executable yang dihasilkan

Jika tidak pakai -o halo, file executable default biasanya bernama a.exe di Windows.
*/