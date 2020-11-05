static void calculateCords() {

    xml = (sf::Mouse::getPosition(window).x);
    x = (sf::Mouse::getPosition(window).x - xoff) / 16;
    //x8 = (sf::Mouse::getPosition(window).x + xoff) / 8;
    yml = (sf::Mouse::getPosition(window).y);
    y = (sf::Mouse::getPosition(window).y - yoff) / 16;
   // y8 = (sf::Mouse::getPosition(window).y + yoff) / 8;

}