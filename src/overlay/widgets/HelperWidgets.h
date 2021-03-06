#pragma once

#include "Widget.h"

namespace HelperWidgets
{
WidgetID ToolbarWidget();
bool BindWidget(VKBindInfo& aVKBindInfo, bool aUnbindable, float aOffsetX = 0.0f);
bool BoolWidget(const std::string& aLabel, bool& aCurrent, bool aSaved, float aOffsetX = 0.0f);

using TUCHPSave = std::function<void()>;
using TUCHPLoad = std::function<void()>;
int32_t UnsavedChangesPopup(bool& aFirstTime, bool aMadeChanges, TUCHPSave aSaveCB, TUCHPLoad aLoadCB);
}