/*
   Copyright (c) 2014, 2015 Oracle and/or its affiliates. All rights reserved.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA
*/

#ifndef STRING_OPTION_INCLUDED
#define STRING_OPTION_INCLUDED

#include <string>
#include <my_getopt.h>
#include "abstract_string_option.h"
#include "nullable.h"

namespace Mysql{
namespace Tools{
namespace Base{
namespace Options{

/**
  String value option.
 */
class String_option : public Abstract_string_option<String_option>
{
public:
  /**
    Constructs new string option.
    @param value Pointer to string object to receive option value.
    @param name Name of option. It is used in command line option name as
      --name.
    @param description Description of option to be printed in --help.
   */
  String_option(
    Nullable<std::string>* value, std::string name, std::string description);
};

}
}
}
}

#endif
