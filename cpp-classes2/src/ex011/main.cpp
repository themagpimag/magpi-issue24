/* W. H. Bell
** An example to demonstrate communication between parent and child 
** classes.  The parent creates the child class.  The child class can 
** then call the methods of the parent.
*/

#include "Parent.h"

int main() {
  Parent *parent = new Parent(200, 150);
  parent->run();

  delete parent;

  return 0;
}
