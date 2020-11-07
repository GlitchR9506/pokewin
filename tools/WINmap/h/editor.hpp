static void TileInteractions_editor() {
    if (focus) {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Right)) {
            if (sf::Mouse::getPosition(window).x >= 0) {
                if (sf::Mouse::getPosition(window).y >= 0) {
                    if (sf::Mouse::getPosition(window).x <= (window.getSize().x)) {
                        if (sf::Mouse::getPosition(window).y <= (window.getSize().y)) {
                            if (x <= TilesX && x >= 0) {
                                if (y <= TilesY && x >= 0) {
                                    if (y >= 0) {
                                        TileType = level[x][y];
                                        std::cout << "\nYou Will Now Place { " << TileType << " }";
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            if (x <= TilesX && x >= 0)
                if (y <= TilesY && x >= 0) {
                    level[x][y] = TileType;
                }
        }
    }
}