#ifndef CHILD_H
#define CHILD_H

// Forward declaration to reduce precompile time.
class Parent;

class Child {
public:
  /** Construct a Child with a Parent pointer */ 
  Child(Parent *);

  /** A member function to call the Parent class */
  void run(void);

private:
  /* A data member to store a pointer to the Child's Parent. */
  Parent *m_parent;
};

#endif
