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

#include "valor/obstacle.h"

namespace valor {

bool Obstacle::passable () const {
  return false;
}

bool Obstacle::nourishing () const {
  return false;
}

bool Obstacle::bountiful () const {
  return false;
}

bool Obstacle::adversarial () const {
  return false;
}

int Obstacle::owner () const {
  return 0;
}

}
