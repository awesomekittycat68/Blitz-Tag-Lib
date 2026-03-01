#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksManager_$PostPublishMapRequest$d__116 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksManager").GetInnerClass("<PostPublishMapRequest>d__116");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts_Builder::SharedBlocksManager_PublishMapRequestCallback* GetCallback() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_PublishMapRequestCallback*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksManager_PublishMapRequestData* GetData() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_PublishMapRequestData*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallback(::GorillaTagScripts_Builder::SharedBlocksManager_PublishMapRequestCallback* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_PublishMapRequestCallback*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData(::GorillaTagScripts_Builder::SharedBlocksManager_PublishMapRequestData* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_PublishMapRequestData*> _field = GetClass().GetField(O("data"));
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
