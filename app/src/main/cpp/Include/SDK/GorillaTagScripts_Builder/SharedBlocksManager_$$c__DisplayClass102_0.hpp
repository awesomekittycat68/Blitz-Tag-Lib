#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksManager_$$c__DisplayClass102_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksManager").GetInnerClass("<>c__DisplayClass102_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* GetMap() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*> _field = GetClass().GetField(O("map"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMap(::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*> _field = GetClass().GetField(O("map"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
