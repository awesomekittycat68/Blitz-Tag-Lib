#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProgressionController_$DoSendQuestComplete$d__46 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionController").GetInnerClass("<DoSendQuestComplete>d__46");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>* GetCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ProgressionController_SetQuestCompleteRequest* GetData() {
            static BNM::Field<::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallback(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest* value) {
            static BNM::Field<::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool MoveNext() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
