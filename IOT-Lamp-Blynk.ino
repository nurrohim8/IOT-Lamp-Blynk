/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Kelompok 1 */
#define BLYNK_TEMPLATE_ID "TMPL6Q1bgJiAM"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "8DqNYccOBBqTHv2ZYL-ccZTpd7Gkix7P"

/* Kelompok 2 */
// #define BLYNK_TEMPLATE_ID "TMPLUavOAfry"
// #define BLYNK_TEMPLATE_NAME "Quickstart Template"
// #define BLYNK_AUTH_TOKEN "QMzc5hdEp5OkpfzmJyRZFV6ctFhmIoSi"

/* Kelompok 3 */
// #define BLYNK_TEMPLATE_ID "TMPL6d0oVG8FV"
// #define BLYNK_TEMPLATE_NAME "Quickstart Template"
// #define BLYNK_AUTH_TOKEN "D1o8grHKd8hU625zRPMP6PjIhyCi4Fs1"

/* Kelompok 4 */
// #define BLYNK_TEMPLATE_ID "TMPL6aPtqoOXE"
// #define BLYNK_TEMPLATE_NAME "Quickstart Template"
// #define BLYNK_AUTH_TOKEN "PM9oVoGsMN4UAE12vmOdlAVlaEEsbDyd"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Ener";
char pass[] = "energen8";

#define relayPin1 16  //Deklarasi untuk pin relay 1 dihubung ke pin 16 ESP32
#define relayPin2 17  //Deklarasi untuk pin relay 2 dihubung ke pin 17 ESP32

bool nLampu1 = false; //Deklarasi variabel untuk kondisi lampu 1
bool nLampu2 = false; //Deklarasi variabel untuk kondisi lampu 2

BLYNK_WRITE(V0)
{
  int pinValue = param.asInt();     //Mendapatkan data dari virtual pin Blynk V0

  // process received value
  if(pinValue == 1){nLampu1=true;}  //Jika V0=1, maka kondisi lampu true
  else{nLampu1=false;}              //Jika V0=0, maka kondisi lampu false
}

BLYNK_WRITE(V1)
{
  int pinValue1 = param.asInt();    //Mendapatkan data dari virtual pin Blynk V1

  // process received value
  if(pinValue1 == 1){nLampu2=true;} //Jika V1=1, maka kondisi lampu true
  else{nLampu2=false;}              //Jika V1=0, maka kondisi lampu false
}

void setup()
{
  // Debug console
  Serial.begin(9600);
  pinMode(relayPin1, OUTPUT);     //Setting pin relay 1 ke mode OUTPUT
  pinMode(relayPin2, OUTPUT);     //Setting pin relay 2 ke mode OUTPUT
  digitalWrite(relayPin1, HIGH);  //Setting kondisi awal relay 1 ke kondisi HIGH (mati)
  digitalWrite(relayPin2, HIGH);  //Setting kondisi awal relay 2 ke kondisi HIGH (mati)

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
  lamp_control();   //Menjalankan fungsi lamp_control()
}

void lamp_control(){                                  //Fungsi lamp_control
  if(nLampu1 == true){digitalWrite(relayPin1, LOW);}  //Jika kondisi lampu true, maka relay 1 kondisi LOW (lampu nyala)
  else{digitalWrite(relayPin1, HIGH);}                //Jika kondisi lampu false, maka relay 1 kondisi HIGH (lampu mati)
  if(nLampu2 == true){digitalWrite(relayPin2, LOW);}  //Jika kondisi lampu true, maka relay 2 kondisi LOW (lampu nyala)
  else{digitalWrite(relayPin2, HIGH);}                //Jika kondisi lampu false, maka relay 2 kondisi HIGH (lampu mati)
}
