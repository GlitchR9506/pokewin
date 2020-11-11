
//SFML Variables

static sf::View view(sf::FloatRect(0.f, 0.f, 1152.f, 672.f));
static sf::View gui(sf::FloatRect(0.f, 0.f, 1152.f, 672.f));

static std::string theme = "data/themes/PKWIN";
static std::string backgroundPNG = theme + "/BG.png";

static TileMap2 map;

//Editor Varaibles
static int TileType = 0;
static bool typing = false;
static int i;
static int BrushSize = 0;
static bool focus = true;
static std::string TileSet = "data/tileset.png";
static std::string DLM = "mapdata/Hello.DLM";
static std::string ENorth = "mapdata/Blank.DLM";
static std::string ESouth = "mapdata/Blank.DLM";
static std::string EWest = "mapdata/Blank.DLM";
static std::string EEast = "mapdata/Blank.DLM";
static std::string MapName = "Hello";
static int ENorthOff = 0;
static int ESouthOff = 0;
static int EWestOff = 0;
static int EEastOff = 0;
static std::string Encounters = "encounters/Blank.DEM";
static std::string Events = "events/Blank.DVM";


//Posistion Stuffs

static int TilesX = 36;
static int TilesY = 23;

static int xml;
static int x;
static int x8;
static int xoff = 0;
static int yml;
static int y;
static int y8;
static int yoff = 0;

static int viewX = 0;
static int viewY = 0;
