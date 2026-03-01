#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_EventsModels {
    struct WriteEventsRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.EventsModels", "WriteEventsRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_EventsModels::EventContents*>* GetEvents() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_EventsModels::EventContents*>*> _field = GetClass().GetField(O("Events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEvents(::BNM::Structures::Mono::List<::PlayFab_EventsModels::EventContents*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_EventsModels::EventContents*>*> _field = GetClass().GetField(O("Events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
