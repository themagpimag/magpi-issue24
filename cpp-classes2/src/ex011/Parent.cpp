/* W. H. Bell
** Parent class.  This class contains member functions that the child 
** will call.  The class creates a child class and gives it a pointer 
** to itself.
*/

#include "Parent.h"
#include "Child.h"

/** Constructor *********************/
Parent::Parent(unsigned int x, unsigned int y): 
  m_child(0),
  m_x(x),
  m_y(y) {
}

/** Destructor **********************/
Parent::~Parent(){
  if(m_child) delete m_child;
}

/** Public Member Functions *********/
void Parent::run(){
  // Only create a child if there isn't one already
  if(!m_child) {
    m_child = new Child(this);
  }
  m_child->run();
}
