Program ini untuk praktikum kendali lampu dengan mikrokontroler ESP32 dan Blynk.

Alat dan bahan:
- ESP32 = 1 pcs
- Relay 5V = 1 pcs
- Lampu = 1 pcs
- Kabel = secukupnya
- HP terinstal Blynk

Berikut ini gambar rangkaiannya.

![ESP32_Relay_Lampu](https://github.com/nurrohim8/IOT-Lamp-Blynk/assets/171478367/6ad1d9ac-0581-44cb-be42-dab14f356ee9)


Sesuaikan auth token sesuai dengan kelompok.

KELOMPOK 1:
#define BLYNK_TEMPLATE_ID "TMPL6Q1bgJiAM"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "8DqNYccOBBqTHv2ZYL-ccZTpd7Gkix7P"

KELOMPOK 2:
#define BLYNK_TEMPLATE_ID "TMPLUavOAfry"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "QMzc5hdEp5OkpfzmJyRZFV6ctFhmIoSi"

KELOMPOK 3:
#define BLYNK_TEMPLATE_ID "TMPL6d0oVG8FV"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "D1o8grHKd8hU625zRPMP6PjIhyCi4Fs1"

KELOMPOK 4:
#define BLYNK_TEMPLATE_ID "TMPL6aPtqoOXE"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "PM9oVoGsMN4UAE12vmOdlAVlaEEsbDyd"

NOTE: Jumlah lampu dan relay bisa ditambah, sesuai dengan kreativitas untuk mengembangkan rangkaian lebih lanjut.

Jelaskan cara kerja dari sistem kendali lampu berbasis IOT yang sudah dirancang saat praktikum?

![image](https://github.com/nurrohim8/IOT-Lamp-Blynk/assets/171478367/943adefb-7df2-4531-981c-754ec9472f27)
 
Gambar 1. Blok Diagram Cara Kerja IoT Lamp Control
Cara Kerja:
1.	Pengguna memberi perintah ke alat melalui tombol yang ada di aplikasi Blynk.
2.	Aplikasi Blynk meneruskan perintah ke alat, yang kemudian diproses oleh ESP32.
3.	Kemudian, ESP32 mengendalikan relay sesuai perintah yang diberikan dari aplikasi Blynk.
4.	Relay akan bekerja untuk menyalakan atau mematikan lampu sesuai perintah dari ESP32.

Tuliskan ide pengembangan dari praktikum kontrol lampu berbasis IOT?
Kelompok 1: Monitoring Suhu dan Kelembaban
Monitoring suhu dan kelembaban menggunakan Sensor DHT11 untuk membaca suhu dan kelembaban suatu ruangan. Hasil pembacaan kemudian dikirimkan ke aplikasi Blynk untuk dapat dilihat oleh pengguna. Monitoring suhu dan kelembaban ini dapat kita kembangkan untuk mengetahui kondisi suhu dari ruangan anak ayam, ruangan budidaya, atau yang lainnya.

Kelompok 2: Bel Rumah
Bel rumah sudah tidak perlu lagi menggunakan kabel yang panjang untuk menjangkau dari gerbang hingga bagian dalam rumah. Nah di project ini kita akan membuat bel rumah yang dapat dikirimkan sebagai notifikasi di aplikasi Blynk. Jadi ketika ada orang yang menekan tombol bel, maka akan muncul notifikasi ke smartphone.

Kelompok 3: Detector Gas
Gas LPG menjadi sangat berbahaya ketika mengalami kebocoran. Detector gas yang dapat memberikan notifikasinya pada aplikasi smartphone akan memudahkan kita dalam melakukan penanganan sebelum adanya kebakaran. Sensor yang digunakan untuk Gas LPG adalah Sensor Gas MQ-2. Sensor ini akan mendeteksi bau gas yang kemudian ESP32 akan memberikan informasi berupa notifikasi ke smartphone.

Kelompok 4: Deteksi Maling
Di project ini kita dapat melakukan pendeteksian adanya orang yang memasuki suatu ruangan/rumah tanpa ijin. Sensor menggunakan sensor gerak seperti sensor PIR yang akan mengetahui adanya orang di sekitar sensor. Ketika sensor mendeteksi adanya orang, ESP32 akan mengirimkan notifikasi kepada pengguna.


