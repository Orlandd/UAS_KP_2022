#include <iostream>
#include <string>

using namespace std;

class Retangle {
    public:
        double panjang;
        double lebar;

        Retangle(double inputPanjang, double inputLebar) {
            Retangle::panjang = inputPanjang;
            Retangle::lebar = inputLebar;
        }

        void luas() {
            cout << "Luas :" << panjang * lebar << endl;
        }

        void keliling() {
            cout << "Keliling :" << 2 * panjang + 2 * lebar << endl;
            
        }
};

int main(int argc, char const *argv[])
{
    double panjangRetangle, lebarRetangle;

    cout << "Lebar Retangle : " ;
    cin >> lebarRetangle;
    cout << "Panjang Retangle: " ;
    cin >> panjangRetangle;

    cout << "\n" << endl;
    Retangle data = Retangle(panjangRetangle, lebarRetangle);
    data.luas();
    data.keliling();

    return 0;
}