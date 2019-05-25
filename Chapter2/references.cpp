#include<iostream>

int global_var = 10;

int main(){
  

  // int a = 1024;
  // int &ref_a = a;
  // a = 100;

  // std::cout << &ref_a << ", " << ref_a << ", " << &a << std::endl;

  // int i= 0, &r1= i;
  // double d = 0, &r2 = d;

  // r2 = 3.14;
  // r2 = r1;
  // std::cout << i << ", " << r1 << ", " << d << ", " << r2 << std::endl;
  // i = r2;
  // r1 = d;

  // int i, &r1 = i;
  // i = 5;
  // r1 = 10;

  // std::cout << i << ", " << r1 << std::endl;

  // int x = 10, &r=x;
  // int *p = nullptr;

  // p = &r;
  // std::cout << x << ", " << &r << ", "<< p << std::endl;
  // *p = 9;  //r=9;
  // std::cout << x << ", " << &r << ", "<< p << std::endl;

  // int x=1, y=1;
  // int &rx = x, &ry=y;
  // int *px = &x, *py = &y;

  // std::cout << (rx == ry) << std::endl;
  // std::cout << (&rx == &ry) << std::endl;
  // std::cout << (px == py) << std::endl;
  // std::cout << (*px == *py) << std::endl;

  /*------------------------------------------*/

  // int val = 1024;
  // int *ptr_val = &val;
  // int **ptr_ptr_val = &ptr_val;

  // std::cout << val << "\n" << *ptr_val << "\n" << **ptr_ptr_val << std::endl;
  // std::cout << val << ", " << ptr_val << ", " << ptr_ptr_val << std::endl;

  /*------------------------------------------*/
  int a = 9;
  const int c = a;
  a++;

  std::cout << a << ", " << c <<std::endl;

  return 0;
}