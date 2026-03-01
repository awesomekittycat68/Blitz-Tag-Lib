#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/MonoBehaviourPostTick.hpp"

namespace GorillaNetworking {
    struct GorillaTextManager : ::GlobalNamespace::MonoBehaviourPostTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "GorillaTextManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaNetworking::GorillaTextManager* GetInstance() {
            static BNM::Field<::GorillaNetworking::GorillaTextManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::GorillaText*>* GetGorillaTexts() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::GorillaText*>*> _field = GetClass().GetField(O("gorillaTexts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaNetworking::GorillaTextManager* GetInstance_f() {
            static BNM::Field<::GorillaNetworking::GorillaTextManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        void SetGorillaTexts(::BNM::Structures::Mono::List<::GorillaNetworking::GorillaText*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::GorillaText*>*> _field = GetClass().GetField(O("gorillaTexts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaNetworking::GorillaTextManager* value) {
            static BNM::Field<::GorillaNetworking::GorillaTextManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CreateManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateManager"));
            _m.Call();
        }
        void PostTick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostTick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void RegisterText(::GorillaNetworking::GorillaText* text) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterText"), {"text"});
            _m.Call(text);
        }
    };
}
