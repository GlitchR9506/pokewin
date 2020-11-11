void loadINI() {
	std::filebuf fb;
	fb.open("config.ini", std::ios::in);
	std::istream is(&fb);

	ini::IniFile configIni;
	configIni.decode(is);

	std::string BBT_TTF = configIni["Fnt"]["BBT_TTF"].as<std::string>();

	std::string Theme = configIni["Str"]["Theme"].as<std::string>();
	std::string VerName = configIni["Str"]["Ver"].as<std::string>();
	std::string Ver = configIni["Str"]["VerName"].as<std::string>();
	std::string WindowTitle = configIni["Str"]["WindowTitle"].as<std::string>();
	std::string Level = configIni["Str"]["Level"].as<std::string>();

	std::string Ship1 = Theme + configIni["Btn"]["Ship1"].as<std::string>();
	std::string Title = Theme + configIni["Btn"]["Title"].as<std::string>();
	std::string DD = Theme + configIni["Btn"]["DD"].as<std::string>();
	std::string DDSel = Theme + configIni["Btn"]["DDSel"].as<std::string>();

	std::string SongTitle = Theme + configIni["Sfx"]["SongTitle"].as<std::string>();
	std::string ClickTitle = Theme + configIni["Sfx"]["ClickTitle"].as<std::string>();
}
void loadRGBY_GF() {
}
void loadRGBY_PRET() {
}
void loadRSE_GF() {
}
void loadRSE_PRET() {
}