#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct HitTargetScoreDisplay : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HitTargetScoreDisplay");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetCurrentRotationCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("currentRotationCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentScore() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHundredsCard() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("hundredsCard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHundredsOld() {
            static BNM::Field<int> _field = GetClass().GetField(O("hundredsOld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetHundredsRend() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("hundredsRend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMatPropBlock() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("matPropBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::WatchableIntSO* GetNetworkedScore() {
            static BNM::Field<::GorillaTag::WatchableIntSO*> _field = GetClass().GetField(O("networkedScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector4>* GetNumberSheet() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector4>*> _field = GetClass().GetField(O("numberSheet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRotateSpeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("rotateSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotateTimeTotal() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateTimeTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSinglesCard() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("singlesCard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetSinglesRend() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("singlesRend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTensCard() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tensCard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTensOld() {
            static BNM::Field<int> _field = GetClass().GetField(O("tensOld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetTensRend() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("tensRend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentRotationCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("currentRotationCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentScore(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHundredsCard(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("hundredsCard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHundredsOld(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hundredsOld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHundredsRend(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("hundredsRend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatPropBlock(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("matPropBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkedScore(::GorillaTag::WatchableIntSO* value) {
            static BNM::Field<::GorillaTag::WatchableIntSO*> _field = GetClass().GetField(O("networkedScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotateSpeed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rotateSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotateTimeTotal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateTimeTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSinglesCard(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("singlesCard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSinglesRend(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("singlesRend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTensCard(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tensCard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTensOld(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tensOld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTensRend(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("tensRend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnScoreChanged(int newScore) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnScoreChanged"), {"newScore"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newScore);
        }
        void ResetRotation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetRotation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* RotatingCo() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("RotatingCo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
