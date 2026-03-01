#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MagicCauldron_CauldronState.hpp"
#include "MagicCauldron_MagicCauldronData.hpp"
#include "MagicCauldron_Recipe.hpp"
#include "NetworkComponent.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct MagicCauldron : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MagicCauldron");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::MagicCauldron_MagicCauldronData GetData() {
            static BNM::Method<::GlobalNamespace::MagicCauldron_MagicCauldronData> _method = GetClass().GetMethod(O("get_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetData(::GlobalNamespace::MagicCauldron_MagicCauldronData value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::MagicCauldron_MagicCauldronData GetData_f() {
            static BNM::Field<::GlobalNamespace::MagicCauldron_MagicCauldronData> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MagicCauldronLiquid* GetLiquid() {
            static BNM::Field<::GlobalNamespace::MagicCauldronLiquid*> _field = GetClass().GetField(O("_liquid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::MagicIngredientType*>* GetAllIngredients() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MagicIngredientType*>*> _field = GetClass().GetField(O("allIngredients"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetBubblesParticle() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("bubblesParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetCauldronActiveColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("CauldronActiveColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetCauldronColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("cauldronColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetCauldronFailedColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("CauldronFailedColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetCauldronNotReadyColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("CauldronNotReadyColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetCurrentColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("currentColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::MagicIngredientType*>* GetCurrentIngredients() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MagicIngredientType*>*> _field = GetClass().GetField(O("currentIngredients"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentRecipeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRecipeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MagicCauldron_CauldronState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::MagicCauldron_CauldronState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentStateElapsedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentStateElapsedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFlyingWitchesContainer() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("flyingWitchesContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetIngredientAddedAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("ingredientAddedAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIngredientIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("ingredientIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLevitationBlendOutDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationBlendOutDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLevitationBonusFullAtYSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationBonusFullAtYSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLevitationBonusOffAtYSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationBonusOffAtYSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLevitationBonusStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationBonusStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLevitationDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLevitationRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLevitationSpellDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationSpellDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLevitationStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxTimeToAddAllIngredients() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTimeToAddAllIngredients"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetRecipeFailedAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("recipeFailedAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRecipeFailedDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("recipeFailedDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::MagicCauldron_Recipe>* GetRecipes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MagicCauldron_Recipe>*> _field = GetClass().GetField(O("recipes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetRendr() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("rendr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MagicCauldron_IngrediantFXContext* GetReusableFXContext() {
            static BNM::Field<::GlobalNamespace::MagicCauldron_IngrediantFXContext*> _field = GetClass().GetField(O("reusableFXContext"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MagicCauldron_IngredientArgs* GetReusableIngrediantArgs() {
            static BNM::Field<::GlobalNamespace::MagicCauldron_IngredientArgs*> _field = GetClass().GetField(O("reusableIngrediantArgs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetSplashParticle() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("splashParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetSuccessParticle() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("successParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSummonWitchesDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("summonWitchesDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTestLevitationAlwaysOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("testLevitationAlwaysOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWaitTimeToSummonWitches() {
            static BNM::Field<float> _field = GetClass().GetField(O("waitTimeToSummonWitches"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::NoncontrollableBroomstick*>* GetWitchesComponent() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::NoncontrollableBroomstick*>*> _field = GetClass().GetField(O("witchesComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData_fs(::GlobalNamespace::MagicCauldron_MagicCauldronData value) {
            static BNM::Field<::GlobalNamespace::MagicCauldron_MagicCauldronData> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquid(::GlobalNamespace::MagicCauldronLiquid* value) {
            static BNM::Field<::GlobalNamespace::MagicCauldronLiquid*> _field = GetClass().GetField(O("_liquid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllIngredients(::BNM::Structures::Mono::Array<::GlobalNamespace::MagicIngredientType*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MagicIngredientType*>*> _field = GetClass().GetField(O("allIngredients"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBubblesParticle(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("bubblesParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCauldronActiveColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("CauldronActiveColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCauldronColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("cauldronColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCauldronFailedColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("CauldronFailedColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCauldronNotReadyColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("CauldronNotReadyColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("currentColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentRecipeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRecipeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::MagicCauldron_CauldronState value) {
            static BNM::Field<::GlobalNamespace::MagicCauldron_CauldronState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentStateElapsedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentStateElapsedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlyingWitchesContainer(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("flyingWitchesContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIngredientAddedAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("ingredientAddedAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIngredientIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ingredientIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevitationBlendOutDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationBlendOutDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevitationBonusFullAtYSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationBonusFullAtYSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevitationBonusOffAtYSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationBonusOffAtYSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevitationBonusStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationBonusStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevitationDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevitationRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevitationSpellDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationSpellDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevitationStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("levitationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxTimeToAddAllIngredients(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTimeToAddAllIngredients"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecipeFailedAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("recipeFailedAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecipeFailedDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("recipeFailedDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecipes(::BNM::Structures::Mono::List<::GlobalNamespace::MagicCauldron_Recipe>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MagicCauldron_Recipe>*> _field = GetClass().GetField(O("recipes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRendr(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("rendr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReusableFXContext(::GlobalNamespace::MagicCauldron_IngrediantFXContext* value) {
            static BNM::Field<::GlobalNamespace::MagicCauldron_IngrediantFXContext*> _field = GetClass().GetField(O("reusableFXContext"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReusableIngrediantArgs(::GlobalNamespace::MagicCauldron_IngredientArgs* value) {
            static BNM::Field<::GlobalNamespace::MagicCauldron_IngredientArgs*> _field = GetClass().GetField(O("reusableIngrediantArgs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSplashParticle(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("splashParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuccessParticle(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("successParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummonWitchesDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("summonWitchesDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestLevitationAlwaysOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("testLevitationAlwaysOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitTimeToSummonWitches(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("waitTimeToSummonWitches"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ChangeState(::GlobalNamespace::MagicCauldron_CauldronState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        bool CheckIngredients() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIngredients"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::MagicCauldron_MagicCauldronData get_Data() {
            static BNM::Method<::GlobalNamespace::MagicCauldron_MagicCauldronData> _m = GetClass().GetMethod(O("get_Data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* LevitationSpellCoroutine() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("LevitationSpellCoroutine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEventEnd() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEventEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEventStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEventStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnIngredientAdd(int _ingredientIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnIngredientAdd"), {"_ingredientIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_ingredientIndex);
        }
        void OnIngredientAdd(int _ingredientIndex, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnIngredientAdd"), {"_ingredientIndex", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_ingredientIndex, info);
        }
        void OnIngredientAddShared(int _ingredientIndex, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnIngredientAddShared"), {"_ingredientIndex", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_ingredientIndex, info);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void ReadDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void ReadDataShared(float stateElapsedTime, int recipeIndex, ::GlobalNamespace::MagicCauldron_CauldronState state, int ingredientIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataShared"), {"stateElapsedTime", "recipeIndex", "state", "ingredientIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stateElapsedTime, recipeIndex, state, ingredientIndex);
        }
        template <typename TP1 = void*>
        void RPC_OnIngredientAdd(int _ingredientIndex, TP1 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_OnIngredientAdd"), {"_ingredientIndex", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_ingredientIndex, info);
        }
        static void RPC_OnIngredientAdd$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_OnIngredientAdd@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        void set_Data(::GlobalNamespace::MagicCauldron_MagicCauldronData value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateCauldronColor(::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCauldronColor"), {"color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color);
        }
        void UpdateState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
