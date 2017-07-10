//
// Created by glavo on 17-7-7.
//

#ifndef JAVALIBRARY_OBJECT_H
#define JAVALIBRARY_OBJECT_H

#include <java/lang/Predef.h>

namespace java {
    namespace lang {
        class Class;
        class Object_Info {
            java::lang::Class *type;

            const Int hash;

        public:
            Object_Info() : hash((Int)this) {
            }

            Object_Info(const Object_Info &) = delete;

            Object_Info(Object_Info &&) = delete;

            Object_Info &operator=(const Object_Info &) = delete;

            Object_Info &operator=(Object_Info &&) = delete;

            virtual auto hashCode() -> java::Int {
                return hash;
            }

            auto getClasa() -> Class;

        };
        class Object {
        public:
            static Class *type;

        protected:
            std::shared_ptr<Object_Info> info;

        public:
            Object() : info(std::shared_ptr<Object_Info>(new Object_Info)) {

            }

            Object(Object &other) : info(other.info) {
            }

            Object(Object &&other) : info(other.info) {
            }

            auto hashCode() -> java::Int {
                return info->hashCode();
            }
        };

    }
}

#endif //JAVALIBRARY_OBJECT_H
