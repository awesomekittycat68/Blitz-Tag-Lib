#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GorillaTriggerBox.hpp"

namespace GorillaNetworking {
    struct GorillaNetworkLeaveRoomTrigger : ::GlobalNamespace::GorillaTriggerBox {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "GorillaNetworkLeaveRoomTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetExcludePrivateRooms() {
            static BNM::Field<bool> _field = GetClass().GetField(O("excludePrivateRooms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetExcludePrivateRooms(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("excludePrivateRooms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DisconnectAfterDelay(float seconds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisconnectAfterDelay"), {"seconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seconds);
        }
        void OnBoxTriggered() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBoxTriggered"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
