// rcl-radio.ru liman324@yandex.ru 


#ifndef TEA6320_H
#define TEA6320_H

#define TEA6320_address 0x80

//Sub addresses
#define TEA6320_VOL_LOUDNESS   0b00000000
#define TEA6320_FRONT_R        0b00000001
#define TEA6320_FRONT_L        0b00000010
#define TEA6320_REAR_R         0b00000011
#define TEA6320_REAR_L         0b00000100
#define TEA6320_BASS           0b00000101
#define TEA6320_TREBLE         0b00000110
#define TEA6320_INPUT          0b00000111

#include <Arduino.h>
class TEA6320
{
  public:
    TEA6320();
	void setVol_Loud(int vol, int loud, int mute);  
                        // vol = -31...+20 дБ = int -31...20
                        // loud = 0 off, 1 on
                        // mute = 0 off, 1 on
        void setBallance(int out, int vol_out); 
                        // 0...3  FR FL RR RL
                        // -55...0 дБ = int -55...0
        void setBass(int bass); //-15...+15 дБ = int -10...10
        void setTreb(int treb); //-12...+12 дБ = int -8...8
        void setInput(int in);  //int 0...3

  private:
	void writeWire(char a, char b);
};
	
#endif //TEA6320
