#include <iostream>

using namespace std;

int main() {
  int matriks1[10][10], matriks2[10][10], hasil[10][10];
  int i, j, k, jumlah_baris1, jumlah_kolom1, jumlah_baris2, jumlah_kolom2, jumlah = 0;
  cout << "Masukkan jumlah baris matriks pertama: ";
  cin >> jumlah_baris1;
  cout << "Masukkan jumlah kolom matriks pertama: ";
  cin >> jumlah_kolom1;

  cout << "Masukkan jumlah baris matriks kedua: ";
  cin >> jumlah_baris2;
  cout << "Masukkan jumlah kolom matriks kedua: ";
  cin >> jumlah_kolom2;

  if(jumlah_kolom1 != jumlah_baris2){
    cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
  } else {

    cout << "Masukkan elemen matriks pertama: \n";
    for(i = 0; i < jumlah_baris1; i++){
      for(j = 0; j < jumlah_kolom1; j++){
        cin >> matriks1[i][j];
      }
    }

    cout << "Masukkan elemen matriks kedua: \n";
    for(i = 0; i < jumlah_baris2; i++){
      for(j = 0; j < jumlah_kolom2; j++){
        cin >> matriks2[i][j];
      }
    }

    for(i = 0; i < jumlah_baris1; i++){
      for(j = 0; j < jumlah_kolom2; j++){
        for(k = 0; k < jumlah_baris2; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }

    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < jumlah_baris1; i++){
      for(j = 0; j < jumlah_kolom2; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }

  }
  
  return 0;
}
