#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct BuilderRecycler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "BuilderRecycler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SoundBankPlayer* GetBladeSoundPlayer() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("bladeSoundPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderResourceColors* GetBuilderResourceColors() {
            static BNM::Field<::GlobalNamespace::BuilderResourceColors*> _field = GetClass().GetField(O("builderResourceColors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetCurrentChainCost() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("currentChainCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::MonoBehaviour*>* GetEffectBehaviors() {
            static BNM::Field<::BNM::Structures::Mono::List<::MonoBehaviour*>*> _field = GetClass().GetField(O("effectBehaviors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasFans() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasFans"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasPipes() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPipes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInBuilderZone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inBuilderZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumPipes() {
            static BNM::Field<int> _field = GetClass().GetField(O("numPipes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::MeshRenderer*>* GetOutputPipes() {
            static BNM::Field<::BNM::Structures::Mono::List<::MeshRenderer*>*> _field = GetClass().GetField(O("outputPipes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayingBladeEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playingBladeEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayingPipeEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playingPipeEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetProps() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("props"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRecycleEffectDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("recycleEffectDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRecycleParticles() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("recycleParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRecyclerID() {
            static BNM::Field<int> _field = GetClass().GetField(O("recyclerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable* GetTable() {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTimeToCheckPipes() {
            static BNM::Field<double> _field = GetClass().GetField(O("timeToCheckPipes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTimeToStopBlades() {
            static BNM::Field<double> _field = GetClass().GetField(O("timeToStopBlades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetTotalRecycledCost() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("totalRecycledCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Renderer*>* GetZoneRenderers() {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("zoneRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBladeSoundPlayer(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("bladeSoundPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderResourceColors(::GlobalNamespace::BuilderResourceColors* value) {
            static BNM::Field<::GlobalNamespace::BuilderResourceColors*> _field = GetClass().GetField(O("builderResourceColors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentChainCost(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("currentChainCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEffectBehaviors(::BNM::Structures::Mono::List<::MonoBehaviour*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::MonoBehaviour*>*> _field = GetClass().GetField(O("effectBehaviors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasFans(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasFans"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasPipes(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPipes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInBuilderZone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inBuilderZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumPipes(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numPipes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutputPipes(::BNM::Structures::Mono::List<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::MeshRenderer*>*> _field = GetClass().GetField(O("outputPipes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayingBladeEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playingBladeEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayingPipeEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playingPipeEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProps(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("props"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecycleEffectDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("recycleEffectDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecycleParticles(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("recycleParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecyclerID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("recyclerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTable(::GorillaTagScripts::BuilderTable* value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeToCheckPipes(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("timeToCheckPipes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeToStopBlades(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("timeToStopBlades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalRecycledCost(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("totalRecycledCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneRenderers(::BNM::Structures::Mono::List<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("zoneRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddPieceCost(::GlobalNamespace::BuilderResources* cost) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPieceCost"), {"cost"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cost);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector2 GetUVShiftOffset() {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("GetUVShiftOffset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnRecycleRequestedAtRecycler(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRecycleRequestedAtRecycler"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnZoneChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetOutputPipes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetOutputPipes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePipeLoop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePipeLoop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateRecycler() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRecycler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
