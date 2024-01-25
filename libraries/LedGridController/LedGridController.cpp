#include "Arduino.h"

#include "LedGridController.h"

LedGridController::LedGridController(){

}

bool LedGridController::setStrpLen(int len){
  if((len>0)||(len < 1024)){
    ledStrpLen = len;
    return true;
  }else{
    return false;
  }
}