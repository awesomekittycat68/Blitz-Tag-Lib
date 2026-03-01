#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/WatchableGenericSO$1.hpp"

namespace GorillaTag {
    struct WatchableIntSO : ::GlobalNamespace::WatchableGenericSO$1<int> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "WatchableIntSO");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCurrentValue() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_currentValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int get_currentValue() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_currentValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
