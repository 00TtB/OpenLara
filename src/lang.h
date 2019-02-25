#ifndef H_LANG
#define H_LANG

/*** ACHTUNG! THIS FILE MUST BE ANSI! ***/

// Thanks:
// SuiKaze Raider    - Base
// Zellphie          - French
// Oktopaps          - German
// Nickelony         - Polish
// Dustie            - Polish
// RaymanTheHedgehog - Spanish
// ElikaStudio       - Russian

enum StringID {
      STR_EMPTY
// common
    , STR_LOADING
    , STR_HELP_PRESS
    , STR_HELP_TEXT
    , STR_LEVEL_STATS
    , STR_HINT_SAVING
    , STR_HINT_SAVING_DONE
    , STR_HINT_SAVING_ERROR
    , STR_YES
    , STR_NO
    , STR_OFF
    , STR_ON
    , STR_SPLIT
    , STR_VR
    , STR_QUALITY_LOW
    , STR_QUALITY_MEDIUM
    , STR_QUALITY_HIGH
    , STR_LANG_EN
    , STR_LANG_FR
    , STR_LANG_DE
    , STR_LANG_ES
    , STR_LANG_IT
    , STR_LANG_PL
    , STR_LANG_PT
    , STR_LANG_RU
    , STR_LANG_JA
    , STR_APPLY
    , STR_GAMEPAD_1
    , STR_GAMEPAD_2
    , STR_GAMEPAD_3
    , STR_GAMEPAD_4
    , STR_NOT_READY
    , STR_PLAYER_1
    , STR_PLAYER_2
    , STR_PRESS_ANY_KEY
    , STR_HELP_SELECT
    , STR_HELP_BACK
// inventory pages
    , STR_OPTION
    , STR_INVENTORY
    , STR_ITEMS
// save game page
    , STR_SAVEGAME
    , STR_CURRENT_POSITION
// inventory option
    , STR_GAME
    , STR_MAP
    , STR_COMPASS
    , STR_STOPWATCH
    , STR_HOME
    , STR_DETAIL
    , STR_SOUND
    , STR_CONTROLS
    , STR_GAMMA
// passport menu
    , STR_LOAD_GAME
    , STR_START_GAME
    , STR_RESTART_LEVEL
    , STR_EXIT_TO_TITLE
    , STR_EXIT_GAME
    , STR_SELECT_LEVEL
// detail options
    , STR_SELECT_DETAIL
    , STR_OPT_DETAIL_FILTER
    , STR_OPT_DETAIL_LIGHTING
    , STR_OPT_DETAIL_SHADOWS
    , STR_OPT_DETAIL_WATER
    , STR_OPT_DETAIL_VSYNC
    , STR_OPT_DETAIL_STEREO
    , STR_OPT_SIMPLE_ITEMS
// sound options
    , STR_SET_VOLUMES
    , STR_REVERBERATION
    , STR_OPT_SUBTITLES
    , STR_OPT_LANGUAGE
// controls options
    , STR_SET_CONTROLS
    , STR_OPT_CONTROLS_KEYBOARD
    , STR_OPT_CONTROLS_GAMEPAD
    , STR_OPT_CONTROLS_VIBRATION
    , STR_OPT_CONTROLS_RETARGET
    , STR_OPT_CONTROLS_MULTIAIM
    // controls
    , STR_CTRL_FIRST
    , STR_CTRL_LAST = STR_CTRL_FIRST + cMAX - 1
    // keys
    , STR_KEY_FIRST
    , STR_KEY_LAST  = STR_KEY_FIRST + ikZ
    // gamepad
    , STR_JOY_FIRST
    , STR_JOY_LAST  = STR_JOY_FIRST + jkMAX - 1
// inventory items
    , STR_UNKNOWN
    , STR_EXPLOSIVE
    , STR_PISTOLS
    , STR_SHOTGUN
    , STR_MAGNUMS
    , STR_UZIS
    , STR_AMMO_PISTOLS
    , STR_AMMO_SHOTGUN
    , STR_AMMO_MAGNUMS
    , STR_AMMO_UZIS
    , STR_MEDI_SMALL
    , STR_MEDI_BIG
    , STR_LEAD_BAR
    , STR_SCION
// keys
    , STR_KEY
    , STR_KEY_SILVER
    , STR_KEY_RUSTY
    , STR_KEY_GOLD
    , STR_KEY_SAPPHIRE
    , STR_KEY_NEPTUNE
    , STR_KEY_ATLAS
    , STR_KEY_DAMOCLES
    , STR_KEY_THOR
    , STR_KEY_ORNATE
// puzzles
    , STR_PUZZLE
    , STR_PUZZLE_GOLD_IDOL
    , STR_PUZZLE_GOLD_BAR
    , STR_PUZZLE_COG
    , STR_PUZZLE_FUSE
    , STR_PUZZLE_ANKH
    , STR_PUZZLE_HORUS
    , STR_PUZZLE_ANUBIS
    , STR_PUZZLE_SCARAB
    , STR_PUZZLE_PYRAMID
// TR1 subtitles
    , STR_TR1_SUB_22 // CUT4
    , STR_TR1_SUB_23 // CUT1
    , STR_TR1_SUB_24
    , STR_TR1_SUB_25 // CUT3
    , STR_TR1_SUB_26
    , STR_TR1_SUB_27
    , STR_TR1_SUB_28
    , STR_TR1_SUB_29
    , STR_TR1_SUB_30
    , STR_TR1_SUB_31
    , STR_TR1_SUB_32
    , STR_TR1_SUB_33
    , STR_TR1_SUB_34
    , STR_TR1_SUB_35
    , STR_TR1_SUB_36
    , STR_TR1_SUB_37
    , STR_TR1_SUB_38
    , STR_TR1_SUB_39
    , STR_TR1_SUB_40
    , STR_TR1_SUB_41
    , STR_TR1_SUB_42
    , STR_TR1_SUB_43
    , STR_TR1_SUB_44
    , STR_TR1_SUB_45
    , STR_TR1_SUB_46
    , STR_TR1_SUB_47
    , STR_TR1_SUB_48
    , STR_TR1_SUB_49
    , STR_TR1_SUB_50
    , STR_TR1_SUB_51
    , STR_TR1_SUB_52
    , STR_TR1_SUB_53
    , STR_TR1_SUB_54
    , STR_TR1_SUB_55
    , STR_TR1_SUB_56
// TR1 levels
    , STR_TR1_GYM
    , STR_TR1_LEVEL1
    , STR_TR1_LEVEL2
    , STR_TR1_LEVEL3A
    , STR_TR1_LEVEL3B
    , STR_TR1_LEVEL4
    , STR_TR1_LEVEL5
    , STR_TR1_LEVEL6
    , STR_TR1_LEVEL7A
    , STR_TR1_LEVEL7B
    , STR_TR1_LEVEL8A
    , STR_TR1_LEVEL8B
    , STR_TR1_LEVEL8C
    , STR_TR1_LEVEL10A
    , STR_TR1_LEVEL10B
    , STR_TR1_LEVEL10C
    , STR_TR1_EGYPT
    , STR_TR1_CAT
    , STR_TR1_END
    , STR_TR1_END2
// TR2 levels
    , STR_TR2_ASSAULT
    , STR_TR2_WALL
    , STR_TR2_BOAT
    , STR_TR2_VENICE
    , STR_TR2_OPERA
    , STR_TR2_RIG
    , STR_TR2_PLATFORM
    , STR_TR2_UNWATER
    , STR_TR2_KEEL
    , STR_TR2_LIVING
    , STR_TR2_DECK
    , STR_TR2_SKIDOO
    , STR_TR2_MONASTRY
    , STR_TR2_CATACOMB
    , STR_TR2_ICECAVE
    , STR_TR2_EMPRTOMB
    , STR_TR2_FLOATING
    , STR_TR2_XIAN
    , STR_TR2_HOUSE
// TR3 levels
    , STR_TR3_HOUSE
    , STR_TR3_JUNGLE
    , STR_TR3_TEMPLE
    , STR_TR3_QUADCHAS
    , STR_TR3_TONYBOSS
    , STR_TR3_SHORE
    , STR_TR3_CRASH
    , STR_TR3_RAPIDS
    , STR_TR3_TRIBOSS
    , STR_TR3_ROOFS
    , STR_TR3_SEWER
    , STR_TR3_TOWER
    , STR_TR3_OFFICE
    , STR_TR3_NEVADA
    , STR_TR3_COMPOUND
    , STR_TR3_AREA51
    , STR_TR3_ANTARC
    , STR_TR3_MINES
    , STR_TR3_CITY
    , STR_TR3_CHAMBER
    , STR_TR3_STPAUL

    , STR_MAX
};

#define STR_LANGUAGES \
      "English"       \
    , "Fran|cais"     \
    , "Deutsch"       \
    , "Espa(~nol"     \
    , "Italiano"      \
    , "Polski"        \
    , "Portugu)es"    \
    , "������{�"      \
    , "Japanese"      \

#define LANG_PREFIXES "_EN", "_FR", "_DE", "_ES", "_IT", "_PL", "_PT", "_RU", "_JA"

const char *helpText = 
    "Start - add second player or restore Lara@"
    "H - Show or hide this help@"
    "ALT + ENTER - Fullscreen@"
    "5 - Save Game@"
    "9 - Load Game@"
    "C - Look@"
    "R - Slow motion@"
    "T - Fast motion@"
    "Roll - Up + Down@"
    "Step Left - Walk + Left@"
    "Step Right - Walk + Right@"
    "Out of water - Up + Action@"
    "Handstand - Up + Walk@"
    "Swan dive - Up + Walk + Jump@"
    "First Person View - Look + Action@"
    "DOZY on - Look + Duck + Action + Jump@"
    "DOZY off - Walk";

const char *STR_EN[] = { ""
// help
    , "Loading..."
    , "Press H for help"
    , helpText
    , "%s@@@"
      "KILLS %d@@"
      "PICKUPS %d@@"
      "SECRETS %d of %d@@"
      "TIME TAKEN %s"
    , "Saving game..."
    , "Saving done!"
    , "SAVING ERROR!"
    , "YES"
    , "NO"
    , "Off"
    , "On"
    , "Split Screen"
    , "VR"
    , "Low"
    , "Medium"
    , "High"
    , STR_LANGUAGES
    , "Apply"
    , "Gamepad 1"
    , "Gamepad 2"
    , "Gamepad 3"
    , "Gamepad 4"
    , "Not Ready"
    , "Player 1"
    , "Player 2"
    , "Press Any Key"
    , "%s - Select"
    , "%s - Go Back"
// inventory pages
    , "OPTIONS"
    , "INVENTORY"
    , "ITEMS"
// save game page
    , "Save Game?"
    , "Current Position"
// inventory option
    , "Game"
    , "Map"
    , "Compass"
    , "Statistics"
    , "Lara's Home"
    , "Detail Levels"
    , "Sound"
    , "Controls"
    , "Gamma"
// passport menu
    , "Load Game"
    , "New Game"
    , "Restart Level"
    , "Exit to Title"
    , "Exit Game"
    , "Select Level"
// detail options
    , "Select Detail"
    , "Filtering"
    , "Lighting"
    , "Shadows"
    , "Water"
    , "VSync"
    , "Stereo"
    , "Simple Items"
// sound options
    , "Set Volumes"
    , "Reverberation"
    , "Subtitles"
    , "Language"
// controls options
    , "Set Controls"
    , "Keyboard"
    , "Gamepad"
    , "Vibration"
    , "Retargeting"
    , "Multi-aiming"
    // controls
    , "Left", "Right", "Run", "Back", "Jump", "Walk", "Action", "Draw Weapon", "Look", "Duck", "Dash", "Roll", "Inventory", "Start"
    // keys
    , "NONE", "LEFT", "RIGHT", "UP", "DOWN", "SPACE", "TAB", "ENTER", "ESCAPE", "SHIFT", "CTRL", "ALT"
    , "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"
    , "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M"
    , "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"
    // gamepad
    , "NONE", "A", "B", "X", "Y", "L BUMPER", "R BUMPER", "SELECT", "START", "L STICK", "R STICK", "L TRIGGER", "R TRIGGER", "D-LEFT", "D-RIGHT", "D-UP", "D-DOWN"
// inventory items
    , "Unknown"
    , "Explosive"
    , "Pistols"
    , "Shotgun"
    , "Magnums"
    , "Uzis"
    , "Pistol Clips"
    , "Shotgun Shells"
    , "Magnum Clips"
    , "Uzi Clips"
    , "Small Medi Pack"
    , "Large Medi Pack"
    , "Lead Bar"
    , "Scion"
// keys
    , "Key"
    , "Silver Key"
    , "Rusty Key"
    , "Gold Key"
    , "Sapphire Key"
    , "Neptune Key"
    , "Atlas Key"
    , "Damocles Key"
    , "Thor Key"
    , "Ornate Key"
// puzzles
    , "Puzzle"
    , "Gold Idol"
    , "Gold Bar"
    , "Machine Cog"
    , "Fuse"
    , "Ankh"
    , "Eye of Horus"
    , "Seal of Anubis"
    , "Scarab"
    , "Pyramid Key"
// TR1 subtitles
/* 22 */ ,
    "[04000]Back again?"
    "[05500]And you - for a grand re-opening I assume."
    "[09500]Evolution's in a rut - natural selection at an all time low..."
    "[13500]shipping out fresh meat will incite territorial rages again"
    "[17500] - will strengthen and advance us..."
    "[20500]Even create new breeds."
    "[22500]Kind of like evolution on steroids then."
    "[24500]A kick in the pants...@those runts Qualopec and Tihocan had no idea"
    "[29500] - the cataclysm of Atlantis struck a race of langouring wimps..."
    "[33500]plummeted them to the very basics of survival again..."
    "[37000]It shouldn't happen like that."
    "[39000]Or like this."
    "[40000]Hatching commences in 20 seconds."
    "[43000]Too late for abortions now!"
    "[45000]Not without the heart of the operation!"
    "[47000]Noooo!"
    "[50000]TEN"
    "[54000]FIVE..."
    "[55500]4...3...2..."
    "[60000]ONE..."
/* 23 */ ,
    "[00001]Well, you have my total attention now"
    "[02500]I'm not quite sure if I've got yours though"
    "[05000]hello?"
    "[06000]I'll heel an' hide ye to a barn door yit"
    "[09000]Of course"
    "[10000]Ye and that drivelin' piece of the Scion."
    "[13000]Ye want to keep it so bad, I'll harness it right up y..."
    "[17000]Wait... we're talking about the artifact here?"
    "[20000]Damn straight we are ... right up y ..."
    "[22000]Hold on - I'm sorry"
    "[24000]this piece you say - where's the rest?"
    "[26500]Ms Natla put Pierre Dupont on that trail."
    "[29500]And where is that?"
    "[30500]Hah. Ye ain't fast enough fer him."
    "[34000]So you think all this talking is just holding me up?"
    "[37000]I don't know where his little jackrabbit-frog-legs are runnin' him to"
    "[42000]You'll have to ask Ms. Natla"
    "[46000]"
    "[51000]Thank you. I will."
/* 24 */ , ""
/* 25 */ ,
    "[03500]Here lies Tihocan"
    "[05000]...one of the two just rulers of Atlantis..."
    "[10000]Who even after the curse of the continent..."
    "[13000]...had tried to keep rule here in these barren other-lands..."
    "[19000]He died without child and his knowledge has no heritage..."
    "[25500]Look over us kindly, Tihocan."
/* 26 */ , "Welcome to my home!@I'll take you on a guided tour."
/* 27 */ , "Use the directional buttons to go into the music room."
/* 28 */ , "OK. Let's do some tumbling.@Press the jump button."
/* 29 */ , "Now press it again and press one of@the directions and I'll jump that way."
/* 30 */ , "Ah, the main hall.@Sorry about the crates, I'm having some things put@ into storage and the delivery people haven't been yet."
/* 31 */ , "Run up to a crate, and while still pressing forwards@press action, and I'll vault up onto it."
/* 32 */ , "This used to be the ballroom, but I've converted it into my own personal gym.@What do you think?@Well, let's do some exercises."
/* 33 */ , "I don't actually run everywhere.@When I want to be careful, I walk.@Hold down the walk button, and walk to the white line."
/* 34 */ , "With the walk button down, I won't fall off even if you try to make me.@Go on, try it."
/* 35 */ , "If you want look around, press and hold the look button.@Then press in the direction you want to look."
/* 36 */ , "If a jump is too far for me, I can grab the ledge and save myself from a nasty fall.@Walk to the edge with the white line until I won't go any further.@Then press jump immediately followed by forwards then while @I'm in the air press and hold the action button."
/* 37 */ , "Press forward and I'll climb up."
/* 38 */ , "If I do a running jump, I can make a jump like that, no problem."
/* 39 */ , "Walk to the edge with the white line until I stop.@Then let go of walk and tap backwards to give me a run up.@Press forward, and almost immediately press and hold the jump button.@I won't actually jump until the last minute."
/* 40 */ , "Right. This is a really big one.@So do a running jump exactly as before except while I'm in the air@press and hold the action button to make me grab the ledge."
/* 41 */ , "Nice."
/* 42 */ , "Try to vault up here.@Press forwards and hold action."
/* 43 */ , "I can't climb up because the gap is too small.@But press right and I'll shimmy sideways@until there is room, then press forward."
/* 44 */ , "Great!@If there is a long drop and I don't want to@hurt myself jumping off I can let myself down carefully."
/* 45 */ , "Tap backwards, and I'll jump off backwards.@Immediately press and hold the action button,@and I'll grab the ledge on the way down."
/* 46 */ , "Then let go."
/* 47 */ , "Let's go for a swim."
/* 48 */ , "The jump button and the directions@move me around underwater."
/* 49 */ , "Ah! Air!@Just use forward and left and right@to manoeuvre around on the surface.@Press jump to dive down for another swim about.@Or go to the edge and press action to climb out."
/* 50 */ , "Right. Now I'd better take off these wet clothes."
/* 51 */ , "Say cheese!"
/* 52 */ , "Ain't nothin' personal."
/* 53 */ , "I still git a pain in my brain from ye.@An' it's tellin' me funny ideas now.@Like to shoot you to hell!"
/* 54 */ , "You can't bump off me and my brood so easy, Lara."
/* 55 */ , "A leetle late for the prize giving - non?@Still, it is the taking-part wheech counts."
/* 56 */ , "You firin' at me?@You firin' at me, huh?@Ain't nobody else, so you must be firin' at me!"
// TR1 levels
    , "Lara's Home"
    , "Caves"
    , "City of Vilcabamba"
    , "Lost Valley"
    , "Tomb of Qualopec"
    , "St. Francis' Folly"
    , "Colosseum"
    , "Palace Midas"
    , "The Cistern"
    , "Tomb of Tihocan"
    , "City of Khamoon"
    , "Obelisk of Khamoon"
    , "Sanctuary of the Scion"
    , "Natla's Mines"
    , "Atlantis"
    , "The Great Pyramid"
    , "Return to Egypt"
    , "Temple of the Cat"
    , "Atlantean Stronghold"
    , "The Hive"
// TR2 levels
    , "Lara's Home"
    , "The Great Wall"
    , "Venice"
    , "Bartoli's Hideout"
    , "Opera House"
    , "Offshore Rig"
    , "Diving Area"
    , "40 Fathoms"
    , "Wreck of the Maria Doria"
    , "Living Quarters"
    , "The Deck"
    , "Tibetan Foothills"
    , "Barkhang Monastery"
    , "Catacombs of the Talion"
    , "Ice Palace"
    , "Temple of Xian"
    , "Floating Islands"
    , "The Dragon's Lair"
    , "Home Sweet Home"
// TR3 levels
    , "Lara's House"
    , "Jungle"
    , "Temple Ruins"
    , "The River Ganges"
    , "Caves Of Kaliya"
    , "Coastal Village"
    , "Crash Site"
    , "Madubu Gorge"
    , "Temple Of Puna"
    , "Thames Wharf"
    , "Aldwych"
    , "Lud's Gate"
    , "City"
    , "Nevada Desert"
    , "High Security Compound"
    , "Area 51"
    , "Antarctica"
    , "RX-Tech Mines"
    , "Lost City Of Tinnos"
    , "Meteorite Cavern"
    , "All Hallows"
};

const char *STR_FR[] = { ""
// help
    , "Chargement..."
    , "Appuyez sur H pour afficher l'aide"
    , helpText
    , "%s@@@"
      "ENNEMIS TU)ES %d@@"
      "OBJETS TROUVES %d@@"
      "SECRETS %d / %d@@"
      "TEMPS %s"
    , "Sauvegarde..."
    , "Sauvegarde achev)ee!"
    , "SAUVER ERREUR!"
    , "OUI"
    , "NON"
    , "Arret"
    , "Marche"
    , ")Ecran Divis)e"
    , "VR"
    , "Bas"
    , "Moyen"
    , "Haut"
    , STR_LANGUAGES
    , "Appliquer"
    , "Gamepad 1"
    , "Gamepad 2"
    , "Gamepad 3"
    , "Gamepad 4"
    , "Not Ready"
    , "Joueur 1"
    , "Joueur 2"
    , "Appuyez sur une touche"
    , "%s - Choisir"
    , "%s - Retour"
// inventory pages
    , "OPTIONS"
    , "INVENTAIRE"
    , "OBJETS"
// save game page
    , "Sauver le jeu?"
    , "Charger Partie"
// inventory option
    , "Jeu"
    , "Carte"
    , "Boussole"
    , "Statistiques"
    , "Manoir de Lara"
    , "Niveau des D)etails"
    , "Sons"
    , "Controles"
    , "Gamma"
// passport menu
    , "Charger"
    , "Commencer"
    , "Rejouer Niveau"
    , "Sortie vers titre"
    , "Quitter"
    , "Choisir Niveau"
// detail options
    , "Niveau de D)etail"
    , "Filtration"
    , ")Eclairage"
    , "Ombres"
    , "Eau"
    , "VSync"
    , "St)er)eo"
    , "Objets Simples"
// sound options
    , "R)egler Volume"
    , "R)everb)eration"
    , "Sous-titres"
    , "Langue"
// controls options
    , "R)egler Controles"
    , "Clavier"
    , "Gamepad"
    , "Vibration"
    , "Reciblage"
    , "Multi-vis)ee"
    // controls
    , "Gauche", "Droite", "Courir", "Arri$ere", "Sauter", "Marcher", "Action", "D)egainer", "Regarder", "Duck", "Dash", "Roulade", "Inventaire", "Start"
    // keys
    , "NONE", "LEFT", "RIGHT", "UP", "DOWN", "SPACE", "TAB", "ENTER", "ESCAPE", "SHIFT", "CTRL", "ALT"
    , "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"
    , "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M"
    , "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"
    // gamepad
    , "NONE", "A", "B", "X", "Y", "L BUMPER", "R BUMPER", "SELECT", "START", "L STICK", "R STICK", "L TRIGGER", "R TRIGGER", "D-LEFT", "D-RIGHT", "D-UP", "D-DOWN"
// inventory items
    , "Inconnu"
    , "Explosif"
    , "Pistolets"
    , "Fusil $a pompe"
    , "Magnums"
    , "Uzis"
    , "Balles de pistolet"
    , "Cartouches de fusil"
    , "Balles de magnum"
    , "Balles d'uzi"
    , "Mini m)edikit"
    , "Grand m)edikit"
    , "Barre en plomb"
    , "Scion"
// keys
    , "Cl)e"
    , "Cl)e d'argent"
    , "Cl)e rouill)ee"
    , "Cl)e en or"
    , "Cl)e de saphir"
    , "Cl)e Neptune"
    , "Cl)e d'Atlas"
    , "Cl)e Damocl$es"
    , "Cl)e de Thor"
    , "Cl)e Ornement)ee"
// puzzles
    , "Puzzle"
    , "Idole d'or"
    , "Lingot d'or"
    , "Engrenage"
    , "Fusible"
    , "Ankh"
    , "Oeil d'Horus"
    , "Sceau d'Anubis"
    , "Scarab)ee"
    , "Cl)e pyramide"
// TR1 subtitles
/* 22 */ ,
    "[04000]Vous revoil$a?"
    "[05500]Comme vous, pour la grand r)e-ouverture je pr)esume."
    "[09000]L')evolution s'enlise, la s)el)ection naturelle est plus lente que jamais"
    "[13500]cette chair bien fra(iche r)eveillera les haines ancestrales et cruelles, "
    "[17500]nous donnant force et conviction"
    "[20500]et m(eme de nouvelles races."
    "[22500]Une )evolution gr(ace aux st)ero~ides, en fait."
    "[24500]Un bon coup de fouet. Ces idiots de Qualopec et Tihocan sont des ignares."
    "[29500]Le cataclysme de l'Atlantide a engendr)e une race de mauviettes,"
    "[33500]les ramenant au stade primitif de la simple survie."
    "[37000]|ca n'aurait jamais d(u arriver."
    "[39000]Moi, j'arrive."
    "[40000]L')eclosion commence dans 15 secondes."
    "[43000]Trop tard pour un avortemen!"
    "[45000]Pas sans le coeur de l'op)eration!"
    "[47000]Noooon!"
    "[49500]10..."
    "[54000]5..."
    "[55000]4...3...2..."
    "[60000]1..."
/* 23 */ ,
    "[00001]Bon, vous avez mon attention maintenant,"
    "[02000]mais je ne sais pas si j'ai la v(otre."
    "[05000]Allez!"
    "[06000]Je vais vous en faire bouffer de l'avoine, moi."
    "[09000]Mais oui..."
    "[10000]Vous, et ce satan)e morceau de Scion."
    "[13000]Si vous y tenez tant que |ca, je vais vous l'coller dans le.."
    "[17000]Attendez. Vous parlez de l'artefact, l$a?"
    "[19500]Un peu, mon n'veu! J'vais vous le..."
    "[22000]Oh l$a! Du calme!"
    "[24000]Un morceau, vous disiez. O$u est le reste?"
    "[26500]Miss Natla a mis Pierre DuPont sur l'affaire."
    "[29500]A quel endroit?"
    "[30500]Ha! Vous n'(etes pas assez rapide pour lui!"
    "[33500]Donc je perds du temps $a discuter avec vous ici?"
    "[37000]Moi je ne sais pas du tout o$u il court,@avec ses petites pattes de pied tendre."
    "[42000]Allez demander $a Miss Natla."
    "[46000]"
    "[50500]Merci! Je vais..."
/* 24 */ , ""
/* 25 */ ,
    "[03500]Ci-g(it Tihocan..."
    "[05500]... un des deux souverains justes de l'Atlantide..."
    "[10000]qui m(eme apr$es le malheur de ce continent..."
    "[13000]... tent$erent de r)egner encore sur ces terres d)esol)ees."
    "[19000]Mort sans un h)eritier, son savoir n'a point d'h)eritage."
    "[25500]Veillez sur nous, Tihocan."
/* 26 */ , "Bienvenue chez moi! je vais vous faire visiter."
/* 27 */ , "Utilisez les touches fl)ech)ees pour@aller dans le salon de musique."
/* 28 */ , "OK. On va bouger un peu.@Appuyez sur la touche de saut."
/* 29 */ , "Recommencez en appuyant sur une touche fl)ech)ee@et je sauterai dans cette direction."
/* 30 */ , "Oh! Voici le grand hall!@Excusez le d)esordre, mais je veux tout envoyer au garde-meuble@mais les d)em)enageurs ne sont toujours pas arriv)es."
/* 31 */ , "Courez vers une caisse et appuyez@en m(eme temps sur la touche fl)ech)ee haut et la touche d'action@je sauterai dessus."
/* 32 */ , "C')etait autrefois la salle de bal,@mais je l'ai transform)ee en salle de gym personnelle.@C'est chouette, non?@Allez, un peu d'exercice."
/* 33 */ , "Je ne cours pas sans arr(et dans ce jeu en fait.@Quand je dois (etre prudente, je peux aussi marcher.@Appuyez sur la touche de marche et avancez@jusqu'$a la ligne blanche."
/* 34 */ , "Si vous appuyez encore sur la touche de marche,@je ne tomberai pas, m(eme si vous insistez.@Allez-y, essayez!"
/* 35 */ , "Si vous voulez examiner les environs,@appuyez sur la touche qui vous permet de voir.@Puis sur une touche de direction."
/* 36 */ , "Si je ne peux pas sauter assez loin, je peux toujours me rattraper@de justesse pour ne pas tomber. Avancez vers la ligne blanche@jusqu'$a ce que je m'arr(ete de moi-m(eme,@ensuite appuyez sur la touche de saut et tout de suite apr$es@sur la touche fl)ech)ee haut, et maintenez la touche d'action enfonc)ee pendant que je saute."
/* 37 */ , "Appuyez sur la touche fl)ech)ee haut pour me faire grimper."
/* 38 */ , "Si je prends de l')elan, je peux sauter |ca sans probl$eme!"
/* 39 */ , "Avancez jusqu'$a la ligne blanche, jusqu'$a ce que je m'arr(ete,@et appuyez sur la touche de marche puis sur la touche fl)ech)ee bas pour que je prenne de l')elan.@Appuyez ensuite sur la touche fl)ech)ee haut et sur la touche de saut tout de suite apr$es.@Mais en fait, je ne sauterai qu'au dernier moment, je ne suis pas folle!"
/* 40 */ , "L$a, c'est plus difficile.@Nous allons refaire exactement le m(eme saut, mais@vous maintiendrez la touche d'action enfonc)ee@pour que je me rattrape en catastrophe@Quand je serai en l'air."
/* 41 */ , "Bien jou)e!"
/* 42 */ , "Nous allons essayer de sauter ici.@Appuyez sur la touche fl)ech)ee haut puis sur la touche d'action sans la rel(acher."
/* 43 */ , "Je n'ai pas la place de grimper i|ci, mais si vous appuyez sur la touche@fl)ech)ee droite je longerai la corniche pour trouver un passage@ et vous n'aurez plus qu'$a appuyer sur la touche fl)ech)ee haut $a ce moment l$a."
/* 44 */ , "Super!@Si je me retrouve trop haut je peux me laisser@glisser doucement, pour )eviter de me blesser en sautant."
/* 45 */ , "Appuyez sur la touche fl)ech)ee bas pour que je me laisse tomber@ensuite si vous gardez la touche d'action enfonc)ee@je me rattraperai dans ma chute."
/* 46 */ , "Ensuite laissez aller."
/* 47 */ , "Et maintenant un bon bain!"
/* 48 */ , "La touche de saut et les touches de direction@me permettent d')evoluer sous l'eau."
/* 49 */ , "Oh! Ah! De l'air!@Utilisez les touches fl)ech)ees avant, gauche et droite pour me faire nager en surface.@Appuyez sur la touche de saut pour me faire plonger et nager sous l'eau.@Pour me faire sortir, dirigez-vous vers le bord et appuyez sur la touche d'action."
/* 50 */ , "Super. Bon je ferais mieux d'enlever ces v(etements mouill)es."
/* 51 */ , "Un petit sourire!"
/* 52 */ , "Ca n'a rien de personel."
/* 53 */ , "J'ai encore mal au cr(ane $a cause de toi. Et j'entends des petites voix dans ma t(ete.@Elles me disent de te tuer!"
/* 54 */ , "Vous n'allez pas m')eliminer pas avec ma race aussi facilement Lara!"
/* 55 */ , "Un peu tard pour la remise des prix non?@Ah... L'essentiel, c'est de participer? mais me voici maintenant devant un horrible dilemme!@C'est bien dommage, mais c'est la vie."
/* 56 */ , "C'EST SUR MOI QUE TU TIRES?! C'EST SUR MOI QUE TU TIRES?! @BAH OUI Y'A PERSONNE! @C'EST SUR MOI QUE TU TIRES!!"
// TR1 levels
    , "Manoir de Lara"
    , "Cavernes"
    , "Cit)ee de Vilcabamba"
    , "Vall)ee Perdue"
    , "Tombe de Qualopec"
    , "Monument St. Francis"
    , "Colosseum"
    , "Palais de Midas"
    , "La Citerne"
    , "Tombe de Tihocan"
    , "Cit)ee de Khamoon"
    , "Ob)elisque de Khamoon"
    , "Sanctuaire du Scion"
    , "Mines de Natla"
    , "Atlantide"
    , "La Grande Pyramide"
    , "Retour en Egypte"
    , "Temple du Chat"
    , "La Forteresse Atlantique"
    , "La Ruche"
// TR2 levels
    , "Lara's Home"
    , "The Great Wall"
    , "Venice"
    , "Bartoli's Hideout"
    , "Opera House"
    , "Offshore Rig"
    , "Diving Area"
    , "40 Fathoms"
    , "Wreck of the Maria Doria"
    , "Living Quarters"
    , "The Deck"
    , "Tibetan Foothills"
    , "Barkhang Monastery"
    , "Catacombs of the Talion"
    , "Ice Palace"
    , "Temple of Xian"
    , "Floating Islands"
    , "The Dragon's Lair"
    , "Home Sweet Home"
// TR3 levels
    , "Lara's House"
    , "Jungle"
    , "Temple Ruins"
    , "The River Ganges"
    , "Caves Of Kaliya"
    , "Coastal Village"
    , "Crash Site"
    , "Madubu Gorge"
    , "Temple Of Puna"
    , "Thames Wharf"
    , "Aldwych"
    , "Lud's Gate"
    , "City"
    , "Nevada Desert"
    , "High Security Compound"
    , "Area 51"
    , "Antarctica"
    , "RX-Tech Mines"
    , "Lost City Of Tinnos"
    , "Meteorite Cavern"
    , "All Hallows"
};

const char *STR_DE[] = { ""
// help
    , "Wird geladen..."
    , "H dr~ucken f~ur Hilfe"
    , helpText
    , "%s@@@"
      "Besiegte Gegner %d@@"
      "Gegenst~ande %d@@"
      "Geheimnisse %d von %d@@"
      "Ben~otigte Zeit %s"
    , "Spiel wird gespeichert..."
    , "Spielstand gespeichert!"
    , "FEHLER beim Speichern!"
    , "JA"
    , "NEIN"
    , "Aus"
    , "An"
    , "Geteilter Bildschirm"
    , "VR"
    , "Niedrig"
    , "Mittel"
    , "Hoch"
    , STR_LANGUAGES
    , "Anwenden"
    , "Gamepad 1"
    , "Gamepad 2"
    , "Gamepad 3"
    , "Gamepad 4"
    , "Nicht bereit"
    , "Spieler 1"
    , "Spieler 2"
    , "Beliebige Taste dr~ucken"
    , "%s - W~ahlen"
    , "%s - Zur~uck"
// inventory pages
    , "OPTIONEN"
    , "INVENTAR"
    , "GEGENST~ANDE"
// save game page
    , "Spiel speichern?"
    , "Aktuelle Position"
// inventory option
    , "Spiel"
    , "Karte"
    , "Kompass"
    , "Statistiken"
    , "Laras Haus"
    , "Grafik"
    , "Ton"
    , "Steuerung"
    , "Gamma"
// passport menu
    , "Spiel laden"
    , "Spiel starten"
    , "Level neu starten"
    , "Zur~uck zum Hauptmen~u"
    , "Spiel beenden"
    , "Level w~ahlen"
// detail options
    , "Grafikeinstellungen"
    , "Filterung"
    , "Beleuchtung"
    , "Schatten"
    , "Wasser"
    , "VSync"
    , "Stereo"
    , "Simple Items"
// sound options
    , "Lautst~arke einstellen"
    , "Nachhall"
    , "Untertitel"
    , "Sprache"
// controls options
    , "Steuerung anpassen"
    , "Tastatur"
    , "Gamepad"
    , "Vibration"
    , "Retargeting"
    , "Multi-aiming"
    // controls
    , "Links", "Rechts", "Vorw~arts", "R~uckw~arts", "Springen", "Gehen", "Handlung", "Waffe ziehen", "Umsehen", "Ducken", "Sprinten", "Rolle", "Inventar", "Start"
    // keys
    , "NONE", "LEFT", "RIGHT", "UP", "DOWN", "SPACE", "TAB", "ENTER", "ESCAPE", "SHIFT", "CTRL", "ALT"
    , "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"
    , "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M"
    , "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"
    // gamepad
    , "NONE", "A", "B", "X", "Y", "L BUMPER", "R BUMPER", "SELECT", "START", "L STICK", "R STICK", "L TRIGGER", "R TRIGGER", "D-LEFT", "D-RIGHT", "D-UP", "D-DOWN"
// inventory items
    , "Unbekannt"
    , "Sprengstoff"
    , "Pistolen"
    , "Schrotflinte"
    , "Magnums"
    , "Uzis"
    , "Pistolen-Munition"
    , "Schrot-Munition"
    , "Magnum-Munition"
    , "Uzi-Ladestreifen"
    , "Kleines Medipack"
    , "Gro=es Medipack"
    , "Bleibarren"
    , "Scion"
// keys
    , "Schl~ussel"
    , "Silberner Schl~ussel"
    , "Rostiger Schl~ussel"
    , "Goldener Schl~ussel"
    , "Saphir-Schl~ussel"
    , "Schl~ussel des Neptun"
    , "Schl~ussel des Atlas"
    , "Schl~ussel des Damokles"
    , "Schl~ussel des Thor"
    , "Der antike Schl~ussel"
// puzzles
    , "R~atsel"
    , "Goldener G~otze"
    , "Goldbarren"
    , "Zahnrad"
    , "Sicherung"
    , "Ankh-Kreuz"
    , "Auge des Horus"
    , "Siegel des Anubis"
    , "Skarab~aus"
    , "Schl~ussel der Pyramide"
// TR1 subtitles
    /* 22 */ ,
    "[04000]Na, wieder da?"
    "[05500]Sie auch. Zur feierlichen Wiederer~offnung, nehme ich an."
    "[09000]Die Evolution steckt in der Sackgasse.@Kaum noch nat~urliche Auslese."
    "[13500]Die Ausbreitung neuer, frischer Wesen@wird neue Gebietsk~ampfe anregen,"
    "[18500]uns st~arken und voranbringen,"
    "[20500]sogar neue Rassen erschaffen."
    "[22500]Eine Art gedopte Evolution also."
    "[24500]Ja, ein Tritt in den Hintern. Die albernen Wichte@Qualopec und Tihocan haben ja keine Ahnung."
    "[29500]Der Untergang von Atlantis hat eine Rasse@tr~ager Schw~achlinge getroffen"
    "[33500]und sie zu den Urspr~ungen des ~Uberlebens zur~uckgeworfen."
    "[36000]Dies ist, was die Welt braucht."
    "[38500]Nicht auf diese Art."
    "[40000]Ausschl~upfen beginnt in 15 Sekunden."
    "[43000]Zu sp~at f~ur eine Abtreibung!"
    "[45000]Nicht ohne das Herz der Operation!"
    "[47000]Nein!"
    "[49500]10..."
    "[53500]5..."
    "[55000]"
    /* 23 */ ,
    "[00001]Tja, jetzt haben Sie meine volle Aufmerksamkeit,"
    "[02500]aber ob ich auch Ihre habe?"
    "[05000]Hallo?"
    "[06000]Wart's ab. Wenn ich dich in die Finger kriege."
    "[09000]Nat~urlich."
    "[10000]Du und das d~amliche St~uck vom Scion."
    "[13000]Wenn du's unbedingt behalten willst,@stopf ich's dir in deinen verdammten..."
    "[17000]Moment. Sprechen wir gerade ~uber das Artefakt?"
    "[20000]Darauf kannst du Gift nehmen."
    "[22000]Moment. Tut mir leid."
    "[24000]Sie sagten St~uck. Wo ist dann der Rest?"
    "[26500]Miss Natla hat Pierre Dupont darauf angesetzt."
    "[29500]Und wo sucht er danach?"
    "[30500]Ha! Den erwischst du nie!"
    "[34000]Sie meinen also, das Gerede hier h~alt mich nur auf?"
    "[37000]~Ah, keine Ahnung, wo seine krummen@Ganovenbeine ihn hingebracht haben."
    "[42000]Da muss... m~ussen Sie Miss Natla fragen."
    "[46000]"
    "[51000]Danke! Das werde ich tun."
    /* 24 */ , ""
    /* 25 */ ,
    "[03500]Hier ruht Tihocan,"
    "[06000]einer der zwei gerechten Herrscher von Atlantis,"
    "[10000]die selbst nach der Heimsuchung des Erdteils"
    "[13000]trachteten, in diesem kargen, fremden Land gut zu regieren."
    "[18000]Er starb ohne Kind und sein Wissen wurde nicht weitergegeben."
    "[25500]Sei gn~adig mit uns, Tihocan."
/* 26 */ , "Willkommen bei mir daheim!@Lass uns einen kleinen Rundgang machen."
/* 27 */ , "Benutz das Steuerkreuz, um ins Musikzimmer zu gehen."
/* 28 */ , "OK, dann lass uns ein bisschen herumtoben!@Dr~uck die Sprungtaste."
/* 29 */ , "Jetzt dr~uck sie noch mal und dann schnell eine der@Richtungstasten, dann springe ich in diese Richtung."
/* 30 */ , "Ah, die gro=e Halle. Tut mir leid wegen der Kisten.@Ich habe ein paar Sachen eingelagert und wei= nicht, wohin damit."
/* 31 */ , "Lauf auf eine Kiste zu und w~ahrend du das Steuerkreuz hochgedr~uckt@h~altst, dr~uck die Handlungstaste. Dann kletter ich rauf."
/* 32 */ , "Das war mal der Ballsaal, aber ich benutze ihn als Turnhalle.@Wie gef~allt sie dir? Dann lass uns mal ein paar Lockerungs~ubungen machen."
/* 33 */ , "Ich laufe nat~urlich nicht ~uberall hin. Wenn ich besonders@vorsichtig sein m~ochte, gehe ich. Halt die Geh-Taste@gedr~uckt und beweg mich zum wei=en Strich."
/* 34 */ , "W~ahrend du die Geh-Taste gedr~uckt h~altst, kann ich nicht herunterfallen,@selbst wenn du versuchst, mich ~uber die Kante zu f~uhren. Probier es aus!"
/* 35 */ , "Wenn du dich umsehen willst, halt die Seh-Taste gedr~uckt@und dr~uck das Steuerkreuz in die gew~unschte Blickrichtung."
/* 36 */ , "Wenn ein Sprung zu weit f~ur mich ist, kann ich mich an der Kante@festklammern, damit ich nicht herunterfalle. Geh zur Kante mit dem@wei=en Strich bis ich stehen bleibe. Dr~uck dann die Sprungtaste@und gleich danach das Steuerkreuz hoch. Dr~uck jetzt, w~ahrend ich@noch in der Luft bin, die Handlungstaste und halte sie gedr~uckt."
/* 37 */ , "Dr~uck das Steuerkreuz hoch, damit hochklettere."
/* 38 */ , "Wenn ich Anlauf nehme, bekomme ich so einen Sprung problemlos hin."
/* 39 */ , "Geh zur Kante mit dem wei=en Strich bis ich stehen bleibe. Lass dann@die Geh-Taste los und dr~uck das Steuerkreuz kurz hinunter. Jetzt nehme@ich Anlauf. Dr~uck das Steuerkreuz hoch und sofort danach die Sprungtaste.@Halt die Sprungtaste gedr~uckt. Ich springe erst im letzten Moment."
/* 40 */ , "So, das ist ein richtig Gro=er! Leite den Sprung genauso ein wie eben@erkl~art, aber wenn ich in der Luft bin, dr~uckst du die Handlungstaste@und h~altst sie gedr~uckt. Dann kann ich mich an die Kante klammern."
/* 41 */ , "Toll!"
/* 42 */ , "Versuch mal, hier hochzuklettern.@Dr~uck das Steuerkreuz hoch und dann die Handlungstaste."
/* 43 */ , "Ich kann hier nicht hochklettern, weil die L~ucke zu schmal ist.@Wenn du aber das Steuerkreuz nach rechts dr~uckst, hangel ich@mich seitlich durch bis genug Platz zum Hochziehen ist."
/* 44 */ , "Wenn es steil bergab geht und ich mich beim Absprung nicht@verletzen will, kann ich auch vorsichtig hinunterklettern."
/* 45 */ , "Dr~uck das Steuerkreuz nach unten, damit ich r~uckw~arts hinunterspringe.@Dr~uck dann sofort die Handlungstaste und halte sie gedr~uckt, damit ich@mich im Fallen an der Kante festklammere."
/* 46 */ , "Jetzt lass los."
/* 47 */ , "Lass uns schwimmen gehen."
/* 48 */ , "Mit der Sprungtaste und dem Steuerkreuz steuerst du mich unter Wasser."
/* 49 */ , "Ah! Luft!@Dr~uck einfach das Steuerkreuz nach vorne, links und rechts,@um mich an der Oberfl~ache zu bewegen. Dr~uck die Sprungtaste,@wenn ich noch einmal abtauchen soll. Oder geh zur Kante und@dr~uck die Handlungstaste, damit ich aus dem Wasser steige."
/* 50 */ , "So, jetzt lege ich erstmal die nassen Sachen ab."
/* 51 */ , "Bitte l~acheln!"
/* 52 */ , "Ist nichts Pers~onliches."
/* 53 */ , "Sie machen mir immer noch Kopfschmerzen, Lady.@Ein kleiner Vogel sagt mir: Ich soll Sie zur H~olle schicken!"
/* 54 */ , "So leicht wirst du mich und meine Brut nicht los, Lara."
/* 55 */ , "Ein bisschen sp~at dran f~ur die Preisverleihung, non?@Aber dabei sein ist ja alles, obwohl das nicht jeder so sieht.@Jammerschade, aber... c'est la vie."
/* 56 */ , "Du schie=t auf mich? Du schie=t auf mich, Puppe, he?@Hier ist kein anderer. Du musst auf mich schie=en!"
// TR1 levels
    , "Laras Haus"
    , "Die Kavernen"
    , "Die Stadt Vilcabamba"
    , "Das verlorene Tal"
    , "Das Grab von Qualopec"
    , "St. Francis' Folly"
    , "Das Kolosseum"
    , "Der Palast des Midas"
    , "Die Zisterne"
    , "Das Grab des Tihocan"
    , "Die Stadt Khamoon"
    , "Der Obelisk von Khamoon"
    , "Das Heiligtum des Scion"
    , "Natlas Katakomben"
    , "Atlantis"
    , "Die gro=e Pyramide"
    , "R~uckkehr nach ~Agypten"
    , "Der Tempel der Katze"
    , "Die Festung von Atlantis"
    , "Das Nest"
// TR2 levels
    , "Laras Haus"
    , "Die gro=e Mauer"
    , "Venedig"
    , "Bartolis Versteck"
    , "Das Opernhaus"
    , "Der Bohrturm"
    , "Die Tiefe"
    , "40 Faden"
    , "Das Wrack der Maria Doria"
    , "Die Quartiere"
    , "An Deck"
    , "Das tibetianische Hochland"
    , "Das Kloster von Barkhang"
    , "Die Katakomben des Talion"
    , "Der Eispalast"
    , "Der Tempel des Xian"
    , "Die schwimmenden Inseln"
    , "Der Hort des Drachen"
    , "Zuhause"
// TR3 levels
    , "Laras Haus"
    , "Dschungel"
    , "Tempelruine"
    , "Der Ganges"
    , "Kaliya H~ohlen"
    , "K~ustendorf"
    , "Absturzstelle"
    , "Madubu Schlucht"
    , "Punatempel"
    , "Kai an der Themse"
    , "Aldwych"
    , "Lud's Gate"
    , "Innenstadt"
    , "W~uste von Nevada"
    , "Hochsicherheitstrakt"
    , "Area 51"
    , "Antarktis"
    , "RX-Techs Bergwerk"
    , "Die vergessene Stadt Tinnos"
    , "H~ohle des Meteoriten"
    , "All Hallows"
};

const char *STR_ES[] = { ""
// help
    , "Cargando..."
    , "Pulsa H para ayuda"
    , helpText
    , "%s@@@"
      "BAJAS %d@@"
      "RECOGIDAS %d@@"
      "SECRETOS %d de %d@@"
      "TIEMPO %s"
    , "Guardando partida..."
    , "Exito al Guardar"
    , "ERROR al guardar!"
    , "SI"
    , "NO"
    , "No"
    , "Si"
    , "Pantalla dividida"
    , "VR"
    , "Bajo"
    , "Medio"
    , "Alto"
    , STR_LANGUAGES
    , "Aplicar"
    , "Mando 1"
    , "Mando 2"
    , "Mando 3"
    , "Mando 4"
    , "No est)a listo"
    , "Jugador 1"
    , "Jugador 2"
    , "Pulsa Cualquier Tecla"
    , "%s - Seleccionar"
    , "%s - Volver"
// inventory pages
    , "OPCIONES"
    , "INVENTARIO"
    , "OBJETOS"
// save game page
    , "\xBF""Guardar juego?"
    , "Posici)on actual"
// inventory option
    , "Juego"
    , "Mapa"
    , "Br)ujula"
    , "Estadisticas"
    , "Hogar de Lara"
    , "Nivel de Detalle"
    , "Sonido"
    , "Controles"
    , "Gamma"
// passport menu
    , "Cargar Partida"
    , "Nueva Partida"
    , "Reiniciar Nivel"
    , "Regresar a los T)itulos"
    , "Salir del Juego"
    , "Seleccionar Nivel"
// detail options
    , "Escoger Detalle"
    , "Filtraci)on"
    , "Iluminaci)on"
    , "Oscuridad"
    , "Agua"
    , "VSync"
    , "Stereo"
    , "Objetos Simples"
// sound options
    , "Fijar Volumen"
    , "Reverberaci)on"
    , "Subtitulos"
    , "Idioma"
// controls options
    , "Ajustar Controles"
    , "Teclado"
    , "Mando"
    , "Vibraci)on"
    , "Retargeting"
    , "Multi-objetivo"
    // controls
    , "Izquierda", "Derecha", "Correr", "Atr)as", "Saltar", "Andar", "Acci)on", "Sacar Armas", "Mirar", "Duck", "Dash", "Rodar", "Inventario", "Start"
    // keys
    , "NONE", "LEFT", "RIGHT", "UP", "DOWN", "SPACE", "TAB", "ENTER", "ESCAPE", "SHIFT", "CTRL", "ALT"
    , "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"
    , "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M"
    , "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"
    // gamepad
    , "NONE", "A", "B", "X", "Y", "L BUMPER", "R BUMPER", "SELECT", "START", "L STICK", "R STICK", "L TRIGGER", "R TRIGGER", "D-LEFT", "D-RIGHT", "D-UP", "D-DOWN"
// inventory items
    , "Desconocido"
    , "Explosivo"
    , "Pistolas"
    , "Escopeta"
    , "Magnums"
    , "Uzis"
    , "Cargadores de Pistola"
    , "Cartuchos de Escopeta"
    , "Cargadores de Magnum"
    , "Cargadores de Uzi"
    , "Botiqu)in Peque(~no"
    , "Botiqu)in Grande"
    , "Lingote de Plomo"
    , "Scion"
// keys
    , "Llave"
    , "Llave de Plata"
    , "Llave Oxidada"
    , "Llave de Oro"
    , "Llave de Zafiro"
    , "Llave de Neptuno"
    , "Llave de Atlas"
    , "Llave de Damocles"
    , "Llave de Thor"
    , "Llave Decorada"
// puzzles
    , "Puzzle"
    , "Idolo de Oro"
    , "Lingote de Oro"
    , "Rueda Dentada"
    , "Fusible"
    , "Ankh"
    , "Ojo de Horus"
    , "Sello de Anubis"
    , "Escarabajo"
    , "Llave de la Pir)amide"
// TR1 subtitles
/* 22 */ ,
    "[04000]""\xBF""De Nuevo?"
    "[05500]Y t)u, para una gran reinauguracion, Supongo."
    "[09500]La evoluci)on est)a en una rutina: la selecci)on natural en un m)inimo hist)orico ..."
    "[13500]El env)io de carne fresca incitar)a de nuevo a rabias territoriales"
    "[17500] - nos fortalecer)a y nos har)a Seguir ..."
    "[20500]Incluso crear nuevas razas."
    "[22500]Algo as)i como la evoluci)on en esteroides entonces"
    "[24500]Una patada en el pantal)on...@esos canallas Qualopec y Tihocan no ten)ian idea"
    "[29500] - El cataclismo de Atlantis golpe)o a una raza de d)ebiles languideces..."
    "[33500]Los hundi)o de nuevo a los fundamentos de la supervivencia..."
    "[37000]No deber)ia suceder as)i."
    "[39000]O As)i."
    "[40000]La incubacion comenzar)a en 20 segundos"
    "[43000]Demasiado tarde para los abortos!"
    "[45000]No Sin El lider De la Operacion!"
    "[47000]Noooo!"
    "[50000]DIEZ"
    "[54000]CINCO..."
    "[55500]4...3...2..."
    "[60000]UNO..."
/* 23 */ ,
    "[00001]Bien, Ya tienes toda mi Atencion"
    "[02500]Aunque no estoy muy seguro de si tengo el tuyo"
    "[05000]Hola?"
    "[06000]Te llevar)e y te esconder)e en la puerta de un granero."
    "[09000]Por Supuesto"
    "[10000]T)u y esa pieza que mana del Scion."
    "[13000]Si quieres mantenerlo tan mal, lo aprovechar)e..."
    "[17000]Espera... estamos hablando del artefacto aqu)i?"
    "[20000]Maldita sea, estamos ... justo arriba..."
    "[22000]Espera - Lo siento"
    "[24000]Esta Pieza tu dices - Donde esta el resto?"
    "[26500]La Sra. Natla puso a Pierre Dupont en ese camino."
    "[29500]Y d)onde est)a eso?"
    "[30500]Ja! No eres lo suficientemente r)apido para )el."
    "[34000]As)i que crees que toda esta conversacion es solo para detenerme?"
    "[37000]No s)e a d)onde le est)an yendo sus patitas de rana."
    "[42000]Tendr)as Que Preguntarle A la Sra. Natla"
    "[46000]"
    "[51000]Gracias. Lo Har)e."
/* 24 */ , ""
/* 25 */ ,
    "[03500]Aqu)i Yace Tihocan"
    "[05000]...Uno de los dos gobernantes de Atlantis...."
    "[10000]...Quien incluso despu)es de la maldici)on del continente..."
    "[13000]...hab)ia tratado de mantener el Reinado aqu)i en estas otras tierras..."
    "[19000]...Muri)o sin un hijo y su conocimiento no tiene herencia...."
    "[25500]M)iranos amablemente, Tihocan."
/* 26 */ , "Bienvenidos a mi casa, Te llevar)e en un tour guiado."
/* 27 */ , "Utiliza la tecla de control para llegar a@la habitaci)on de la m)usica."
/* 28 */ , "Vale. Hagamos unas cuantas acrobacias.@Presiona la tecla de salto."
/* 29 */ , "Ahora presi)onalo de nuevo y presiona tambi)en@la tecla de control para saltar hacia ese lado."
/* 30 */ , "Ah, el sal)on principal.@Perdona por las cajas, estoy guardando algunas cosas@y los transportistas no han llegado."
/* 31 */ , "Corre hasta una caja y, mientras mantienes presionado la tecla Adelante@presiona la tecla Acci)on para saltar encima de la caja"
/* 32 */ , "Esto era la sala de bailes,@pero la he convertido en mi gimnasio particular.@\xBFQu)e te parece? Bien, hagamos un poco de ejercicio."
/* 33 */ , "En realidad no voy corriendo a todos lados.@Cuando quiero tener cuidado, ando.@Mant)en pulsado la tecla andar y anda hasta la linea blanca."
/* 34 */ , "Con la tecla Andar presionada no me caer)e por mucho que lo intentes.@Vamos, int)entalo."
/* 35 */ , "Si quieres mirar alrededor, presiona la tecla mirar y mantenla asi.@A continuaci)on presiona la direcci)on en la que quieras mirar."
/* 36 */ , "Si un salto es demasiado largo, puedo agarrarme@al borde salv)andome de una desagradable caida.@Camina hasta el borde que tiene la linea blanca,@hasta que ya no pueda avanzar.@Ahora presiona Saltar y justo a continuaci)on Adelante,@mientras estoy en el aire presiona Acci)on."
/* 37 */ , "Pulsa Adelante y subir)e a pulso."
/* 38 */ , "Si hago un salto en carrera tambi)en puedo hacer@ese tipo de saltos. No hay problema."
/* 39 */ , "Camina hasta el borde que tiene la linea blanca,@hasta que ya no pueda avanzar.@Ahora dame la vuelta para que tenga espacio.@Presiona Adelante y casi inmediatamente presiona@y mant)en presionada la tecla Saltar.@No voy a saltar hasta el )ultimo momento."
/* 40 */ , "Vale. Esto es m)as dificil.@Salta en carrera igual que antes pero, mientras estoy en el aire@presiona y mant)en presionado la tecla para que me agarre al borde."
/* 41 */ , "Bonito."
/* 42 */ , "Intenta subir aqui.@Presiona Adelante y mant)en presionado Acci)on."
/* 43 */ , "No puedo escalar porque el espacio es muy peque(~no.@Pero si presionas Derecha, oscilar)e a un lado@hasta que haya espacio, presiona entonces Adelante."
/* 44 */ , "\xA1\xA1Muy bien!!@Si la caida es muy grande y no quiero da(~narme@puedo descolgarme con cuidado."
/* 45 */ , "Pulsa Hacia atr)as y saltar)e.@Presiona a continuaci)on la tecla Acci)on@y me agarrar)e al borde."
/* 46 */ , "Deja que siga."
/* 47 */ , "Vamos a nadar un poco."
/* 48 */ , "La tecla de salto y la de control sirven@para dirigirme mientras buceo."
/* 49 */ , "\xA1""Ah! \xA1""Aire!@S)olo tienes que usar Adelante, Izquierda y@Derecha para moverse por la superficie.@Presiona Saltar para sumergirte y darte otro ba(~no.@O vete al borde y presiona Acci)on para salir."
/* 50 */ , "Bien. Mejor me quito la ropa mojada."
/* 51 */ , "\xA1""Di Queso!"
/* 52 */ , "Nada personal."
/* 53 */ , "Todavia me provocas dolor de cabeza.@Y ese dolor hace que se me ocurran ideas divertidas.@\xA1""Como dispararte hasta mandarte al infierno!"
/* 54 */ , "No te burlar)as de mi y mi progenie tan f)acilmente, Lara."
/* 55 */ , "Un poco tarde para la entrega de premios \xBFno?@A tiempo, lo que cuenta es la recogida."
/* 56 */ , "\xBFMe disparas a mi?@\xBFMe disparas a mi, \xBF""eh?@\xA1No hay nadie m)as, asi que debes estar dispar)andome a mi!"
// TR1 levels
    , "Hogar de Lara"
    , "Cuevas"
    , "Ciudad de Vilcabamba"
    , "El Valle Perdido"
    , "Tumba de Qualopec"
    , "Abad)ia de San Francis"
    , "El Coliseo"
    , "Palacio de Midas"
    , "La Cisterna"
    , "Tumba de Tihocan"
    , "Ciudad de Khamoon"
    , "Obelisco de Khamoon"
    , "Santuario del Scion"
    , "Minas de Natla"
    , "Atl)antida"
    , "La Gran Pir)amide"
    , "Regreso a Egipto"
    , "Templo del Gato"
    , "Fortaleza Atlante"
    , "La Colmena"
// TR2 levels
    , "Hogar de Lara"
    , "La Gran Muralla"
    , "Venecia"
    , "Escondite de Bartoli"
    , "Casa de la Opera"
    , "Plataforma Afuera De la Costa"
    , "Zona de Buceo"
    , "40 Brazas"
    , "Naufragio del Maria Doria"
    , "Viviendas"
    , "La Cubierta"
    , "Estribaciones Tibetanas"
    , "Monasterio de Barkhang"
    , "Catacumbas del Talion"
    , "Palacio de Hielo"
    , "Templo de Xian"
    , "Islas Flotantes"
    , "La Guarida del Dragon"
    , "Hogar Dulce Hogar"
// TR3 levels
    , "Hogar de Lara"
    , "Jungla"
    , "Ruinas del templo"
    , "El Rio Ganges"
    , "Cuevas de Kaliya"
    , "Villa Costera"
    , "Sitio de Choque"
    , "Madubu Gorge"
    , "Templo de Puna"
    , "Muelle Thames"
    , "Aldwych"
    , "La Entrada de Lud"
    , "Ciudad"
    , "Desierto de Nevada"
    , "Compuesto de Alta Seguridad"
    , "Area 51"
    , "Antarctica"
    , "Minas RX-Tech"
    , "La Ciudad Perdida De Tinnos"
    , "Caverna del Meteorito"
    , "Todos Santos"
};

const char *STR_IT[] = { ""
// help
    , "Caricamento..."
    , "Press H for help"
    , helpText
    , "%s@@@"
      "UCCISIONI %d@@"
      "OGG. RACCOLTI %d@@"
      "SEGRETI %d di %d@@"
      "TEMPO %s"
    , "Salvataggio partita..."
    , "Salvataggio completato!"
    , "ERRORE DURANTE IL SALVATAGGIO!"
    , "S$I"
    , "NO"
    , "Off"
    , "On"
    , "Schermo diviso"
    , "VR"
    , "Basso"
    , "Medio"
    , "Alto"
    , STR_LANGUAGES
    , "Applica"
    , "Gamepad 1"
    , "Gamepad 2"
    , "Gamepad 3"
    , "Gamepad 4"
    , "Non pronto"
    , "Giocatore 1"
    , "Giocatore 2"
    , "Premi un tasto qualsiasi"
    , "%s - Seleziona"
    , "%s - Indietro"
// inventory pages
    , "OPZIONI"
    , "INVENTARIO"
    , "OGGETTI"
// save game page
    , "Salvare la partita?"
    , "Posizione attuale"
// inventory option
    , "Partita"
    , "Mappa"
    , "Bussola"
    , "Statistiche"
    , "Casa di Lara"
    , "Livelli di Dettaglio"
    , "Suoni"
    , "Controlli"
    , "Gamma"
// passport menu
    , "Carica partita"
    , "Inizia partita"
    , "Ricomincia livello"
    , "Torna ai titoli"
    , "Esci dal gioco"
    , "Seleziona livello"
// detail options
    , "Scegli Dettaglio"
    , "Filtro"
    , "Illuminazione"
    , "Ombra"
    , "Acqua"
    , "VSync"
    , "Stereo"
    , "Oggetti Semplici"
// sound options
    , "Imposta il Volume"
    , "Riverbero"
    , "Sottotitoli"
    , "Linguaggio"
// controls options
    , "Modifica Controlli"
    , "Tastiera"
    , "Gamepad"
    , "Vibrazione"
    , "Retargeting"
    , "Mira multipla"
    // controls
    , "Sinistra", "Destra", "Corri", "Indietro", "Jump", "Cammina", "Azione", "Estrai Arma", "Guarda", "Accovacciati", "Scatta", "Capriola", "Inventario", "Start"
    // keys
    , "NONE", "LEFT", "RIGHT", "UP", "DOWN", "SPACE", "TAB", "ENTER", "ESCAPE", "SHIFT", "CTRL", "ALT"
    , "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"
    , "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M"
    , "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"
    // gamepad
    , "NONE", "A", "B", "X", "Y", "L BUMPER", "R BUMPER", "SELECT", "START", "L STICK", "R STICK", "L TRIGGER", "R TRIGGER", "D-LEFT", "D-RIGHT", "D-UP", "D-DOWN"
// inventory items
    , "Sconosciuto"
    , "Esplosivo"
    , "Pistole"
    , "Fucile"
    , "Magnum"
    , "Uzi"
    , "Munizioni Pistola"
    , "Munizioni Fucile"
    , "Munizioni Magnum"
    , "Munizioni Uzi"
    , "Piccolo medikit"
    , "Grande medikit"
    , "Barra di piombo"
    , "Scion"
// keys
    , "Chiave"
    , "Chiave d'argento"
    , "Chiave arrugginita"
    , "Chiave d'oro"
    , "Chiave di zaffiro"
    , "Chiave di Nettuno"
    , "Chiave di Atlante"
    , "Chiave di Damocle"
    , "Chiave di Thor"
    , "Chiave Cesellata"
// puzzles
    , "Puzzle"
    , "Idolo d'oro"
    , "Barra d'oro"
    , "Ruota Dentata"
    , "Fusibile"
    , "Ankh"
    , "Occhio di Horus"
    , "Sigillo di Anubi"
    , "Scarabeo"
    , "Chiave della piramide"
// TR1 subtitles
/* 22 */ , ""
/* 23 */ , ""
/* 24 */ , ""
/* 25 */ , ""
/* 26 */ , "Benvenuto nella mia casa."
/* 27 */ , "Usa i tasti di controllo per andare nella stanza della musica."
/* 28 */ , "Ok. Facciamo qualche acrobazia.@Premi il tasto Salto."
/* 29 */ , "Ora fallo di nuovo premendo in una@delle direzioni: salter$o da quella parte."
/* 30 */ , "Ecco l'atrio principale.@Scusa per quelle casse, ho imballato alcune cose@e il fattorino non $e ancora venuto."
/* 31 */ , "Corri vicino a una cassa e, continuando a premere Avanti,@premi Azione e io ci salter$o sopra."
/* 32 */ , "Una volta questa stanza era una sala da ballo,@ma io l'ho trasformata nella mia palestra personale.@Cosa ne pensi?@Ok, facciamo qualche esercizio."
/* 33 */ , "In effetti io non corro sempre.@Quando devo essere cauta, cammino.@Tieni premuto il tasto Cammina e raggiungi la linea bianca."
/* 34 */ , "Con il tasto Cammina premuto, non cadr$o@nemmeno se mi spingi a farlo.@Avanti, prova pure."
/* 35 */ , "Se vuoi guardarti intorno, premi e tieni premuto il tasto Guarda.@Quindi premi nella direzione in cui vuoi guardare."
/* 36 */ , "Se un salto $e troppo lungo, posso aggrapparmi al@bordo e risparmiarmi una brutta caduta.@Cammina verso il bordo con la linea bianca@finch)e non posso pi$u andare avanti.@Quindi premi Salto, immediatamente seguito da Avanti,@e mentre sono in aria premi e tieni premuto il tasto Azione."
/* 37 */ , "Premi Avanti e mi arrampicher$o."
/* 38 */ , "Se faccio un salto con rincorsa, posso arrivare@a quella distanza, senza alcun problema."
/* 39 */ , "Cammina verso il bordo con la linea bianca finch)e mi fermo.@Quindi rilascia il tasto Cammina e premi una@volta Avanti per farmi prendere la rincorsa.@Premi Avanti e subito dopo premi e tieni premuto il tasto Salto.@Non spiccher$o il salto fino all'ultimo secondo."
/* 40 */ , "Perfetto. Questo $e davvero grande.@Allora, fai un salto con rincorsa esattamente come prima,@ma questa volta, mentre sono in aria premi e tieni premuto@il tasto Azione per farmi aggrappare al bordo."
/* 41 */ , "Bene."
/* 42 */ , "Prova a saltare qui su.@Premi avanti e tieni premuto il tasto Azione."
/* 43 */ , "Non posso arrampicarmi su perch)e la fessura $e troppo stretta.@Per$o puoi premere destra: mi sposter$o@lateralmente finch)e c'$e spazio, poi premi avanti."
/* 44 */ , "Ottimo!@Se c'$e un grosso dislivello e non voglio farmi@male cadendo, posso calarmi gi$u lentamente."
/* 45 */ , "Premi una volta indietro e far$o un salto in quella direzione.@Poi, immediatamente, premi e tieni premuto il@tasto Azione: mi aggrapper$o al bordo per scendere."
/* 46 */ , "Ora lascia."
/* 47 */ , "Andiamo a farci una nuotata."
/* 48 */ , "Usa il tasto Salto ed i tasti di controllo@per muovermi sott'acqua."
/* 49 */ , "Ah! Aria!@Usa avanti, sinistra e destra per muoverti quando sei a galla.@Premi Salto per immergerti e fare un'altra nuotata.@Oppure vai sul bordo e premi Azione per uscire."
/* 50 */ , "Perfetto. Ora sar$a meglio che mi tolga@questi vestiti bagnati."
/* 51 */ , "Sorridi!"
/* 52 */ , "Niente di personale."
/* 53 */ , "Maledetto, mi fai ancora venire il mal di testa.@E mi fai venire in mente alcuni pensieri cattivi@ad esempio spararti!"
/* 54 */ , "Non puoi liberarti di me e della mia@stirpe cos$i facilmente, Lara."
/* 55 */ , "Un po' in ritardo per la premiazione, no?@Tanto l'importante $e partecipare, giusto?"
/* 56 */ , "Mi stai sparando?@Ehi, stai sparando a me?@Eh s$i, non c'$e nessun altro, stai proprio sparando a me!"
// TR1 levels
    , "Casa di Lara"
    , "Caverne"
    , "Citt$a di Vilcabamba"
    , "Valle perduta"
    , "Tomba di Qualopec"
    , "Rovine di St. Francis"
    , "Colosseo"
    , "Palazzo di Mida"
    , "La Cisterna"
    , "Tomba di Tihocan"
    , "Citt$a di Khamoon"
    , "Obelisco di Khamoon"
    , "Santuario dello Scion"
    , "Miniere di Natla"
    , "Atlantide"
    , "La grande piramide"
    , "Ritorno in Egitto"
    , "Tempio della Gatta"
    , "Fortezza Atlantidea"
    , "L'Alveare"
// TR2 levels
    , "Lara's Home"
    , "La Grande Muraglia"
    , "Venezia"
    , "Covo di Bartoli"
    , "Teatro dell'Opera"
    , "Piattaforma offshore"
    , "Area d'immersione"
    , "40 atmosfere"
    , "Relitto della Maria Doria"
    , "Saloni abitati"
    , "Il ponte"
    , "Pendici tibetante"
    , "Monastero di Barkhang"
    , "Catacombe di Talion"
    , "Palazzo del ghiaccio"
    , "Tempio dello Xian"
    , "Isole galleggianti"
    , "La tana del Drago"
    , "Casa dolce casa"
// TR3 levels
    , "Casa di Lara"
    , "Giungla"
    , "Rovine del tempio"
    , "Il fiume Gange"
    , "Caverne di Kaliya"
    , "Villaggio costiero"
    , "Luogo dell'incidente"
    , "Gola di Madubu"
    , "Tempio di Puna"
    , "Molo sul Tamigi"
    , "Aldwych"
    , "Cancello di Lud"
    , "Citt$a di Londra"
    , "Deserto del Nevada"
    , "Reparto di massima sicurezza"
    , "Area 51"
    , "Antartico"
    , "Miniere RX-Tech"
    , "Città perduta di Tinnos"
    , "Caverna del meteorite"
    , "All Hallows"
};

const char *STR_PL[] = { ""
// help
    , "Wczytywanie..."
    , "Wci)snij H je*zeli potrzebujesz pomocy"
    , helpText
    , "%s@@@"
      "ZAB)OJSTWA %d@@"
      "ZNAJD)ZKI %d@@"
      "SEKRETY %d z %d@@"
      "CZAS %s"
    , "Zapisywanie..."
    , "Zapis uko)nczony!"
    , "B/L|AD ZAPISU!"
    , "TAK"
    , "NIE"
    , "Wy/l"
    , "W/l"
    , "Podzielony ekran"
    , "VR"
    , "Niska"
    , ")Srednia"
    , "Wysoka"
    , STR_LANGUAGES
    , "Zastosuj"
    , "Kontroler 1"
    , "Kontroler 2"
    , "Kontroler 3"
    , "Kontroler 4"
    , "Nie Gotowy"
    , "Gracz 1"
    , "Gracz 2"
    , "Wci)snij dowolny przycisk"
    , "%s - Wybierz"
    , "%s - Wr)o)c"
// inventory pages
    , "OPCJE"
    , "EKWIPUNEK"
    , "PRZEDMIOTY"
// save game page
    , "Zapisa)c gr|e?"
    , "Aktualna pozycja"
// inventory option
    , "Gra"
    , "Mapa"
    , "Kompas"
    , "Statystyki"
    , "Posiad/lo)s)c Lary"
    , "Poziom detali"
    , "D)zwi|ek"
    , "Sterowanie"
    , "Gamma"
// passport menu
    , "Wczytaj gr|e"
    , "Nowa gra"
    , "Powt)orz poziom"
    , "Wyjd)z to menu g/l)ownego"
    , "Wyjd)z z gry"
    , "Wybierz poziom"
// detail options
    , "Wybierz poziom detali"
    , "Filtrowanie tekstur"
    , "Jako)s)c )swiat/la"
    , "Jako)s)c cieni"
    , "Jako)s)c wody"
    , "VSync"
    , "Stereoskopia"
    , "Proste przedmioty"
// sound options
    , "Ustaw g/lo)sno)s)c"
    , "Pog/los"
    , "Napisy"
    , "J|ezyk"
// controls options
    , "Ustaw sterowanie"
    , "Klawiatura"
    , "Kontroler"
    , "Wibracje"
    , "Auto. zmiana celu"
    , "Wielo-celowanie"
    // controls
    , "Lewo", "Prawo", "Prz)od", "Ty/l", "Skok", "Ch)od", "Akcja", "Bro)n", "Rozgl|adanie si|e", "Kucanie", "Sprint", "Przewr)ot", "Ekwipunek", "Menu pauzy"
    // keys
    , "NONE", "LEFT", "RIGHT", "UP", "DOWN", "SPACE", "TAB", "ENTER", "ESCAPE", "SHIFT", "CTRL", "ALT"
    , "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"
    , "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M"
    , "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"
    // gamepad
    , "NONE", "A", "B", "X", "Y", "L BUMPER", "R BUMPER", "SELECT", "START", "L STICK", "R STICK", "L TRIGGER", "R TRIGGER", "D-LEFT", "D-RIGHT", "D-UP", "D-DOWN"
// inventory items
    , "Nieznany"
    , "Materia/l wybuchowy"
    , "Pistolety"
    , "Strzelba"
    , "Pistolety Magnum"
    , "Pistolety Uzi"
    , "Amunicja do pistolet)ow"
    , "Naboje do strzelby"
    , "Amunicja do Magnum)ow"
    , "Amunicja do Uzi"
    , "Ma/la apteczka"
    , "Du*za apteczka"
    , "Sztabka o/lowiu"
    , "Dzieci|e"
// keys
    , "Klucz"
    , "Srebrny klucz"
    , "Zardzewia/ly klucz"
    , "Z/loty klucz"
    , "Szafirowy klucz"
    , "Klucz Neptuna"
    , "Klucz Atlasa"
    , "Klucz Damoklesa"
    , "Klucz Thora"
    , "Ozdobiony klucz"
// puzzles
    , "Zagadka"
    , "Z/lota figurka"
    , "Sztabka z/lota"
    , "Z|ebatka"
    , "Bezpiecznik"
    , "Anch"
    , "Oko Horusa"
    , "Piecz|e)c Anubisa"
    , "Skarabeusz"
    , "Klucz do piramidy"
// TR1 subtitles
/* 22 */ , ""
/* 23 */ , ""
/* 24 */ , ""
/* 25 */ , ""
/* 26 */ , "Witaj w mojej posiad/lo)sci! Chod)z, oprowadz|e ci|e."
/* 27 */ , "U*zywaj przycisk)ow kierunkowych, aby p)oj)s)c do pokoju muzycznego."
/* 28 */ , "No dobrze, teraz zr)obmy kilka akrobacji.@Wci)snij przycisk Skoku."
/* 29 */ , "Teraz wci)snij go jeszcze raz wraz z jednym z przycisk)ow@kierunkowych, aby skoczy)c w danym kierunku."
/* 30 */ , "Ah, g/l)owna hala. Wybacz za te skrzynie,@ale mam kilka rzeczy, kt)ore musz|e wnie)s)c do magazynu,@ale ludzie od dostawy wci|a*z si|e nie zjawili."
/* 31 */ , "Podejd)z do skrzyni.@Podczas stania w miejscu i wciskania przycisku Prz)od,@wci)snij Akcj|e abym mog/la si|e wspi|a)c na skrzyni|e."
/* 32 */ , "Tu by/la kiedy)s sala balowa, ale przekszta/lci/lam@j|a we w/lasn|a sal|e gimnastyczn|a.@Co o tym my)slisz?@Zr)obmy kilka )cwicze)n."
/* 33 */ , "W/la)sciwie, to wsz|edzie nie mog|e tylko biec.@Gdy chc|e by)c ostro*zna, zaczynam chodzi)c.@Trzymaj przycisk Chodu, aby ostro*znie podej)s)c@do bia/lej linii."
/* 34 */ , "Podczas trzymania przycisku Chodu nie spadn|e@z *zadnej kraw|edzi, nawet je)sli tego spr)obujesz.@)Smia/lo, spr)obuj."
/* 35 */ , "Je)sli chcesz si|e rozejrze)c, wci)snij i trzymaj przycisk Rozgl|adania si|e.@Podczas trzymania, mo*zesz u*zy)c przycisk)ow@kierunkowych, aby rozejrze)c si|e w dan|a stron|e."
/* 36 */ , "Je)sli skok jest dla mnie zbyt daleki, mog|e chwyci)c@si|e kraw)edzi, aby uratowa)c si|e od gro)znego upadku.@Podejd)z do kraw|edzi z bia/l|a lini|a a*z si|e zatrzymam.@Wci)snij Skok i od razu wci)snij przycisk Prz)od.@W powietrzu, wci)snij i trzymaj Akcj|e."
/* 37 */ , "Wci)snij przycisk Prz)od, abym mog/la si|e wspi|a)c."
/* 38 */ , "Je)sli przed skopkiem zrobi|e rozbieg, mog|e@przeskoczy)c ten dystans bez problemu."
/* 39 */ , "Podejd)z do kraw|edzi z bia/l|a lini|a a*z si|e zatrzymam.@Potem p)o)s)c przycisk Chodu i raz wci)snij@przycisk Ty/l, abym mia/la miejsce na rozbieg.@Wci)snij przycisk Prz)od i prawie od razu@wci)snij i trzymaj przycisk Skoku.@Dzi|eki temu skocz|e w idealnym momencie."
/* 40 */ , "No dobra. To jest bardzo du*zy skok.@Zr)ob skok z rozbiegiem tak samo jak przed chwil|a,@ale dodatkowo w powietrzu, wci)snij i trzymaj Akcj|e@abym mog/la si|e chwyci)c kraw|edzi."
/* 41 */ , "Nie)zle."
/* 42 */ , "Spr)obuj tu wskoczy)c na g)or|e.@Wci)snij Prz)od i trzymaj Akcj|e."
/* 43 */ , "I can't climb up because the gap is too small.@But press right and I'll shimmy sideways@until there is room, then press forward."
/* 44 */ , "Great!@If there is a long drop and I don't want to@hurt myself jumping off I can let myself down carefully."
/* 45 */ , "Tap backwards, and I'll jump off backwards.@Immediately press and hold the action button,@and I'll grab the ledge on the way down."
/* 46 */ , "Then let go."
/* 47 */ , "Let's go for a swim."
/* 48 */ , "The jump button and the directions@move me around underwater."
/* 49 */ , "Ah! Air!@Just use forward and left and right@to manoeuvre around on the surface.@Press jump to dive down for another swim about.@Or go to the edge and press action to climb out."
/* 50 */ , "Right. Now I'd better take off these wet clothes."
/* 51 */ , "Say cheese!"
/* 52 */ , "Ain't nothin' personal."
/* 53 */ , "I still git a pain in my brain from ye.@An' it's tellin' me funny ideas now.@Like to shoot you to hell!"
/* 54 */ , "You can't bump off me and my brood so easy, Lara."
/* 55 */ , "A leetle late for the prize giving - non?@Still, it is the taking-part wheech counts."
/* 56 */ , "You firin' at me?@You firin' at me, huh?@Ain't nobody else, so you must be firin' at me!"
// TR1 levels
    , "Posiad/lo)s)c Lary"
    , "G)orskie jaskinie"
    , "Miasto Vilcabamba"
    , "Zaginiona dolina"
    , "Grobowiec Qualopeca"
    , ")Swi|atynia )sw. Franciszka"
    , "Koloseum"
    , "Pa/lac Midasa"
    , "Cysterna"
    , "Grobowiec Tihocana"
    , "Miasto Khamoon"
    , "Obelisk Khamoon"
    , "Sanktuarium Dzieci|ecia"
    , "Kopalnie Natli"
    , "Atlantyda"
    , "Wielka piramida"
    , "Powr)ot do Egiptu"
    , ")Swi|atynia kota"
    , "Atlantydzka twierdza"
    , "R)oj"
// TR2 levels
    , "Posiad/lo)s)c Lary"
    , "Wielki Mur"
    , "Wenecja"
    , "Kryj)owka Bartoliego"
    , "Opera"
    , "Platforma na morzu"
    , "Strefa nurkowania"
    , "40 s|a*zni"
    , "Wrak Marii Dorii"
    , "Kwatery mieszkalne"
    , "Pok/lad"
    , "Pog)orza Tybetu"
    , "Klasztor Barkhang"
    , "Katakumby Talionu"
    , "Lodowy pa/lac"
    , ")Swi|atynia Xian"
    , "Lewituj|ace wyspy"
    , "Gniazdo smoka"
    , "Nie ma to jak w domu"
// TR3 levels
    , "Posiad/lo)s)c Lary"
    , "D*zungla"
    , "Ruiny )swi|atyni"
    , "Rzeka Ganges"
    , "Jaskinie bogini Kaliya"
    , "Nadbrze*zna wioska"
    , "Miejsce katastrofy"
    , "W|aw)oz Madubu"
    , ")Swi|atynia Puny"
    , "Zatoka Tamizy"
    , "Aldwych"
    , "Lud's Gate"
    , "Dzielnica City"
    , "Pustynia w Nevadzie"
    , "Strefa Wysokiego Nadzoru"
    , "Strefa 51"
    , "Antarktyda"
    , "Kopalnie RX-Tech"
    , "Zaginione miasto Tinnos"
    , "Grota meteorytu"
    , "Wszyscy )Swi|eci"
};

const char *STR_RU[] = { ""
// help
    , "��������..."
    , "������� H ��� ������"
    , helpText
    , "%s@@@"
      "���{���� %d@@"
      "��������� %d@@"
      "�������� %d �� %d@@"
      "����� %s"
    , "���������� ����..."
    , "���������� ���������!"
    , "������ ����������!"
    , "��"
    , "���"
    , "����"
    , "���"
    , "������~����{� �����"
    , "VR"
    , "������"
    , "�������"
    , "�������"
    , STR_LANGUAGES
    , "���������"
    , "��{����� 1"
    , "��{����� 2"
    , "��{����� 3"
    , "��{����� 4"
    , "�� �����"
    , "����� 1"
    , "����� 2"
    , "������� ����� �������"
    , "%s - �������"
    , "%s - �����"
// inventory pages
    , "�����"
    , "���������"
    , "��������"
// save game page
    , "��������� ����?"
    , "������� �������"
// inventory option
    , "����"
    , "�����"
    , "������"
    , "����������"
    , "������� ����"
    , "�������"
    , "����"
    , "����������"
    , "�����"
// passport menu
    , "��������� ����"
    , "����� ����"
    , "�������������"
    , "����� � ����"
    , "��{��� �� ����"
    , "����� ������"
// detail options
    , "������{��� �������"
    , "����������"
    , "���������"
    , "����"
    , "����"
    , "VSync"
    , "������"
    , "������� ��������"
// sound options
    , "������{��� �����"
    , "������������"
    , "��������"
    , "����"
// controls options
    , "������{��� ����������"
    , "����������"
    , "��{�����"
    , "��������"
    , "��������� ����"
    , "������������� ����"
    // controls
    , "�����", "������", "���", "�����", "������", "���", "��{������", "������", "��������", "��������", "������", "�������", "���������", "Start"
    // keys
    , "NONE", "LEFT", "RIGHT", "UP", "DOWN", "SPACE", "TAB", "ENTER", "ESCAPE", "SHIFT", "CTRL", "ALT"
    , "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"
    , "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M"
    , "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"
    // gamepad
    , "NONE", "A", "B", "X", "Y", "L BUMPER", "R BUMPER", "SELECT", "START", "L STICK", "R STICK", "L TRIGGER", "R TRIGGER", "D-LEFT", "D-RIGHT", "D-UP", "D-DOWN"
// inventory items
    , "����������"
    , "����������"
    , "���������"
    , "��������"
    , "�������"
    , "���"
    , "���{��� ����������"
    , "������� ���������"
    , "���{��� ��������"
    , "���{��� ���"
    , "��������� �������"
    , "������� �������"
    , "��������{� ������"
    , "�����"
// keys
    , "����"
    , "���������{� ����"
    , "�����{� ����"
    , "������{� ����"
    , "���������{� ����"
    , "���� �������"
    , "���� �������"
    , "���� �������"
    , "���� ����"
    , "���������{� ����"
// puzzles
    , "�������"
    , "������{� ����"
    , "������{� ������"
    , "��������"
    , "��������������"
    , "����"
    , "���� ����"
    , "������ �������"
    , "�������{�"
    , "���� ��������"
// TR1 subtitles
/* 22 */ ,
    "[04500]� ������������!"
    "[06000]� ����, ������ �� ������������� ��������?"
    "[09500]�������� � ������, �����������{� ����� ����������."
    "[13500]��������� ������� ���� �������� ��������������� ������."
    "[17500]������� ��� ������� � �����."
    "[20500]���� ������� ����� ����!"
    "[22500]���-�� ����� �������� �� ���������?"
    "[24500]����� ��� ���...@��� �������� ������� � �������� �� ����� � �������!"
    "[30000]��������� ��������� ������ ���� ������������ ��������,"
    "[34000]�������� ��������� � ����� ������� ���������..."
    "[37000]��~� ������ ���� ���� �� ���."
    "[39000]� �� ���!"
    "[40000]��������� ���������� ����� 15 ������."
    "[43000]������� ������ ������������ �����!"
    "[45000]�� ������ ����� ��� ����� ��� ��������?"
    "[47500]�����!"
    "[50000]������..."
    "[54000]����..."
    "[55500]������... ���... ���..."
    "[60000]����..."
/* 23 */ ,
    "[00001]����, �� ��������� �������� ���� ���������"
    "[03000]�� �������, ��� � ��������� �����."
    "[05500]������?"
    "[06500]����... ������ � ����, ����� �� �� ���!"
    "[09000]�������"
    "[10000]��, ���� � ���� ����{� ����� ������!"
    "[13500]������ ����� ���? � ������ ���� ��� ����� �..."
    "[17000]����! �� ������� �� ���������?"
    "[19500]�~��� ��... ����� ���� �..."
    "[22000]������, �-������."
    "[24000]�� ������, ��� ��� �����, ��� ������?"
    "[26500]���� ����� ������ ��� ����� ����� ������."
    "[29500]� ��� �� ��?"
    "[30500]��! ���� �� ��� �� ��������."
    "[34000]�������, ��� ����� ���� ���������?"
    "[37000]� �� ���� ���� �������� ��� ������ ��������� �����."
    "[42500]����� ������ �� ���� � ���� �����."
    "[46000]"
    "[51000]�������. ������."
/* 24 */ , ""
/* 25 */ ,
    "[03500]����� �������� �������"
    "[06000]���� �� ���� ���������{� ���������..."
    "[10000]������{�, ���� ����� ��������� ����������, ��������� ������� �����..."
    "[16000]� ���� ������ ������ ������."
    "[19000]�� ���� ��������� � ��� ������ ��� � �� ������ ����������."
    "[26000]�� ���� ��� ������, �������."
/* 26 */ , "����� ���������� �� ��� ����{�.@� ������� ��������� ���������."
/* 27 */ , "��������{��� �������,@����� ���� � ����������� �������."
/* 28 */ , "������. ������ ������� ����������.@������� ������� ������."
/* 29 */ , "������ ����� ������� ������ � ������ ������� ���� �� �������.@� ������ � ����� �� ����������{�."
/* 30 */ , "��� ������{� ����.@����� �������� �� ����������,@����� ����{� ����� ��������� � ���������,@�� �������� ��~� �� �������."
/* 31 */ , "����{����� � ����� �, ��������� �������� ������� ����~��,@������{��� ������� ��{������,@����� � ������ �� ����."
/* 32 */ , "������ ��� ��� ������{� ���, ��@� ���������� ��� ��� ������{� ����������{�.@��� �������?@��� �, ������� ���� ���������{�."
/* 33 */ , "� �� ������ ����� ����� ������.@������ ��������� ��������� ����{��� � ����-������.@������� ������� ������ � ����{����� � ����{� �����."
/* 34 */ , "� ������{� �������{� ������ � ������ �����,@���� ���� �� ������ �����������.@����{���, �������{���."
/* 35 */ , "���� �� ������ �����������,@������� � ������� ������� ��������,@����� ������� ������� ������� �����������."
/* 36 */ , "���� � �� ���� ���������� ����-����,@� ���� ���������� �� ���{� � ��������� �� �������.@����� � ���� � ����{� �����{� �� ��� ��� ���� � �� �����������.@����� ������� ������ � ����� �� ������� ����~��.@����� � ������� � �������, ������� � ������� ������� ��{������."
/* 37 */ , "������� ������� ����~�� � � ������ ������."
/* 38 */ , "���� ������ ������ �� ����� ����,@�� � ��� ������� ������� ����� ������."
/* 39 */ , "����� � ���� � ����{� �����{�, ���� � �� �����������.@����� ����{��� �� ��� ������� ������� �����,@����� ���� ��� ����� ��� �������.@������� ������� ����~�� � ����� ������� � ������� ������� ������.@� ������� ������ � �� �� �������."
/* 40 */ , "���, � ������ ������{� ����.@�����{��� ��� � ������ ������ � �������, � �����, ���� � � �������,@������� ������� ��{������, ����� � ���������� �� �����."
/* 41 */ , "�������!"
/* 42 */ , "��������� ���� ���������.@������� ������� ����~��, � ����� ������� ������� ��{������."
/* 43 */ , "��� ���� �� �������, ������ ������� ����{�.@������� ������� ������ � � ����{��� �� ����� �� ��������� �����.@����� ������� ����~��."
/* 44 */ , "�������!@���� ����� ������� ������{� � ��� ������ � ���� ����� ������������,@� ���� ���������� ���������."
/* 45 */ , "������� ������� ����� � � �������� �����.@����� �� ������� � ������� ������� ��{������,@����� � �� �����, � �������� �� ���{�."
/* 46 */ , "����� ��������� �������."
/* 47 */ , "� ������ ���������."
/* 48 */ , "������� ������ � ������� �������� ��~� �����������@��� �������� ��� ����{�."
/* 49 */ , "��! �!@��������{��� ������� ����~��, ������ � �����@��� ����������� �� ����������� ����.@������� ������, ����� �������,@��� ������� � ���� � ������� ��{������,@����� ��{��� �� ����."
/* 50 */ , "������. � ������ ���� ����������� � ����� ������."
/* 51 */ , "����� �����!"
/* 52 */ , "������ �������."
/* 53 */ , "� ���� ��~� ��~� ���� � ������ ����� ����.@� ��� ����������� �������� ����.@��������, ����������� ���� � ������!"
/* 54 */ , "��� ������ �� ���� � ���� �������� ���� �� ����������, ����."
/* 55 */ , "������� ������ ��� ������� ������, ��...@�������, ���~� ������� ��~� ���������."
/* 56 */ , "�� � ���� ���������? �� � ���� ���������?! ��� ������ ������, ������ �� � ���� ���������!"
// TR1 levels
    , "������� ����"
    , "������"
    , "����� ����������"
    , "���������� ������"
    , "�������� ���������"
    , "��������� ��. ���������"
    , "������{�"
    , "������ ������"
    , "��������"
    , "�������� ��������"
    , "���� �����"
    , "������� �����"
    , "��������� ������"
    , "�������� �����"
    , "���������"
    , "������� ��������"
    , "����������� � ������"
    , "���� �����"
    , "�������� ���������"
    , "���{�"
// TR2 levels
    , "Lara's Home"
    , "The Great Wall"
    , "Venice"
    , "Bartoli's Hideout"
    , "Opera House"
    , "Offshore Rig"
    , "Diving Area"
    , "40 Fathoms"
    , "Wreck of the Maria Doria"
    , "Living Quarters"
    , "The Deck"
    , "Tibetan Foothills"
    , "Barkhang Monastery"
    , "Catacombs of the Talion"
    , "Ice Palace"
    , "Temple of Xian"
    , "Floating Islands"
    , "The Dragon's Lair"
    , "Home Sweet Home"
// TR3 levels
    , "Lara's House"
    , "Jungle"
    , "Temple Ruins"
    , "The River Ganges"
    , "Caves Of Kaliya"
    , "Coastal Village"
    , "Crash Site"
    , "Madubu Gorge"
    , "Temple Of Puna"
    , "Thames Wharf"
    , "Aldwych"
    , "Lud's Gate"
    , "City"
    , "Nevada Desert"
    , "High Security Compound"
    , "Area 51"
    , "Antarctica"
    , "RX-Tech Mines"
    , "Lost City Of Tinnos"
    , "Meteorite Cavern"
    , "All Hallows"
};


char **STR = NULL;

void ensureLanguage(int lang) {
    ASSERT(COUNT(STR_EN) == STR_MAX);
    ASSERT(COUNT(STR_FR) == STR_MAX);
    ASSERT(COUNT(STR_DE) == STR_MAX);
    ASSERT(COUNT(STR_ES) == STR_MAX);
    ASSERT(COUNT(STR_IT) == STR_MAX);
    ASSERT(COUNT(STR_PL) == STR_MAX);
    ASSERT(COUNT(STR_RU) == STR_MAX);

    lang += STR_LANG_EN;

    switch (lang) {
        case STR_LANG_FR : STR = (char**)STR_FR; break;
        case STR_LANG_DE : STR = (char**)STR_DE; break;
        case STR_LANG_ES : STR = (char**)STR_ES; break;
        case STR_LANG_IT : STR = (char**)STR_IT; break;
        case STR_LANG_PL : STR = (char**)STR_PL; break;
        case STR_LANG_PT : STR = (char**)STR_EN; break;
        case STR_LANG_RU : STR = (char**)STR_RU; break;
        case STR_LANG_JA : STR = (char**)STR_EN; break;
        default          : STR = (char**)STR_EN; break;
    }
}

#include "glyph_cyr.h"

#endif
