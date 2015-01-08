#ifndef RSIO_H_
#define RSIO_H_

#include <stdio.h>
#include <stdlib.h>
#include "TextColor.h"
#include "DataTypes.h"

class RSIO
{
 public:
  RSIO();
  int Echo(EchoType type, char *buff,...);
  ~RSIO();
 protected:
};
#endif
