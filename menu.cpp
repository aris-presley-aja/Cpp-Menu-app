#include <iostream>
#include <string>
#include <map>
#include <cmath>


using namespace std;

int main() {
  int choice;

  // Display the menu
  do {
    cout << "\nMenu Utama:\n";
    cout << "1. Biodata\n";
    cout << "2. Grade\n";
    cout << "3. Transaksi Penjualan\n";
        cout << "4. Fungsi Matematika\n";
            cout << "5. Keluar\n";
    cout << "Masukkan pilihan Anda (1-5): ";
    cin >> choice;

    // Use switch-case to handle user choice
    switch (choice) {
      case 1: {
  string Nama, email, alamat;
  int umur;

  // Input data
  cout << "Input Biodata:\n";
  cout << "Nama: ";
  getline(cin, Nama); // Use getline to handle spaces in name
 
  cout << "Email: ";
  getline(cin, email);
  cout << "Alamat: ";
  getline(cin, alamat);

  cout << "Umur: ";
  cin >> umur;

  // Clear the input buffer (optional)
  cin.ignore();
//

  // Display biodata
  cout << "\nBiodata:\n";
  cout << "Nama kamu: " << Nama << endl;
  cout << "Alamat rumah kamu mu ada di: " << alamat << endl;

  
  cout << "sekarang kamu ber umur: " << umur << " tahun\n";
  //
    // Determine letter grade based on numerical score
  if (umur >= 15 && umur <= 19) {
    cout << "Grade: Remaja" << endl;
  } else if (umur >= 20 && umur <= 25) {
    cout << "Grade: Dewasa" << endl;
  } else if (umur >= 26 && umur <= 40) {
    cout << "Grade: Produktif" << endl;
  } else  {cout << "kategori: Anda salah input" << endl;
  }
        break;
      }
      case 2: {
  //string name;
  int score;
  char letterGrade;
  string student;

  // Input student information
  cout << "Enter student name: ";
  getline(cin, student); // Use getline for names with spaces
  cout << "Enter student score (0-100): ";
  cin >> score;

  // Validate score input (optional)
  if (score < 0 || score > 100) {
    cout << "Invalid score. Please enter a score between 0 and 100." << endl;
    return 1; // Exit program with error code
  }

  // Calculate letter grade
  if (score >= 90) {
    letterGrade = 'A';
  } else if (score >= 80) {
    letterGrade = 'B';
  } else if (score >= 70) {
    letterGrade = 'C';
  } else if (score >= 60) {
    letterGrade = 'D';
  } else {
    letterGrade = 'F';
  }

  // Output student grade
  cout << "\nStudent Name: " << student << endl;
  cout << "Score: " << score << endl;
  cout << "Letter Grade: " << letterGrade << endl;

        cout << "Terima kasih telah menggunakan program ini!" << endl;
        return 0;
        break;
      
        // Pilihan tidak valid
        cout << "Pilihan tidak valid!" << endl;
        break;
      }
      //break;
            case 3: {
map<string, string> namaBarang = {
  {"LE", "Lemari Es"},
  {"TV", "Televisi"},
  {"MC", "Mesin Cuci"},
  {"VC", "Vacuum Cleaner"},
  {"AC", "Air Conditioner"}
};

map<string, int> hargaBarang = {
  {"LE", 5000000},
  {"TV", 6500000},
  {"MC", 8000000},
  {"VC", 2000000},
  {"AC", 3500000}
};

 
  string kodeBarang;
  int jumlahBeli;

  // Input kode barang dan jumlah pembelian
  cout << "Masukkan kode barang: ";
  cin >> kodeBarang;
  cout << "Masukkan jumlah pembelian: ";
  cin >> jumlahBeli;

  // Hitung diskon
  int diskon;
  if (jumlahBeli >= 3) {
    diskon = (hargaBarang[kodeBarang] * jumlahBeli) * 0.2;
  } else {
    diskon = 0;
  }

  // Hitung harga bayar
  int hargaBayar = (hargaBarang[kodeBarang] * jumlahBeli) - diskon;

  // Tampilkan struk
  cout << "\nStruk Transaksi Penjualan\n";
  cout << "=========================\n";
  cout << "Kode Barang: " << kodeBarang << endl;
  cout << "Nama Barang: " << namaBarang[kodeBarang] << endl;
  cout << "Harga Barang: Rp. " << hargaBarang[kodeBarang] << endl;
  cout << "Jumlah Beli: " << jumlahBeli << endl;
  cout << "Diskon: Rp. " << diskon << endl;
  cout << "Harga Bayar: Rp. " << hargaBayar << endl;
  cout << "=========================\n";
          cout << "Terima kasih telah menggunakan program ini!" << endl;
        
        break;
      }
            case 4: {
  double alas, tinggi;
  double sisiMiring;

  // Input alas dan tinggi segitiga
  cout << "Masukkan alas segitiga A: ";
  cin >> alas;
  cout << "Masukkan tinggi segitiga B: ";
  cin >> tinggi;

  // Hitung sisi miring
  sisiMiring = sqrt(pow(alas, 2) + pow(tinggi, 2));

  // Tampilkan hasil
  cout << "Panjang sisi miring C: " << sisiMiring << endl;

  
        break;
      }
      case 5:
        cout << "\nTerima kasih telah menggunakan program ini!\n";
        break;
      
        cout << "Pilihan tidak valid!\n";
    }
  } while (choice != 5); // Loop continues until user chooses to exit

  return 0;
}