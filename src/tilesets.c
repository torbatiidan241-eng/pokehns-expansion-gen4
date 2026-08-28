#include "global.h"
#include "tilesets.h"
#include "tileset_anims.h"

#include "data/tilesets/graphics.h"
#include "data/tilesets/metatiles.h"
#include "data/tilesets/headers.h"


extern const struct Tileset gTileset_General;

const struct Tileset gTileset_AlolaIsland = {
    .isCompressed = TRUE,
    .isSecondary = FALSE,
    .tiles = gTileset_General.tiles,
    .palettes = gTileset_General.palettes,
    .metatiles = gTileset_General.metatiles,
    .metatileAttributes = gTileset_General.metatileAttributes,
    .callback = NULL,
};

const struct Tileset gTileset_AlolaIslandSecondary = {
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTileset_General.tiles,
    .palettes = gTileset_General.palettes,
    .metatiles = gTileset_General.metatiles,
    .metatileAttributes = gTileset_General.metatileAttributes,
    .callback = NULL,
};
