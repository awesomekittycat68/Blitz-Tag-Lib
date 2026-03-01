#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking_Store {
    struct StoreUpdateEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "StoreUpdateEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetEndTimeUTC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("EndTimeUTC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetItemName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ItemName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPedestalID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PedestalID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStartTimeUTC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("StartTimeUTC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEndTimeUTC(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("EndTimeUTC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ItemName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPedestalID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PedestalID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartTimeUTC(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("StartTimeUTC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::GorillaNetworking_Store::StoreUpdateEvent* DeserializeFromJSon(::BNM::Structures::Mono::String* json) {
            static BNM::Method<::GorillaNetworking_Store::StoreUpdateEvent*> _m = GetClass().GetMethod(O("DeserializeFromJSon"), {"json"});
            return _m.Call(json);
        }
        static ::BNM::Structures::Mono::Array<::GorillaNetworking_Store::StoreUpdateEvent*>* DeserializeFromJSonArray(::BNM::Structures::Mono::String* json) {
            static BNM::Method<::BNM::Structures::Mono::Array<::GorillaNetworking_Store::StoreUpdateEvent*>*> _m = GetClass().GetMethod(O("DeserializeFromJSonArray"), {"json"});
            return _m.Call(json);
        }
        static ::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreUpdateEvent*>* DeserializeFromJSonList(::BNM::Structures::Mono::String* json) {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreUpdateEvent*>*> _m = GetClass().GetMethod(O("DeserializeFromJSonList"), {"json"});
            return _m.Call(json);
        }
        static ::BNM::Structures::Mono::String* SerializeArrayAsJSon(::BNM::Structures::Mono::Array<::GorillaNetworking_Store::StoreUpdateEvent*>* storeEvents) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("SerializeArrayAsJSon"), {"storeEvents"});
            return _m.Call(storeEvents);
        }
        static ::BNM::Structures::Mono::String* SerializeAsJSon(::GorillaNetworking_Store::StoreUpdateEvent* storeEvent) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("SerializeAsJSon"), {"storeEvent"});
            return _m.Call(storeEvent);
        }
    };
}
