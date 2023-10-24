/*
http://www.Otronic.nl
Otronic Relais Module 5v Low | 2-kanaals €2,89
Otronic L298N Motor Driver Board rood (OT2099-B41) € 2,73
Mini OLED display wit 0.96 inch 128x64 I2C (OT822-C66) €4,70
Drukknop | moment - puls | 14x20 rond gat 12mm | Zwart (OT645-A23) € 0,75 4 x
Drukknop | aan-uit self lock | 14x20 rond gat 12mm | Zwart (OT625-A35) € 0,75 1x

AZDelivery ESP-32 Dev Kit C V4 WLAN WiFi Development Board compatibel met Arduino 
Kijk op Ali express voor de 38 pens versie

Afstandsbouten m2,5 x 11 €9,90 24 stuks
https://www.bol.com/nl/nl/p/mmobiel-24-stuks-m2-5-11mm-afstandhouder-6mm-rvs-schroef-en-moer/9300000039294358/?Referrer=ADVNLGOO002015-S--9300000039294358&gclid=EAIaIQobChMIvq_6t4TxgAMVMhoGAB3uAwALEAQYBCABEgJa0fD_BwE

Aliexpress
Dc  12V  Adapter Voeding Ac 100V-240V 8A   EU stekker €20
https://nl.aliexpress.com/item/1005002620565526.html
Ds18b20 Digitale Temperatuursensor Roestvrijstalen Sonde 6Mm * 50Mm 2 mtr €10,-
Let op: zonder krimpkous!!!
https://nl.aliexpress.com/item/32653515630.html 
of
1Pc DS18B20 Rvs Waterdichte DS18b20 1M 3M 5M Draad Temperatuursensor Temperatuursensor 18B20 Kabel voor Arduino - AliExpress Hier krimpkous verwijderen zodat hij in de thermowell past

ESP32 Breakout Board ESP32 Expansion Board 38Pin € 4,-
https://nl.aliexpress.com/item/1005005473050206.html 
of 
Nieuwe ESP-32S ESP-WROOM-32 Esp32 ESP-32 Bt En Wifi Dual Core Cpu Met Laag Stroomverbruik Mcu ESP-32 - AliExpress

Amazon
Elektronische aansluitdoos, waterdicht IP65, verdeeldoos opbouw, opbouwdoos, elektronische projectdoos, aansluitdoos behuizing kunststof, 158 x 90 x 60 mm, zwart €7,80
https://www.amazon.nl/gp/product/B0BZCQRYQ2/ref=ppx_yo_dt_b_asin_title_o00_s02?ie=UTF8&psc=1
Heat sink voor in vergistingskast 160x80x 26.9 € 16
https://nl.aliexpress.com/item/1005004135254600.html?spm=a2g0o.order_list.order_list_main.5.15cc79d20TozgB&gatewayAdapt=glo2nld
Heatsink voor aan de buitenkant van de kast 200x99x45 €44
https://nl.aliexpress.com/item/1005004140169108.html?spm=a2g0o.detail.0.0.50ebU5o5U5o5ac&gps-id=pcDetailTopMoreOtherSeller&scm=1007.40050.354490.0&scm_id=1007.40050.354490.0&scm-url=1007.40050.354490.0&pvid=2baa6e26-3878-4aaf-a51c-f58f105bfe87&_t=gps-id:pcDetailTopMoreOtherSeller,scm-url:1007.40050.354490.0,pvid:2baa6e26-3878-4aaf-a51c-f58f105bfe87,tpp_buckets:668%232846%238113%231998&pdp_npi=4%40dis%21EUR%2132.76%2130.47%21%21%21248.78%21%21%402101eeda16956490381155235e601e%2112000030401786189%21rec%21NL%211664427488%21

1 Peltier element TEC1-12706 zie als voorbeeld
https://nl.aliexpress.com/item/1005003268161555.html?spm=a2g0o.productlist.main.47.9371lIiGlIiGxF&algo_pvid=4b38ae83-0b9c-457c-bfcc-9595e68d27fb&algo_exp_id=4b38ae83-0b9c-457c-bfcc-9595e68d27fb-23&pdp_npi=4%40dis%21EUR%215.88%213.71%21%21%216.04%21%21%40211b441e16974619788062084ebb11%2112000025548009187%21sea%21NL%211664427488%21&curPageLogUid=wcJyvC6iTXvt

2 Ventilatoren koop een wat duurder type ivm toerenregeling met kogellagers. 80x80x25 12 VDC
https://nl.aliexpress.com/item/1005002971846100.html?spm=a2g0o.order_list.order_list_main.29.363b79d2b0WV4P&gatewayAdapt=glo2nld

2 fan roosters
https://nl.aliexpress.com/item/1005005572335210.html?spm=a2g0o.order_list.order_list_main.45.1c8879d2trP8Uv&gatewayAdapt=glo2nld

11 dupont draden male-female draden van 20 cm
Tzt Dupont Lijn 10Cm 20Cm 30Cm 40pin Mannelijk Naar Mannelijk + Mannelijk Naar Vrouwelijk En Vrouwelijk Naar Vrouwelijk Jumper Draad Dupont Kabel Voor Arduino - AliExpress
Met 1 pakket zou je voldoende moeten hebben

DC bus 5,5 x 2,5 mm € 11,- voor 10 stuks
Let op: Geen 5,5 x 2,1  i.v.m. warmte ontwikkeling door te dunne midden pen
https://www.amazon.nl/dp/B09L61JNBY?ref=ppx_pop_dt_b_product_details&th=1

Isolatie platen
https://www.isolatiemateriaal.nl/xps-isolatie/xps-isolatieplaten/austrotherm-xps-top-30-sf-1250x600x60mm-rd182-7plpak-525-m2   €46

RVS bodem plaat €35
https://www.brouwstore.nl/ferminator-bodemplaat-rvs

Tevens benodigd diverse draadeinden en zelftappers om alles in elkaar te zetten
    

Bedradings schema
Nodig 11 Male-Female dupont draden

ESP32     Display
3,3 V     Vcc
GND       GND
22        SCL
21        SDA

ESP32     Relay Module
GND       GND
4         IN1
5         IN2
5 Vdc     Vcc

ESP32     L298N
32        IN3
33        IN4
25        ENB

L298N
OUT3      + Ventilatoren
OUT4      - Ventilatoren

Gebruik voor de volgende verbindingen draad van 20 AWG oftewel minimaal 0,8 mm2 i.v.m. de 6 Amp die er loopt
+ DC Plug   NO K1   NO K2   +12V L298N
- DC plug   NC K1   NC K2   GND L298N   GND ESP Breakout Board
C K1    + Peltier
C K2    - Peltier

Voor de volgende verbindingen kan je gewoon (dun) draad gebruiken.
+5Vdc L298N Reset switch P1 Reset switch P2 5V ESP Breakout Board
ESP Breakout Board
3,3V                Rode draad DS18B20
3,3V                4K7 Gele draad DS18B20  27 ESP Breakout Board
GND                 Zwarte draad DS18B20
3,3V                10K   VP    Start/stop switch P1
3,3V                10K   VN    Fan Speed switch P1
3,3V                10K   34    + switch P1
3,3V                10K   35    - switch P1
GND                 Start/Stop switch P2
GND                 Fan Speed switch P2
GND                 + switch P2
GND                 - switch P2

*/

#include <OneWire.h>
#include <DallasTemperature.h>
#include <BluetoothSerial.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <LittleFS.h>
#include <ArduinoJson.h>    
#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEUtils.h>
#include <BLE2902.h>

BLEServer* pServer = NULL;
BLECharacteristic* pCharacteristic = NULL;
BLECharacteristic* pCharacteristic_1 = NULL;
BLECharacteristic* pCharacteristic_2 = NULL;
BLECharacteristic* pCharacteristic_3 = NULL;
BLECharacteristic* pCharacteristic_4 = NULL;

BLEDescriptor *pDescr;
BLE2902 *pBLE2902;

bool deviceConnected = false;
bool oldDeviceConnected = false;
uint32_t value = 0;

// See the following for generating UUIDs:
// https://www.uuidgenerator.net/

static BLEUUID BLESERVICE_UUID("4fafc201-1fb5-459e-8fcc-c5c9c331914b");
#define SERVICE_UUID        "4fafc201-1fb5-459e-8fcc-c5c9c331914b"
#define CHARACTERISTIC_UUID "beb5483e-36e1-4688-b7f5-ea07361b26a8"
#define CHARACTERISTIC_UUID_1 "d7be7b90-2423-4d6e-926d-239bc96bb2fd"
#define CHARACTERISTIC_UUID_2 "47524f89-07c8-43b6-bf06-a21c77bfdee8"
#define CHARACTERISTIC_UUID_3 "f13163b4-cc7f-456b-9ea4-5c6d9cec8ee3"
#define CHARACTERISTIC_UUID_4 "97f57b70-9465-4c46-a2e2-38b604f76451"

class MyServerCallbacks: public BLEServerCallbacks {
    void onConnect(BLEServer* pServer) {
      deviceConnected = true;
    };

    void onDisconnect(BLEServer* pServer) {
      deviceConnected = false;
    }
};


#define LED_BUILTIN 2
#define FORMAT_LittleFS_IF_FAILED true

// define filename to store config file
const String config_filename = "/config.json";

// ===================================== PARAMETERS ===================================================

// initialize the variables of the program
int SpeedFan = 3;
int PWR_ON = 1;
float TEMP_DESIRED = 20.0;  // desired final temperature

// ===================================== PIN CONNECTIONS ==============================================

// PIN CONNECTIONS; DS18B20 digital thermometer
// DS18B20 Board connections: red 5V (or 3.3V);  black GND;  yellow, GPIO 27 and 4.7kOhm -> 5V (or 3.3V)
const int oneWireBus = 27;  
OneWire oneWire(oneWireBus); // Setup a oneWire instance to communicate with any OneWire DS18B20 
DallasTemperature sensors(&oneWire); // Pass our oneWire reference to Dallas Temperature sensor 

// PIN CONNECTIONS; SSD1306 OLED display display connected to I2C (SDA_21, SCL_22 pins); 
// connectors=GND;VCC;SCL;SDA ==> gnd; 3.3V; GPIO22; GPIO21
#define DISPLAY_1_I2C_ADDRESS 0x3C
#define DISPLAY_1_WIDTH 128 // OLED display width, in pixels
#define DISPLAY_1_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
TwoWire I2C_1 = TwoWire(0);

Adafruit_SSD1306 display1(DISPLAY_1_WIDTH, DISPLAY_1_HEIGHT, &I2C_1, OLED_RESET);

// PIN CONNECTIONS; Motor speed control L298N
// Fans need 12V Powersupply; connect 12V and GND to adaptor
// L298N has 6 pins starting at the 5V connection; ENA, IN1, IN2, IN3, IN4, ENB(EnableB)
// Next to 12V connector is MotorA; - and + out 3 is + out 4 is - for fans.
int fanA_IN3 = 32; // IN3
int fanA_IN4 = 33; // IN4
int fanA     = 25; // ENB
// Fan - to Out 3
// Fan + to Out 4

// Setting PWM properties
const int freq = 30000;
const int pwmChannel = 0;
const int resolution = 8;
const int minSpeed = 200;  // increase this if the motor does not start


//the relays connect to
int IN1 = 4;
int IN2 = 5;
#define ON 0
#define OFF 1

// Pin connections for the pushbuttons +temp pin34 - temp pin 35 start/stop pin 36 Fan speed pin 39
// Each with 10K to 3.3V
#define TEMP_PLUS 34
#define TEMP_MIN 35
#define START_STOP 36
#define FAN_SPEED 39

//int PWR_ON = 1;
//int SpeedFan = 3;
int val_tempplus = 0;
int val_tempmin = 0;
int val_fanspeed = 0;
int val_onoff = 0;
int temp = 0;
int Change = 1;
int Heat = 0;
int Cool = 0;

//Timer variables
unsigned long lastTime = 0;
unsigned long timerDelay = 1000;

void setup()
{
 relay_init();//initialize the relay

 Serial.begin(115200);
 sensors.begin(); // Start the DS18B20 sensor

  // Create the BLE Device
  BLEDevice::init("ESP32");

  // Create the BLE Server
  pServer = BLEDevice::createServer();
  pServer->setCallbacks(new MyServerCallbacks());

  // Create the BLE Service
  BLEService *pService = pServer->createService(BLESERVICE_UUID, 30, 0);  // the 30 in this line defines the number of chars to be used, increase as needed

  // Create a BLE Characteristic
  pCharacteristic = pService->createCharacteristic(
                      CHARACTERISTIC_UUID,
                      BLECharacteristic::PROPERTY_NOTIFY
                     );   
  pCharacteristic_1 = pService->createCharacteristic(
                      CHARACTERISTIC_UUID_1,
                      BLECharacteristic::PROPERTY_NOTIFY
                      );    
  pCharacteristic_2 = pService->createCharacteristic(
                      CHARACTERISTIC_UUID_2,
                      BLECharacteristic::PROPERTY_NOTIFY  
                      );    
  pCharacteristic_3 = pService->createCharacteristic(
                      CHARACTERISTIC_UUID_3,
                      BLECharacteristic::PROPERTY_NOTIFY  
                      );    
  pCharacteristic_4 = pService->createCharacteristic(
                      CHARACTERISTIC_UUID_4,
                      BLECharacteristic::PROPERTY_NOTIFY  
                      );    
    // Create a BLE Descriptor

  pDescr = new BLEDescriptor((uint16_t)0x2901);
  pDescr->setValue("A very interesting variable");
  pCharacteristic->addDescriptor(pDescr);

  pBLE2902 = new BLE2902();
  pBLE2902->setNotifications(true);
  pCharacteristic->addDescriptor(pBLE2902);

  pCharacteristic_1->addDescriptor(new BLE2902());
  pCharacteristic_2->addDescriptor(new BLE2902());
  pCharacteristic_3->addDescriptor(new BLE2902());
  pCharacteristic_4->addDescriptor(new BLE2902());
 
  // Start the service
  pService->start();

  // Start advertising
  BLEAdvertising *pAdvertising = BLEDevice::getAdvertising();
  pAdvertising->addServiceUUID(SERVICE_UUID);
  pAdvertising->setScanResponse(false);
  pAdvertising->setMinPreferred(0x0);  // set value to 0x00 to not advertise this parameter
  BLEDevice::startAdvertising();
  Serial.println("Waiting a client connection to notify...");


 pinMode(TEMP_PLUS,INPUT_PULLUP);
 pinMode(TEMP_MIN,INPUT_PULLUP);
 pinMode(START_STOP,INPUT_PULLUP);
 pinMode(FAN_SPEED,INPUT_PULLUP);

 //SSD1306_SWITCHCAPVCC= generate display voltage from 3.3V internally
 bool status1;
 I2C_1.begin();
 status1 = display1.begin(SSD1306_SWITCHCAPVCC,DISPLAY_1_I2C_ADDRESS);
 if (!(status1)){
  Serial.println(F("SSD1306 INITIALIZATION failed"));
  for(;;);
  }
  display1.clearDisplay();
  display1.setTextSize(2);
  display1.setTextColor(WHITE,0);
  display1.setCursor(0,25);
  display1.print("Fermenter Server");
  display1.display();

// Mount LittleFS and read in config file
  if(!LittleFS.begin(FORMAT_LittleFS_IF_FAILED)){
    Serial.println("setup -> LittleFS Mount Failed");
  }
  else{
    Serial.println("setup -> LittleFS mounted successfully");
    if(readConfig(config_filename) == false) {
      Serial.println("setup -> Could not read Config file -> initializing new file");
      // if not possible -> save new config file
      if (saveConfig(config_filename)) {
        Serial.println("setup -> Config file saved");
 
      }   
    }
      Serial.println("SpeedFan = " + String(SpeedFan) + ", PWR_ON = " + String(PWR_ON) + ", TEMP_DESIRED = " + String(TEMP_DESIRED));
   
     }

 display1.display();
 display1.clearDisplay();

//Fan setup
pinMode(fanA_IN3,OUTPUT);
pinMode(fanA_IN4,OUTPUT);
pinMode(fanA,OUTPUT);
ledcSetup(pwmChannel,freq,resolution); //configure LED PWM functionalities
ledcAttachPin(fanA,pwmChannel); //attach the channel to the GPIO to be controlled
digitalWrite(fanA_IN3,HIGH);
digitalWrite(fanA_IN4,LOW);
ledcWrite(pwmChannel,255);
delay(2000);
      if (SpeedFan == 3){
         ledcWrite(pwmChannel,255);
          }
      if (SpeedFan == 2){
        ledcWrite(pwmChannel,175);
      }
      if (SpeedFan == 1){
        ledcWrite(pwmChannel,100);
      }

 //Digital temperature DS18B20
 sensors.requestTemperatures();
 float temperature = sensors.getTempCByIndex(0);
 
   if ((temperature - TEMP_DESIRED) > 0.0 &&(temperature - TEMP_DESIRED) < 0.5 ) {
    (temp = 0);
    (Heat = 1);
     relay_SetStatus(ON, OFF);//turn on RELAY_1 Heat
    }
   if ((TEMP_DESIRED - temperature) > 0.0 && (TEMP_DESIRED - temperature) < 0.5) {
    (temp = 2);
    (Cool = 1);
     relay_SetStatus(OFF, ON);//turn on RELAY_2 Cool
    }

}
String FloatToStr(float f,int d){
  int decimal=round((f - int(f))*pow(10,d));
  return String(int(f)) + "." + String(decimal);
}

void relay_init(void)//initialize the relay
{
 //set all the relays OUTPUT
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 relay_SetStatus(OFF, OFF); //turn off all the relay
}
//set the status of relays
void relay_SetStatus( unsigned char status_1, unsigned char status_2)
{
 digitalWrite(IN1, status_1);
 digitalWrite(IN2, status_2);
}
void FanSymbol(int SpeedFan)
{
  display1.setTextSize(1); 
  if (SpeedFan >= 1){
  display1.setCursor(92,15); display1.print((char)178 );}
  display1.setTextSize(2); 
  if (SpeedFan >= 2){
  display1.setCursor(96,7); display1.print((char)178 );}
  display1.setTextSize(3); 
  if (SpeedFan >= 3){
  display1.setCursor(100,0); display1.print((char)178 );}
}
void Revs (int SpeedFan)
{
   if (SpeedFan == 3){
    ledcWrite(pwmChannel,255);
   }
  if (SpeedFan == 2){
    ledcWrite(pwmChannel,175);
   }
  if (SpeedFan == 1){
    ledcWrite(pwmChannel,100);
   }
}



void loop() {

 //Digital temperature DS18B20
 sensors.requestTemperatures();
float temperature = sensors.getTempCByIndex(0);
 if ((temperature < -10.0) || (temperature > 55.0)){
  Serial.println(F("Temperature out  of range"));
   display1.clearDisplay();
  display1.setTextSize(2);
  display1.setTextColor(WHITE,0);
  display1.setCursor(0,25);
  display1.print("Temp out  of range");
  display1.display();
  //for(;;);
  delay(3000);
  //PWR_ON = 0;
  }

 val_onoff = digitalRead(START_STOP);
if (val_onoff == LOW) {
 if (PWR_ON == 0){
  PWR_ON = 1;
  Revs(SpeedFan);
 } else {
  PWR_ON = 0;
 }
 Change = 1;
}

 val_tempplus = digitalRead(TEMP_PLUS);
 if (val_tempplus == LOW) {
  TEMP_DESIRED = TEMP_DESIRED + 0.5;
    if (TEMP_DESIRED > 50.0){
    TEMP_DESIRED = 50.0;
  }

  Change = 1;
 }

val_tempmin = digitalRead(TEMP_MIN);

if (val_tempmin == LOW) {
  TEMP_DESIRED = TEMP_DESIRED - 0.5;
  if (TEMP_DESIRED < 0.0){
    TEMP_DESIRED = 0.0;
  }
  Change = 1;
}
Serial.println(temp);
if (PWR_ON == 0){
  relay_SetStatus(OFF, OFF);//turn off RELAYS
  ledcWrite(pwmChannel,0);
  display1.clearDisplay();
  display1.setTextColor(WHITE);
  display1.setTextSize(1); 
  display1.setCursor(0,0); display1.print("off");
  display1.setTextSize(1); 
  display1.setCursor(27,13);display1.print("---");
  FanSymbol(SpeedFan);
  display1.setTextSize(1); 
  display1.setCursor(0,18); display1.print("____________________");
  display1.setTextSize(2);
  display1.setCursor(0,30); display1.print("Set:");
  display1.setCursor(50,30);display1.print(FloatToStr(TEMP_DESIRED,1)+(char)247 + "C");
  display1.setCursor(0,50); display1.print("Act:");
  display1.setCursor(50,50); display1.print(FloatToStr(temperature,1)+(char)247 + "C");
  display1.display();
  delay(300);

} else {

 if (TEMP_DESIRED == temperature) {
   Heat = 0;
   Cool = 0;
   relay_SetStatus(OFF, OFF);//turn off RELAY_1 and RELAY_2
  ledcWrite(pwmChannel,100);
  display1.clearDisplay();
  display1.setTextColor(WHITE);
  display1.setTextSize(1); 
  display1.setCursor(0,0); display1.print("on");
  display1.setTextSize(1); 
  display1.setCursor(27,13);display1.print("---");
  display1.setTextSize(1); 
  display1.setCursor(0,18); display1.print("____________________");
  display1.setTextSize(1); 
  display1.setCursor(70,0); display1.print("o");
  display1.setCursor(78,0); display1.print("o");
  display1.setCursor(70,8);display1.print("o");
  display1.setCursor(78,8);display1.print("o");
  display1.setCursor(74,4);display1.print("/");
  display1.setCursor(76,4);display1.print((char)91);
  FanSymbol(SpeedFan);
  display1.setTextSize(2);
  display1.setCursor(0,30); display1.print("Set:");
  display1.setCursor(50,30);display1.print(FloatToStr(TEMP_DESIRED,1)+(char)247 + "C");
  display1.setCursor(0,50); display1.print("Act:");
  display1.setCursor(50,50); display1.print(FloatToStr(temperature,1)+(char)247 + "C");
  display1.display();
  temp = 1;
  delay(300);

    } 
 if ((temperature - TEMP_DESIRED) > 0.5) {
   Heat = 0;
   Cool = 1;
 relay_SetStatus(OFF, ON);//turn on RELAY_2 Cool
 //ledcWrite(pwmChannel,255);
 Revs(SpeedFan);
 display1.clearDisplay();
 display1.setTextColor(WHITE);
 display1.setTextSize(1); 
 display1.setCursor(0,0); display1.print("on");
 display1.setTextSize(3); 
 display1.setCursor(25,0); display1.print("*");
 display1.setTextSize(1); 
 display1.setCursor(70,0); display1.print("o");
 display1.setCursor(78,0); display1.print("o");
 display1.setCursor(70,8);display1.print("o");
 display1.setCursor(78,8);display1.print("o");
 display1.setCursor(74,4);display1.print("/");
 display1.setCursor(76,4);display1.print((char)91);
 FanSymbol(SpeedFan);
 display1.setTextSize(1); 
 display1.setCursor(0,18); display1.print("____________________");
 display1.setTextSize(2);
 display1.setCursor(0,30); display1.print("Set:");
 display1.setCursor(50,30);display1.print(FloatToStr(TEMP_DESIRED,1)+(char)247 + "C");
 display1.setCursor(0,50); display1.print("Act:");
 display1.setCursor(50,50); display1.print(FloatToStr(temperature,1)+(char)247 + "C");
 display1.display();
 temp = 0;
 delay(300);
 }
  if ((temperature - TEMP_DESIRED) > 0.0 &&(temperature - TEMP_DESIRED) < 0.5 ) {
 if (temp == 0){
  Heat = 0;
  Cool = 1;
 display1.clearDisplay();
 display1.setTextColor(WHITE);
 display1.setTextSize(1); 
 display1.setCursor(0,0); display1.print("on");
 display1.setTextSize(3); 
 display1.setCursor(25,0); display1.print("*");
 display1.setTextSize(1); 
 display1.setCursor(70,0); display1.print("o");
 display1.setCursor(78,0); display1.print("o");
 display1.setCursor(70,8);display1.print("o");
 display1.setCursor(78,8);display1.print("o");
 display1.setCursor(74,4);display1.print("/");
 display1.setCursor(76,4);display1.print((char)91);
 FanSymbol(SpeedFan);
 display1.setTextSize(1); 
 display1.setCursor(0,18); display1.print("____________________");
 display1.setTextSize(2);
 display1.setCursor(0,30); display1.print("Set:");
 display1.setCursor(50,30);display1.print(FloatToStr(TEMP_DESIRED,1)+(char)247 + "C");
 display1.setCursor(0,50); display1.print("Act:");
 display1.setCursor(50,50); display1.print(FloatToStr(temperature,1)+(char)247 + "C");
 display1.display();
 delay(300);
  } else {
    Heat = 0;
    Cool = 0;
    display1.clearDisplay();
  display1.setTextColor(WHITE);
  display1.setTextSize(1); 
  display1.setCursor(0,0); display1.print("on");
  display1.setTextSize(1); 
  display1.setCursor(27,13);display1.print("---");
  display1.setTextSize(1); 
  display1.setCursor(0,18); display1.print("____________________");
  display1.setTextSize(1); 
  display1.setCursor(70,0); display1.print("o");
  display1.setCursor(78,0); display1.print("o");
  display1.setCursor(70,8);display1.print("o");
  display1.setCursor(78,8);display1.print("o");
  display1.setCursor(74,4);display1.print("/");
  display1.setCursor(76,4);display1.print((char)91);
  FanSymbol(SpeedFan);
  display1.setTextSize(2);
  display1.setCursor(0,30); display1.print("Set:");
  display1.setCursor(50,30);display1.print(FloatToStr(TEMP_DESIRED,1)+(char)247 + "C");
  display1.setCursor(0,50); display1.print("Act:");
  display1.setCursor(50,50); display1.print(FloatToStr(temperature,1)+(char)247 + "C");
  display1.display();
   delay(300);
  }
}
 if ((TEMP_DESIRED - temperature) > 0.5) {
   Heat = 1;
   Cool = 0;
 relay_SetStatus(ON, OFF);//turn on RELAY_1 Heat
 //ledcWrite(pwmChannel,255);
 Revs(SpeedFan);
 display1.clearDisplay();
 display1.setTextColor(WHITE);
 display1.setTextSize(1); 
 display1.setCursor(0,0); display1.print("on");
 display1.setCursor(27,0); display1.print("$$$");
 display1.setCursor(25,7); display1.print("$$$");
 display1.setCursor(27,13);display1.print("$$$");
 display1.setTextSize(1); 
 display1.setCursor(70,0); display1.print("o");
 display1.setCursor(78,0); display1.print("o");
 display1.setCursor(70,8);display1.print("o");
 display1.setCursor(78,8);display1.print("o");
 display1.setCursor(74,4);display1.print("/");
 display1.setCursor(76,4);display1.print((char)91);
 FanSymbol(SpeedFan);
 display1.setTextSize(1); 
 display1.setCursor(0,18); display1.print("____________________");
 display1.setTextSize(2);
 display1.setCursor(0,30); display1.print("Set:");
 display1.setCursor(50,30);display1.print(FloatToStr(TEMP_DESIRED,1)+(char)247 + "C");
 display1.setCursor(0,50); display1.print("Act:");
 display1.setCursor(50,50); display1.print(FloatToStr(temperature,1)+(char)247 + "C");
 display1.display();
 temp = 2;
 delay(300);
 }
  if ((TEMP_DESIRED - temperature) > 0.0 && (TEMP_DESIRED - temperature) < 0.5) {
 if (temp == 2) {
  Heat = 1;
  Cool = 0;
 display1.clearDisplay();
 display1.setTextColor(WHITE);
 display1.setTextSize(1); 
 display1.setCursor(0,0); display1.print("on");
 display1.setCursor(27,0); display1.print("$$$");
 display1.setCursor(25,7); display1.print("$$$");
 display1.setCursor(27,13);display1.print("$$$");
 display1.setTextSize(1); 
 display1.setCursor(70,0); display1.print("o");
 display1.setCursor(78,0); display1.print("o");
 display1.setCursor(70,8);display1.print("o");
 display1.setCursor(78,8);display1.print("o");
 display1.setCursor(74,4);display1.print("/");
 display1.setCursor(76,4);display1.print((char)91);
 FanSymbol(SpeedFan);
 display1.setTextSize(1); 
 display1.setCursor(0,18); display1.print("____________________");
 display1.setTextSize(2);
 display1.setCursor(0,30); display1.print("Set:");
 display1.setCursor(50,30);display1.print(FloatToStr(TEMP_DESIRED,1)+(char)247 + "C");
 display1.setCursor(0,50); display1.print("Act:");
 display1.setCursor(50,50); display1.print(FloatToStr(temperature,1)+(char)247 + "C");
 display1.display();
 delay(300);
   } else {
    Heat = 0;
    Cool = 0;
    display1.clearDisplay();
  display1.setTextColor(WHITE);
  display1.setTextSize(1); 
  display1.setCursor(0,0); display1.print("on");
  display1.setTextSize(1); 
  display1.setCursor(27,13);display1.print("---");
  display1.setTextSize(1); 
  display1.setCursor(0,18); display1.print("____________________");
  display1.setTextSize(1); 
  display1.setCursor(70,0); display1.print("o");
  display1.setCursor(78,0); display1.print("o");
  display1.setCursor(70,8);display1.print("o");
  display1.setCursor(78,8);display1.print("o");
  display1.setCursor(74,4);display1.print("/");
  display1.setCursor(76,4);display1.print((char)91);
  FanSymbol(SpeedFan);
  display1.setTextSize(2);
  display1.setCursor(0,30); display1.print("Set:");
  display1.setCursor(50,30);display1.print(FloatToStr(TEMP_DESIRED,1)+(char)247 + "C");
  display1.setCursor(0,50); display1.print("Act:");
  display1.setCursor(50,50); display1.print(FloatToStr(temperature,1)+(char)247 + "C");
  display1.display();
  delay(300);
    }
  }
  
}
 val_fanspeed = digitalRead(FAN_SPEED);

if (val_fanspeed == LOW){
   if (SpeedFan >= 3){
    SpeedFan = 1;
    Revs(SpeedFan);
    //ledcWrite(pwmChannel,150);
   } else {
    SpeedFan++;
      Revs(SpeedFan);
   }
 Serial.println(SpeedFan);
  Change = 1;
  delay(300); 
}
if (Change == 1){
if (saveConfig(config_filename)) {
    Serial.println("setup -> Config file saved");
  }   
  Change = 0;
 }
 if (deviceConnected){
 if ((millis() - lastTime) > timerDelay) {

 static char TEMP_DESIREDC[6];
  static char temperatureC[6];
  static char SpeedFanC[6];
  static char PWR_ONC[6];
  static char HeatC[6];
  static char CoolC[6];
  dtostrf(TEMP_DESIRED,6,2,TEMP_DESIREDC);
  pCharacteristic_1->setValue(TEMP_DESIREDC);
    pCharacteristic_1->notify();
  dtostrf(temperature,6,2,temperatureC);
   pCharacteristic_2->setValue(temperatureC);
   pCharacteristic_2->notify();
   dtostrf(SpeedFan,6,2,SpeedFanC);
   pCharacteristic_3->setValue(SpeedFanC);
   pCharacteristic_3->notify();
  dtostrf(PWR_ON,6,2,PWR_ONC);
    pCharacteristic_4->setValue(PWR_ONC);
   pCharacteristic_4->notify();
  
  
  if(!deviceConnected && oldDeviceConnected) {
    delay(500);
    pServer->startAdvertising();
    oldDeviceConnected = deviceConnected;
  }
  if (deviceConnected && !oldDeviceConnected) {
    oldDeviceConnected = deviceConnected;
   }
  lastTime = millis();
   }
 }
}

bool readConfig(String file_name) {
  String file_content = readFile(LittleFS, file_name);
  int config_file_size = file_content.length();
  Serial.println("Config file size: " + String(config_file_size));
  if(config_file_size > 1024) {
    Serial.println("Config file too large");
    return false;
  }
  StaticJsonDocument<1024> doc;
  auto error = deserializeJson(doc, file_content);
  if ( error ) { 
    Serial.println("Error interpreting config file");
    return false;
  }
  const int _SpeedFan = doc["SpeedFan"];
  const int _PWR_ON = doc["PWR_ON"];
  const float _TEMP_DESIRED = doc["TEMP_DESIRED"];
  SpeedFan = _SpeedFan;
  PWR_ON = _PWR_ON;
  TEMP_DESIRED = _TEMP_DESIRED;
  Serial.println("SpeedFan = " + String(SpeedFan) + ", PWR_ON = " + String(PWR_ON) + ", TEMP_DESIRED = " + String(TEMP_DESIRED));
  return true;
}

bool saveConfig(String file_name) {
  StaticJsonDocument<1024> doc;
  // write variables to JSON file
  doc["SpeedFan"] = SpeedFan;
  doc["PWR_ON"] = PWR_ON;
  doc["TEMP_DESIRED"] = TEMP_DESIRED;
  
  // write config file
  String tmp = "";
  serializeJson(doc, tmp);
  writeFile(LittleFS, config_filename, tmp);
  Serial.println("SpeedFan = " + String(SpeedFan) + ", PWR_ON = " + String(PWR_ON) + ", TEMP_DESIRED = " + String(TEMP_DESIRED));
  return true;
}
void writeFile(fs::FS &fs, String filename, String message){
  Serial.println("writeFile -> Writing file: " + filename);
  File file = fs.open(filename, FILE_WRITE);
  if(!file){
    Serial.println("writeFile -> failed to open file for writing");
    return;
  }
  if(file.print(message)){
    Serial.println("writeFile -> file written");
  } else {
    Serial.println("writeFile -> write failed");
  }
  file.close();
}
String readFile(fs::FS &fs, String filename){
  Serial.println("readFile -> Reading file: " + filename);
  File file = fs.open(filename);
  if(!file || file.isDirectory()){
    Serial.println("readFile -> failed to open file for reading");
    return "";
  }
  String fileText = "";
  while(file.available()){
    fileText = file.readString();
  }
  file.close();
  return fileText;
}