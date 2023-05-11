
//**************************************************************************

// l’initialisation de la variable

int LED = 4;


//*******************************************************************

void setup() {  // la fonction de configuration 
  
 pinMode(LED,OUTPUT); //règle la borne numérique numéro 8 de la carte Arduino en mode sortie

}


//*********************************************************************************

void loop() {                   // Fonction main

  digitalWrite(LED,HIGH); //le courant est envoyé sur la borne 8, la LED  s'allume  HIGH+++> 5V

  delay(3000);            // delay(ms)  ====> delay(1000);  // Attend une seconde

  digitalWrite(LED,LOW); //  Éteignez la LED

  delay(2000);
  
  

}
