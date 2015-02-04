#ifndef RSIO_H_
#define RSIO_H_

#include <stdio.h>
#include <stdlib.h>
#include "TextColor.h"
#include "DataTypes.h"
#include "../RSLogger/include/RSLogger.h"

class RSIO
{
 public:
  RSIO();
  int Echo(EchoType type, const char *buff,...);
  ~RSIO();
 protected:
  int ToConsole(const char* message);
  int ToLogFile(const char* message);
  RSLogger* logger;
};
#endif
