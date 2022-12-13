#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        string nama;
        string alamat;
        int umur;

        Student(string inputNama, string inputAlamat, int inputUmur) {
            Student::nama = inputNama;
            Student::alamat = inputAlamat;
            Student::umur = inputUmur;
        }

        void tampilkanData() {
            cout << "\n" << endl;
            cout << "Nama :" << Student::nama << endl;
            cout << "Umur :" << Student::umur << endl;
            cout << "Alamat :" << Student::alamat << endl;
        }
};

int main(int argc, char const *argv[])
{
    string nama, alamat;
    int umur;
    int pilih;

    cout << "Nama : " ;
    cin >> nama;
    cout << "Umur : " ;
    cin >> umur;
    cout << "Alamat : " ;
    cin >> alamat;

    
    Student student1 = Student(nama, alamat, umur);
    student1.tampilkanData();

    cout << "Apakah data sudah benar (jika ya input 1 jika tidak input 0) : " ;
    cin >> pilih;

    if (pilih == 0) {
        while(pilih != 1) {
                string nama, alamat;
                int umur;

                cout << "Nama : " ;
                cin >> nama;
                cout << "Umur : " ;
                cin >> umur;
                cout << "Alamat : " ;
                cin >> alamat;

                
                Student student1 = Student(nama, alamat, umur);
                student1.tampilkanData();

                cout << "\n" << endl;
                cout << "Apakah data sudah benar (jika ya input 1 jika tidak input 0) : " ;
                cin >> pilih;
        }
    } else {
        cout << "Data telah disimpan" << endl;
        student1.tampilkanData();
    }



    return 0;
}
