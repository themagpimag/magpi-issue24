/* W. H. Bell
** Child class.  This class is created by the parent.  When created the 
** class is passed a pointer to the parent so that it can access the 
** parents member functions.
*/

#include <iostream>
#include "Parent.h"
#include "Child.h"

using namespace std;

/** Constructor *********************/
Child::Child(Parent *parent):
  m_parent(parent) {
}

void Child::run() {
  cout << "Parent frame dimensions = {" 
       << m_parent->x() << ", "
       << m_parent->y() << "}" << endl;
}
