#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SharedBlocksManager_SharedBlocksRequestBase.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksManager_GetMapDataFromIDRequest : ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksRequestBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksManager").GetInnerClass("GetMapDataFromIDRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetMapId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMapId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
