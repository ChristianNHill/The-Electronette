#define RELAY1  37 // My relay is connected to pin 37
#define RELAY2  35 // My relay is connected to pin 35

const int Pin = 5;

void setup() 
{
  pinMode(RELAY1, OUTPUT);       
  pinMode(RELAY2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(RELAY1,LOW); // Set relay to low. This will keep the electrical connection from reaching your skin         
  digitalWrite(RELAY2,LOW);        
        
  int val = analogRead(Pin); // read the value from the sensor of your choosing
  Serial.println(Pin); // print the value of the analog pin


    if(){ //make your own if statement
  digitalWrite(RELAY1, HIGH); // Set relay to high. When set to high, the electrical circuit will complete causing your arm to feel electricity.
  }
  
  delay(100);
  }
