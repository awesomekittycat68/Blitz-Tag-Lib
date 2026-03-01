#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct Cowatching : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Cowatching");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Oculus_Platform::Request* JoinSession() {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("JoinSession"));
            return _m.Call();
        }
        static ::Oculus_Platform::Request* LaunchInviteDialog() {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("LaunchInviteDialog"));
            return _m.Call();
        }
        static ::Oculus_Platform::Request* LeaveSession() {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("LeaveSession"));
            return _m.Call();
        }
        static ::Oculus_Platform::Request* RequestToPresent() {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("RequestToPresent"));
            return _m.Call();
        }
        static ::Oculus_Platform::Request* ResignFromPresenting() {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("ResignFromPresenting"));
            return _m.Call();
        }
        static ::Oculus_Platform::Request* SetPresenterData(::BNM::Structures::Mono::String* video_title, ::BNM::Structures::Mono::String* presenter_data) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("SetPresenterData"), {"video_title", "presenter_data"});
            return _m.Call(video_title, presenter_data);
        }
        static ::Oculus_Platform::Request* SetViewerData(::BNM::Structures::Mono::String* viewer_data) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("SetViewerData"), {"viewer_data"});
            return _m.Call(viewer_data);
        }
    };
}
