char t;


/*Pinagem do arduino*/

//motor_A
int IN1A = 13 ;
int IN2A = 12 ;
int velocidadeA = 11;

//motor_B
int velocidadeB = 10;
int IN3B = 9 ;
int IN4B = 8 ;

//variavel auxiliar
int velocidade = 0;


//Inicializa Pinos
void setup() {
  pinMode(IN1A, OUTPUT);
  pinMode(IN2A, OUTPUT);
  pinMode(IN3B, OUTPUT);
  pinMode(IN4B, OUTPUT);
  pinMode(velocidadeA, OUTPUT);
  pinMode(velocidadeB, OUTPUT);
  Serial.begin(9600);

  analogWrite(velocidadeB, 255);
  analogWrite(velocidadeA, 255);
}

void loop() {
  if (Serial.available()) {
    t = Serial.read();//le a entrada serial

    if (isDigit(t)) {
      int vel = int(t);
      int velBin = map(vel, 0, 9, 20, 255);
      analogWrite(velocidadeA, velBin);
      analogWrite(velocidadeB, velBin);
      return ;
    }

    //verificar antes se é numero para setar velocidade
    switch (t) {
      case 'S':
        topLeft();
        break;
      case 's':
        stopCar();
        break;
      case 'T':
        top();
        break;
      case 't':
        stopCar();
        break;
      case 'P':
        topRight();
        break;
      case 'p':
        stopCar();
      break;  case 'L':
        left();
        break;
      case 'l':
        stopCar();
        break;
      case 'C':
        stopCar();
        break;
      case 'c':
        stopCar();
        break;
      case 'R':
        right();
        break;
      case 'r':
        stopCar();
        break;
      case 'A':
        bottomLeft();
        break;
      case 'a':
        stopCar();
        break;
      case 'B':
        bottom();
        break;
      case 'b':
        stopCar();
      break;  case 'D':
        bottomRight();
        break;
      case 'd':
        stopCar();
        break;
      default:
        break;
    }

  }

}

//funções
void controlMotor(int in1, int in2, bool state1, bool state2) {
  digitalWrite(in1, state1);
  digitalWrite(in2, state2);
}

void stopCar() {
  breakA();
  breakB();
}

void clockWiseB() {
  controlMotor(IN3B, IN4B, HIGH, LOW);
}

void antiClockWiseB() {
  controlMotor(IN3B, IN4B, LOW, HIGH);
}

void breakB() {
  controlMotor(IN3B, IN4B, HIGH, HIGH);
}

void neutralB() {
  controlMotor(IN3B, IN4B, LOW, LOW);
}

void clockWiseA() {
  controlMotor(IN1A, IN2A, HIGH, LOW);
}

void antiClockWiseA() {
  controlMotor(IN1A, IN2A, LOW, HIGH);
}

void breakA() {
  controlMotor(IN1A, IN2A, HIGH, HIGH);
}

void neutralA() {
  controlMotor(IN1A, IN2A, LOW, LOW);
}


void topLeft() {
  clockWiseB();
  breakA();
}

void top() {
  clockWiseA();
  clockWiseB();
}

void topRight() {
  clockWiseA();
  breakB();
}

void left() {
  antiClockWiseA();
  clockWiseB();
}

void right() {
  antiClockWiseB();
  clockWiseA();
}

void bottomLeft() {
  antiClockWiseB();
  breakA();
}

void bottom() {
  antiClockWiseB();
  antiClockWiseA();
}

void bottomRight() {
  antiClockWiseA();
  breakB();
}
