class Car{
private:
  int enA=11;  int enB=10;  int m1A=12;  int m1B=13;  int m2A=8;  int m2B=9;
  int sayac=0;
  int speedA=0;
  int speedB=0;  
public:
  Car(int d1,int d2,int d3,int d4,int d5,int d6){
      enA=d1;      enB=d2;      m1A=d3;      m1B=d4;      m2A=d5;      m2B=d6;
  }
  void setup(){
     pinMode(enA,OUTPUT);
     pinMode(enB,OUTPUT);
     pinMode(m1A,OUTPUT);
     pinMode(m1B,OUTPUT);
     pinMode(m2A,OUTPUT);
     pinMode(m2B,OUTPUT);
  }
  void fire(){
    sayac++;
    go();
  }
  void go(){
    if(sayac==1){
      digitalWrite(m1A,HIGH);
      digitalWrite(m1B,LOW);  
      digitalWrite(m2A,HIGH);
      digitalWrite(m2B,LOW);  
    }
    if(speedA<255&&sayac<5000) speedA++;
    if(speedB<255&&sayac<5000) speedB++;
    analogWrite(enA,speedA);
    analogWrite(enB,speedB);
    delayMicroseconds(750);
    if(sayac>5000&&speedA>0) speedA--;
    if(sayac>5000&&speedB>0) speedB--;
//    if(sayac>5000&&speedA==0&&speedB==0) sayac=0;
      if(sayac>6000) sayac=0;      
  }
};
