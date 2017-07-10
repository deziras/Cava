//
// Created by glavo on 17-7-7.
//

#ifndef JAVALIBRARY_PREDEF_H
#define JAVALIBRARY_PREDEF_H

#include <memory>
#include <cinttypes>
#include <cstdlib>

namespace java {
    using Char = char16_t;

    using Byte = int8_t;
    using Short = int16_t;
    using Int = int32_t;
    using Long = int64_t;

    using Float = float;
    using Double = double;

    using Null = std::nullptr_t;

    const Null null = nullptr;

    namespace lang {
        class Class;
        class Object;
        class Exception;

        auto newType(const Class *baseClass ) -> const Class*;
    }
}

#endif //JAVALIBRARY_PREDEF_H
