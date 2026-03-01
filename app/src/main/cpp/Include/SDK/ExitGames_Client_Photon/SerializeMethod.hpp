#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct SerializeMethod : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "SerializeMethod");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*, typename TP2 = void*>
        void* BeginInvoke(TP0 customObject, ::BNM::IL2CPP::Il2CppObject* callback, TP2 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"customObject", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(customObject, callback, object);
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::Array<uint8_t>* EndInvoke(TP0 result) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(result);
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::Array<uint8_t>* Invoke(TP0 customObject) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("Invoke"), {"customObject"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(customObject);
        }
    };
}
