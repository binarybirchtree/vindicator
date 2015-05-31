#ifndef INCLUDED_VINDICATOR_ELEMENTFACTORY
#define INCLUDED_VINDICATOR_ELEMENTFACTORY

#include <array>
#include <iostream>
#include <memory>

#include <vindicator_element.h>

namespace vindicator {

class ElementFactory {
public:
  static const int TYPE_SIZE = 2;
  typedef std::array<char, TYPE_SIZE> Type;

  ///
  /// Creates an Element specified by a type identifier.
  ///
  /// @return Pointer to the created element on success; null pointer on failure.
  ///
  static std::shared_ptr<Element> create (const Type & type);
};

std::ostream & operator << (std::ostream & stream, const ElementFactory::Type & type);

}

#endif
