#include <iostream>
using namespace std;


void cetakMax(const int number[], int size) {
    int max = number[0];
    for (int i = 1; i < size; i++) {
        if (number[i] > max) {
            max = number[i];
        }
    }
    cout << "Nilai Max     : " << max << endl;
}


void cetakMin(const int number[], int size) {
    int min = number[0];
    for (int i = 1; i < size; i++) {
        if (number[i] < min) {
            min = number[i];
        }
    }
    cout << "Nilai Min     : " << min << endl;
}


void cetakAverage(const int number[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += number[i];
    }
    double average = sum / size;
    cout << "Rata-rata     : " << average << endl;
}


void cetakJumlahGenap(const int number[], int size) {
    int sum_genap = 0;
    for (int i = 0; i < size; i++) {
        if (number[i] % 2 == 0) {
            sum_genap++;
        }
    }
    cout << "Jumlah Genap  : " << sum_genap << endl;
}


void cetakJumlahGanjil(const int number[], int size) {
    int sum_ganjil = 0;
    for (int i = 0; i < size; i++) {
        if (number[i] % 2 != 0) {
            sum_ganjil++;
        }
    }
    cout << "Jumlah Ganjil : " << sum_ganjil << endl;
}

int main() {
    const int SIZE = 8;
    int number[SIZE];

    cout << "Masukkan " << SIZE << " angka:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> number[i];
    }

    cout << "\n--- HASIL ANALISIS ---" << endl;
    

    cetakMax(number, SIZE);
    cetakMin(number, SIZE);
    cetakAverage(number, SIZE);
    cetakJumlahGenap(number, SIZE);
    cetakJumlahGanjil(number, SIZE);

    return 0;
}
