#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksManager_GetMapIDFromPlayerResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksManager").GetInnerClass("GetMapIDFromPlayerResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetError() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMapMetaData* GetResult() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMapMetaData*> _field = GetClass().GetField(O("result"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStatusCode() {
            static BNM::Field<int> _field = GetClass().GetField(O("statusCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetError(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResult(::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMapMetaData* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMapMetaData*> _field = GetClass().GetField(O("result"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatusCode(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("statusCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
