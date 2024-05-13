# Temperature Sensor 🌡️💡

Proyek ini adalah aplikasi sederhana untuk mengendalikan lampu berdasarkan suhu menggunakan Arduino.

## Deskripsi

Proyek ini memanfaatkan sensor suhu DHT11 untuk membaca suhu lingkungan dan mengontrol lampu LED. Jika suhu mencapai 40 derajat Celsius, lampu merah akan menyala; jika suhu di bawah 40 derajat Celsius, lampu hijau akan menyala.

## Barang yang Diperlukan

- Arduino Uno atau board Arduino lainnya
- Sensor suhu DHT11
- Resistor 220 ohm (2 buah)
- LED merah
- LED hijau
- Breadboard
- Kabel Jumper

## Instalasi

1. **Persiapkan Perangkat**: Sambungkan sensor suhu, LED merah, dan LED hijau ke Arduino menggunakan breadboard dan kabel jumper. Pastikan untuk menambahkan resistor sekitar 220 ohm pada setiap kaki LED.

2. **Unduh Kode**: Unduh atau salin kode Arduino dari [temperature_sensor.ino](arduino/temperature_sensor.ino) dan kode Python dari [read_temperature.py](python/read_temperature.py).

3. **Instalasi Library**: Pastikan Anda telah menginstal library DHT untuk Arduino. Anda dapat menginstalnya melalui Arduino IDE atau menggunakan manajer pustaka Arduino.

4. **Upload Kode**: Upload kode Arduino ke board Arduino menggunakan Arduino IDE.

5. **Jalankan Kode Python**: Jalankan `read_temperature.py` di terminal atau command prompt. Pastikan untuk mengganti port serial dengan port yang sesuai dengan Arduino Anda.

    ```bash
    python read_temperature.py
    ```

6. **Pantau Output**: Sekarang, Anda akan melihat suhu yang dibaca oleh sensor ditampilkan di konsol Python. Jika suhu melebihi 40 derajat Celsius, LED merah akan menyala; jika tidak, LED hijau akan menyala.

## Lisensi

Proyek ini dilisensikan di bawah [MIT License](LICENSE).

## Penulis

Dibuat oleh [Nazhif](https://github.com/athnf).
