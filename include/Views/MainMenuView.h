#ifndef GAME_MAINMENUVIEW_H
#define GAME_MAINMENUVIEW_H

#define WINDOW_WIDTH 1280u
#define WINDOW_HEIGHT 720u

#include <SFML/Graphics.hpp>

#include "LogicCenter.h"
#include "ResourceManager.h"
#include "View.h"

namespace tjg {
    class MainMenuView : public View {
    private:
        sf::Text message;
    public:
        MainMenuView(ResourceManager &resource_manager, sf::RenderWindow &window);
        void Initialize() override;
        void Update();
        void Render();
        void HandleWindowEvents(sf::Event event);
    };
}

#endif //GAME_MAINMENUVIEW_H
