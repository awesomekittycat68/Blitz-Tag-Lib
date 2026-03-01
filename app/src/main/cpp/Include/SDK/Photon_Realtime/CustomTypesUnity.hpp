#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct CustomTypesUnity : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "CustomTypesUnity");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int SizeV2 = 8;
        static constexpr int SizeV3 = 12;
        static constexpr int SizeQuat = 16;
        static ::BNM::Structures::Mono::Array<uint8_t>* GetMemQuarternion() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memQuarternion"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetMemVector2() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memVector2"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetMemVector3() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memVector3"));
            return _field.Get();
        }
        static void* DeserializeQuaternion(::ExitGames_Client_Photon::StreamBuffer* inStream, int16_t length) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializeQuaternion"), {"inStream", "length"});
            return _m.Call(inStream, length);
        }
        static void* DeserializeVector2(::ExitGames_Client_Photon::StreamBuffer* inStream, int16_t length) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializeVector2"), {"inStream", "length"});
            return _m.Call(inStream, length);
        }
        static void* DeserializeVector3(::ExitGames_Client_Photon::StreamBuffer* inStream, int16_t length) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializeVector3"), {"inStream", "length"});
            return _m.Call(inStream, length);
        }
        static void Register() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"));
            _m.Call();
        }
        template <typename TP1 = void*>
        static int16_t SerializeQuaternion(::ExitGames_Client_Photon::StreamBuffer* outStream, TP1 customobject) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("SerializeQuaternion"), {"outStream", "customobject"});
            return _m.Call(outStream, customobject);
        }
        template <typename TP1 = void*>
        static int16_t SerializeVector2(::ExitGames_Client_Photon::StreamBuffer* outStream, TP1 customobject) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("SerializeVector2"), {"outStream", "customobject"});
            return _m.Call(outStream, customobject);
        }
        template <typename TP1 = void*>
        static int16_t SerializeVector3(::ExitGames_Client_Photon::StreamBuffer* outStream, TP1 customobject) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("SerializeVector3"), {"outStream", "customobject"});
            return _m.Call(outStream, customobject);
        }
    };
}
