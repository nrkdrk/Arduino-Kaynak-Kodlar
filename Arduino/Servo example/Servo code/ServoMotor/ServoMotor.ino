/*Berk Can | www.nrkdrk.com */
#include <Servo.h> /*Servo kutuphanesi eklendi*/
 
Servo servoMotor;  /*servo motor türetildi */
 
int Potentiometer = A0; /* Potansiyometre içi arduion pinini belirledik*/
int PotValue; /*PotValue diye bir nesneyi potansiyometre değeri için oluşturduk*/
 
void setup() 
{ 
  servoMotor.attach(7); /* Servo motor 7 numarali pine bağlanacak*/
} 
 
void loop() 
{ 
  PotValue = analogRead(Potentiometer);  /*cikis gerilimini olctuk */
  PotValue = map(PotValue, 0, 1023, 0, 179);
  /*potansiyometre 0 ile 1023 arasında değerler alır
  biz o değeri map fonksiyonu ile 0 ile 180 arasında 
  olmasını sağladık*/  
  servoMotor.write(PotValue); /*PotValue degerini servo motora yolladık*/ 
  delay(15);  /*ServoMotorun konumunu almasi icin bir sure bekletiyoruz */ 
}
