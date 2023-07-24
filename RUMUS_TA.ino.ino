#include <math.h>
#include <Servo.h>

const int NUM_SERVOS = 17;
Servo servos[NUM_SERVOS];
int servoPins[NUM_SERVOS] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
int servoAngles[NUM_SERVOS] = {90,90,95,75,110,100,95,5,140,120,100,103,20,70,40,135,90};
void setup() {
  for (int i = 0; i < NUM_SERVOS; i++) {
    servos[i].attach(servoPins[i]);
  }
  Serial.begin(9600);
}

void loop() {
//awal_berdiri_diam();
moveAllServos(servoAngles);
fungsi1();
fungsi2();
fungsi3();
fungsi4();
fungsi5();
fungsi6();
fungsi7();
fungsi8();
fungsi9();
fungsi10();
fungsi11();
fungsi1();
//  delay(5000);
//  servoAngles[0]=95;
//  a
//  delay(5000);
////
//  delay(2000);  // Tunda 2 detik

  // Mengubah sudut servo ke-17
//  servoAngles[16] = 180;

  // Panggil fungsi untuk menggerakkan semua servo ke sudut tertentu setelah mengubah sudut servo ke-17
//  moveAllServos(servoAngles);

//  delay(2000);  // Tunda 2 detik
}
void moveAllServos(int angles[]) {
  for (int i = 0; i < NUM_SERVOS; i++) {
    // Batasi sudut antara 0 hingga 180 derajat
    int angle = angles[i];
    if (angle < 0) {
      angle = 0;
    } else if (angle > 180) {
      angle = 180;
    }

    // Menggerakkan servo ke sudut yang ditentukan
    servos[i].write(angle);

    // Tampilkan sudut yang digunakan ke dalam Serial Monitor
    Serial.print("Servo ");
    Serial.print(i+1);
    Serial.print(" sudut: ");
    Serial.println(angle);
  }
}
void fungsi0(){
  moveAllServos(servoAngles);
  }

void fungsi1(){
    moveAllServos(servoAngles);
  delay(10000);  // Tunda 2 detik
  float d1=13;
  float d2=18;
  float d4=17;
  float g=9.807;
  float Mk=0.487,Mb=0.42;
  float w1=Mk*g,w2=Mb*g;
  float w4=Mb*g;
  
  float sudut_fungsi1 = 60; // Masukan untuk sudut fungsi 1
  float cosinusSatuanRadian=cos(sudut_fungsi1*PI/180); //Mengubah dari derajat ke radian
  float d3=sqrt((d1*d1)+(d2*d2)-(2*d1*d2*cosinusSatuanRadian));//mencari akar dari persamaan segitiga sembarang untuk mencari panjang d3
  float SinusSatuanRadian=sin(sudut_fungsi1*PI/180);//mengubah dari derajat ke radian
  float b = asin((d1*SinusSatuanRadian)/(d3)) * (180.0 / PI); // Menghitung nilai b dalam derajat
  float sinB=(d1*SinusSatuanRadian)/d3;
  float sinA=(w1*d3*sinB)/(w4*d4);
  float alpha=asin(sinA)*(180.0 / PI);
  float jawab=w4*d4;
//  float alpha=asin()*(180/PI);
//  Serial.println(d3);
//  Serial.println(arcsin);
//  Serial.print(w1);
//Serial.println(alpha);
Serial.println(alpha);

for(int i=90;i<=alpha;i++){
  servos[2].write(i);
  delay(20);
  }


  }
void fungsi2(){
//  servo_write(98,90,85,105,107,100,115,35,140,120,105,107,20,70,40,135,90);
  moveAllServos(servoAngles);
  delay(2000);  // Tunda 2 detik
  float d1=13;
  float d2=18;
  float d4=17;
  float g=9.807;
  float Mk=0.487,Mb=0.42;
  float w1=Mk*g,w2=Mb*g;
  float w4=Mb*g;
  
  float sudut_fungsi1 = 40; // Masukan untuk sudut fungsi 1
  float cosinusSatuanRadian=cos(sudut_fungsi1*PI/180); //Mengubah dari derajat ke radian
  float d3=sqrt((d1*d1)+(d2*d2)-(2*d1*d2*cosinusSatuanRadian));//mencari akar dari persamaan segitiga sembarang untuk mencari panjang d3
  float SinusSatuanRadian=sin(sudut_fungsi1*PI/180);//mengubah dari derajat ke radian
  float b = asin((d1*SinusSatuanRadian)/(d3)) * (180.0 / PI); // Menghitung nilai b dalam derajat
  float sinB=(d1*SinusSatuanRadian)/d3;
  float sinA=(w1*d3*sinB)/(w4*d4);
  float alpha=asin(sinA)*(180.0 / PI);
  float jawab=w4*d4;
//  float alpha=asin()*(180/PI);
//  Serial.println(d3);
//  Serial.println(arcsin);
//  Serial.print(w1);
//Serial.println(alpha);
Serial.println(alpha);

  // Menunda selama 500ms
  delay(5000);
  }
  void fungsi3(){
//    servo_write(94,90,85,70,113,100,115,35,140,120,105,110,20,70,40,135,90);
moveAllServos(servoAngles);
         float d1=13;
  float d2=18;
  float d4=17;
  float g=9.807;
  float Mk=0.487,Mb=0.42;
  float w1=Mk*g,w2=Mb*g;
  float w4=Mb*g;
  
  float sudut_fungsi1 = 40; // Masukan untuk sudut fungsi 1
  float cosinusSatuanRadian=cos(sudut_fungsi1*PI/180); //Mengubah dari derajat ke radian
  float d3=sqrt((d1*d1)+(d2*d2)-(2*d1*d2*cosinusSatuanRadian));//mencari akar dari persamaan segitiga sembarang untuk mencari panjang d3
  float SinusSatuanRadian=sin(sudut_fungsi1*PI/180);//mengubah dari derajat ke radian
  float b = asin((d1*SinusSatuanRadian)/(d3)) * (180.0 / PI); // Menghitung nilai b dalam derajat
  float sinB=(d1*SinusSatuanRadian)/d3;
  float sinA=(w1*d3*sinB)/(w4*d4);
  float alpha=asin(sinA)*(180.0 / PI);
  float jawab=w4*d4;
//  float alpha=asin()*(180/PI);
//  Serial.println(d3);
//  Serial.println(arcsin);
//  Serial.print(w1);
//Serial.println(alpha);
Serial.println(alpha);

  // Menunda selama 500ms
  delay(5000);
    }
 void fungsi4(){
//  servo_write(120,75,70,90,113,100,135,0,140,120,95,100,20,70,40,135,90);
moveAllServos(servoAngles);
       float d1=13;
  float d2=18;
  float d4=17;
  float g=9.807;
  float Mk=0.487,Mb=0.42;
  float w1=Mk*g,w2=Mb*g;
  float w4=Mb*g;
  
  float sudut_fungsi1 = 45; // Masukan untuk sudut fungsi 1
  float cosinusSatuanRadian=cos(sudut_fungsi1*PI/180); //Mengubah dari derajat ke radian
  float d3=sqrt((d1*d1)+(d2*d2)-(2*d1*d2*cosinusSatuanRadian));//mencari akar dari persamaan segitiga sembarang untuk mencari panjang d3
  float SinusSatuanRadian=sin(sudut_fungsi1*PI/180);//mengubah dari derajat ke radian
  float b = asin((d1*SinusSatuanRadian)/(d3)) * (180.0 / PI); // Menghitung nilai b dalam derajat
  float sinB=(d1*SinusSatuanRadian)/d3;
  float sinA=(w1*d3*sinB)/(w4*d4);
  float alpha=asin(sinA)*(180.0 / PI);
  float jawab=w4*d4;
//  float alpha=asin()*(180/PI);
//  Serial.println(d3);
//  Serial.println(arcsin);
//  Serial.print(w1);
//Serial.println(alpha);
Serial.println(alpha);

  // Menunda selama 500ms
  delay(5000);
  }
  void fungsi5(){
//    servo_write(120,75,70,90,113,100,135,0,140,120,95,100,20,70,40,135,90);
moveAllServos(servoAngles);
         float d1=13;
  float d2=18;
  float d4=17;
  float g=9.807;
  float Mk=0.487,Mb=0.42;
  float w1=Mk*g,w2=Mb*g;
  float w4=Mb*g;
  
  float sudut_fungsi1 = 65; // Masukan untuk sudut fungsi 1
  float cosinusSatuanRadian=cos(sudut_fungsi1*PI/180); //Mengubah dari derajat ke radian
  float d3=sqrt((d1*d1)+(d2*d2)-(2*d1*d2*cosinusSatuanRadian));//mencari akar dari persamaan segitiga sembarang untuk mencari panjang d3
  float SinusSatuanRadian=sin(sudut_fungsi1*PI/180);//mengubah dari derajat ke radian
  float b = asin((d1*SinusSatuanRadian)/(d3)) * (180.0 / PI); // Menghitung nilai b dalam derajat
  float sinB=(d1*SinusSatuanRadian)/d3;
  float sinA=(w1*d3*sinB)/(w4*d4);
  float alpha=asin(sinA)*(180.0 / PI);
  float jawab=w4*d4;
//  float alpha=asin()*(180/PI);
//  Serial.println(d3);
//  Serial.println(arcsin);
//  Serial.print(w1);
//Serial.println(alpha);
Serial.println(alpha);

  // Menunda selama 500ms
  delay(5000);
    }
    void fungsi6(){
//      servo_write(90,68,110,90,83,100,40,0,140,120,95,100,20,70,40,135,90);
moveAllServos(servoAngles);
 float d1=13;
  float d2=18;
  float d4=17;
  float g=9.807;
  float Mk=0.487,Mb=0.42;
  float w1=Mk*g,w2=Mb*g;
  float w4=Mb*g;
  
  float sudut_fungsi1 = 70; // Masukan untuk sudut fungsi 1
  float cosinusSatuanRadian=cos(sudut_fungsi1*PI/180); //Mengubah dari derajat ke radian
  float d3=sqrt((d1*d1)+(d2*d2)-(2*d1*d2*cosinusSatuanRadian));//mencari akar dari persamaan segitiga sembarang untuk mencari panjang d3
  float SinusSatuanRadian=sin(sudut_fungsi1*PI/180);//mengubah dari derajat ke radian
  float b = asin((d1*SinusSatuanRadian)/(d3)) * (180.0 / PI); // Menghitung nilai b dalam derajat
  float sinB=(d1*SinusSatuanRadian)/d3;
  float sinA=(w1*d3*sinB)/(w4*d4);
  float alpha=asin(sinA)*(180.0 / PI);
  float jawab=w4*d4;
//  float alpha=asin()*(180/PI);
//  Serial.println(d3);
//  Serial.println(arcsin);
//  Serial.print(w1);
//Serial.println(alpha);
Serial.println(alpha);

  // Menunda selama 500ms
  delay(5000);
      }
      void fungsi7(){
//        servo_write(90,68,65,90,83,100,40,0,140,120,95,100,20,70,40,135,90);
moveAllServos(servoAngles);
float d5,d4,d3;
float w6,w3,w4;
float alpha,bheta,b;
float sinalpha=((d3*w6*sin(60))-(d4*w3*sin(60)))/d5*w4;
//  float alpha=asin()*(180/PI);
//  Serial.println(d3);
//  Serial.println(arcsin);
//  Serial.print(w1);
//Serial.println(alpha);
Serial.println(alpha);

  // Menunda selama 500ms
  delay(5000);
        }
 void fungsi8(){
//  servo_write(90,75,65,90,83,100,140,0,140,120,85,95,20,70,40,135,90);
moveAllServos(servoAngles);
   float d1=13;
  float d2=18;
  float d4=17;
  float g=9.807;
  float Mk=0.487,Mb=0.42;
  float w1=Mk*g,w2=Mb*g;
  float w4=Mb*g;
  
  float sudut_fungsi1 = 40; // Masukan untuk sudut fungsi 1
  float cosinusSatuanRadian=cos(sudut_fungsi1*PI/180); //Mengubah dari derajat ke radian
  float d3=sqrt((d1*d1)+(d2*d2)-(2*d1*d2*cosinusSatuanRadian));//mencari akar dari persamaan segitiga sembarang untuk mencari panjang d3
  float SinusSatuanRadian=sin(sudut_fungsi1*PI/180);//mengubah dari derajat ke radian
  float b = asin((d1*SinusSatuanRadian)/(d3)) * (180.0 / PI); // Menghitung nilai b dalam derajat
  float sinB=(d1*SinusSatuanRadian)/d3;
  float sinA=(w1*d3*sinB)/(w4*d4);
  float alpha=asin(sinA)*(180.0 / PI);
  float jawab=w4*d4;
//  float alpha=asin()*(180/PI);
//  Serial.println(d3);
//  Serial.println(arcsin);
//  Serial.print(w1);
//Serial.println(alpha);
Serial.println(alpha);

  // Menunda selama 500ms
  delay(5000);
  }
void fungsi9(){
//  servo_write(80,86,100,90,83,100,65,0,140,120,85,95,20,70,40,135,90);
moveAllServos(servoAngles);
  float d1=13;
  float d2=18;
  float d4=17;
  float g=9.807;
  float Mk=0.487,Mb=0.42;
  float w1=Mk*g,w2=Mb*g;
  float w4=Mb*g;
  
  float sudut_fungsi1 = 55; // Masukan untuk sudut fungsi 1
  float cosinusSatuanRadian=cos(sudut_fungsi1*PI/180); //Mengubah dari derajat ke radian
  float d3=sqrt((d1*d1)+(d2*d2)-(2*d1*d2*cosinusSatuanRadian));//mencari akar dari persamaan segitiga sembarang untuk mencari panjang d3
  float SinusSatuanRadian=sin(sudut_fungsi1*PI/180);//mengubah dari derajat ke radian
  float b = asin((d1*SinusSatuanRadian)/(d3)) * (180.0 / PI); // Menghitung nilai b dalam derajat
  float sinB=(d1*SinusSatuanRadian)/d3;
  float sinA=(w1*d3*sinB)/(w4*d4);
  float alpha=asin(sinA)*(180.0 / PI);
  float jawab=w4*d4;
//  float alpha=asin()*(180/PI);
//  Serial.println(d3);
//  Serial.println(arcsin);
//  Serial.print(w1);
//Serial.println(alpha);
Serial.println(alpha);

  // Menunda selama 500ms
  delay(5000);
  }
void fungsi10(){
//  servo_write(98,90,92,45,103,100,90,40,140,120,105,115,20,70,40,135,90);

  }
void fungsi11(){
//  servo_write(90,90,95,75,110,100,95,5,140,120,100,103,20,70,40,135,90);
moveAllServos(servoAngles);
      float d1=13;
  float d2=18;
  float d4=17;
  float g=9.807;
  float Mk=0.487,Mb=0.42;
  float w1=Mk*g,w2=Mb*g;
  float w4=Mb*g;
  
  float sudut_fungsi1 = 60; // Masukan untuk sudut fungsi 1
  float cosinusSatuanRadian=cos(sudut_fungsi1*PI/180); //Mengubah dari derajat ke radian
  float d3=sqrt((d1*d1)+(d2*d2)-(2*d1*d2*cosinusSatuanRadian));//mencari akar dari persamaan segitiga sembarang untuk mencari panjang d3
  float SinusSatuanRadian=sin(sudut_fungsi1*PI/180);//mengubah dari derajat ke radian
  float b = asin((d1*SinusSatuanRadian)/(d3)) * (180.0 / PI); // Menghitung nilai b dalam derajat
  float sinB=(d1*SinusSatuanRadian)/d3;
  float sinA=(w1*d3*sinB)/(w4*d4);
  float alpha=asin(sinA)*(180.0 / PI);
  float jawab=w4*d4;
//  float alpha=asin()*(180/PI);
//  Serial.println(d3);
//  Serial.println(arcsin);
//  Serial.print(w1);
//Serial.println(alpha);
Serial.println(alpha);

  // Menunda selama 500ms
  delay(5000);
  }
  //void awal_berdiri_diam(){
//  Servo1.write(90);
//  Servo2.write(90);
//  Servo3.write(95);
//  Servo4.write(75);
//  Servo5.write(110);
//  Servo6.write(100);
//  Servo7.write(95);
//  Servo8.write(5);
//  Servo9.write(140);
//  Servo10.write(120);
//  Servo11.write(100);
//  Servo12.write(103);
//    Servo13.write(20);
//  Servo14.write(70);
//  Servo15.write(40);
//  Servo16.write(135);
//  delay(4000);
//  }
