#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct NetworkSystemRaiseEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NetworkSystemRaiseEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::NetEventOptions* GetNeoMaster() {
            static BNM::Field<::GlobalNamespace::NetEventOptions*> _field = GetClass().GetField(O("neoMaster"));
            return _field.Get();
        }
        static ::GlobalNamespace::NetEventOptions* GetNeoOthers() {
            static BNM::Field<::GlobalNamespace::NetEventOptions*> _field = GetClass().GetField(O("neoOthers"));
            return _field.Get();
        }
        static ::GlobalNamespace::NetEventOptions* GetNeoTarget() {
            static BNM::Field<::GlobalNamespace::NetEventOptions*> _field = GetClass().GetField(O("neoTarget"));
            return _field.Get();
        }
        static ::GlobalNamespace::NetEventOptions* GetNewWeb() {
            static BNM::Field<::GlobalNamespace::NetEventOptions*> _field = GetClass().GetField(O("newWeb"));
            return _field.Get();
        }
        template <typename TP1 = void*>
        static void RaiseEvent(uint8_t code, TP1 data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RaiseEvent"), {"code", "data"});
            _m.Call(code, data);
        }
        template <typename TP1 = void*>
        static void RaiseEvent(uint8_t code, TP1 data, ::GlobalNamespace::NetEventOptions* options, bool reliable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RaiseEvent"), {"code", "data", "options", "reliable"});
            _m.Call(code, data, options, reliable);
        }
    };
}
