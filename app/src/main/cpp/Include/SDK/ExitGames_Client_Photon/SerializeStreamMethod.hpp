#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct SerializeStreamMethod : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "SerializeStreamMethod");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP1 = void*, typename TP3 = void*>
        void* BeginInvoke(::ExitGames_Client_Photon::StreamBuffer* outStream, TP1 customObject, ::BNM::IL2CPP::Il2CppObject* callback, TP3 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"outStream", "customObject", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(outStream, customObject, callback, object);
        }
        template <typename TP0 = void*>
        int16_t EndInvoke(TP0 result) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(result);
        }
        template <typename TP1 = void*>
        int16_t Invoke(::ExitGames_Client_Photon::StreamBuffer* outStream, TP1 customObject) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("Invoke"), {"outStream", "customObject"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(outStream, customObject);
        }
    };
}
