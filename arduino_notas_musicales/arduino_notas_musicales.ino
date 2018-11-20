int pinS = 11;

float Ndo = 261.63;
float Ndo_ = 277.18;
float Nre = 293.66;
float Nre_ = 311.13;
float Nmi = 329.63;
float Nfa = 349.23;
float Nfa_ = 369.99;
float Nsol = 392.00;
float Nsol_ = 415.30;
float Nla = 440.00;
float Nla_ = 466.00;
float Nsi = 493.88;
float Nsib = 466.16;

//Tiempos
const int BL = 2000;
const int NG = 1000;
const int CC = 500;
const int SC = 250;
const int FS = 125;

void setup(){
  pinMode(pinS,OUTPUT);
  //cancion_cucaracha();
}
void loop(){
  //cancion();
  //digitalWrite(pinS,HIGH);

}
void nota(float n,float t){
  tone(pinS, n, t);
  delay(300);
}

void cancion_cucaracha(){
 nota(Ndo,CC);nota(Ndo,CC);nota(Ndo,CC);nota(Nfa,CC);nota(Nla,CC);
 //nota(Ndo,CC);nota(Ndo,CC);nota(Ndo,CC);nota(Nfa,CC);nota(Nla,CC);
 //nota(Nfa,NG);nota(Nfa,NG);nota(Nmi,NG);nota(Nmi,NG);nota(Nre,NG);nota(Nre,NG);nota(Ndo,NG);
 //nota(Ndo,NG);nota(Ndo,NG);nota(Ndo,NG);nota(Nmi,NG);nota(Nsol,NG);
 //nota(Ndo,NG);nota(Ndo,NG);nota(Ndo,NG);nota(Nmi,NG);nota(Nsol,NG);
 //nota(Ndo_,NG);nota(Nre_,NG);nota(Ndo_,NG);nota(Nsi,NG);nota(Nla,NG);nota(Nsol,NG);nota(Nfa,NG);

}


