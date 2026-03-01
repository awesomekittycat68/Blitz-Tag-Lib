#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaHandGesture : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaHandGesture");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GestureNode* GetDigits() {
            static BNM::Method<::GlobalNamespace::GestureNode*> _method = GetClass().GetMethod(O("get_digits"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDigits(::GlobalNamespace::GestureNode* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_digits"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GestureHandNode* GetHand() {
            static BNM::Method<::GlobalNamespace::GestureHandNode*> _method = GetClass().GetMethod(O("get_hand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHand(::GlobalNamespace::GestureHandNode* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GestureDigitNode* GetIndex() {
            static BNM::Method<::GlobalNamespace::GestureDigitNode*> _method = GetClass().GetMethod(O("get_index"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIndex(::GlobalNamespace::GestureDigitNode* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_index"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GestureDigitNode* GetMiddle() {
            static BNM::Method<::GlobalNamespace::GestureDigitNode*> _method = GetClass().GetMethod(O("get_middle"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMiddle(::GlobalNamespace::GestureDigitNode* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_middle"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GestureNode* GetPalm() {
            static BNM::Method<::GlobalNamespace::GestureNode*> _method = GetClass().GetMethod(O("get_palm"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPalm(::GlobalNamespace::GestureNode* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_palm"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GestureDigitNode* GetThumb() {
            static BNM::Method<::GlobalNamespace::GestureDigitNode*> _method = GetClass().GetMethod(O("get_thumb"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetThumb(::GlobalNamespace::GestureDigitNode* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_thumb"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GestureNode* GetWrist() {
            static BNM::Method<::GlobalNamespace::GestureNode*> _method = GetClass().GetMethod(O("get_wrist"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetWrist(::GlobalNamespace::GestureNode* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_wrist"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GestureNode*>* GetNodes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GestureNode*>*> _field = GetClass().GetField(O("nodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTrack() {
            static BNM::Field<bool> _field = GetClass().GetField(O("track"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNodes(::BNM::Structures::Mono::Array<::GlobalNamespace::GestureNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GestureNode*>*> _field = GetClass().GetField(O("nodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrack(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("track"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::GestureNode* get_digits() {
            static BNM::Method<::GlobalNamespace::GestureNode*> _m = GetClass().GetMethod(O("get_digits"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GestureHandNode* get_hand() {
            static BNM::Method<::GlobalNamespace::GestureHandNode*> _m = GetClass().GetMethod(O("get_hand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GestureDigitNode* get_index() {
            static BNM::Method<::GlobalNamespace::GestureDigitNode*> _m = GetClass().GetMethod(O("get_index"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GestureDigitNode* get_middle() {
            static BNM::Method<::GlobalNamespace::GestureDigitNode*> _m = GetClass().GetMethod(O("get_middle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GestureNode* get_palm() {
            static BNM::Method<::GlobalNamespace::GestureNode*> _m = GetClass().GetMethod(O("get_palm"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GestureDigitNode* get_thumb() {
            static BNM::Method<::GlobalNamespace::GestureDigitNode*> _m = GetClass().GetMethod(O("get_thumb"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GestureNode* get_wrist() {
            static BNM::Method<::GlobalNamespace::GestureNode*> _m = GetClass().GetMethod(O("get_wrist"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::GestureNode*>* InitNodes() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::GestureNode*>*> _m = GetClass().GetMethod(O("InitNodes"));
            return _m.Call();
        }
        void set_digits(::GlobalNamespace::GestureNode* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_digits"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_hand(::GlobalNamespace::GestureHandNode* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hand"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_index(::GlobalNamespace::GestureDigitNode* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_index"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_middle(::GlobalNamespace::GestureDigitNode* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_middle"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_palm(::GlobalNamespace::GestureNode* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_palm"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_thumb(::GlobalNamespace::GestureDigitNode* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_thumb"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_wrist(::GlobalNamespace::GestureNode* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_wrist"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
