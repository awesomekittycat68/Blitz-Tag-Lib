#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_ScavengerHunt {
    struct ScavengerManager_ScavengerJson : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.ScavengerHunt", "ScavengerManager").GetInnerClass("ScavengerJson");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*>* GetCollectedTargets() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*>*> _field = GetClass().GetField(O("CollectedTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTagScripts_ScavengerHunt::ScavengerManager_ScavengerJson* FromJson(::BNM::Structures::Mono::String* json) {
            static BNM::Method<::GorillaTagScripts_ScavengerHunt::ScavengerManager_ScavengerJson*> _m = GetClass().GetMethod(O("FromJson"), {"json"});
            return _m.Call(json);
        }
        static ::GorillaTagScripts_ScavengerHunt::ScavengerManager_ScavengerJson* FromManager(::GorillaTagScripts_ScavengerHunt::ScavengerManager* manager) {
            static BNM::Method<::GorillaTagScripts_ScavengerHunt::ScavengerManager_ScavengerJson*> _m = GetClass().GetMethod(O("FromManager"), {"manager"});
            return _m.Call(manager);
        }
        static void ReadCollectedTargets(::GorillaTagScripts_ScavengerHunt::ScavengerManager_ScavengerJson* json, ::BNM::IL2CPP::Il2CppObject* reader) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadCollectedTargets"), {"json", "reader"});
            _m.Call(json, reader);
        }
        ::BNM::Structures::Mono::String* Write() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Write"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
