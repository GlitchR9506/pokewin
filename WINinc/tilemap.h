//typedef struct TileMap2 {
    bool update(sfVector2u tileSize, int** tiles, unsigned int width, unsigned int height) {
                // resize the vertex array to fit the level size
                m_vertices.setPrimitiveType(sfQuads);
                m_vertices.resize(width * height * 4);

                // populate the vertex array, with one quad per tile
                for (unsigned int i = 0; i < width; ++i)
                    for (unsigned int j = 0; j < height; ++j)
                    {
                        // get the current tile number
                        int tileNumber = tiles[i][j];

                        // find its position in the tileset texture
                        int tu = tileNumber % (m_tileset.getSize().x / tileSize.x);
                        int tv = tileNumber / (m_tileset.getSize().x / tileSize.x);

                        // get a pointer to the current tile's quad
                        sfVertex* quad = &m_vertices[(i + j * width) * 4];

                        // define its 4 corners
                        quad[0].position = sfVector2f(i * tileSize.x, j * tileSize.y);
                        quad[1].position = sfVector2f((i + 1) * tileSize.x, j * tileSize.y);
                        quad[2].position = sfVector2f((i + 1) * tileSize.x, (j + 1) * tileSize.y);
                        quad[3].position = sfVector2f(i * tileSize.x, (j + 1) * tileSize.y);

                        // define its 4 texture coordinates
                        quad[0].texCoords = sfVector2f(tu * tileSize.x, tv * tileSize.y);
                        quad[1].texCoords = sfVector2f((tu + 1) * tileSize.x, tv * tileSize.y);
                        quad[2].texCoords = sfVector2f((tu + 1) * tileSize.x, (tv + 1) * tileSize.y);
                        quad[3].texCoords = sfVector2f(tu * tileSize.x, (tv + 1) * tileSize.y);
                    }
                return true;
    }
    bool load(const char*& tileset, sfVector2u tileSize, int** tiles, unsigned int width, unsigned int height)
    {
        // load the tileset texture
        if (!m_tileset.loadFromFile(tileset))
            return false;

        // resize the vertex array to fit the level size
        m_vertices.setPrimitiveType(sfQuads);
        m_vertices.resize(width * height * 4);


        // populate the vertex array, with one quad per tile
        for (unsigned int i = 0; i < width; ++i)
            for (unsigned int j = 0; j < height; ++j)
            {
                // get the current tile number
                int tileNumber = tiles[i][j];

                // find its position in the tileset texture
                int tu = tileNumber % (m_tileset.getSize().x / tileSize.x);
                int tv = tileNumber / (m_tileset.getSize().x / tileSize.x);

                // get a pointer to the current tile's quad
                sfVertex* quad = &m_vertices[(i + j * width) * 4];

                // define its 4 corners
                quad[0].position = sfVector2f(i * tileSize.x, j * tileSize.y);
                quad[1].position = sfVector2f((i + 1) * tileSize.x, j * tileSize.y);
                quad[2].position = sfVector2f((i + 1) * tileSize.x, (j + 1) * tileSize.y);
                quad[3].position = sfVector2f(i * tileSize.x, (j + 1) * tileSize.y);

                // define its 4 texture coordinates
                quad[0].texCoords = sfVector2f(tu * tileSize.x, tv * tileSize.y);
                quad[1].texCoords = sfVector2f((tu + 1) * tileSize.x, tv * tileSize.y);
                quad[2].texCoords = sfVector2f((tu + 1) * tileSize.x, (tv + 1) * tileSize.y);
                quad[3].texCoords = sfVector2f(tu * tileSize.x, (tv + 1) * tileSize.y);
            }

        return true;
    }


    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const
    {
        // apply the transform
        states.transform *= getTransform();

        // apply the tileset texture
        states.texture = &m_tileset;

        // draw the vertex array
        target.draw(m_vertices, states);
    }

    sf::VertexArray m_vertices;
    sf::Texture m_tileset;
//};
