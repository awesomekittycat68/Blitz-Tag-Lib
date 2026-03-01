#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTRegex : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTRegex");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* k_FloatPattern = "(?<=^|[\s,;()\[\]{}""'])-?(?:\d+\.?\d*|\.\d+)(?:[eE][-+]?\d+)?(?=$|[\s,;()\[\]{}""'])";
        static constexpr const char* k_VecPattern = "\(\s*(?<x>(?<=^|[\s,;()\[\]{}""'])-?(?:\d+\.?\d*|\.\d+)(?:[eE][-+]?\d+)?(?=$|[\s,;()\[\]{}""']))\s*,\s*(?<y>(?<=^|[\s,;()\[\]{}""'])-?(?:\d+\.?\d*|\.\d+)(?:[eE][-+]?\d+)?(?=$|[\s,;()\[\]{}""']))\s*(?:,\s*(?<z>(?<=^|[\s,;()\[\]{}""'])-?(?:\d+\.?\d*|\.\d+)(?:[eE][-+]?\d+)?(?=$|[\s,;()\[\]{}""']))\s*)?(?:,\s*(?<w>(?<=^|[\s,;()\[\]{}""'])-?(?:\d+\.?\d*|\.\d+)(?:[eE][-+]?\d+)?(?=$|[\s,;()\[\]{}""']))\s*)?,?\)";
        static ::BNM::IL2CPP::Il2CppObject* GetKFloat() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("k_Float"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetKPos() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("k_Pos"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetKRot() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("k_Rot"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetKScale() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("k_Scale"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetKVec3() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("k_Vec3"));
            return _field.Get();
        }
    };
}
