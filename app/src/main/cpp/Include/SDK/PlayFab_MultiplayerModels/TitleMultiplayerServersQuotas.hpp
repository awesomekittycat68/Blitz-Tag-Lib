#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct TitleMultiplayerServersQuotas : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "TitleMultiplayerServersQuotas");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::CoreCapacity*>* GetCoreCapacities() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::CoreCapacity*>*> _field = GetClass().GetField(O("CoreCapacities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCoreCapacities(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::CoreCapacity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::CoreCapacity*>*> _field = GetClass().GetField(O("CoreCapacities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
