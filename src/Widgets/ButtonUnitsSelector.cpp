#include "ButtonUnitsSelector.h"

#include "GameTestData.h"

#include <sgl/graphic/Font.h>
#include <sgl/graphic/FontManager.h>

namespace game
{

ButtonUnitsSelector::ButtonUnitsSelector(const char * text)
    : GameButton( SpriteFileTestUI,
                 {
                    IND_TMULTISEL_BG1,
                    IND_TMULTISEL_BG2,
                    IND_TMULTISEL_BG3,
                    IND_TMULTISEL_BG4,
                    IND_TMULTISEL_BG5
                 },
                 {
                     0xFFFFFFFF,
                     0xb2b2b2ff,
                     0xFFFFFFFF,
                     0xFFFFFFFF,
                     0xFFFFFFFF
                 },
                 nullptr)
{
    using namespace sgl::graphic;

    // set label font
    auto fm = FontManager::Instance();
    Font * font = fm->GetFont("Lato-Bold.ttf", 24, Font::NORMAL);

    SetLabelFont(font);

    // init label
    SetLabel(text);
}

} // namespace game
