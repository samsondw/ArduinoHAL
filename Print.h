#ifndef Print_h
#define Print_h


#include <string>
#define String std::string

class Print : public Stream
{
public:

  virtual size_t   write(uint8_t);
  int _putc(int value)
  {
    write((uint8_t)value);
    return value;
  }
  int _getc() { return -1; }
  
  void print(char *str) { printf(str); }

};


#endif
