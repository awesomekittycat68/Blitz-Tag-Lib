#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_MultiplayerModels {
    struct UploadCertificateRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "UploadCertificateRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_MultiplayerModels::Certificate* GetGameCertificate() {
            static BNM::Field<::PlayFab_MultiplayerModels::Certificate*> _field = GetClass().GetField(O("GameCertificate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameCertificate(::PlayFab_MultiplayerModels::Certificate* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::Certificate*> _field = GetClass().GetField(O("GameCertificate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
