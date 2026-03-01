#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksManager_$GetMapDataFromID$d__118 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksManager").GetInnerClass("<GetMapDataFromID>d__118");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts_Builder::SharedBlocksManager_BlocksMapRequestCallback* GetCallback() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_BlocksMapRequestCallback*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksManager_GetMapDataFromIDRequest* GetData() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_GetMapDataFromIDRequest*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallback(::GorillaTagScripts_Builder::SharedBlocksManager_BlocksMapRequestCallback* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_BlocksMapRequestCallback*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData(::GorillaTagScripts_Builder::SharedBlocksManager_GetMapDataFromIDRequest* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_GetMapDataFromIDRequest*> _field = GetClass().GetField(O("data"));
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
