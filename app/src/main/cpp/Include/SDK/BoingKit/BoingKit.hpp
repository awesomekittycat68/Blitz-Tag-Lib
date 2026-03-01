#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Version.hpp"

namespace BoingKit {
    struct BoingKit : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingKit");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BoingKit::Version GetVersion() {
            static BNM::Field<::BoingKit::Version> _field = GetClass().GetField(O("Version"));
            return _field.Get();
        }
    };
}
