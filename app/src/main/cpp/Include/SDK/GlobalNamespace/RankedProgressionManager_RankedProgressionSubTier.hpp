#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RankedProgressionManager_RankedProgressionTierBase.hpp"

namespace GlobalNamespace {
    struct RankedProgressionManager_RankedProgressionSubTier : ::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RankedProgressionManager").GetInnerClass("RankedProgressionSubTier");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Sprite* GetIcon() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("icon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIcon(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("icon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
