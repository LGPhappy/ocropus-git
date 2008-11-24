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
// File: resource-path.h
// Purpose:
// Responsible: kofler
// Reviewer:
// Primary Repository:
// Web Sites: www.iupr.org, www.dfki.de, www.ocropus.org

// FIXME spelling
#ifndef h_resourse_path_
#define h_resourse_path_

#include "ocropus.h"

namespace ocropus {
    // FIXME clean this up and turn it into a simple utility function:
    // find_file_on_path(path,file)
    void set_resource_path(const char *path);
    FILE *open_resource(const char *relative_path);

    // FIXME get rid of this stuff; OCR-specific object construction
    // should not be in the same file as path search functions
    void find_and_load_ICharacterClassifier(colib::ICharacterClassifier &,
                                            const char *resource);
    void find_and_load_IRecognizeLine(colib::IRecognizeLine &i,
                                      const char *resource);
}

#endif