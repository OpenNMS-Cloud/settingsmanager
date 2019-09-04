#ifndef dbg_h
#define dbg_h

#include "Arduino.h"
#include "SoftwareSerial.h"
#if defined(DEBUG_CLASSIC) || defined(DEBUG_SOFT)
#  define DBG(x) dbg::print(x)
#  define DBGLN(x) dbg::println(x)
namespace dbg {

  extern int32_t spd;
#  ifdef DEBUG_CLASSIC
  extern HardwareSerial *debug;
#  elif DEBUG_SOFT
  extern SoftwareSerial *debug;
#  endif

  void setDebugImpl();
  void initDebug();
  void println(const String &s);
  void println(const char c[]);
  void println(char c);
  void println(unsigned char b, int base);
  void println(int num, int base);
  void println(unsigned int num, int base);
  void println(long num, int base);
  void println(unsigned long num, int base);
  void println(double num, int digits);
  void println(const Printable &x);
  void printf(const char *format, ...);
  void printf_P(PGM_P format, ...);
  void print(const __FlashStringHelper *ifsh);
  void print(const String &s);
  void print(const char str[]);
  void print(char c);
  void print(unsigned char b, int base);
  void print(int n, int base);
  void print(unsigned int n, int base);
  void print(long n, int base);
  void print(unsigned long n, int base);
  void print(double n, int digits);
  void print(const Printable &x);
} // namespace dbg
#else
#  define DBG(x)
#  define DBGLN(x)
namespace dbg {
  void setDebugImpl();
  void initDebug();
  void println(const String &s);
  void println(const char c[]);
  void println(char c);
  void println(unsigned char b, int base);
  void println(int num, int base);
  void println(unsigned int num, int base);
  void println(long num, int base);
  void println(unsigned long num, int base);
  void println(double num, int digits);
  void println(const Printable &x);
  void printf(const char *format, ...);
  void printf_P(PGM_P format, ...);
  void print(const __FlashStringHelper *ifsh);
  void print(const String &s);
  void print(const char str[]);
  void print(char c);
  void print(unsigned char b, int base);
  void print(int n, int base);
  void print(unsigned int n, int base);
  void print(long n, int base);
  void print(unsigned long n, int base);
  void print(double n, int digits);
  void print(const Printable &x);
} // namespace dbg
#endif

#endif