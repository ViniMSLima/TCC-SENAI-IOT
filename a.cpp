// #include <Servo.h>

// // Define os pinos dos LEDs
// const int ledPin35 = 35;
// const int ledPin37 = 37;


// // Define os pinos dos servos
// const int servoPin1 = A0;
// const int servoPin2 = A1;

// // Cria objetos Servo para controlar os servos motores
// Servo myServo1;
// Servo myServo2;

// // Variável para armazenar o último comando recebido
// char lastCommand = '\0';

// void setup() {
//   pinMode(ledPin35, OUTPUT);
//   pinMode(ledPin37, OUTPUT);

//   // Inicializa a comunicação serial a 9600 bps
//   Serial.begin(9600);

//   myServo1.attach(servoPin1);
//   myServo2.attach(servoPin2);

//   myServo1.write(90); // Gira o servo 1 para 180 graus
//   myServo2.write(60);

//   // Anexa os servos motores aos pinos especificados

// }

// void loop() {
  
//   if (Serial.available() > 0) {
//     char command = Serial.read();

//     // Só executa se o comando for diferente do último
//     if (command != lastCommand) {
//       lastCommand = command;

//       // Desliga todos os LEDs antes de ligar o necessário
//       digitalWrite(ledPin35, LOW);
//       digitalWrite(ledPin37, LOW);
//       digitalWrite(ledPin39, LOW);
//       digitalWrite(ledPin41, LOW);

//       if (command == 'A') {  // Comando para "good_blue"
//         digitalWrite(ledPin35, HIGH);
//         myServo1.write(45); // Gira o servo 1 para 180 graus
//         myServo2.write(45); // Gira o servo 2 para 180 graus
//       } else if (command == 'B') {  // Comando para "bad_blue"
//         digitalWrite(ledPin37, HIGH);
//         myServo1.write(45); // Gira o servo 1 para 130 graus
//         myServo2.write(130); // Gira o servo 2 para 130 graus
//       } else if (command == 'C') {  // Comando para "good_red"
//         digitalWrite(ledPin35, HIGH);
//         myServo1.write(130); // Gira o servo 1 para 180 graus
//         myServo2.write(45); // Gira o servo 2 para 180 graus
//       } else if (command == 'D') {  // Comando para "bad_red"
//         digitalWrite(ledPin37, HIGH);
//         myServo1.write(130); // Gira o servo 1 para 130 graus
//         myServo2.write(130); // Gira o servo 2 para 130 graus
//       }
//     }
//   }
// }
