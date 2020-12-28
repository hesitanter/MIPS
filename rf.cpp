



#include "rf.h"

  void rf::proc(){
    if(rd_en.read()==1){
      data1.write(mem[Raddr1.read()]);
      data2.write(mem[Raddr2.read()]);
    }
    else if(wr_en.read()==1){
      mem[Waddr.read()]=Wdata.read();
    }
  }