#include <iostream>

using namespace std;

int main(){
  int i, j, jumlah_baris, jumlah_kolom, matriks[10][10], transpose[10][10];

  cout << "Masukkan Jumlah Baris Matriks: ";
  cin >> jumlah_baris;
  cout << "Masukkan Jumlah Kolom Matriks: ";
  cin >> jumlah_kolom;

  cout << "Masukkan Elemen Matriks\n";
  for (i = 0; i < jumlah_baris; i++){
    for (j = 0; j < jumlah_kolom; j++){
      cin  >> matriks[i][j];
    }
  }

  for (i = 0; i < jumlah_baris; i++){
    for (j = 0; j < jumlah_kolom; j++){
      transpose[j][i] = matriks[i][j];
    }
  }

	cout << endl;
  cout << "Hasil Transpose Matriks: \n";
  for (i = 0; i < jumlah_kolom; i++){
    for (j = 0; j < jumlah_baris; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
}
