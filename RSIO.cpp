#include <stdarg.h>
#include "Header/RSIO.h"
RSIO::RSIO()
{
  
}
int RSIO::Echo(EchoType type, char *buff,...)
{
  va_list arglist;
  
  va_start (arglist, buff);
  switch(type)
    {
    case N:
      printf(KNRM);
      break;
    case C:
      printf(KGRN);
      break;
    case W:
      printf(KYEL"[WARNING]");
      break;
    case E:
      printf(KRED"[ERROR]");
      break;
    }

  printf(buff, arglist);
  printf(KNRM);
  va_end(arglist);
}
  
 RSIO::~RSIO()
{
}
