char t;

void setup() {

pinMode(13,OUTPUT); //iniciai o pino 13 para saida

Serial.begin(9600);//inicia a porta serial com o boudrate de 9600 // TODO -> testar baudrate maior

}

void loop() {

if(Serial.available()){

 t = Serial.read();//le a entrada serial  
 Serial.print("Voce cliclou em:");
 Serial.println(t);//escreve na saida serial

}

if(t == 'F'){//pode ser um switch case
 digitalWrite(13,HIGH);
 //analogWrite(13,123);
}

delay(100);
}
