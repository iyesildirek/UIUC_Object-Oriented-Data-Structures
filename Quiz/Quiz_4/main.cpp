#include <iostream>
#include "Pair.h"

/* Class Pair has already been
 * declared and defined with the
 * following constructor:
 *
 *   Pair(int,int)
 *
 * that stores its two arguments in
 * two private member variables of Pair.
 *
 * Class sumPair has also already been
 * defined as follows:
 *
 * class sumPair : public Pair {
 * public:
 *   int sum;
 *   sumPair(int,int);
 * };
 * 
 * Implement the constructor
 * sumPair(int,int) such that it
 * loads the two member variables of
 * the base Pair class with its
 * arguments, and initializes the
 * member variable sum with their sum.
 */
 
 Pair::Pair(int a, int b)
 {
	 a_ = a;
	 b_ = b;
	 std::cout << "Private member variable a_ is: " << a_ << std::endl;
	 std::cout << "Private member variable b_ is: " << b_ << std::endl;
 }

//Derived Class
 sumPair::sumPair(int a, int b) : Pair(a, b)
 {
	 sum = a + b;
 }

 
/* Below is a main() function
 * you can use to test your
 * implementation of the
 * sumPair constructor.
 */
 
int main() {
  sumPair sp(15,16);
  std::cout << "sp(15,16).sum =" << sp.sum << std::endl;
  return 0;
}