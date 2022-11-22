#include <iostream>
using namespace std;

float GajiPokok(float);
float Lembur(float);
float Makan(float);
float Transport(float);

int main (){

float JamKerja, GajiPerJam;
string NIP, Nama;

cout << "-------------------------------------" << "\n";
cout << "     GAJI HARIAN KARYAWAN PT.XYZ     " << "\n";
cout << "-------------------------------------" << "\n";
cout << "NIP                : ";
cin >> NIP;
cout << "Nama               : ";
cin >> Nama;
cout << "Jumlah Jam Kerja   : ";
cin >> JamKerja;
cout << "-------------------------------------" << "\n";

cout << "Gaji Pokok         : " << GajiPokok(JamKerja) << "\n";
if (JamKerja <=8){
    cout << "Uang Lembur        : " << Lembur (8) << "\n";
    cout << "Uang Makan         : " << Makan(0) << "\n";
    cout << "Uang Transport     : " << Transport(0) << "\n";
    cout << "Total Gaji Harian  : " << GajiPokok(JamKerja) << "\n";

}
if (JamKerja ==9){
    cout << "Uang Lembur        : " << Lembur (JamKerja) << "\n";
    cout << "Uang Makan         : " << Makan(1) << "\n";
    cout << "Uang Transport     : " << Transport(0) << "\n";
    cout << "Total Gaji Harian  : " << Lembur(JamKerja) + GajiPokok(JamKerja) + Makan(1) << "\n";

}
if (JamKerja >=10){
    cout << "Uang Lembur        : " << Lembur (JamKerja) << "\n";
    cout << "Uang Makan         : " << Makan(1) << "\n";
    cout << "Uang Transport     : " << Transport(1) << "\n";
    cout << "Total Gaji Harian  : " << Lembur(JamKerja) + GajiPokok(JamKerja) + Makan(1) + Transport(1) << "\n";
}
    cout << "-------------------------------------" << "\n";
    return 0;
}

float GajiPokok (float x){
    float y ;
    y = x * 7500;
    return y;
}
float Lembur(float x){
    float y;
    y = (x-8)*11250;
    return y;
}
float Makan(float x){
    float y ;
    y = x * 10000;
    return y;
}
float Transport(float x){
    float y;
    y = x * 13000;
    return y;
}


