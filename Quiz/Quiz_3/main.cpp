#include <iostream>
#include "Pair.h"

/* Class Pair has already been declared
 * as shown in the following comments:
 *
 * class Pair {
 * public:
 *   int *pa,*pb;
 *   Pair(int, int);
 *   Pair(const Pair &);
 *  ~Pair();
 * };
 *
 * Implement its member functions below.
 */

 Pair::Pair(int a, int b)
 {
	 
	 pa = new int;
	 *pa = a;
	 
	 pb = new int;
	 *pb = b;
	 std::cout << "pa Address= " << pa << "\npb Address= " << pb << std::endl;
	 std::cout << "pa Value= " << *pa << "\npb Value= " << *pb << std::endl;
 }

 Pair::Pair(const Pair & other)
 {
	 pa = new int;
	 pb = new int;
	
	 *pa = *other.pa;
	 *pb = *other.pb;
	 std::cout << "pa Address= " << pa << "\npb Address= " << pb << std::endl;
	 std::cout << "pa Value= " << *pa << "\npb Value= " << *pb << std::endl;
 }
 
 Pair::~Pair()
 {
	 std::cout << std::endl;
	 std::cout << "Delete pa= " << *pa << " and pb= " << *pb << std::endl;
	 std::cout << "From Address pa= " << pa << " and pb= " << pb << std::endl;
	 delete pa;
	 delete pb;
	 pa = nullptr;
	 pb = nullptr;
 }
 
 /* Here is a main() function you can use
  * to check your implementation of the
  * class Pair member functions.
  */
  
int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  delete hp;
  std::cout << std::endl; 	//only added for presentation.
  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;
  return 0;
}
