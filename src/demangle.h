/*
 * Copyright 2023 Andrei Pangin
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _DEMANGLE_H
#define _DEMANGLE_H


class Demangle {
  private:
    static char* demangleCpp(const char* s);
    static char* demangleRust(const char* s, const char* e);
    static void cutArguments(char* s);

  public:
    static char* demangle(const char* s, bool full_signature);
};

#endif // _DEMANGLE_H
