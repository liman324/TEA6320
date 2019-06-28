#include <Arduino.h>
#include <Wire.h>
#include "TEA6320.h"

TEA6320::TEA6320(){
	Wire.begin();
}

void TEA6320::setVol_Loud(int vol, int loud){
  switch (vol) {
        case 20: vol =  0b00111111;break;
        case 19: vol =  0b00111110;break;
        case 18: vol =  0b00111101;break;
        case 17: vol =  0b00111100;break;
        case 16: vol =  0b00111011;break;
        case 15: vol =  0b00111010;break;
        case 14: vol =  0b00111001;break;
        case 13: vol =  0b00111000;break;
        case 12: vol =  0b00110111;break;
        case 11: vol =  0b00110110;break;
        case 10: vol =  0b00110101;break;
        case 9: vol =   0b00110100;break;
        case 8: vol =   0b00110011;break;
        case 7: vol =   0b00110010;break;
        case 6: vol =   0b00110001;break;
        case 5: vol =   0b00110000;break;
        case 4: vol =   0b00101111;break;
        case 3: vol =   0b00101110;break;
        case 2: vol =   0b00101101;break;
        case 1: vol =   0b00101100;break;
        case 0: vol =   0b00101011;break;
        case -1: vol =  0b00101010;break;
        case -2: vol =  0b00101001;break;
        case -3: vol =  0b00101000;break;
        case -4: vol =  0b00100111;break;
        case -5: vol =  0b00100110;break;
        case -6: vol =  0b00100101;break;
        case -7: vol =  0b00100100;break;
        case -8: vol =  0b00100011;break;
        case -9: vol =  0b00100010;break;
        case -10: vol = 0b00100001;break;
        case -11: vol = 0b00100000;break;
        case -12: vol = 0b00011111;break;
        case -13: vol = 0b00011110;break;
        case -14: vol = 0b00011101;break;
        case -15: vol = 0b00011100;break;
        case -16: vol = 0b00011011;break;
        case -17: vol = 0b00011010;break;
        case -18: vol = 0b00011001;break;
        case -19: vol = 0b00011000;break;
        case -20: vol = 0b00010111;break;
        case -21: vol = 0b00010110;break;
        case -22: vol = 0b00010101;break;
        case -23: vol = 0b00010100;break;
        case -24: vol = 0b00010011;break;
        case -25: vol = 0b00010010;break;
        case -26: vol = 0b00010001;break;
        case -27: vol = 0b00010000;break;
        case -28: vol = 0b00001111;break;
        case -29: vol = 0b00001110;break;
        case -30: vol = 0b00001101;break;
        case -31: vol = 0b00001100;break;
  }
  switch (loud) {
        case 1: loud = 0b01000000;break;
        case 0: loud = 0b00000000;break;
  }
        int vol_loud = vol + loud;
     writeWire(TEA6320_VOL_LOUDNESS, vol_loud);	
  } 


void TEA6320::setBallance(int out, int vol_out){
  switch (vol_out) {
        case 0:   vol_out = 0b00111111;break;
        case -1:  vol_out = 0b00111110;break;
        case -2:  vol_out = 0b00111101;break;
        case -3:  vol_out = 0b00111100;break;
        case -4:  vol_out = 0b00111011;break;
        case -5:  vol_out = 0b00111010;break;
        case -6:  vol_out = 0b00111001;break;
        case -7:  vol_out = 0b00111000;break;
        case -8:  vol_out = 0b00110111;break;
        case -9:  vol_out = 0b00110110;break;
        case -10: vol_out = 0b00110101;break;
        case -11: vol_out = 0b00110100;break;
        case -12: vol_out = 0b00110011;break;
        case -13: vol_out = 0b00110010;break;
        case -14: vol_out = 0b00110001;break;
        case -15: vol_out = 0b00110000;break;
        case -16: vol_out = 0b00101111;break;
        case -17: vol_out = 0b00101110;break;
        case -18: vol_out = 0b00101101;break;
        case -19: vol_out = 0b00101100;break;
        case -20: vol_out = 0b00101011;break;
        case -21: vol_out = 0b00101010;break;
        case -22: vol_out = 0b00101001;break;
        case -23: vol_out = 0b00101000;break;
        case -24: vol_out = 0b00100111;break;
        case -25: vol_out = 0b00100110;break;
        case -26: vol_out = 0b00100101;break;
        case -27: vol_out = 0b00100100;break;
        case -28: vol_out = 0b00100011;break;
        case -29: vol_out = 0b00100010;break;
        case -30: vol_out = 0b00100001;break;
        case -31: vol_out = 0b00100000;break;
        case -32: vol_out = 0b00011111;break;
        case -33: vol_out = 0b00011110;break;
        case -34: vol_out = 0b00011101;break;
        case -35: vol_out = 0b00011100;break;
        case -36: vol_out = 0b00011011;break;
        case -37: vol_out = 0b00011010;break;
        case -38: vol_out = 0b00011001;break;
        case -39: vol_out = 0b00011000;break;
        case -40: vol_out = 0b00010111;break;
        case -41: vol_out = 0b00010110;break;
        case -42: vol_out = 0b00010101;break;
        case -43: vol_out = 0b00010100;break;
        case -44: vol_out = 0b00010011;break;
        case -45: vol_out = 0b00010010;break;
        case -46: vol_out = 0b00010001;break;
        case -47: vol_out = 0b00010000;break;
        case -48: vol_out = 0b00001111;break;
        case -49: vol_out = 0b00001110;break;
        case -50: vol_out = 0b00001101;break;
        case -51: vol_out = 0b00001100;break;
        case -52: vol_out = 0b00001011;break;
        case -53: vol_out = 0b00001010;break;
        case -54: vol_out = 0b00001001;break;
        case -55: vol_out = 0b00001000;break;
  }
     switch(out) {
        case 0:   writeWire(TEA6320_FRONT_R, vol_out);break;
        case 1:   writeWire(TEA6320_FRONT_L, vol_out);break;
        case 2:   writeWire(TEA6320_REAR_R, vol_out);break;
        case 3:   writeWire(TEA6320_REAR_L, vol_out);break;
  }	
  } 

void TEA6320::setBass(int bass){
    switch(bass){
        case 10: bass = 0b00011011;break;
        case 9:  bass = 0b00011010;break;
        case 8:  bass = 0b00011001;break;
        case 7:  bass = 0b00011000;break;
        case 6:  bass = 0b00010111;break;
        case 5:  bass = 0b00010110;break;
        case 4:  bass = 0b00010101;break;
        case 3:  bass = 0b00010100;break;
        case 2:  bass = 0b00010011;break;
        case 1:  bass = 0b00010010;break;

        case 0:  bass = 0b00010001;break;

        case -1: bass = 0b00001111;break;
        case -2: bass = 0b00001110;break;
        case -3: bass = 0b00001101;break;
        case -4: bass = 0b00001100;break;
        case -5: bass = 0b00001011;break;
        case -6: bass = 0b00001010;break;
        case -7: bass = 0b00001001;break;
        case -8: bass = 0b00001000;break;
        case -9: bass = 0b00000111;break;
        case -10:bass = 0b00000110;break;
  }
     writeWire(TEA6320_BASS, bass);	
  } 

void TEA6320::setTreb(int treb){
    switch(treb){
        case 8:  treb = 0b00011001;break;
        case 7:  treb = 0b00011000;break;
        case 6:  treb = 0b00010111;break;
        case 5:  treb = 0b00010110;break;
        case 4:  treb = 0b00010101;break;
        case 3:  treb = 0b00010100;break;
        case 2:  treb = 0b00010011;break;
        case 1:  treb = 0b00010010;break;
        
        case 0:  treb = 0b00010001;break;

        case -1: treb = 0b00001111;break;
        case -2: treb = 0b00001110;break;
        case -3: treb = 0b00001101;break;
        case -4: treb = 0b00001100;break;
        case -5: treb = 0b00001011;break;
        case -6: treb = 0b00001010;break;
        case -7: treb = 0b00001001;break;
        case -8: treb = 0b00001000;break;
  }
     writeWire(TEA6320_TREBLE, treb);	
  } 

void TEA6320::setInput(int in, int mute){
    switch(in){
        case 0:  in = 0b00000111;break;
        case 1:  in = 0b00000110;break;
        case 2:  in = 0b00000101;break;
        case 3:  in = 0b00000100;break;
  }
    switch (mute) {
        case 0: mute = 0b00000000;break;
        case 1: mute = 0b10000000;break;
  }   
      int input = in + mute;
      writeWire(TEA6320_INPUT, input);	
  }


void TEA6320::writeWire(char a, char b){
  Wire.beginTransmission(TEA6320_address);
  Wire.write (a);
  Wire.write (b);
  Wire.endTransmission();
}
