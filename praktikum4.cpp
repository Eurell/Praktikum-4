#include <iostream>
#include <iomanip>

using namespace std;

const int ukuran = 4;

void tampilkanMatriks(int matriks[ukuran][ukuran], const string& nama) {
    cout << "Matriks " << nama << ":" << endl;
    for (int i = 0; i < ukuran; ++i) {
        for (int j = 0; j < ukuran; ++j) {
            cout << setw(4) << matriks[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int matriksA[ukuran][ukuran] = {
        {1, 0, 2, 0},
        {0, 1, 0, 1},
        {2, 0, 1, 0},
        {0, 2, 0, 1}
    };

    int matriksB[ukuran][ukuran] = {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {2, 2, 2, 2}
    };

    int hasilMatriks[ukuran][ukuran];

    for (int i = 0; i < ukuran; ++i) {
        for (int j = 0; j < ukuran; ++j) {
            hasilMatriks[i][j] = 0;
        }
    }

    for (int i = 0; i < ukuran; i++) {
        for (int j = 0; j < ukuran; j++) {
            for (int k = 0; k < ukuran; k++) {

                hasilMatriks[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    cout << "Nama: Farrel Risqullah Mahardika" << endl;
    cout << "NIM: 25104410017" << endl;
    cout << "Prodi: Teknik Informatika 1A" << endl;
    cout << "Tugas Praktikum 4" << endl << endl;

    cout << "--- Program Perkalian Matriks 4x4 ---" << endl;
    tampilkanMatriks(matriksA, "A");
    tampilkanMatriks(matriksB, "B");

    cout << "Matriks Hasil Perkalian (A x B):" << endl;
    tampilkanMatriks(hasilMatriks, "A x B");

    return 0;
}