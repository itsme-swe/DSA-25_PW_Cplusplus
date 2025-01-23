#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle 
{

  private:
  int length;
  int breadth;

  public:
  Rectangle(int l = 0 , int b = 0 );
  
  void setLength(int l);
  void setBreadth(int b);

  int getLength();
  int getBreadth();

  int area();

};

Rectangle:: Rectangle(int length, int breadth) {
  this-> length = length;
  this-> breadth = breadth;
}

void Rectangle:: setLength(int l){
  length = l;
}

void Rectangle:: setBreadth(int b) {
  breadth = b;
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

#endif