#include <Wire.h>
#include <TEA6320.h>
  TEA6320 tea;
  
void setup(){ 
  Serial.begin(9600);Wire.begin();
  audio();
}

void loop(){}

void audio(){
  tea.setVol_Loud(0,0,0); // vol = -31...+20 дБ = int -31...20 | loud = 0 off, 1 on | mute = 0 off, 1 on
  tea.setBallance(0,0);   // 0...3  FR FL RR RL  ||  -55...0 дБ = int -55...0
  tea.setBallance(1,0);   
  tea.setBallance(2,0);
  tea.setBallance(3,0); 
  tea.setBass(0);         //-15...+15 дБ = int -10...10
  tea.setTreb(0);         //-12...+12 дБ = int -8...8
  tea.setInput(0);        //int 0...3
}
