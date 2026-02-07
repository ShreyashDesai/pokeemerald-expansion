#ifndef GUARD_METATILES_H
#define GUARD_METATILES_H

struct Metatile {
    u16 layer1;   // background
    u16 layer2;   // foreground
    u16 layer3;   // new extra layer
};

#endif // GUARD_METATILES_H
#define UNPACK_LAYER3_TYPE(attr) (((attr) >> LAYER3_SHIFT) & LAYER3_MASK)

