#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking_Store {
    struct StandImport : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "StandImport");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GorillaNetworking_Store::StandTypeData*>* GetStandData() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::StandTypeData*>*> _field = GetClass().GetField(O("standData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::StandTypeData*>* GetStandKeyToDataDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::StandTypeData*>*> _field = GetClass().GetField(O("standKeyToDataDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetStandData(::BNM::Structures::Mono::List<::GorillaNetworking_Store::StandTypeData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::StandTypeData*>*> _field = GetClass().GetField(O("standData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandKeyToDataDict(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::StandTypeData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::StandTypeData*>*> _field = GetClass().GetField(O("standKeyToDataDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DecomposeFromTitleDataString(::BNM::Structures::Mono::String* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DecomposeFromTitleDataString"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        void DecomposeStandData(::BNM::Structures::Mono::String* dataString) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DecomposeStandData"), {"dataString"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dataString);
        }
        void DecomposeStandDataTitleData(::BNM::Structures::Mono::String* dataString) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DecomposeStandDataTitleData"), {"dataString"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dataString);
        }
        void DeserializeFromJSON(::BNM::Structures::Mono::String* JSONString) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeFromJSON"), {"JSONString"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(JSONString);
        }
    };
}
