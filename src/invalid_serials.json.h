// Copyright (c) 2018 The PIVX developers
// Copyright (c) 2020 The Klimatas developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.



#ifndef KTS_INVALID_SERIALS_JSON_H
#define KTS_INVALID_SERIALS_JSON_H

#include <string>

std::string LoadInvalidSerials()
{
    std::string str = "[\n"
            "  {\n"
            "    \"s\": \"c9c868bb56eacfc4f3d829528a0ae812dff26619cd38e6c9a0eea1eacddc84\"\n"
            "  },\n"
            "]";
    return str;
}

#endif //KTS_INVALID_SERIALS_JSON_H
