#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LocalVoice.hpp"

namespace Photon_Voice {
    struct LocalVoiceFramedBase : ::Photon_Voice::LocalVoice {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "LocalVoiceFramedBase");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetFrameSize() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FrameSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFrameSize(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FrameSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int get_FrameSize() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_FrameSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_FrameSize(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FrameSize"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
