#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression {
    struct LiteCrusher : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression", "LiteCrusher");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBits() {
            static BNM::Field<int> _field = GetClass().GetField(O("bits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBits(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static int GetBitsForMaxValue(uint32_t maxvalue) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetBitsForMaxValue"), {"maxvalue"});
            return _m.Call(maxvalue);
        }
    };
}
