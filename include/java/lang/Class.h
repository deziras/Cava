//
// Created by glavo on 17-7-7.
//

#ifndef JAVALIBRARY_CLASS_H
#define JAVALIBRARY_CLASS_H

#include "Object.h"
#include <vector>

namespace java {
    namespace lang {
        class Class : Object {

        public:
            class Info : Object_Info {
                const char *name;

            public:
                Info(const char *name) : name(name) {

                }

                Info(const Info &) = delete;

                Info(Info &&) = delete;

                Info &operator=(const Info &) = delete;

                Info &operator=(Info &&) = delete;

                auto getName() -> const char *{
                    return name;
                }
            };
        };
    }
}

#endif //JAVALIBRARY_CLASS_H
