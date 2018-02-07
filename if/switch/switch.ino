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
int i=11;
//********** Setup ****************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  {

    Serial.print(i);
       if (i< comptar)
      {
    Serial.print("-");
  }
 }
}

//********** Loop *****************************************************************
void loop()  
{
}

//********** Funcions *************************************************************
