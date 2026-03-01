#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksManager_$GetTopMaps$d__121 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksManager").GetInnerClass("<GetTopMaps>d__121");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>* GetCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksManager_GetMapsRequest* GetData() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_GetMapsRequest*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallback(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData(::GorillaTagScripts_Builder::SharedBlocksManager_GetMapsRequest* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_GetMapsRequest*> _field = GetClass().GetField(O("data"));
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
