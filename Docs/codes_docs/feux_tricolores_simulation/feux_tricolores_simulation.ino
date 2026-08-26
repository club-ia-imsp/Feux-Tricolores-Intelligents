#include <Servo.h>
int R1=1;//R1 est considéré comme 1
int O1=2;//O1 est considéré comme 2
int V1=3;//V1 est considéré comme 3
int R2=4;//R2 est considéré comme 4
int O2=5;//O2 est considéré comme 5
int V2=6;//V2 est considéré comme 6
int R3=7;//R3 est considéré comme 7
int O3=8;//O3 est considéré comme 8
int V3=12;//V3 est considéré comme 9
Servo moteur1;
Servo moteur2;
Servo moteur3;
int pos=0;
int ang=90;
void setup() {
  pinMode(R1,OUTPUT);//Le pin R1 servira a transmettre une info digitale
  pinMode(O1,OUTPUT);//Le pin O1 servira a transmettre une info digitale
  pinMode(V1,OUTPUT);//Le pin V1 servira a transmettre une info digitale
  pinMode(R2,OUTPUT);//Le pin R2 servira a transmettre une info digitale
  pinMode(O2,OUTPUT);//Le pin O2 servira a transmettre une info digitale
  pinMode(V2,OUTPUT);//Le pin V2 servira a transmettre une info digitale
  pinMode(R3,OUTPUT);//Le pin R3 servira a transmettre une info digitale
  pinMode(O3,OUTPUT);//Le pin O3 servira a transmettre une info digitale
  pinMode(V3,OUTPUT);//Le pin V3 servira a transmettre une info digitale
  moteur1.attach(9);
  moteur2.attach(10);
  moteur3.attach(11);

  }
void feu1(int led){  //J'ai crée une fonction qui s'appelle feu1 et qui ne recevra qu'une valeur entiere que je note led
  digitalWrite(R1,LOW); // la fonction eteint R1 
  digitalWrite(O1,LOW);// la fonction eteint O1
  digitalWrite(V1,LOW);// la fonction eteint V1
  digitalWrite(led,HIGH);// la fonction allume la led que j'aurais rentré
  }//En gros la fonction allume une seule led parmi 3 led
void feu2(int led){ //J'ai crée une fonction qui s'appelle feu2 et qui ne recevra qu'une valeur entiere que je note led
  digitalWrite(R2,LOW);//la fonction eteint R2 // 
  digitalWrite(O2,LOW);// la fonction eteint O2 
  digitalWrite(V2,LOW);// la fonction eteint V2
  digitalWrite(led,HIGH); //la fonction allume la led que j'aurais rentré//
}//En gros la fonction allume une seule led parmi 3 led
void feu3(int led){ //J'ai crée une fonction qui s'appelle feu3 et qui ne recevra qu'une valeur entiere que je note led
  digitalWrite(R3,LOW); //la fonction eteint R3
  digitalWrite(O3,LOW); //la fonction eteint O3
  digitalWrite(V3,LOW); //la fonction eteint V3
  digitalWrite(led,HIGH);//la fonction allume la led que j'aurais rentré//
}//En gros la fonction allume une seule led parmi 3 led


void loop() {
  feu1(R1);
  feu2(O2);
  feu3(R3);
  moteur1.write(0);
  moteur2.write(90);
  moteur3.write(0);
  for(ang=90,pos=0; ang>=0,pos<=90; ang-=1,pos+=1){
    moteur2.write(ang);   
    moteur3.write(pos);
    delay(5000/90);
}
  feu1(R1);
  feu2(R2);
  feu3(V3);
  delay(20000);
  feu1(R1);
  feu2(R2);
  feu3(O3);
     for(ang=90,pos=0; ang>=0,pos<=90; ang-=1,pos+=1){
    moteur3.write(ang);
    moteur1.write(pos);
    delay(5000/90);
  }  
  feu1(V1);
  feu2(R2);
  feu3(R3);
  delay(20000);
  feu1(O1);
  feu2(R2);
  feu3(R3);
   for(ang=90,pos=0; ang>=0,pos<=90; ang-=1,pos+=1){
    moteur1.write(ang);
    moteur2.write(pos);
    delay(5000/90);
  }  
  feu1(R1);
  feu2(V2);
  feu3(R3);
  delay(20000)