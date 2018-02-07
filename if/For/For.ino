/*****************************************************
**                                                  **
**                       Titol:                     **
**                                                  **
**                                                  **
**  NOM: Daniel Morales           DATA: 08/01/2018  **
*****************************************************/
//******************** INCLUDE ***********************
//********** Variables ************************************************************
int comptar = 11;
int i = 0;

//********** Setup ****************************************************************
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
  while(i <= comptar)
  {
    Serial.print(i);
    if (i<comptar)
    Serial.print("-");
    i++;
  } 
}


//********** Loop *****************************************************************
void loop()  
{
}

//********** Funcions *************************************************************
