# VigenereCipher
Vigenere Cipher Algorithm for Encryption and Decryption in C++

Vigenere Cipher pada dasarnya adalah algoritma enkripsi dan dekripsi yang termasuk dalam Substitusi Cipher Alfabet Majemuk.

### Enkripsi
Pada proses enkripsi, fungsi umumnya adalah: 
Ci = (Pi + Ki) mod 26 
dimana C = Ciphertext; 
       P = Plaintext;
       K = Key;
       i = index

a) Pada program, string dibuat dengan nilai :
A B C D E ... Z
0 1 2 3 4 ... 25

b) Sedangkan dalam ASCII, alfabet memiliki nilai :
A   B   C   D   E   ...   Z
65  66  67  68  69  ...   90

Pertama, kita kurangkan nilai pada index ke-i pada input dengan 65 (sehingga dapat bernilai seperti pada urutan di poin a).
Kemudian, ditambahkan dengan key index ke-i yang akan dilooping ke hurug pertama jika sudah berakhir (oleh karenanya dimodulo panjang key).
Karena alfabet hanya terdiri dari 26 karakter, maka kita modulo 26 agar jika hasil melebihi 25 (Z), akan looping lagi ke nilai 0 (A).
Terakhir, ditambahkan dengan 65 agar NILAI ASCII nya kembali dan dapat berupa huruf seperti yang diinputkan.

Fungsi dalam kode program :
hasil[i] = ((input[i]-65) + (key[i%key.length()]-65))%26 +65; 



### Dekripsi
Untuk proses dekripsi, fungsi umumnya adalah: 
Pi = (Ci - Ki) mod 26 

Hampir sama dengan fungsi enkripsinya, pertama adalah mengurangkan input (hasil enkripsi) dengan index yang bersesuaian.
Karena dalam C++ tidak bisa memodulokan bilangan negatif, maka hasilnya ditambahkan dengan 26 agar menjadi bilangan positif.
Kemudian modulo 26 (untuk bisa looping alfabet A-Z), dan terakhir ditambah 65 untuk kembali ke kode ASCII semula.


### Main Program
Input kata untuk dienkripsi dan key-nya.
Setelah dibaca, maka kata dan key akan ditransform menjadi uppercase, dengan tujuan agar mudah dalam proses pengenkripsian maupun dekripsinya. Karena lowercase dan uppercase memiliki ASCII yang berbeda, maka untuk memudahkan, diseragamkan menjadi uppercase.

Lalu masuk ke fungsi, proses enkripsi dan dekripsi selesai. :smile:
