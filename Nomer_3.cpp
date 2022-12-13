#include <iostream>
#include <string>

using namespace std;

class Siswa {
    public:
        string nama;
        double matematika;
        double kimia;
        double biologi;
        double fisika;
        double ekonomi;


        void get(string inputNama, double inputMatematika, double inputKimia, double inputBiologi, double inputFisika, double inputEkonomi) {
            Siswa::nama = inputNama;
            Siswa::matematika = inputMatematika;
            Siswa::kimia = inputKimia;
            Siswa::biologi = inputBiologi;
            Siswa::fisika = inputFisika;
            Siswa::ekonomi = inputEkonomi;
        }

        void tampilkanData() {
            cout << nama << "\t"<< matematika << "\t\t" << biologi << "\t\t" << kimia << "\t\t" <<fisika << "\t\t" <<ekonomi <<endl;
        }
};

int main(int argc, char const *argv[])
{
    string nama[10];
    double biologi[10];
    double kimia[10];
    double fisika[10];
    double matematika[10];
    double ekonomi[10];
    Siswa siswa[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "\n" << endl;
        cout << "Nama : " ;
        cin >> nama[i];
        cout << "Matematika : " ;
        cin >> matematika[i];
        cout << "Kimia : " ;
        cin >> kimia[i];
        cout << "Biologi : " ;
        cin >> biologi[i];
        cout << "Fisika : " ;
        cin >> fisika[i];
        cout << "Ekonomi : " ;
        cin >> ekonomi[i];
        siswa[i].get(nama[i], matematika[i], kimia[i], biologi[i], fisika[i], ekonomi[i]);
    }

    cout << "\n" << endl;
    cout << "Nama\tMatematika\tBiologi\t\tKimia\t\tFisika\t\tEkonomi" << endl;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        siswa[i].tampilkanData();
    }
    return 0;
}
