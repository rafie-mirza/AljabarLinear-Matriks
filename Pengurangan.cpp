#include <iostream>

using namespace std;

int main() {
  int i, j, Jumlah_baris, Jumlah_kolom, matriksA[10][10], matriksB[10][10], hasil[10][10];

  cout << "Masukkan Jumlah Baris Matriks: ";
  cin >> Jumlah_baris;
  cout << "Masukkan Jumlah Kolom Matriks: ";
  cin >> Jumlah_kolom;

  cout << "Masukkan Elemen Matriks Pertama: \n";
  for(i = 0; i < Jumlah_baris; i++){
    for(j = 0; j < Jumlah_kolom; j++){
      cin >> matriksA[i][j];
    }
  }

  cout << "Masukkan Elemen Matriks Kedua: \n";
  for(i = 0; i < Jumlah_baris; i++){
    for(j = 0; j < Jumlah_kolom; j++){
      cin >> matriksB[i][j];
    }
  }
  
  cout << endl;
  cout << "Hasil Pengurangan Matriks: \n";
  for(i = 0; i < Jumlah_baris; i++){
    for(j = 0; j < Jumlah_kolom; j++){
      hasil[i][j] = matriksA[i][j] - matriksB[i][j];
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
  
  return 0;
}
