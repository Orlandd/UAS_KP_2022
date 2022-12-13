#include <iostream>
#include <string>

using namespace std;

class Kotak {
    public:
        double sisi;

        Kotak(double inputSisi) {
            Kotak::sisi = inputSisi;
        }

        void tampilkanData() {
            cout << "\n" << endl;
            cout << "Kotak" << endl;
            cout << "Luas :" << sisi * sisi << endl;
            cout << "Keliling :" << 4 * sisi << endl;
            
        }
};

class Segitiga{
    public:
        double sisi;
        double tinggi;

        Segitiga(double inputSisi, double inputTInggi) {
            Segitiga::sisi = inputSisi;
            Segitiga::tinggi = inputTInggi;
        }

        void tampilkanData() {
            cout << "\n" << endl;
            cout << "Segitiga" << endl;
            cout << "Luas :" << sisi * tinggi / 2 << endl;
            cout << "Keliling :" << 3 * sisi << endl;
            
        }
};

int main(int argc, char const *argv[])
{
    double sisiSegitiga, tinggiSegitiga, sisiKotak;

    cout << "Alas segitiga  : " ;
    cin >> sisiSegitiga;
    cout << "Tinggi segitiga : " ;
    cin >> tinggiSegitiga;
    cout << "Sisi persegi : " ;
    cin >> sisiKotak;

    Kotak dataPersegi = Kotak(sisiKotak);
    dataPersegi.tampilkanData();
    
    Segitiga dataSegitiga = Segitiga(sisiSegitiga, tinggiSegitiga);
    dataSegitiga.tampilkanData();

    return 0;
}
