#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoingWork_Params.hpp"

namespace BoingKit {
    struct SharedBoingParams : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "SharedBoingParams");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BoingKit::BoingWork_Params GetParams() {
            static BNM::Field<::BoingKit::BoingWork_Params> _field = GetClass().GetField(O("Params"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetParams(::BoingKit::BoingWork_Params value) {
            static BNM::Field<::BoingKit::BoingWork_Params> _field = GetClass().GetField(O("Params"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
