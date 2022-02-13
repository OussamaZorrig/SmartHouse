int capteur= A0;
int led= 7;
int mvt= 2;
int bouttonState=0;
void setup()
{Serial.begin(9600);
  pinMode (capteur, INPUT);
  pinMode(led, OUTPUT);
  pinMode (mvt, INPUT);
}

void loop()
{
   int valeur= analogRead(A0);
   bouttonState= digitalRead (mvt);
  Serial.println(valeur);
  if (valeur<5 and bouttonState== HIGH)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  
}
