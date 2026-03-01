#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct VoipPCMSourceNative : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "VoipPCMSourceNative");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint64_t GetSenderID() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("senderID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSenderID(uint64_t value) {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("senderID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int GetPCM(::BNM::Structures::Mono::Array<float>* dest, int length) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPCM"), {"dest", "length"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(dest, length);
        }
        int PeekSizeElements() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("PeekSizeElements"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SetSenderID_1(uint64_t senderID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSenderID"), {"senderID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(senderID);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
