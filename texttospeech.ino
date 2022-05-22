#include "Talkie.h"
#include "Vocab_US_Large.h"

Talkie voice;

const uint8_t* abc[26] = {
  sp2_A,
  sp2_B,
  sp2_C,
  sp2_D,
  sp2_E,
  sp2_F,
  sp2_G,
  sp2_H,
  sp2_I,
  sp2_J,
  sp2_K,
  sp2_L,
  sp2_M,
  sp2_N,
  sp2_O,
  sp2_P,
  sp2_Q,
  sp2_R,
  sp2_S,
  sp2_T,
  sp2_U,
  sp2_V,
  sp2_W,
  sp2_X,
  sp2_Y,
  sp2_Z,
  };

  const uint8_t* nums[10] = {
  sp2_ZERO,
  sp2_ONE,
  sp2_TWO,
  sp2_THREE,
  sp2_FOUR,
  sp2_FIVE,
  sp2_SIX,
  sp2_SEVEN,
  sp2_EIGHT,
  sp2_NINE,
  };



void setup() {
  Serial.begin(115200);
}

void loop() {
  String text = Serial.readString();
  
  for(int i = 0; i < text.length(); ++i)
  {
    if(text[i] >= 'a' && text[i] <= 'z')
    {
      voice.say(abc[text[i] - 'a']);  
    }  
    if(text[i] >= 'A' && text[i] <= 'Z')
    {
      voice.say(abc[text[i] - 'A']);  
    }  
    if(text[i] >= '0' && text[i] <= '9')
    {
      voice.say(nums[text[i] - '0']);
    }  
  }
}
