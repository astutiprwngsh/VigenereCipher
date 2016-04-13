#include <bits/stdc++.h>

using namespace std;

string enkripsi (string input, string key){
	string hasil = input; //inisialisasi string supaya string hasil panjang sama, disamakan dengan input
		
	for (int i=0; i<input.length(); i++){ //perulangan untuk setiap character pada string input sesuai dengan jumlah input yang diberikan
		hasil[i] = (((input[i]-65) + (key[i%key.length()]-65))%26) +65; // simpan character ke-i disimpan pada array hasil[]
	}
	return hasil; //nilai kembalian
}

string dekripsi (string input, string key){
	string hasil = input;
		
	for (int i=0; i <= input.length(); i++ ){
		hasil[i] = (((input[i]-65)-(key[i%key.length()]-65)+26)%26) +65;
	}
	return hasil;
}

int main (){
	string input;
	string key;
	string cipher;
	cout << "Masukkan kata yang ingin dienkripsi tanpa menggunakan spasi :\n";
	cin >> input;
	cout << "Masukkan key yang akan digunakan untuk mengenkripsi kalimat input :\n";
	cin >> key;
	transform(input.begin(), input.end(), input.begin(), ::toupper); //mengubah semua string menjadi UPPERCASE
	transform(key.begin(), key.end(), key.begin(), ::toupper); //sda
	cipher = enkripsi(input,key);
	cout << "Hasil enkripsi dari plaintext : " << enkripsi(input, key) << endl;
	cout << "Hasil dekripsi dari cipher text : " << dekripsi(cipher, key) << endl;
}
