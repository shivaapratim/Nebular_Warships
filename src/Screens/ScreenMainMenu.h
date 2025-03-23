#pragma once

#include "Screen.h"

namespace sgl { namespace graphic { class Image; } }

namespace game
{

class ButtonChangelog;
class DialogChangelog;

class ScreenMainMenu : public Screen
{
public:
    ScreenMainMenu(Game * game);
    ~ScreenMainMenu();

    void OnKeyUp(sgl::core::KeyboardEvent & event) override;

    void Update(float update) override;
    void Render() override;

private:
    void OnApplicationQuit(sgl::core::ApplicationEvent & event) override;

    void CreateChangelog();

private:
    sgl::graphic::Image * mBg = nullptr;

    ButtonChangelog * mButtonChangelog = nullptr;
    DialogChangelog * mDialogChangelog = nullptr;
};

} // namespace game
