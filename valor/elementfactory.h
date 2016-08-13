// This file is part of Valor.
// Copyright (C) 2015, 2016 Binary Birch Tree
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef INCLUDED_VALOR_ELEMENTFACTORY
#define INCLUDED_VALOR_ELEMENTFACTORY

#include <array>
#include <iostream>
#include <memory>

#include "valor/element.h"

namespace valor {

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
