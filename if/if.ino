/*****************************************************
**                                                  **
**                       Titol:                     **
**                                                  **
**                                                  **
**  NOM: Daniel Morales           DATA: 08/01/2018  **
*****************************************************/
//******************** INCLUDE ***********************
//********** Variables ************************************************************
int tempAigua = 101;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
(tempAigua=tempAigua-11);

  if (tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
  else if (tempAigua==100)
   {
    Serial.print("Aigua a 100C");
  } 
  else if (90<=tempAigua && tempAigua<100)
   {
    Serial.print("Aigua apunt de bullir");
  } 
else
{
  Serial.print("Aigua encara no bull");
}

}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************

