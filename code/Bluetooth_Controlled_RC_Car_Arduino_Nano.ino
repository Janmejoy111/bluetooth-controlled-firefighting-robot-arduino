#include <Servo.h>

Servo nozzleServo;

// Flame Sensors
int flameLeft = 2;
int flameCenter = 3;
int flameRight = 4;

// Motor Driver
int IN1 = 5;
int IN2 = 6;
int IN3 = 9;
int IN4 = 10;

// Relay (water pump)
int relayPump = 7;

// Buzzer
int buzzer = 8;

// LED
int led = 12;

// Servo pin
int servoPin = 11;

// Bluetooth command
char command;

void setup() {

Serial.begin(9600);

pinMode(flameLeft, INPUT);
pinMode(flameCenter, INPUT);
pinMode(flameRight, INPUT);

pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);

pinMode(relayPump, OUTPUT);
pinMode(buzzer, OUTPUT);
pinMode(led, OUTPUT);

nozzleServo.attach(servoPin);
nozzleServo.write(90);

digitalWrite(relayPump, LOW);

}

// MOTOR FUNCTIONS

void forward() {

digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);

}

void backward() {

digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);

}

void left() {

digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);

}

void right() {

digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);

}

void stopCar() {

digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);

}

void loop() {

// BLUETOOTH CONTROL

if (Serial.available()) {

command = Serial.read();

if (command == 'F') forward();
if (command == 'B') backward();
if (command == 'L') left();
if (command == 'R') right();
if (command == 'S') stopCar();

}

// FIRE DETECTION

int leftFire = digitalRead(flameLeft);
int centerFire = digitalRead(flameCenter);
int rightFire = digitalRead(flameRight);

if (leftFire == LOW || centerFire == LOW || rightFire == LOW) {

digitalWrite(led, HIGH);
digitalWrite(buzzer, HIGH);

stopCar();

if (leftFire == LOW) {
nozzleServo.write(140);
}

else if (rightFire == LOW) {
nozzleServo.write(40);
}

else {
nozzleServo.write(90);
}

digitalWrite(relayPump, HIGH);

}

else {

digitalWrite(relayPump, LOW);
digitalWrite(led, LOW);
digitalWrite(buzzer, LOW);

}

}


