/*
 * CAPITULO II:PUERTOS DIGITALES -LCD
 * CODIGO 8:MANEJO DE LCD Y PUERTOS DIGITALES
 * OBJETIVO:CONTADOR DE UN PULSADOR VISUALIZADO EN LA LCD
 * NOMBRE:RAFAEL FARINANGO
 */

#include <LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8);
const int btn=7;
int cont=0;

void setup() {
  lcd.begin(16,2);
  pinMode(btn,INPUT);
  lcd.setCursor(0,0);
  lcd.print("EMBEBIDOS");
  lcd.setCursor(0,1);
  lcd.print("CONTADOR:");
}

//PRIMER CODIGO
//void loop() {
//  if(digitalRead(btn)==LOW){
//    delay(300);
//    cont++;
//    lcd.setCursor(0,1);
//    lcd.print("CONTADOR: ");
//    lcd.setCursor(10,1);
//    lcd.print(cont);
//    }
//}

//SEGUNDO CODIGO
//void loop(){
//  if(digitalRead(btn)==LOW){
//    delay(300);
//    if(cont<20){
//      cont++;
//      lcd.setCursor(0,1);
//      lcd.print("CONTADOR:");
//      lcd.setCursor(10,1);
//      lcd.print(cont);
//      }
//    else
//      lcd.clear();
//      
//    }
//  }

//TERCER CODIGO
void loop(){
  if(digitalRead(btn)==LOW){
    delay(300);
    if(cont<20){
      cont++;
      lcd.setCursor(10,1);
      lcd.print(cont);
      }
    else{
      lcd.setCursor(9,1);
      lcd.print("   ");
      cont=0;
      }
    }
}
