//Declaração das variáveis
byte leds[] = {2, 3, 4, 5, 6, 7, 8, 9};
int sensor = A1;
float temp = 0;
float temp2 = 0;

// Inicialização das variáveis
void setup() {
  for (int i = 0; i <= sizeof(leds); i++) {
  	pinMode(leds[i], OUTPUT); 
  }  
  pinMode(sensor, INPUT);
  //analogReference(INTERNAL);
  Serial.begin(9600);
}

// Execução
void loop() {
	temp2 = analogRead(sensor); 
  	float tensao = 5 * temp2;
  	tensao = tensao / 1024;
  	temp = (tensao - 0.5) * 100;
  	
    Serial.print("Temperatura: ");
  	Serial.print(temp);
  	Serial.println(" C");
  
  if (temp >= -40 && temp <=20) {
  	 digitalWrite(leds[0], 1); 
     digitalWrite(leds[1], 1);
     digitalWrite(leds[2], 1);
    
  }
}
