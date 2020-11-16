// Zufällige Lichtsteuerung für Modelleisenbahn. Wird gern benutzt für Häuser. Es werden in einem zufälligen Zeitahmen immer 3 zufällige LEDs 
//aktiviert und dann zufällig 4 deaktiviert. Chaosprinzip. Jeder Schaltvorgang ist daher einmalig.


//Definiert die Variablen im Code als Strings
long EINS;
long ZWEI;
long DREI;
long VIER;
long FUENF;
long SECHS;
long SIEBEN;
long ACHT;
long NEUN;

//Die Lichter verändern sich zufällig in einem Zeitraum, der in den folgenden Variablen definiert wird. Standard: 2-4s. 

// Minimal-Wert der Zufallsdauer in ms, diesen kannst du einfach in ms ändern! Ändere dazu einfach die Zahl 2000 (2 Sekunden) in einem Wert deiner Wahl. 
#define RDMMIN 2000

// Maximal-Wert der Zufallsdauer in ms, diesen kannst du einfach in ms ändern! Ändere dazu einfach die Zahl 2000 (2 Sekunden) in einem Wert deiner Wahl. 
#define RDMMAX 4000


// Das Setup läuft einmalig bei der Initialisierung/Start
void setup() {
  //Definiert Digital-PINs als Ausgänge it 5V
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);
  
  
// Aktiviert den Seriellen Ausgang für Debugging 
  Serial.begin(9600); // open the serial port at 9600 bps:
  
}

// Start des Loops
void loop() {


  EINS = random(2, 14);       //Wählt einen zuflligen Pin zwischen 2 und 13 aus
  digitalWrite(EINS, HIGH);   // Schaltet LED auf angegebenem Pin ein
  Serial.print(EINS);         // Ausgabe in den Debugger
  Serial.print("AN");         // Ausgabe in den Debugger
  Serial.print('\n');         // Ausgabe in den Debugger


  ZWEI = random(2, 14);
  digitalWrite(ZWEI, HIGH);   // Schaltet LED auf angegebenem Pin ein
  Serial.print(ZWEI); 
  Serial.print("AN"); 
  Serial.print('\n');

  DREI = random(2, 14);
  digitalWrite(DREI, HIGH);   // Schaltet LED auf angegebenem Pin ein
  Serial.print(DREI);
  Serial.print("AN");
  Serial.print('\n');
  delay(random(RDMMIN, RDMMAX)); 

  VIER = random(2, 14);
  digitalWrite(VIER, HIGH);   // Schaltet LED auf angegebenem Pin ein
  Serial.print(VIER);
  Serial.print("AN");
  Serial.print('\n');

  delay(random(RDMMIN, RDMMAX)); 

  FUENF = random(2, 14);
  digitalWrite(FUENF, LOW);   // Schaltet LED auf angegebenem Pin aus
  Serial.print(FUENF);  
  Serial.print("AUS");
  Serial.print('\n');

  SECHS = random(2, 14);
  digitalWrite(SECHS, LOW);   // Schaltet LED auf angegebenem Pin aus
  Serial.print(SECHS);
  Serial.print("AUS");
  Serial.print('\n');

  SIEBEN = random(2, 14);
  digitalWrite(SIEBEN, LOW);   // Schaltet LED auf angegebenem Pin aus
  Serial.print(SIEBEN);
  Serial.print("AUS");
  Serial.print('\n');

  ACHT = random(2, 14);
  digitalWrite(ACHT, LOW);   // Schaltet LED auf angegebenem Pin aus
  Serial.print(ACHT);
  Serial.print("AUS");
  Serial.print('\n');

  delay(random(RDMMIN, RDMMAX)); 
                      
}
