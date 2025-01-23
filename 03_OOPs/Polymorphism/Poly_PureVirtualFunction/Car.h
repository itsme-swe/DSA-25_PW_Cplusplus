#ifndef Car_h
#define Car_h

class Car
{

public:
  // 🔸 Assigning 0 to the Virtual function is known as "Pure Virtual Function"
  virtual void start() = 0;
  virtual void stop() = 0;
};

#endif

/*
💥 Pure Virtual Function : It's purpose is, it must be overrided by the derived class.
*/