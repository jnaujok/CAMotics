/******************************************************************************\

             CAMotics is an Open-Source simulation and CAM software.
     Copyright (C) 2011-2019 Joseph Coffland <joseph@cauldrondevelopment.com>

       This program is free software: you can redistribute it and/or modify
       it under the terms of the GNU General Public License as published by
        the Free Software Foundation, either version 2 of the License, or
                       (at your option) any later version.

         This program is distributed in the hope that it will be useful,
          but WITHOUT ANY WARRANTY; without even the implied warranty of
          MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                   GNU General Public License for more details.

        You should have received a copy of the GNU General Public License
      along with this program.  If not, see <http://www.gnu.org/licenses/>.

\******************************************************************************/

#pragma once

#include <cbang/geom/Matrix.h>


namespace CAMotics {
  class GLProgram;

  class GLUniform {
    unsigned program;
    unsigned location;

  public:
    GLUniform(unsigned program = 0, unsigned location = 0) :
      program(program), location(location) {}

    void set(float v0) const;
    void set(float v0, float v1) const;
    void set(float v0, float v1, float v2) const;
    void set(float v0, float v1, float v2, float v3) const;

    void set(int v0) const;
    void set(int v0, int v1) const;
    void set(int v0, int v1, int v2) const;
    void set(int v0, int v1, int v2, int v3) const;

    void set(const cb::Matrix4x4F &m) const;
  };
}