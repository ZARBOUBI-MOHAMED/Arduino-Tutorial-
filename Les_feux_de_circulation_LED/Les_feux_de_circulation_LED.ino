


//**************************************************************************

// l’initialisation de la variable

int LED_v = 2;
int LED_j = 3;
int LED_r = 4;


//*******************************************************************

void setup() {  // la fonction de configuration 
  
 pinMode(LED_v,OUTPUT); //règle la borne numérique numéro 8 de la carte Arduino en mode sortie
 pinMode(LED_j,OUTPUT); //règle la borne numérique numéro 8 de la carte Arduino en mode sortie
 pinMode(LED_r,OUTPUT); //règle la borne numérique numéro 8 de la carte Arduino en mode sortie

}


//*********************************************************************************

void loop() {                   // Fonction main

  // **********************************************************************************************
  digitalWrite(LED_v,HIGH); //le courant est envoyé sur la borne 8, la LED  s'allume  HIGH+++> 5V
  digitalWrite(LED_j,LOW); //  Éteignez la LED
  digitalWrite(LED_r,LOW); //  Éteignez la LED

  delay(7000);            // delay(ms)  ====> delay(1000);  // Attend une seconde

  //**************************************************************************************************

  digitalWrite(LED_v,LOW); //le courant est envoyé sur la borne 8, la LED  s'allume  HIGH+++> 5V
  digitalWrite(LED_j,HIGH); //  Éteignez la LED
  digitalWrite(LED_r,LOW); //  Éteignez la LED

  delay(500);

  digitalWrite(LED_v,LOW); //le courant est envoyé sur la borne 8, la LED  s'allume  HIGH+++> 5V
  digitalWrite(LED_j,LOW); //  Éteignez la LED
  digitalWrite(LED_r,LOW); //  Éteignez la LED

  delay(500);

  digitalWrite(LED_v,LOW); //le courant est envoyé sur la borne 8, la LED  s'allume  HIGH+++> 5V
  digitalWrite(LED_j,HIGH); //  Éteignez la LED
  digitalWrite(LED_r,LOW); //  Éteignez la LED

  delay(500);

  digitalWrite(LED_v,LOW); //le courant est envoyé sur la borne 8, la LED  s'allume  HIGH+++> 5V
  digitalWrite(LED_j,LOW); //  Éteignez la LED
  digitalWrite(LED_r,LOW); //  Éteignez la LED

  delay(500);
//*******************************************************************************************************
 
 digitalWrite(LED_v,LOW); //le courant est envoyé sur la borne 8, la LED  s'allume  HIGH+++> 5V
  digitalWrite(LED_j,LOW); //  Éteignez la LED
  digitalWrite(LED_r,HIGH); //  Éteignez la LED

  delay(7000);            // delay(ms)  ====> delay(1000);  // Attend une seconde
  
//****************************************************************************************************  

}
