


#include "pm.h"

  void pm::proc(){
    temp_addr = addr.read();
    temp_data = Data[temp_addr];
    data.write(temp_data);
  }