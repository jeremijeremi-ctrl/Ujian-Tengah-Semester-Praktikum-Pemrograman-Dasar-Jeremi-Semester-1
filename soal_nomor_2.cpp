// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here

    int lama_parkir,biaya_parkir;
    string jenis_kendaraan,nomor_polisi;

    cout << "masukan nomor polisi"<< endl;
    cin >> nomor_polisi;
    cout << "masukan lama parkir" << endl;
    cin >> lama_parkir;
    cout << "masukan jenis kendaraan"<< endl;
    cin >> jenis_kendaraan;

    if(jenis_kendaraan == "mobil" && lama_parkir == 1){
        biaya_parkir = 5000 * lama_parkir;
    }else if(jenis_kendaraan =="motor" && lama_parkir ==1){
        biaya_parkir = 3000 * lama_parkir;
    }else if (jenis_kendaraan == "mobil" && lama_parkir > 1 && lama_parkir < 24){
        biaya_parkir = 3000 * lama_parkir;
    }else if(jenis_kendaraan == "motor" && lama_parkir > 1 && lama_parkir < 24){
        biaya_parkir = 2000 * lama_parkir;
    }else if(jenis_kendaraan == "mobil" && lama_parkir >= 24){
        biaya_parkir = 75000 * (lama_parkir/24);
    }else if(jenis_kendaraan == "motor" && lama_parkir >= 24){
         biaya_parkir = 25000 * (lama_parkir/24);    
    }

    cout << "Nomor Polisi Anda " << nomor_polisi << endl;
    cout << "Jenis kendaraan anda " << jenis_kendaraan << endl;
    cout << "Lama parkir " << lama_parkir << endl;
    cout << "biaya parkir anda " << biaya_parkir << endl;
    return 0;
}
