#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    struct CustomTypes : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "CustomTypes");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Array<uint8_t>* GetMemPlayer() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memPlayer"));
            return _field.Get();
        }
        static void* DeserializePhotonPlayer(::ExitGames_Client_Photon::StreamBuffer* inStream, int16_t length) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializePhotonPlayer"), {"inStream", "length"});
            return _m.Call(inStream, length);
        }
        static void Register() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"));
            _m.Call();
        }
        template <typename TP1 = void*>
        static int16_t SerializePhotonPlayer(::ExitGames_Client_Photon::StreamBuffer* outStream, TP1 customobject) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("SerializePhotonPlayer"), {"outStream", "customobject"});
            return _m.Call(outStream, customobject);
        }
    };
}
