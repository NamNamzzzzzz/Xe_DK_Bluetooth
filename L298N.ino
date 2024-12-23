#include <SoftwareSerial.h>
SoftwareSerial mybulul(2,3);//(2-TX),(3-RX)
char docgiatri;
#define ENA 4
#define ENB 9
#define IN1 5
#define IN2 6
#define IN3 7
#define IN4 8


void setup() 
{
// Serial.begin(9600);
mybulul.begin(9600);// connect blu baudrate 9600
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(ENA, OUTPUT);
pinMode(ENB, OUTPUT);
}
void loop() 
{
   if(mybulul.available() >0 )//neu lon hon 0 la ket noi vs blt done
   {
    docgiatri = mybulul.read();
    Serial.print("gia tri:");
    Serial.print(docgiatri);
   }
   if(docgiatri == '0')
   {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    analogWrite(ENA, 0);
    analogWrite(ENB, 0);
    Serial.print("STOP\n");

   }
   if(docgiatri == '1')
   {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(ENA, 255);
    analogWrite(ENB, 255);
    Serial.print("TIEN\n");
   }
   if(docgiatri == '2')
   {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    analogWrite(ENA, 200);
    analogWrite(ENB, 200);
    Serial.print("LUI\n");
   }
if(docgiatri == '3')
   {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(ENA, 0);
    analogWrite(ENB, 255);
    Serial.print("QUEO TRAI\n");
   }
   if(docgiatri == '4')
   {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    analogWrite(ENA, 255);
    analogWrite(ENB, 0);
    Serial.print("QUEO PHAI\n");
   }
   }