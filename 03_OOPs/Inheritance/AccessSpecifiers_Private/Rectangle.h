#ifndef Rectangle_h
#define Rectangle_h

class Rectangle 
{

  private:
  int length;
  int breadth;

  public:
  //🔸 Mutators
  void setLength(int l);
  void setBreadth(int b);

  //🔸 Accessors
  int getLength();
  int getBreadth();

  int area();
  int perimeter();

};

void Rectangle:: setLength(int l) {
  if(l >= 0) {
    this-> length = l;
  } 
  else {
    this-> length = 0;
  }
} 

void Rectangle:: setBreadth(int b) {
  if(b >= 0) {
    this->breadth = b;
  }
  else {
    this-> breadth = 0;
  }
}

int Rectangle:: getLength() {
  return length;
}

int Rectangle:: getBreadth() {
  return breadth;
}

int Rectangle:: area() {
  return length * breadth;
}

int Rectangle:: perimeter() {
  return 2*(length + breadth);
}


#endif