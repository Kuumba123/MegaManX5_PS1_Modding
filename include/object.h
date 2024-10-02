#ifndef OBJECT_H
#define OBJECT_H
#include <stdint.h>
#include <stdbool.h>
typedef unsigned char   undefined;

typedef struct
{
    char offsetX;
    char offsetY;
    uint8_t width;
    uint8_t height;
}HitBox;


typedef struct {
    uint8_t timer;
    uint8_t flag;
    char nextIndex; /* multiples of 4 */
    uint8_t sprtFrame;
}AnimeFrame;

typedef struct {
    uint8_t spawned;
    uint8_t Id;
    uint8_t var;
    uint8_t type;
    uint16_t X;
    uint16_t Y;
}Enemy;

typedef struct {
    uint8_t flags; /* alive */
    uint8_t id;
    uint8_t stageVar;
    bool display;
    uint8_t act;
    uint8_t act2;
    uint8_t act3;
    uint8_t act4;
    int x;
    int y;
    Enemy * enemyP; /* for enemy spawner & other things */
    uint8_t collideLayer; /* witch BG Layer for collision */
    uint8_t flip;
    uint8_t priority;
    uint8_t anime;
    int pastX;
    int pastY;
    int speedX;
    int speedY;
    int accelX;
    int accelY;
    AnimeFrame * animeTableP;
    uint8_t * frameP;
    uint8_t * texP;
    uint8_t * sprtDataP;
    uint16_t texCord;
    uint16_t clutCord;
    AnimeFrame animeInfo;
    uint8_t newAnimeF;
    undefined field29_0x49;
    undefined field30_0x4a;
    undefined field31_0x4b;
    undefined field32_0x4c;
    undefined field33_0x4d;
    undefined field34_0x4e;
    undefined field35_0x4f;
    HitBox * contactP; /* hitbox pointer for ContactO */
    HitBox * contactP2; /* with other things that damage it */
    int * damageTableP; /* damage table Pointer (when hit) */
    uint8_t hp;
    uint8_t hp_old;
    undefined field41_0x5e;
    undefined field42_0x5f;
    uint8_t damage;
    uint8_t iframes;
    undefined field45_0x62;
    undefined field46_0x63;
    undefined field47_0x64;
    undefined field48_0x65;
    undefined field49_0x66;
    undefined field50_0x67;
    HitBox * collideP; /* for collison & hitbox */
    uint16_t innerX;
    uint16_t innerY;
    uint8_t collideF; /* flags for BTLR */
    undefined field55_0x71;
    undefined field56_0x72;
    undefined field57_0x73;
    undefined field58_0x74;
    undefined field59_0x75;
    undefined field60_0x76;
    undefined field61_0x77;
    undefined field62_0x78;
    undefined field63_0x79;
    uint8_t hitboxDisableF; /* for Contact Weapon */
    undefined field65_0x7b;
    undefined field66_0x7c;
    undefined field67_0x7d;
    undefined field68_0x7e; //Start of Free Vars (does not include Weapons)
    undefined field69_0x7f;
    undefined field70_0x80;
    undefined field71_0x84;
    undefined field72_0x85;
    undefined field73_0x86;
    undefined field74_0x87;
    undefined field75_0x88;
    undefined field76_0x89;
    undefined field77_0x8A;
    undefined field78_0x8b;
    undefined field79_0x8c;
    undefined field80_0x8d;
    undefined field81_0x8e;
    undefined field82_0x8f;
    undefined field83_0x90;
    undefined field84_0x91;
    undefined field85_0x92;
    undefined field86_0x93;
    undefined field87_0x94;
    undefined field88_0x95;
    undefined field89_0x96;
    undefined field90_0x97;
    undefined field91_0x98;
    undefined field92_0x99;
    undefined field93_0x9a;
    undefined field94_0x9b;
}Object;

typedef struct {
    uint8_t flags;
    undefined field1_0x1;
    uint8_t player;
    bool display;
    uint8_t status;
    uint8_t state;
    uint8_t sub;
    undefined field7_0x7;
    int x;
    int y;
    undefined field10_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined field14_0x14;
    uint8_t flip;
    uint8_t priority;
    uint8_t anime;
    int32_t pastX;
    int32_t pastY;
    int32_t speedX;
    int32_t speedY;
    int32_t accelX;
    int32_t accelY;
    undefined field24_0x30;
    undefined field25_0x31;
    undefined field26_0x32;
    undefined field27_0x33;
    undefined field28_0x34;
    undefined field29_0x35;
    undefined field30_0x36;
    undefined field31_0x37;
    undefined field32_0x38;
    undefined field33_0x39;
    undefined field34_0x3a;
    undefined field35_0x3b;
    undefined field36_0x3c;
    undefined field37_0x3d;
    undefined field38_0x3e;
    undefined field39_0x3f;
    uint16_t texCord;
    uint16_t clutCord;
    AnimeFrame animeInfo;
    uint8_t newAnimeF;
    undefined field44_0x49;
    undefined field45_0x4a;
    undefined field46_0x4b;
    undefined field47_0x4c;
    undefined field48_0x4d;
    undefined field49_0x4e;
    undefined field50_0x4f;
    undefined field51_0x50;
    undefined field52_0x51;
    undefined field53_0x52;
    undefined field54_0x53;
    undefined field55_0x54;
    undefined field56_0x55;
    undefined field57_0x56;
    undefined field58_0x57;
    undefined field59_0x58;
    undefined field60_0x59;
    undefined field61_0x5a;
    undefined field62_0x5b;
    uint8_t hp;
    uint8_t hp_old;
    undefined field65_0x5e;
    undefined field66_0x5f;
    undefined field67_0x60;
    uint8_t iframes;
    undefined field69_0x62;
    undefined field70_0x63;
    undefined field71_0x64;
    undefined field72_0x65;
    undefined field73_0x66;
    undefined field74_0x67;
    undefined field75_0x68;
    undefined field76_0x69;
    undefined field77_0x6a;
    undefined field78_0x6b;
    undefined field79_0x6c;
    undefined field80_0x6d;
    undefined field81_0x6e;
    undefined field82_0x6f;
    undefined field83_0x70;
    undefined field84_0x71;
    undefined field85_0x72;
    undefined field86_0x73;
    undefined field87_0x74;
    undefined field88_0x75;
    undefined field89_0x76;
    undefined field90_0x77;
    undefined field91_0x78;
    undefined field92_0x79;
    undefined field93_0x7a;
    undefined field94_0x7b;
    undefined field95_0x7c;
    undefined field96_0x7d;
    undefined field97_0x7e;
    undefined field98_0x7f;
    undefined field99_0x80;
    undefined field100_0x81;
    undefined field101_0x82;
    undefined field102_0x83;
    undefined field103_0x84;
    undefined field104_0x85;
    undefined field105_0x86;
    undefined field106_0x87;
    undefined field107_0x88;
    undefined field108_0x89;
    undefined field109_0x8a;
    undefined field110_0x8b;
    undefined field111_0x8c;
    undefined field112_0x8d;
    undefined field113_0x8e;
    undefined field114_0x8f;
    undefined field115_0x90;
    undefined field116_0x91;
    undefined field117_0x92;
    undefined field118_0x93;
    undefined field119_0x94;
    undefined field120_0x95;
    undefined field121_0x96;
    undefined field122_0x97;
    undefined field123_0x98;
    undefined field124_0x99;
    undefined field125_0x9a;
    undefined field126_0x9b;
    undefined field127_0x9c;
    undefined field128_0x9d;
    undefined field129_0x9e;
    undefined field130_0x9f;
    undefined field131_0xa0;
    undefined field132_0xa1;
    undefined field133_0xa2;
    undefined field134_0xa3;
    undefined field135_0xa4;
    undefined field136_0xa5;
    undefined field137_0xa6;
    undefined field138_0xa7;
    undefined field139_0xa8;
    undefined field140_0xa9;
    undefined field141_0xaa;
    undefined field142_0xab;
    undefined field143_0xac;
    undefined field144_0xad;
    undefined field145_0xae;
    undefined field146_0xaf;
    undefined field147_0xb0;
    undefined field148_0xb1;
    undefined field149_0xb2;
    undefined field150_0xb3;
    undefined field151_0xb4;
    undefined field152_0xb5;
    undefined field153_0xb6;
    undefined field154_0xb7;
    undefined field155_0xb8;
    undefined field156_0xb9;
    undefined field157_0xba;
    undefined field158_0xbb;
    undefined field159_0xbc;
    undefined field160_0xbd;
    undefined field161_0xbe;
    undefined field162_0xbf;
    undefined field163_0xc0;
    undefined field164_0xc1;
    undefined field165_0xc2;
    undefined field166_0xc3;
    undefined field167_0xc4;
    undefined field168_0xc5;
    undefined field169_0xc6;
    undefined field170_0xc7;
    uint8_t busterType;
    uint8_t aquiredWeapons;
    undefined field173_0xca;
    undefined field174_0xcb;
    uint8_t lagTime;
    bool lagFlag;
    uint8_t spawnTimer;
    undefined field178_0xcf;
    undefined field179_0xd0;
    undefined field180_0xd1;
    undefined field181_0xd2;
    undefined field182_0xd3;
    undefined field183_0xd4;
    undefined field184_0xd5;
    undefined field185_0xd6;
    undefined field186_0xd7;
    undefined field187_0xd8;
    undefined field188_0xd9;
    undefined field189_0xda;
    undefined field190_0xdb;
    undefined field191_0xdc;
    undefined field192_0xdd;
    undefined field193_0xde;
    undefined field194_0xdf;
    undefined field195_0xe0;
    undefined field196_0xe1;
    undefined field197_0xe2;
    undefined field198_0xe3;
    undefined field199_0xe4;
    undefined field200_0xe5;
    undefined field201_0xe6;
    undefined field202_0xe7;
    undefined field203_0xe8;
    undefined field204_0xe9;
    undefined field205_0xea;
    undefined field206_0xeb;
    undefined field207_0xec;
    undefined field208_0xed;
    undefined field209_0xee;
    undefined field210_0xef;
    undefined field211_0xf0;
    undefined field212_0xf1;
    undefined field213_0xf2;
    undefined field214_0xf3;
    undefined field215_0xf4;
    undefined field216_0xf5;
    undefined field217_0xf6;
    undefined field218_0xf7;
    undefined field219_0xf8;
    undefined field220_0xf9;
    undefined field221_0xfa;
    undefined field222_0xfb;
    uint32_t parts;
    undefined field224_0x100;
    undefined field225_0x101;
    undefined field226_0x102;
    undefined field227_0x103;
    undefined field228_0x104;
    undefined field229_0x105;
    undefined field230_0x106;
    undefined field231_0x107;
    undefined field232_0x108;
    undefined field233_0x109;
    undefined field234_0x10a;
    undefined field235_0x10b;
    undefined field236_0x10c;
    undefined field237_0x10d;
    undefined field238_0x10e;
    undefined field239_0x10f;
    undefined field240_0x110;
    undefined field241_0x111;
    undefined field242_0x112;
    undefined field243_0x113;
    undefined field244_0x114;
    undefined field245_0x115;
    undefined field246_0x116;
    undefined field247_0x117;
    undefined field248_0x118;
    undefined field249_0x119;
    undefined field250_0x11a;
    undefined field251_0x11b;
    undefined field252_0x11c;
    undefined field253_0x11d;
    undefined field254_0x11e;
    undefined field255_0x11f;
    undefined field256_0x120;
    undefined field257_0x121;
    undefined field258_0x122;
    undefined field259_0x123;
    undefined field260_0x124;
    undefined field261_0x125;
    undefined field262_0x126;
    undefined field263_0x127;
    undefined field264_0x128;
    undefined field265_0x129;
    undefined field266_0x12a;
    undefined field267_0x12b;
    undefined field268_0x12c;
    undefined field269_0x12d;
    undefined field270_0x12e;
    undefined field271_0x12f;
    undefined field272_0x130;
    undefined field273_0x131;
    undefined field274_0x132;
    undefined field275_0x133;
    undefined field276_0x134;
    undefined field277_0x135;
    undefined field278_0x136;
    undefined field279_0x137;
    undefined field280_0x138;
    undefined field281_0x139;
    undefined field282_0x13a;
    undefined field283_0x13b;
    undefined field284_0x13c;
    undefined field285_0x13d;
    undefined field286_0x13e;
    undefined field287_0x13f;
    undefined field288_0x140;
    undefined field289_0x141;
    undefined field290_0x142;
    undefined field291_0x143;
    undefined field292_0x144;
    undefined field293_0x145;
    undefined field294_0x146;
    undefined field295_0x147;
    undefined field296_0x148;
    undefined field297_0x149;
    undefined field298_0x14a;
    undefined field299_0x14b;
    undefined field300_0x14c;
    undefined field301_0x14d;
    undefined field302_0x14e;
    undefined field303_0x14f;
    uint32_t stageTime;
    undefined field305_0x154;
    undefined field306_0x155;
    undefined field307_0x156;
    undefined field308_0x157;
}Mega;

extern Mega mega;

#define megaX *(uint16_t*)((int)&mega.x + 2)
#define megaY *(uint16_t*)((int)&mega.y + 2)

/*Object Memory Regions*/
#if BUILD != 561 //North American Version

#define EFFECT_OBJECT_ADDR 0x8009E7A0
#define ITEM_OBJECT_ADDR 0x800C6A10
#define LAYER_OBJECT_ADDR 0x800C94A8
#define ENEMY_OBJECT_ADDR 0x80092090
#define MISC_OBJECT_ADDR 0x800D1F40
#define QUAD_OBJECT_ADDR 0x8009F9A0
#define SHOT_OBJECT_ADDR 0x80094398
#define VISUAL_OBJECT_ADDR 0x80096D98
#define WEAPON_OBJECT_ADDR 0x80098120

#else //Japanese version

#define EFFECT_OBJECT_ADDR 0x80143078
#define ITEM_OBJECT_ADDR 0x80165b10
#define LAYER_OBJECT_ADDR 0x80169d70
#define ENEMY_OBJECT_ADDR 0x8013bfb0
#define MISC_OBJECT_ADDR 0x80173d58
#define QUAD_OBJECT_ADDR 0x80143690
#define SHOT_OBJECT_ADDR 0x8013f408
#define VISUAL_OBJECT_ADDR 0x8013e5f0
#define WEAPON_OBJECT_ADDR 0x801407d8

#endif //////////////

#define EFFECT_OBJECT_SLOTS 0x60
#define ITEM_OBJECT_SLOTS 0x40
#define LAYER_OBJECT_SLOTS 0x4
#define ENEMY_OBJECT_SLOTS 0x30
#define MISC_OBJECT_SLOTS 0x80
#define QUAD_OBJECT_SLOTS 0x40
#define SHOT_OBJECT_SLOTS 0x60
#define VISUAL_OBJECT_SLOTS 0x20
#define WEAPON_OBJECT_SLOTS 0x20

#define EFFECT_OBJECT_SLOT_SIZES 0x30
#define ITEM_OBJECT_SLOT_SIZES 0xA4
#define LAYER_OBJECT_SLOT_SIZES 0x30
#define ENEMY_OBJECT_SLOT_SIZES 0x9C
#define MISC_OBJECT_SLOT_SIZES 0x60
#define QUAD_OBJECT_SLOTS_SIZES 0x60
#define SHOT_OBJECT_SLOT_SIZES 0x70
#define VISUAL_OBJECT_SLOT_SIZES 0x9C
#define WEAPON_OBJECT_SLOT_SIZES 0x9C

/*Define Functions*/

/*void AnimeAdvance(Object *objP);

void CollideCheck(Object *objP);
int ContactMega(Object *objP);
bool ContactObject();
bool ContactObject2(); //uses collide property
int ContactWeapon(Object *objP); //returns 0 if no-contact , -1 if dead , id + 1 if contact

void DeleteObject(Object *objP); //clears spawn flag
void DeleteObject2(Object *objP); //sets spawn flag
void DeleteObject3(Object *objP);
void DisplayObject(Object *objP);
void DisplayObject2(Object *objP, int16_t width, int16_t height);
void DisplayObject3(Object *objP);

Object* GetEffectObject();
Object* GetItemObject();
Object* GetLayerObject();
Object* GetMainObject();
Object* GetMiscObject();
int GetRNG();
Object* GetQuadObject();
Object* GetShotObject();
Object* GetVisualObject();

void LockMega(uint8_t lockType, uint8_t flip);

void MoveObject(Object *objP);
void MoveObject2(Object *objP);

bool OffScreenCheck(Object* objP);
bool OffScreenCheck2(Object* objP, int16_t rangeX, int16_t rangeY);

bool PlayBossSong(); //returns 0 when started

void SetAnime(Object *objP, int anime);
void SetAnimeFrame(Object *objP, int anime, int frame);
void SpawnExplosion(Object *objP);
void SpawnJunk(uint8_t junkCount, void *idk, Object *objP);

void UnlockMega();*/
#endif
