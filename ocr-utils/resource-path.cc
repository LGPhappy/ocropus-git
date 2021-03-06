// Copyright 2007 Deutsches Forschungszentrum fuer Kuenstliche Intelligenz
// or its licensors, as applicable.
//
// You may not use this file except under the terms of the accompanying license.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you
// may not use this file except in compliance with the License. You may
// obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Project:
// File: resource-path.cc
// Purpose:
// Responsible: mezhirov
// Reviewer:
// Primary Repository:
// Web Sites: www.iupr.org, www.dfki.de, www.ocropus.org

#include "resource-path.h"

using namespace colib;

namespace ocropus {
    strg find_file_on_path(const char *path, const char *file) {
        narray<strg> components;
        split_string(components, path, ":;");
        for(int i = 0; i < components.length(); i++) {
            strg s(components[i]);
            s.append("/");
            s.append(file);
            FILE *f = fopen(s, "rb");
            if(f) {
                fclose(f);
                return s;
            }
        }
        return strg();
    }
}
