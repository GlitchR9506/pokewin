static void Input() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        view.move(0.f, -12.f);
        xoff = xoff;
        yoff = yoff - 12;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        view.move(0.f, 12.f);
        xoff = xoff;
        yoff = yoff + 12;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        view.move(-12.f, 0.f);
        xoff = xoff - 12;
        yoff = yoff;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        view.move(12.f, 0.f);
        xoff = xoff + 12;
        yoff = yoff;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::RControl)) {
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y)) {
        if (TileType == 0) {}
        else {
            TileType = TileType - 1;
        }
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::U)) {
        //if (TileType == 0) {}
        //else {
        TileType = TileType + 1;
        //}
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::H)) {
        if (TileType <= 9) {}
        else {
            TileType = TileType - 10;
        }
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::J)) {
        //if (TileType == 0) {}
        //else {
        TileType = TileType + 10;
        //}
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::B)) {
        if (TileType <= 99) {}
        else {
            TileType = TileType - 100;
        }
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::N)) {
        //if (TileType == 0) {}
        //else {
        TileType = TileType + 100;
        //}
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::P)) {

    }
}