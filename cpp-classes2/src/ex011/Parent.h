#ifndef PARENT_H
#define PARENT_H

// Forward declaration to reduce precompile time.
class Child;

class Parent {
public:
  /** Construct a Parent frame with some dimensions. */
  Parent(unsigned int x, unsigned int y);

  /** Destructor to clean up the particle pointer */
  ~Parent(void);

  /** A member function to call a member function in the Child class */
  void run(void);

  /** Get the x dimension */
  unsigned int x(void) { return m_x; }
  
  /** Get the y dimension */
  unsigned int y(void) { return m_y; }

  /** Get the child pointer */
  Child* child(void) { return m_child; }

private:
  /** A data member to store a pointer to the Child class */
  Child *m_child;

  /** A data member to store the x dimension */
  unsigned int m_x;

  /** A data member to store the y dimension */
  unsigned int m_y;
};

#endif

