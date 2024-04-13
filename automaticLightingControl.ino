#define led 12
#define ldr A0
#define res 12

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);
}

void loop()
{
  float ldr_value = analogRead(ldr);
    Serial.println(ldr_value);
    
    if(ldr_value>280)
      digitalWrite(led, LOW);
    else 
      digitalWrite(led, HIGH);
  
}
