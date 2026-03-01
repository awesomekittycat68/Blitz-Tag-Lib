#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform_Models {
    struct CowatchViewerUpdate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "CowatchViewerUpdate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform_Models::CowatchViewerList* GetDataList() {
            static BNM::Field<::Oculus_Platform_Models::CowatchViewerList*> _field = GetClass().GetField(O("DataList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetId() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("Id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
