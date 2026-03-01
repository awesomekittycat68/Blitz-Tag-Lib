#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SharedBlocksManager_SharedBlocksRequestBase.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksManager_GetMapsRequest : ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksRequestBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksManager").GetInnerClass("GetMapsRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetPage() {
            static BNM::Field<int> _field = GetClass().GetField(O("page"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPageSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("pageSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowInactive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowInactive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSort() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("sort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("page"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pageSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowInactive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowInactive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSort(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("sort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
