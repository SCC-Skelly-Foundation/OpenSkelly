/*******************************************************************************
*                                                                               *
*   Skelly - Open Source Programming Language                                   *
*                                                                               *
*   Copyright (C) 2023 Mustafa Malik                                            *
*                                                                               *
*   This program is free software: you can redistribute it and/or modify        *
*   it under the terms of the GNU General Public License as published by        *
*   the Free Software Foundation, either version 3 of the License, or           *
*   (at your option) any later version.                                         *
*                                                                               *
*   This program is distributed in the hope that it will be useful,             *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of              *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the               *
*   GNU General Public License for more details.                                *
*                                                                               *
*   You should have received a copy of the GNU General Public License           *
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.       *
*                                                                               *
*******************************************************************************/

#ifndef __INCLUDE_PARSER_FEXT_H__
#define __INCLUDE_PARSER_FEXT_H__

#include <stdbool.h>

#define SKELLY_VALID_FEXT_SRC ".skl"
#define SKELLY_VALID_FEXT_MOD ".sklm"

#define SKELLY_MAX_FEXT_NAME 15
#define SKELLY_FEXT_LEN_WARN "File name is quite long, consider shortening it. To disable this error use: -Rfnlen"

struct skelly_fext_result {
    bool valid_fext;
    char* ends_with;
};

bool skelly_check_fext_len(const char*);

bool skelly_valid_fext(const char*);

#endif /* __INCLUDE_PARSER_FEXT_H__ */