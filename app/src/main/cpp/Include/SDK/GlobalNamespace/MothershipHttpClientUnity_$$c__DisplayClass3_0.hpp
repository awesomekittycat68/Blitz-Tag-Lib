#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipHttpClientUnity_$$c__DisplayClass3_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipHttpClientUnity").GetInnerClass("<>c__DisplayClass3_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::MothershipHTTPRequest* GetRequest() {
            static BNM::Field<::GlobalNamespace::MothershipHTTPRequest*> _field = GetClass().GetField(O("request"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRequest(::GlobalNamespace::MothershipHTTPRequest* value) {
            static BNM::Field<::GlobalNamespace::MothershipHTTPRequest*> _field = GetClass().GetField(O("request"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
