#ifndef Print_h
#define Print_h


#include <string>
#define String std::string

class Print : public Stream
{
public:

  int _putc(int value)
  {
    write((uint8_t)value);
    return value;
  }
  int _getc() { return -1; }

};

private:
  virtual size_t   write(uint8_t);

#endif
