
if (event.type == sf::Event::KeyReleased) {
    if (event.key.code == sf::Keyboard::LControl) {}
    if (event.key.code == sf::Keyboard::S) {
        std::cout << "\nCurrent Selected Name To Save As:" << DLM;
        std::cout << "\n Enter FileName To Save As [";
        std::cin >> DLM;
        std::fstream mstream(DLM, std::fstream::out | std::fstream::in | std::fstream::trunc);
        std::cout << "\nSaving " << "'" << DLM << "'" << "...";
        mstream << "DLE" << "\n";
        mstream << TilesX << "\n";
        mstream << TilesY << "\n";
        mstream << TileSet0 << "\n";
        mstream << TileSet1 << "\n";
        mstream << ENorth << "\n";
        mstream << ESouth << "\n";
        mstream << EWest << "\n";
        mstream << EEast << "\n";
        mstream << ENorthOff << "\n";
        mstream << ESouthOff << "\n";
        mstream << EWestOff << "\n";
        mstream << EEastOff << "\n";
        mstream << Encounters << "\n";
        mstream << Events << "\n";
        i = 0;
        while (i <= TilesX) {
            int j = 0;
            while (j <= TilesY) {
                mstream << level[i][j];
                mstream << ", ";
                j++;
            }
            i++;
        }
        mstream << "\n";
        mstream.close();
        std::cout << "\nSaved " << "'" << DLM << "'" << "!";
    }
    if (event.key.code == sf::Keyboard::O) {
        std::cout << "\nCurrent Selected File To Open:" << DLM;
        std::cout << "\n Enter File To Open [";
        std::cin >> DLM;
        std::fstream mstream(DLM, std::fstream::out | std::fstream::in);
        std::cout << "\nOpening " << "'" << DLM << "'" << "...";
        bool eol = false;
        std::string Header;
        std::string TilesX32TEMP;
        std::string TilesY32TEMP;
        std::string TilesX16TEMP;
        std::string TilesY16TEMP;
        std::getline(mstream, Header, '\n');
        std::getline(mstream, TilesX32TEMP, '\n');
        std::stringstream TilesX32TEMPStI(TilesX32TEMP);
        TilesX32TEMPStI >> TilesX;
        std::getline(mstream, TilesY32TEMP, '\n');
        std::stringstream TilesY32TEMPStI(TilesY32TEMP);
        TilesY32TEMPStI >> TilesY;
        std::getline(mstream, TilesX16TEMP, '\n');
        std::stringstream TilesX16TEMPStI(TilesX16TEMP);
        std::getline(mstream, TileSet0, '\n');
        std::getline(mstream, TileSet1, '\n');
        std::getline(mstream, ENorth, '\n');
        std::getline(mstream, ESouth, '\n');
        std::getline(mstream, EWest, '\n');
        std::getline(mstream, EEast, '\n');
        std::string ENorthOffTEMP;
        std::string ESouthOffTEMP;
        std::string EWestOffTEMP;
        std::string EEastOffTEMP;
        std::getline(mstream, ENorthOffTEMP, '\n');
        std::stringstream ENorthOffTEMPStI(ENorthOffTEMP);
        ENorthOffTEMPStI >> ENorthOff;
        std::getline(mstream, ESouthOffTEMP, '\n');
        std::stringstream ESouthOffTEMPStI(ESouthOffTEMP);
        ESouthOffTEMPStI >> ESouthOff;
        std::getline(mstream, EWestOffTEMP, '\n');
        std::stringstream EWestOffTEMPStI(EWestOffTEMP);
        EWestOffTEMPStI >> EWestOff;
        std::getline(mstream, EEastOffTEMP, '\n');
        std::stringstream EEastOffTEMPStI(EEastOffTEMP);
        EEastOffTEMPStI >> EEastOff;
        std::getline(mstream, Encounters, '\n');
        std::getline(mstream, Events, '\n');

        i = 0;
        while (i <= TilesX) {
            int j = 0;
            while (j <= TilesY) {
                std::string str = ",";
                std::string temp;
                if (std::getline(mstream, temp, ',')) {
                    std::stringstream StI(temp);
                    StI >> level[i][j];
                    j++;
                }
                i++;
            }
        }
        map.update(sf::Vector2u(16, 16), level, TilesX, TilesY);
        mstream.close();
        std::cout << "\nOpened " << "'" << DLM << "'" << "!";
    }
    if (event.key.code == sf::Keyboard::L) {
    }
    if (event.key.code == sf::Keyboard::W) {
    }
    if (event.key.code == sf::Keyboard::E) {
        std::cout << "\nEnter Tile Number To Jump To[";
        std::cin >> TileType;
        std::cout << "You Will Now Place { " << TileType << " }";
    }
    if (event.key.code == sf::Keyboard::M) {
        system("menu.bat");
    }
    if (event.key.code == sf::Keyboard::P) {
        std::string temp;
        std::string TileSetTEMP;
        std::string ENorthTEMP;
        std::string ESouthTEMP;
        std::string EWestTEMP;
        std::string EEastTEMP;
        int ENorthOffTEMP;
        int ESouthOffTEMP;
        int EWestOffTEMP;
        int EEastOffTEMP;
        int TilesX32TEMP;
        int TilesY32TEMP;
        std::cout << "\n Create New File?[Y/N]";
        std::cin >> temp;
        if (temp == "Y") {
            std::cout << "\n Enter Map Name (ASCII ONLY)[";
            std::cin >> MapName;
            std::cout << "\n Enter Map Size X[";
            std::cin >> TilesX32TEMP;
            std::cout << "\n Enter Map Size Y[";
            std::cin >> TilesY32TEMP;
            std::cout << "\n Enter TileSet[";
            std::cin >> TileSetTEMP;
            std::cout << "\n Enter North Map Connection or mapdata/Blank.DLM[";
            std::cin >> ENorthTEMP;
            std::cout << "\n Enter North Map Connection offset[";
            std::cin >> ENorthOffTEMP;
            std::cout << "\n Enter South Map Connection or mapdata/Blank.DLM[";
            std::cin >> ESouthTEMP;
            std::cout << "\n Enter South Map Connection offset[";
            std::cin >> ESouthOffTEMP;
            std::cout << "\n Enter West Map Connection or mapdata/Blank.DLM[";
            std::cin >> EWestTEMP;
            std::cout << "\n Enter West Map Connection offset[";
            std::cin >> EWestOffTEMP;
            std::cout << "\n Enter East Map Connection or mapdata/Blank.DLM[";
            std::cin >> EEastTEMP;
            std::cout << "\n Enter East Map Connection offset[";
            std::cin >> EEastOffTEMP;
            DLM = "mapdata/" + MapName + ".DLM";
            Encounters = "encounters/" + MapName + ".DEM";
            Events = "events/" + MapName + ".DVM";
            //check for ints string shit too lazy atm
            TilesX = TilesX32TEMP;
            TilesY = TilesY32TEMP;
            TileSet0 = TileSetTEMP;
            TileSet1 = TileSetTEMP;
            ENorth = ENorthTEMP;
            ESouth = ESouthTEMP;
            EWest = EWestTEMP;
            EEast = EEastTEMP;
            ENorthOff = ENorthOffTEMP;
            ESouthOff = ESouthOffTEMP;
            EWestOff = EWestOffTEMP;
            EEastOff = EEastOffTEMP;
            i = 0;
            while (i <= TilesX) {
                int j = 0;
                while (j <= TilesY) {
                    level[i][j] = 0;
                    j++;
                }
                i++;

                map.update(sf::Vector2u(16, 16), level, TilesX, TilesY);
            }
            std::cout << "\nMap Created " << "'" << DLM << "'" << "!";
        }
    }
    if (event.key.code == sf::Keyboard::R) {
        //map.load(TileSet0, sf::Vector2u(16, 16), level, TilesX, TilesY);
        std::cout << "\nTileMaps Reloaded!";
    }
    if (event.key.code == sf::Keyboard::PageUp) { BrushSize++; }
    if (event.key.code == sf::Keyboard::PageDown) { BrushSize--; }
}