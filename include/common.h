#ifndef COMMON_H
#define COMMON_H
#include <sys/types.h>
#include <stdbool.h>
#include <libcd.h>
#include <stdint.h>
typedef unsigned char   undefined;

enum PadButtons{
    PAD_L1 = 4,
    PAD_R1 = 8,
    PAD_L2 = 1,
    PAD_R2 = 2,
    PAD_SELECT = 0x100,
    PAD_START = 0x800,
    PAD_UP = 0x1000,
    PAD_RIGHT = 0x2000,
    PAD_DOWN = 0x4000,
    PAD_LEFT = 0x8000,
    PAD_TRIANGLE = 0x10,
    PAD_CIRCLE = 0x20,
    PAD_CROSS = 0x40,
    PAD_SQUARE = 0x80
};

extern uint16_t buttonsHeld;
extern uint16_t buttonsHeldPast;
extern uint16_t buttonsPressed;

extern uint16_t buttonsHeld2;
extern uint16_t buttonsHeldPast2;
extern uint16_t buttonsPressed2;

extern uint8_t cursor;
extern char fadeDirection; //0 = done
extern int frameCount;
extern void * freeArcP;

typedef struct {
    int8_t mode;
    int8_t mode2;
    int8_t mode3;
    int8_t mode4;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    uint8_t stageId;
    int8_t mid;
    undefined field14_0xe;
    int8_t clear;
    bool rideArmorEnable;
    bool disableWeaponObjects;
    bool disableMainObjects;
    bool field19_0x13;
    bool field20_0x14;
    bool field21_0x15;
    bool field22_0x16;
    bool field23_0x17;
    bool field24_0x18;
    bool field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    int8_t point;
    uint8_t spawnFlags; /* 0xFF=keep existing Ammo & HP */
    uint8_t enableBars;
    struct Object * bossP;
    bool enableBossBars;
    bool sigmaLogo; /* for boss HP bar */
    uint8_t slowMotion;
    uint8_t exitType; /* 1=Game Over , 2=Exit Menu */
    int8_t var[6];
    uint8_t refights[16];
    undefined field39_0x3e;
    undefined field40_0x3f;
    uint8_t startingSong; /* 0 = Song Started Playing */
    undefined field42_0x41;
    int8_t maverickShow;
    bool songOff;
    uint8_t player;
    uint8_t lives;
    uint8_t hpTemp;
    uint8_t maxHPs[2];
    uint8_t armorType;
    uint8_t armors;
    bool ultimateArmor; /* gotten the armor*/
    uint8_t clearedStages;
    undefined field53_0x4d;
    undefined field54_0x4e;
    undefined field55_0x4f;
    undefined field56_0x50;
    undefined field57_0x51;
    undefined field58_0x52;
    uint8_t maxAmmos[2];
    undefined field60_0x55;
    uint16_t ammoTemp[16];
    uint8_t tanksAmmo[3];
    uint8_t stageSelectMode;
    uint8_t weaponTemp;
    undefined field65_0x7b;
    undefined field66_0x7c;
    undefined field67_0x7d;
    uint16_t collectables; /* tanks */
    uint32_t collectables2; /* hearts */
    uint32_t parts; /* hyper-dash etc */
    uint32_t equipedParts[6];
    uint8_t difficulty;
    uint8_t armorParts; /* both falcon & gia */
    int8_t bossMaxHP;
    undefined field75_0xa3;
    undefined field76_0xa4;
    undefined field77_0xa5;
    undefined field78_0xa6;
    undefined field79_0xa7;
    undefined field80_0xa8;
    undefined field81_0xa9;
    uint8_t ranks[2]; /* MEH,PA,GA,SA,A,B,C,E */
    int32_t hoursLeft; /* in frames */
    uint32_t stageTime;
    int32_t enemiesDefeated;
    int32_t damageTaken;
    int16_t maxDamageDealt;
    uint16_t virusModeCount;
    uint8_t bossLevel;
    uint8_t virusMeterTemp;
    undefined field91_0xc2;
    undefined field92_0xc3;
    undefined field93_0xc4;
    undefined field94_0xc5;
    undefined field95_0xc6;
    undefined field96_0xc7;
    undefined field97_0xc8;
    undefined field98_0xc9;
    undefined field99_0xca;
    undefined field100_0xcb;
    uint8_t armorPartsPast; /* for Mission Complete Screen??? */
    uint8_t seenTextBoxes[2][32];
    undefined field103_0x10d;
    undefined field104_0x10e;
    uint8_t startMode;
    uint8_t gameSpeed; /* 1=slow */
    undefined field107_0x111;
    undefined field108_0x112;
    undefined field109_0x113;
    undefined field110_0x114;
    undefined field111_0x115;
    undefined field112_0x116;
    undefined field113_0x117;
    undefined field114_0x118;
    undefined field115_0x119;
    undefined field116_0x11a;
    undefined field117_0x11b;
    undefined field118_0x11c;
    undefined field119_0x11d;
    undefined field120_0x11e;
    undefined field121_0x11f;
    undefined field122_0x120;
    undefined field123_0x121;
    undefined field124_0x122;
    undefined field125_0x123;
    undefined field126_0x124;
    undefined field127_0x125;
    undefined field128_0x126;
    undefined field129_0x127;
    undefined field130_0x128;
    undefined field131_0x129;
    undefined field132_0x12a;
    undefined field133_0x12b;
    undefined field134_0x12c;
    undefined field135_0x12d;
    undefined field136_0x12e;
    undefined field137_0x12f;
    undefined field138_0x130;
    undefined field139_0x131;
    undefined field140_0x132;
    undefined field141_0x133;
    undefined field142_0x134;
    undefined field143_0x135;
    undefined field144_0x136;
    undefined field145_0x137;
    undefined field146_0x138;
    undefined field147_0x139;
    undefined field148_0x13a;
    undefined field149_0x13b;
    undefined field150_0x13c;
    undefined field151_0x13d;
    undefined field152_0x13e;
    undefined field153_0x13f;
    undefined field154_0x140;
    undefined field155_0x141;
    undefined field156_0x142;
    undefined field157_0x143;
    undefined field158_0x144;
    undefined field159_0x145;
    undefined field160_0x146;
    undefined field161_0x147;
    undefined field162_0x148;
    undefined field163_0x149;
    undefined field164_0x14a;
    undefined field165_0x14b;
    undefined field166_0x14c;
    undefined field167_0x14d;
    undefined field168_0x14e;
    undefined field169_0x14f;
    undefined field170_0x150;
    undefined field171_0x151;
    undefined field172_0x152;
    undefined field173_0x153;
    undefined field174_0x154;
    undefined field175_0x155;
    undefined field176_0x156;
    undefined field177_0x157;
    undefined field178_0x158;
    undefined field179_0x159;
    undefined field180_0x15a;
    undefined field181_0x15b;
    undefined field182_0x15c;
    undefined field183_0x15d;
    undefined field184_0x15e;
    undefined field185_0x15f;
    undefined field186_0x160;
    undefined field187_0x161;
    undefined field188_0x162;
    undefined field189_0x163;
    undefined field190_0x164;
    undefined field191_0x165;
    undefined field192_0x166;
    undefined field193_0x167;
    undefined field194_0x168;
    undefined field195_0x169;
    undefined field196_0x16a;
    undefined field197_0x16b;
    undefined field198_0x16c;
    undefined field199_0x16d;
    undefined field200_0x16e;
    undefined field201_0x16f;
    undefined field202_0x170;
    undefined field203_0x171;
    undefined field204_0x172;
    undefined field205_0x173;
    undefined field206_0x174;
    undefined field207_0x175;
    undefined field208_0x176;
    undefined field209_0x177;
    undefined field210_0x178;
    undefined field211_0x179;
    undefined field212_0x17a;
    undefined field213_0x17b;
    undefined field214_0x17c;
    undefined field215_0x17d;
    undefined field216_0x17e;
    undefined field217_0x17f;
    undefined field218_0x180;
    undefined field219_0x181;
    undefined field220_0x182;
    undefined field221_0x183;
    undefined field222_0x184;
    undefined field223_0x185;
    undefined field224_0x186;
    undefined field225_0x187;
    undefined field226_0x188;
    undefined field227_0x189;
    undefined field228_0x18a;
    undefined field229_0x18b;
    undefined field230_0x18c;
    undefined field231_0x18d;
    undefined field232_0x18e;
    undefined field233_0x18f;
    undefined field234_0x190;
    undefined field235_0x191;
    undefined field236_0x192;
    undefined field237_0x193;
    undefined field238_0x194;
    undefined field239_0x195;
    undefined field240_0x196;
    undefined field241_0x197;
    undefined field242_0x198;
    undefined field243_0x199;
    undefined field244_0x19a;
    undefined field245_0x19b;
    undefined field246_0x19c;
    undefined field247_0x19d;
    undefined field248_0x19e;
    undefined field249_0x19f;
    undefined field250_0x1a0;
    undefined field251_0x1a1;
    undefined field252_0x1a2;
    undefined field253_0x1a3;
    undefined field254_0x1a4;
    undefined field255_0x1a5;
    undefined field256_0x1a6;
    undefined field257_0x1a7;
    undefined field258_0x1a8;
    undefined field259_0x1a9;
    undefined field260_0x1aa;
    undefined field261_0x1ab;
    undefined field262_0x1ac;
    undefined field263_0x1ad;
    undefined field264_0x1ae;
    undefined field265_0x1af;
    undefined field266_0x1b0;
    undefined field267_0x1b1;
    undefined field268_0x1b2;
    undefined field269_0x1b3;
    uint32_t igt;
    int8_t screenOffsetX;
    int8_t screenOffsetY;
    bool zeroBuster;
    undefined field274_0x1bb;
}Game;

extern Game game;

void ArcSeek(uint16_t id,uint8_t bufferId,void * bufferP);
void ArcBinSeek(int fileId,void *dest);
void BinSeek(uint16_t id,void * dest);

int CdControl(uint8_t com, uint8_t *param, uint8_t *result);
int CdPosToInt(CdlLOC *p);
int CdRead(int sectors,u_long *buf,int mode);
int CdReadSync(int mode,uint8_t *result);
CdlFILE * CdSearchFile(CdlFILE *fp,char *name);

void ClearAll();

void CopyClut(int destId,void *srcP,int length);

void DrawLoad(bool showName ,bool fade);
void DrawMMX5();
void DrawMain();
void EndSong();

void FadeIn(uint8_t speed);
void FadeOut(uint8_t speed);
void FileCollect();
void FileCollect2();

void PlaySound(int slot,int id,void *objP);
void TurnOffSound(uint32_t flag, uint32_t file);
void PlaySong(uint8_t id,uint8_t vol);

char * strcpy(void * dest,void * src);
void * memcpy(void *dest, void *src,int length);
void * memset(void *dest, char *fillbyte,int length);

int printf(const char *fmt,...);

void NewThread(int id,void * func);
void ThreadSleep(uint16_t frames);
void DeleteThread();
void DeleteThread2(int id);
void NewThread2(void * func);

#endif