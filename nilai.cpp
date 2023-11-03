#include <iostream>

using namespace std;

int main() {
    float n;
    float nilaiSiswa;
    
    float totalBaikSekali = 0;
    float totalBaik = 0;
    float totalKurang = 0;
    float totalNilai = 0;
    
    cout << "Masukkan jumlah siswa : " << endl;
    cin >> n;
    
    for (int i=1; i<=n; i++) {
        cout << "Masukkan nilai siswa ke-" << i << endl;
        cin >> nilaiSiswa;
        
        if (nilaiSiswa > 10) {
            cout << "Input Nilai siswa tidak valid" << endl;
            return 0;
        }
        
        if (nilaiSiswa >= 8 && nilaiSiswa <= 10) {
            totalBaikSekali = totalBaikSekali + 1;
        } 
        else if (nilaiSiswa >= 6.5 && nilaiSiswa < 8) {
            totalBaik = totalBaik + 1;
        }
         else {
            totalKurang = totalKurang + 1;
        }
        
        totalNilai = totalNilai + nilaiSiswa;
    }
    
    cout << "Baik sekali : " << totalBaikSekali / n * 100 << "%" << endl;
    
    cout << "Baik : " << totalBaik / n * 100 << "%" << endl;
    
    cout << "Kurang : " << totalKurang / n * 100 << "%" << endl;
    
    cout << "Rata-rata Nilai : " << totalNilai / n << endl;
    
    return 0;
}