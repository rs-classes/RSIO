#include "Header/RSIO.h"
RSIO io;
int main()
{
  EchoType etype = N;
  io.Echo(etype, "n test %d\r\n",1,1);
  
  etype = C;
  io.Echo(etype, "c test %d\r\n",2);
    
  etype = W;
  io.Echo(etype, "w test %d\r\n",3);
  
etype = E;
  io.Echo(etype, "e test %d\r\n",4);
  //Feeder("Hello World %d %f %s\n",5,5.55,"55.55");
    //if(Status[0])
        //printf("Result: %s\n",Status);

    return 0;
}
