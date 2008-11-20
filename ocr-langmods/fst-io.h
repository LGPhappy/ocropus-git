// Copyright 2008 Deutsches Forschungszentrum fuer Kuenstliche Intelligenz
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
// File: fst-io.h
// Purpose: OpenFST-compatible I/O
// Responsible: mezhirov
// Reviewer: 
// Primary Repository: 
// Web Sites: www.iupr.org, www.dfki.de, www.ocropus.org

#ifndef h_fst_io_
#define h_fst_io_

#include "ocropus.h"
#include "langmods.h"

namespace ocropus {
    using namespace colib;

    // These functions use OpenFST-compatible format.
    
    void fst_write(FILE *stream, IGenericFst &fst);
    void fst_read(IGenericFst &fst, FILE *stream);
    void fst_write(const char *path, IGenericFst &fst);
    void fst_read(IGenericFst &fst, const char *path);

}

#endif
