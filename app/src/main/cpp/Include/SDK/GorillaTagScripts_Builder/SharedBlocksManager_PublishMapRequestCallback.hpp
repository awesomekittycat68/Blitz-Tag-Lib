#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksManager_PublishMapRequestCallback : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksManager").GetInnerClass("PublishMapRequestCallback");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP5 = void*>
        void* BeginInvoke(bool success, ::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::String* mapID, int64_t responseCode, ::BNM::IL2CPP::Il2CppObject* callback, TP5 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"success", "key", "mapID", "responseCode", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(success, key, mapID, responseCode, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void Invoke(bool success, ::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::String* mapID, int64_t responseCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"success", "key", "mapID", "responseCode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success, key, mapID, responseCode);
        }
    };
}
