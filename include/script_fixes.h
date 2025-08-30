#include "modding.h"
#include "global.h"

RECOMP_IMPORT("*", u32 recomp_get_config_u32(const char* key));

enum carpenter_fix {
    CARPENTER_VANILLA,
    CARPENTER_GC,
    CARPENTER_EU_3DS,
};

#define CONFIG_CARPENTER recomp_get_config_u32("carpenter_fix")
    
enum lulu_diary_fix {
    DIARY_VANILLA,
    DIARY_FAITHFUL,
    DIARY_3DS,
};

#define CONFIG_LULU_DIARY recomp_get_config_u32("lulu_diary_fix")

enum tatl_kafei_fix {
    TATL_KAFEI_VANILLA,
    TATL_KAFEI_FAITHFUL,
    TATL_KAFEI_3DS,
};

#define CONFIG_TATL_KAFEI recomp_get_config_u32("tatl_kafei_fix")

enum gibdo_gossip_fix {
    GIBDO_VANILLA,
    GIBDO_FAITHFUL,
    GIBDO_3DS,
};

#define CONFIG_GIBDO_GOSSIP recomp_get_config_u32("gibdo_gossip_fix")

enum swordsman_fix {
    SWORDSMAN_VANILLA,
    SWORDSMAN_FAITHFUL,
    SWORDSMAN_3DS,
};

#define CONFIG_SWORDSMAN recomp_get_config_u32("swordsman_fix")

enum boss_key_name_change {
    BOSS_KEY_VANILLA,
    BOSS_KEY_BIG,
    BOSS_KEY_BOSS,
};
    
#define CONFIG_BOSS_KEY recomp_get_config_u32("boss_key_name_change")
#define CONFIG_GIANT_TURTLE !(bool)recomp_get_config_u32("giant_turtle_fix")
#define CONFIG_CREMIA_WELCOME !(bool)recomp_get_config_u32("cremia_welcome_fix")
#define CONFIG_GORMAN_CARDS !(bool)recomp_get_config_u32("gorman_cards_fix")
#define CONFIG_OLD_LADY !(bool)recomp_get_config_u32("old_lady_fix")
#define CONFIG_LAND_DEED !(bool)recomp_get_config_u32("land_deed_name_change")
#define CONFIG_GORMAN_MASK !(bool)recomp_get_config_u32("gorman_mask_name_change")
#define CONFIG_SPIRIT_HOUSE !(bool)recomp_get_config_u32("spirit_house_change")
#define CONFIG_BEAVER_SIGN !(bool)recomp_get_config_u32("beaver_sign_change")
#define CONFIG_IKANA_SIGN !(bool)recomp_get_config_u32("ikana_sign_change")
#define CONFIG_RANCH_HOUSE !(bool)recomp_get_config_u32("ranch_house_change")
#define CONFIG_KOUME_FORMAT !(bool)recomp_get_config_u32("koume_format_fix")
#define CONFIG_EXTRA_SFX !(bool)recomp_get_config_u32("extra_sfx")