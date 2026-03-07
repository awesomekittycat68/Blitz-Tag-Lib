
#pragma once

extern void UpdateLongArms();
extern void OnAuthenticated();
extern void OnGotInventoryItems(PlayFab_ClientModels::GetUserInventoryResult inventoryResult, PlayFab_ClientModels::GetCatalogItemsResult catalogResult);
extern void Awake();
extern void Update();
extern float longArms;