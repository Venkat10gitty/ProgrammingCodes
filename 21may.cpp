#include<iostream>
using namespace std;
class VIT_Chennai {
   int val;
   public:
   VIT_Chennai(int x = 0) {
      val = x;
   }
   int getValue() const {
      return val;
   }
};
int main() {
   const VIT_Chennai v(28);
   VIT_Chennai v1(8);
   cout << "The value using object d : " << v.getValue();
   cout << "\nThe value using object d1 : " << v1.getValue();
   return 0;
}