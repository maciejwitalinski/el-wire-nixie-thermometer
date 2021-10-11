#ifndef Nixie_h
#define Nixie_h


class Nixie {
  public: 
    Nixie(byte _pins[], byte _s);
    void display(int number);
    void reset();
    void test();
  private:
    byte *_pins;
    byte _s;
};

#endif
