#include "eztr_api.h"
#include "script_fixes.h"

EZTR_ON_INIT void script_revisions() {
    // [CONSISTENCY CHANGES] SYSTEM: Changes "Rupees" to pink to match "200" and rest of game
    EZTR_Basic_ReplaceText(
        0x0008,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_ADULT_WALLET,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got an " EZTR_CC_COLOR_RED "Adult Wallet" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AThis is for adults, so it holds a" EZTR_CC_NEWLINE "lot of " EZTR_CC_COLOR_PINK "Rupees" EZTR_CC_COLOR_DEFAULT ". Now you can carry" EZTR_CC_NEWLINE "up to " EZTR_CC_COLOR_PINK "200 " EZTR_CC_COLOR_DEFAULT "of them." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SYSTEM: Changes "500 Rupees" from red to pink to match rest of game better
    EZTR_Basic_ReplaceText(
        0x0009,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_GIANTS_WALLET,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "Giant Wallet" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AThis thing is huge!" EZTR_CC_NEWLINE "It can hold up to " EZTR_CC_COLOR_PINK "500 Rupees" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SYSTEM: Changes "Bombs" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x001B,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_BOMB_BAG,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "Bomb Bag" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ANow you can carry and use" EZTR_CC_NEWLINE "bombs!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "With this special offer, the " EZTR_CC_COLOR_RED "Bomb" EZTR_CC_NEWLINE "Bag " EZTR_CC_COLOR_DEFAULT "comes filled with " EZTR_CC_COLOR_YELLOW "20 bombs" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "How lucky!" EZTR_CC_END "",
        NULL
    );
 
    // [CONSISTENCY CHANGES] SYSTEM: Changes period to exclamation point to match other item get messages, and changes "Bombs" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x001C,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_BIG_BOMB_BAG,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "Big Bomb Bag" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ANow you can carry up to" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_YELLOW "30 bombs" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] SYSTEM: Fixes color of exclamation mark to match rest of game
    EZTR_Basic_ReplaceText(
        0x0020,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_HEROS_BOW_2,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "bundle of 40 arrows" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );
    
    // [FORMATTING FIXES] SYSTEM: Fixes icon by changing Quiver to Hero's Bow
    EZTR_Basic_ReplaceText(
        0x0022,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_HEROS_BOW,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got the " EZTR_CC_COLOR_RED "Hero's Bow" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ASet it to " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_C "" EZTR_CC_COLOR_DEFAULT " to equip it." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Press " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_C "" EZTR_CC_COLOR_DEFAULT " to draw it." EZTR_CC_NEWLINE "Press and hold " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_C " " EZTR_CC_COLOR_DEFAULT "to aim." EZTR_CC_NEWLINE "Release " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_C " " EZTR_CC_COLOR_DEFAULT "to shoot." EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES/CONSISTENCY CHANGES] SYSTEM: Fixes color of exclamation mark to match rest of game, and adds dash before "Targeting" for standardization
    EZTR_Basic_ReplaceText(
        0x0032,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_HEROS_SHIELD,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "Hero's Shield" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0APress " EZTR_CC_BTN_R " to assume a" EZTR_CC_NEWLINE "defensive position." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "If you press " EZTR_CC_BTN_R " while" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "" EZTR_CC_BTN_Z "-Targeting" EZTR_CC_COLOR_DEFAULT ", you can move while" EZTR_CC_NEWLINE "defending yourself." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SYSTEM: Adds dash before "Targeting" for standardization
    EZTR_Basic_ReplaceText(
        0x0033,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_MIRROR_SHIELD,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "Mirror Shield" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AIt can reflect certain kinds of" EZTR_CC_NEWLINE "light." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Press " EZTR_CC_BTN_R " to assume a defensive" EZTR_CC_NEWLINE "position. If you press " EZTR_CC_BTN_R " while" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "" EZTR_CC_BTN_Z "-Targeting" EZTR_CC_COLOR_DEFAULT ", you can move while" EZTR_CC_NEWLINE "defending yourself." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/FORMATTING FIXES] SYSTEM: Fixes incorrect "Item Select Screen" to match name of actual menu, and fixes formatting by using BOX_BREAK2
    EZTR_Basic_ReplaceText(
        0x0036,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_BOMBCHU,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "Bombchu" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ASet it to " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_CLEFT "" EZTR_CC_COLOR_DEFAULT ", " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_CDOWN "" EZTR_CC_COLOR_DEFAULT " or " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_CRIGHT "" EZTR_CC_COLOR_DEFAULT " on the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_YELLOW "Select Item Screen" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE " " EZTR_CC_BOX_BREAK2 "Press " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_C "" EZTR_CC_COLOR_DEFAULT " to arm this wall-climbing" EZTR_CC_NEWLINE "bomb. Tap " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_C "" EZTR_CC_COLOR_DEFAULT " again to launch it." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] SYSTEM: Fixes incorrect "Item Select Screen" to match name of actual menu
    EZTR_Basic_ReplaceText(
        0x003A,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_BOMBCHU,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got " EZTR_CC_COLOR_RED "5 Bombchu" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ASet them to " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_CLEFT "" EZTR_CC_COLOR_DEFAULT ", " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_CDOWN "" EZTR_CC_COLOR_DEFAULT " or " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_CRIGHT " " EZTR_CC_COLOR_DEFAULT "on the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_YELLOW "Select Item Screen" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Press " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_C "" EZTR_CC_COLOR_DEFAULT " to arm one of these" EZTR_CC_NEWLINE "wall-climbing bombs. Tap " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_C "" EZTR_CC_COLOR_DEFAULT " again" EZTR_CC_NEWLINE "to launch it." EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES/CONSISTENCY CHANGES] SYSTEM: Changes "START" to red to match rest of game, and makes "Map Screen" blue so it has a color like other menu screen names
    EZTR_Basic_ReplaceText(
        0x003E,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_DUNGEON_MAP,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You found the " EZTR_CC_COLOR_RED "Dungeon Map" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0APress " EZTR_CC_COLOR_RED "START" EZTR_CC_COLOR_DEFAULT " to open the" EZTR_CC_NEWLINE "subscreens and view the " EZTR_CC_COLOR_BLUE "Map" EZTR_CC_NEWLINE "Screen" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_BOX_BREAK "Areas on the map that appear in" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_BLUE "blue" EZTR_CC_COLOR_DEFAULT " are places you have visited." EZTR_CC_NEWLINE "Your current location is the " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_LIGHTBLUE "flashing" EZTR_CC_COLOR_DEFAULT " area." EZTR_CC_BOX_BREAK "Use " EZTR_CC_CONTROL_PAD " to view another floor." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SYSTEM: Changes number of tokens to red to match Stray Fairy found messages.
    EZTR_Basic_ReplaceText(
        0x0052,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_GOLD_SKULLTULA_TOKEN,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "Gold Skulltula Spirit" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AThis is your " EZTR_CC_COLOR_RED "" EZTR_CC_TOKENS "" EZTR_CC_COLOR_DEFAULT " one!" EZTR_CC_FADE "|00|28" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] SYSTEM: Adds comma before "quick"
    EZTR_Basic_ReplaceText(
        0x0069,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_ZORA_EGG,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You put a " EZTR_CC_COLOR_RED "Zora Egg" EZTR_CC_COLOR_DEFAULT " in a bottle!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AIt doesn't look very healthy." EZTR_CC_NEWLINE "You'd better have someone" EZTR_CC_NEWLINE "examine it, quick!" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SYSTEM: Changes Magical Mushroom item get text to match name in Select Item Screen
    EZTR_Basic_ReplaceText(
        0x006B,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_MUSHROOM,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "Magical Mushroom" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AYour nose is tickled by its" EZTR_CC_NEWLINE "fragrant scent!" EZTR_CC_END "",
        NULL
    );

    // [DELAY FIXES] SYSTEM: Fixes missing delay before "This". Ported from EU
    EZTR_Basic_ReplaceText(
        0x0079,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_GORON_MASK,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got the " EZTR_CC_COLOR_RED "Goron Mask" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AThis mask contains the spirit of a" EZTR_CC_NEWLINE "proud Goron hero!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Wear the mask with " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_C " " EZTR_CC_COLOR_DEFAULT "to inhabit" EZTR_CC_NEWLINE "the body of a Goron. Press " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_C "" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "again to return to normal." EZTR_CC_END "",
        NULL
    );

    // [DELAY FIXES] SYSTEM: Fixes accidental delay effect after BOX_BREAK2. Ported from EU
    EZTR_Basic_ReplaceText(
        0x007E,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_ALL_NIGHT_MASK,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got the " EZTR_CC_COLOR_RED "All-Night Mask" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Apparently, this mask won't let" EZTR_CC_NEWLINE "you drift off to sleep even if you" EZTR_CC_NEWLINE "want to. Wear it with " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_C "" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_END "",
        NULL
    );

    // [DELAY FIXES] SYSTEM: Fixes missing delay before "Wear". Ported from EU
    EZTR_Basic_ReplaceText(
        0x0086,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_GREAT_FAIRYS_MASK,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got the " EZTR_CC_COLOR_RED "Great Fairy Mask" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AWear it with " EZTR_CC_BTN_C "." EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Stray fairies" EZTR_CC_COLOR_DEFAULT " will fly to you when" EZTR_CC_NEWLINE "you wear it." EZTR_CC_BOX_BREAK "You'll know you're close to a " EZTR_CC_COLOR_RED "fairy" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "who's lost in a temple if the" EZTR_CC_NEWLINE "mask's hair begins to " EZTR_CC_COLOR_RED "shimmer" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] SYSTEM: Ports GC formatting fixes.
    EZTR_Basic_ReplaceText(
        0x0089,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_KAMAROS_MASK,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got " EZTR_CC_COLOR_RED "Kamaro's Mask" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Use it to teach his dance to the" EZTR_CC_NEWLINE "world, so his moves can become" EZTR_CC_NEWLINE "as popular as he had hoped they" EZTR_CC_NEWLINE "would be." EZTR_CC_END "",
        NULL
    );

    // [DELAY FIXES] SYSTEM: Fixes missing delay effect after "Romani!" Ported from EU
    EZTR_Basic_ReplaceText(
        0x0091,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_CHATEAU_ROMANI,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "Your bottle was filled with" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Chateau Romani" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ADrink it to replenish all of your" EZTR_CC_NEWLINE "magic power." EZTR_CC_BOX_BREAK "The drink even improves your" EZTR_CC_NEWLINE "stamina! Swirl it around with your" EZTR_CC_NEWLINE "tongue to enjoy its flavor to the" EZTR_CC_NEWLINE "fullest!" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SYSTEM: Changes "seahorse" to "sea horse" to match rest of game
    EZTR_Basic_ReplaceText(
        0x0095,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_SEAHORSE_1,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "sea horse" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AHurry! Take it to its home at" EZTR_CC_NEWLINE "Pinnacle Rock!" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SYSTEM: Changes period to exclamation mark to match other get item messages
    EZTR_Basic_ReplaceText(
        0x00A1,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_SPECIAL_DELIVERY_TO_MAMA,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You were given " EZTR_CC_COLOR_RED "express mail to" EZTR_CC_NEWLINE "Mama" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "This is priority mail, so hurry up" EZTR_CC_NEWLINE "and deliver it!" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES/CONSISTENCY CHANGES] SYSTEM: Ports GC formatting fixes, and changes "mailbox" to "postbox" for standardization.
    EZTR_Basic_ReplaceText(
        0x00AA,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_LETTER_TO_KAFEI,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You were given a " EZTR_CC_COLOR_RED "letter to Kafei" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Quick! Deliver it for her! Take it" EZTR_CC_NEWLINE "to a " EZTR_CC_COLOR_RED "postbox" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_END "",
        NULL
    );

    // [MISC. FIXES] SYSTEM: Fixes Woodfall Map text box to be same type as other item get messages
    EZTR_Basic_ReplaceText(
        0x00B5,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_TINGLES_MAP_2,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "map of Woodfall" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ANow you can find your way" EZTR_CC_NEWLINE "around the swamp." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "The " EZTR_CC_COLOR_RED "red arrow" EZTR_CC_COLOR_DEFAULT " on the map shows" EZTR_CC_NEWLINE "where you entered, and the " EZTR_CC_COLOR_YELLOW "yellow" EZTR_CC_NEWLINE "arrow " EZTR_CC_COLOR_DEFAULT "shows your current location." EZTR_CC_END "",
        NULL
    );

    // [MISC. FIXES] SYSTEM: Fixes Snowhead Map text box to be same type as other item get messages
    EZTR_Basic_ReplaceText(
        0x00B6,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_TINGLES_MAP_3,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "map of Snowhead" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ANow you can find your way" EZTR_CC_NEWLINE "around the mountains." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "The " EZTR_CC_COLOR_RED "red arrow" EZTR_CC_COLOR_DEFAULT " on the map shows" EZTR_CC_NEWLINE "where you entered, and the " EZTR_CC_COLOR_YELLOW "yellow" EZTR_CC_NEWLINE "arrow " EZTR_CC_COLOR_DEFAULT "shows your current location." EZTR_CC_END "",
        NULL
    );

    // [MISC. FIXES] SYSTEM: Fixes Romani Ranch Map text box to be same type as other item get messages
    EZTR_Basic_ReplaceText(
        0x00B7,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_TINGLES_MAP_4,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "map of Romani Ranch" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ANow you can find your way" EZTR_CC_NEWLINE "around the farm." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "The " EZTR_CC_COLOR_RED "red arrow" EZTR_CC_COLOR_DEFAULT " on the map shows" EZTR_CC_NEWLINE "where you entered, and the " EZTR_CC_COLOR_YELLOW "yellow" EZTR_CC_NEWLINE "arrow " EZTR_CC_COLOR_DEFAULT "shows your current location." EZTR_CC_END "",
        NULL
    );

    // [MISC. FIXES] SYSTEM: Fixes Great Bay Map text box to be same type as other item get messages
    EZTR_Basic_ReplaceText(
        0x00B8,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_TINGLES_MAP_5,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "map of Great Bay" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ANow you can find your way" EZTR_CC_NEWLINE "around the seashore." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "The " EZTR_CC_COLOR_RED "red arrow" EZTR_CC_COLOR_DEFAULT " on the map shows" EZTR_CC_NEWLINE "where you entered, and the " EZTR_CC_COLOR_YELLOW "yellow" EZTR_CC_NEWLINE "arrow " EZTR_CC_COLOR_DEFAULT "shows your current location." EZTR_CC_END "",
        NULL
    );

    // [MISC. FIXES] SYSTEM: Fixes Stone Tower Map text box to be same type as other item get messages
    EZTR_Basic_ReplaceText(
        0x00B9,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_TINGLES_MAP_6,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You got a " EZTR_CC_COLOR_RED "map of Stone Tower" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ANow you can find your way" EZTR_CC_NEWLINE "around the canyon." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "The " EZTR_CC_COLOR_RED "red arrow" EZTR_CC_COLOR_DEFAULT " on the map shows" EZTR_CC_NEWLINE "where you entered, and the " EZTR_CC_COLOR_YELLOW "yellow" EZTR_CC_NEWLINE "arrow " EZTR_CC_COLOR_DEFAULT "shows your current location." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SYSTEM: Standardizes "magic power" as all lowercase
    EZTR_Basic_ReplaceText(
        0x00C8,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You've been granted " EZTR_CC_COLOR_GREEN "magic power" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AIn your current form, press " EZTR_CC_BTN_B " to" EZTR_CC_NEWLINE "shoot " EZTR_CC_COLOR_RED "bubble blasts" EZTR_CC_COLOR_DEFAULT ". Press and" EZTR_CC_NEWLINE "hold " EZTR_CC_BTN_B " to blow a " EZTR_CC_COLOR_RED "big bubble" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_BOX_BREAK "Release " EZTR_CC_BTN_B " to shoot it." EZTR_CC_NEWLINE "Your " EZTR_CC_COLOR_GREEN "magic power " EZTR_CC_COLOR_DEFAULT "decreases when" EZTR_CC_NEWLINE "you shoot. Replenish it with " EZTR_CC_COLOR_RED "Magic" EZTR_CC_NEWLINE "Jars " EZTR_CC_COLOR_DEFAULT "and" EZTR_CC_COLOR_RED " Potions" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SYSTEM: Standardizes "magic power" as all lowercase
    EZTR_Basic_ReplaceText(
        0x00CC,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "Your " EZTR_CC_COLOR_GREEN "magic power" EZTR_CC_COLOR_DEFAULT " has been" EZTR_CC_NEWLINE "enhanced!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AYou now have " EZTR_CC_COLOR_RED "twice" EZTR_CC_COLOR_DEFAULT " as much" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "magic power" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TATL: Changes one question mark after "swallowed" to an exclamation mark to match other Tatl item lost messages
    EZTR_Basic_ReplaceText(
        0x00F6,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|68|50" EZTR_CC_COLOR_LIGHTBLUE "What are you doing?!?" EZTR_CC_NEWLINE "Didn't your " EZTR_CC_COLOR_DEFAULT "shield " EZTR_CC_COLOR_LIGHTBLUE "just get" EZTR_CC_NEWLINE "swallowed?!?" EZTR_CC_FADE "|00|28" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] SYSTEM: Changes "Select Item Screen" to yellow to match rest of game
    EZTR_Basic_ReplaceText(
        0x00FF,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Press " EZTR_CC_COLOR_RED "START" EZTR_CC_COLOR_DEFAULT " to open the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_YELLOW "Select Item Screen" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "Choose and use an item with " EZTR_CC_BTN_C "." EZTR_CC_PAUSE_MENU "" EZTR_CC_END "",
        NULL
    );

    // [CONFIG] Configuration for Mama's/Ranch house name
    if (!CONFIG_RANCH_HOUSE) {
        // [CONSISTENCY CHANGES] SYSTEM: Changes "Mama's House" to "Ranch House" to match EU
        EZTR_Basic_ReplaceText(
            0x0132,
            EZTR_INVISIBLE_TEXT_BOX_V,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Ranch House" EZTR_CC_END "",
            NULL
        );
    };

    // [CONFIG] Configuration for Ghost Hut/Spirit House name 
    if (!CONFIG_SPIRIT_HOUSE) {
        // [CONSISTENCY CHANGES] SYSTEM: Changes "Ghost Hut" to "Spirit House" to match sign outside
        EZTR_Basic_ReplaceText(
            0x0146,
            EZTR_INVISIBLE_TEXT_BOX_V,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Spirit House" EZTR_CC_END "",
            NULL
        );
    };

    // [CONSISTENCY CHANGES] TATL: Changes second "W" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x0210,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "W-what just happened?!" EZTR_CC_NEWLINE "Everything has..." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TATL: Changes second "W" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x0212,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "Wha...what are you, anyway? " EZTR_CC_NEWLINE "That song you played..." EZTR_CC_NEWLINE "That instrument..." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] TATL: Adds missing fade effect to match EU
    EZTR_Basic_ReplaceText(
        0x021B,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|25" EZTR_CC_COLOR_LIGHTBLUE "Oh no! The Great Fairy!" EZTR_CC_FADE "|00|14" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TATL: Capitalizes "clock tower" for standardization
    EZTR_Basic_ReplaceText(
        0x0224,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "The door to the Clock Tower opens" EZTR_CC_NEWLINE "only once a year--at " EZTR_CC_COLOR_RED "midnight" EZTR_CC_COLOR_LIGHTBLUE " on" EZTR_CC_NEWLINE "the eve of the " EZTR_CC_COLOR_RED "carnival" EZTR_CC_COLOR_LIGHTBLUE "." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TATL: Capitalizes "clock tower" for standardization
    EZTR_Basic_ReplaceText(
        0x0225,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "Did you hear those fireworks?" EZTR_CC_NEWLINE "I think the Clock Tower door has" EZTR_CC_NEWLINE "just " EZTR_CC_COLOR_RED "opened" EZTR_CC_COLOR_LIGHTBLUE "!" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES/CONSISTENCY CHANGES] TATL: Fixes formatting by removing accidental NEWLINE, and adds dash between "Z" and "Targeting" for standardization
    EZTR_Basic_ReplaceText(
        0x0227,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "" EZTR_CC_QUICKTEXT_ENABLE "There you go! See? You can do it" EZTR_CC_NEWLINE "if you try!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "When I fly over to people or" EZTR_CC_NEWLINE "objects, use " EZTR_CC_BTN_Z " to look at them" EZTR_CC_NEWLINE "so you can talk to them." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Use " EZTR_CC_COLOR_RED "Z-Targeting" EZTR_CC_COLOR_LIGHTBLUE " to talk to people" EZTR_CC_NEWLINE "even if they're far away." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Or, if there's no one to target," EZTR_CC_NEWLINE "you can use " EZTR_CC_BTN_Z " to look " EZTR_CC_COLOR_RED "straight" EZTR_CC_NEWLINE "ahead" EZTR_CC_COLOR_LIGHTBLUE ". " EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "But enough about that for now..." EZTR_CC_NEWLINE "Come over to this " EZTR_CC_COLOR_RED "tree " EZTR_CC_COLOR_LIGHTBLUE "and " EZTR_CC_COLOR_RED "check" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_LIGHTBLUE "it out!" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] TATL: Fixes incorrect "Goron's Lullaby" by changing it to "Goron Lullaby" to match name in rest of game.
    EZTR_Basic_ReplaceText(
        0x023A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "Aha! So the Gorons fall asleep if" EZTR_CC_NEWLINE "they hear the " EZTR_CC_COLOR_RED "Goron Lullaby" EZTR_CC_COLOR_LIGHTBLUE "!" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AThat's convenient..." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] TATL: Fixes accidental double space between "use?" and "There's"
    EZTR_Basic_ReplaceText(
        0x023B,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "Hey, how do you get up there?" EZTR_CC_NEWLINE "I don't see anything to climb on!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "What can we use? There's really" EZTR_CC_NEWLINE "nothing here besides that jiggly" EZTR_CC_NEWLINE "blob." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TATL: Changes formatting to match better formatting of "two days left" and "one day left" messages
    EZTR_Basic_ReplaceText(
        0x0246,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "Whoa!!! Look at the time! You" EZTR_CC_NEWLINE "don't even have " EZTR_CC_COLOR_RED "three days " EZTR_CC_COLOR_LIGHTBLUE "left!" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TATL: Changes second "L" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x025C,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|68|50" EZTR_CC_COLOR_LIGHTBLUE "L-look!!" EZTR_CC_FADE "|00|1E" EZTR_CC_END "",
        NULL
    );

    // [DELAY FIXES] TATL: Fixes missing delay before "Oops!" Ported from EU
    EZTR_Basic_ReplaceText(
        0x025E,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "I smell salt in the air, so the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "ocean" EZTR_CC_COLOR_LIGHTBLUE " must be near." EZTR_CC_NEWLINE "But with this " EZTR_CC_COLOR_RED "tall fence " EZTR_CC_COLOR_LIGHTBLUE "in the" EZTR_CC_NEWLINE "way, we can't go any farther." EZTR_CC_BOX_BREAK "If only you had a " EZTR_CC_COLOR_RED "horse " EZTR_CC_COLOR_LIGHTBLUE "to ride," EZTR_CC_NEWLINE "we could--" EZTR_CC_DELAY "|00|0AOops!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_DELAY "|00|0ASorry." EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] TATL: Adds comma after "squishy"
    EZTR_Basic_ReplaceText(
        0x0264,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "If you could somehow step on" EZTR_CC_NEWLINE "top of that Octorok, I bet you'd" EZTR_CC_NEWLINE "be able to climb onto that central" EZTR_CC_NEWLINE "pillar." EZTR_CC_BOX_BREAK "But the Octorok is so squishy, and" EZTR_CC_NEWLINE "it keeps squirming around..." EZTR_CC_NEWLINE "There's gotta be something you" EZTR_CC_NEWLINE "can do!" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] SIGNS: Fixes Great Bay Coast sign's incorrect "Temple" by changing it to "Coast". Ported from EU
    EZTR_Basic_ReplaceText(
        0x0326,
        EZTR_WOODEN_SIGN_BACKGROUND,
        32,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Great Bay Coast" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Beware of Leevers, dangerous" EZTR_CC_NEWLINE "deep-sea life-forms!" EZTR_CC_END "",
        NULL
    );

    // [CONFIG] Configuration for Zora Cape Waterfall sign
    if (!CONFIG_BEAVER_SIGN) {
        // [MISTRANSLATION FIXES] SIGNS: Changes "Fall Headwaters" to "Above the Waterfall" to correctly reflect location. Ported from 3DS
        EZTR_Basic_ReplaceText(
            0x0328,
            EZTR_WOODEN_SIGN_BACKGROUND,
            32,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_COLOR_RED "Above the Waterfall" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Beavers' home." EZTR_CC_NEWLINE "Beware of swift currents." EZTR_CC_END "",
            NULL
        );
    };

    // [CONFIG] Configuration for Ikana Butte sign
    if (!CONFIG_IKANA_SIGN) {
        // [MISTRANSLATION FIXES] SIGNS: Changes "Butte" to "Hill" to match name used in rest of game. Ported from 3DS
        EZTR_Basic_ReplaceText(
            0x032E,
            EZTR_WOODEN_SIGN_BACKGROUND,
            32,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_COLOR_RED "Ikana Hill across the canyon." EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Beware of Octoroks!" EZTR_CC_END "",
            NULL
        );
    };

    // [CONSISTENCY CHANGES] SIGNS: Capitalizes "shrine" to match area name, and changes laugh to match other Poe Seller laughs
    EZTR_Basic_ReplaceText(
        0x0333,
        EZTR_WOODEN_SIGN_BACKGROUND,
        32,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Secret Shrine behind waterfall" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Now awaiting the challenges of" EZTR_CC_NEWLINE "bold visitors sure of their might." EZTR_CC_NEWLINE "Yee-hee-hee!" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] SIGNS: Fixes accidental capital "F"
    EZTR_Basic_ReplaceText(
        0x0336,
        EZTR_WOODEN_SIGN_BACKGROUND,
        32,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The door to the Clock Tower" EZTR_CC_NEWLINE "stairway " EZTR_CC_COLOR_RED "opens " EZTR_CC_COLOR_DEFAULT "at " EZTR_CC_COLOR_RED "midnight" EZTR_CC_COLOR_DEFAULT " on" EZTR_CC_NEWLINE "the " EZTR_CC_COLOR_RED "eve" EZTR_CC_COLOR_DEFAULT " of the " EZTR_CC_COLOR_RED "carnival" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "A fireworks show will mark the" EZTR_CC_NEWLINE "occasion." EZTR_CC_NEWLINE "    Clock Town Carnival" EZTR_CC_NEWLINE "    Executive Committee" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TOWN SHOOTING GALLERY: Changes "Rupees" to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x03FB,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|4COy! Oy! You don't have enough" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_PINK "Rupees" EZTR_CC_COLOR_DEFAULT ", sonny!" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES/CONSISTENCY CHANGES] TOWN SHOOTING GALLERY: Fixes color of initial high score to red to match other records, and changes "spectacular prize" to red to match Koume Target Shooting coloring
    EZTR_Basic_ReplaceText(
        0x03FE,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Our highest score is" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "" EZTR_CC_HS_TOWN_SHOOTING_GALLERY "" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "If you break the record, you'll win" EZTR_CC_NEWLINE "a " EZTR_CC_COLOR_RED "spectacular prize" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "Good luck!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] TOWN SHOOTING GALLERY: Fixes color of score to red to match other version of this dialogue
    EZTR_Basic_ReplaceText(
        0x0401,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|4EYou hit " EZTR_CC_COLOR_RED "" EZTR_CC_CHEST_FLAGS "" EZTR_CC_COLOR_DEFAULT ", did ya?" EZTR_CC_NEWLINE "Oh, that's too bad..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TOWN SHOOTING GALLERY: Changes "Rupees" from red to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x0402,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|4BSo? You can't stop, can" EZTR_CC_NEWLINE "ya? You can play as often as" EZTR_CC_NEWLINE "you'd like as long as you have" EZTR_CC_NEWLINE "enough " EZTR_CC_COLOR_PINK "Rupees" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES/GRAMMAR FIXES] TOWN SHOOTING GALLERY: Fixes score to red to match other messages, and adds comma after first "Well"
    EZTR_Basic_ReplaceText(
        0x0407,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Well, look at that!" EZTR_CC_NEWLINE "You hit " EZTR_CC_COLOR_RED "" EZTR_CC_HS_TOWN_SHOOTING_GALLERY "" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "That's a new record!" EZTR_CC_NEWLINE "Well, here ya go!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

// [TYPO FIXES] BANKER: Fixes accidental extra space between "Nothing!" and "Nothing!!!"
    EZTR_Basic_ReplaceText(
        0x044C,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Hey there, little guy!" EZTR_CC_NEWLINE "Won't you deposit some " EZTR_CC_COLOR_PINK "Rupees" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Nowadays, even if people have" EZTR_CC_NEWLINE "money, they don't deposit any." EZTR_CC_NEWLINE "" EZTR_CC_QUICKTEXT_ENABLE "Nothing!" EZTR_CC_QUICKTEXT_DISABLE " " EZTR_CC_QUICKTEXT_ENABLE "Nothing!!!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "So, for a limited time, I'll give you" EZTR_CC_NEWLINE "a special gift based on how much" EZTR_CC_NEWLINE "you deposit." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] BANKER: Adds extra exclamation mark to match other reward messages
    EZTR_Basic_ReplaceText(
        0x045D,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "What's this? You've already saved" EZTR_CC_NEWLINE "up " EZTR_CC_COLOR_RED "5000 Rupees" EZTR_CC_COLOR_DEFAULT "!?!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Well, little guy, I can't take any" EZTR_CC_NEWLINE "more deposits. Sorry, but this is" EZTR_CC_NEWLINE "all I can give you." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] BANKER: Fixes "anymore" by changing it to "any more". Ported from GC
    EZTR_Basic_ReplaceText(
        0x045F,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "Excuuuse me! But I can't take" EZTR_CC_NEWLINE "any more deposits!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Sheesh, little guy! " EZTR_CC_NEWLINE "You're young, but you sure are" EZTR_CC_NEWLINE "serious about saving!" EZTR_CC_NEWLINE "I'm impressed!" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] BANKER: Fixes missing comma after player name
    EZTR_Basic_ReplaceText(
        0x0462,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Hmm..." EZTR_CC_NEWLINE "" EZTR_CC_QUICKTEXT_ENABLE "" EZTR_CC_COLOR_RED "" EZTR_CC_NAME "" EZTR_CC_COLOR_DEFAULT ", is it?" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] BANKER: Fixes formatting by removing accidental NEWLINE and space at beginning. Ported from EU
    EZTR_Basic_ReplaceText(
        0x0468,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_GREEN "" EZTR_CC_THREE_CHOICE "Deposit Rupees" EZTR_CC_NEWLINE "Withdraw Rupees" EZTR_CC_NEWLINE "Nothing really" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/CONSISTENCY CHANGES] BANKER: Changes "Rupees" to capitalized and colors it pink
    EZTR_Basic_ReplaceText(
        0x0475,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "What's this?" EZTR_CC_NEWLINE "Look, little guy, you can't hold" EZTR_CC_NEWLINE "this many " EZTR_CC_COLOR_PINK "Rupees" EZTR_CC_COLOR_DEFAULT "! You got that?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] BANKER: Fixes missing "you"
    EZTR_Basic_ReplaceText(
        0x0476,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "...You haven't deposited that many" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_PINK "Rupees" EZTR_CC_COLOR_DEFAULT ", so that much isn't" EZTR_CC_NEWLINE "available for withdrawal. Do the" EZTR_CC_NEWLINE "math! What are you trying to do?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] KEATON: Fixes accidental extra NEWLINE in first dialogue box
    EZTR_Basic_ReplaceText(
        0x04BC,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Answer me this..." EZTR_CC_NEWLINE "Pick one of the three choices..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "At what time does " EZTR_CC_COLOR_RED "Romani" EZTR_CC_COLOR_DEFAULT ", the" EZTR_CC_NEWLINE "ranch girl, " EZTR_CC_COLOR_RED "wake up" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] KEATON: Changes "mailboxes" to "postboxes" for standardization
    EZTR_Basic_ReplaceText(
        0x04E4,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Answer me this..." EZTR_CC_NEWLINE "Pick one of the three choices..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "How many " EZTR_CC_COLOR_RED "postboxes " EZTR_CC_COLOR_DEFAULT "are there in" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Clock Town" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );
    
    // [TYPO FIXES] NORTH GATE GUARD: Fixes missing period in dialogue while transformed as Zora
    EZTR_Basic_ReplaceText(
        0x0528,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The mountains of " EZTR_CC_COLOR_RED "Snowhead" EZTR_CC_COLOR_DEFAULT " lie" EZTR_CC_NEWLINE "this way." EZTR_CC_NEWLINE "Be careful." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] EAST GATE GUARD: Changes "at" to "in"
    EZTR_Basic_ReplaceText(
        0x0536,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "Stop right there!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "Have you some errand in the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "canyon" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "It is dangerous at night, so I" EZTR_CC_NEWLINE "cannot allow a child like you to..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "..." EZTR_CC_DELAY "|00|0AA" EZTR_CC_COLOR_RED " sword" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SOUTH GATE GUARD: Changes "swamp at" to default color to match other messages
    EZTR_Basic_ReplaceText(
        0x0541,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "If you don't know, then never" EZTR_CC_NEWLINE "mind. I'm just a little uneasy about" EZTR_CC_NEWLINE "all this." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_QUICKTEXT_ENABLE "Anyway, the swamp at " EZTR_CC_COLOR_RED "Woodfall" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "lies this way. Be careful." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] WEST GATE GUARD: Ports GC formatting fixes.
    EZTR_Basic_ReplaceText(
        0x0555,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Well, whatever you do, you had" EZTR_CC_NEWLINE "better get as far away from here" EZTR_CC_NEWLINE "as you can." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "And there are still people lingering" EZTR_CC_NEWLINE "in the stores..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "If only an evacuation notice had" EZTR_CC_NEWLINE "been posted, I would be able to" EZTR_CC_NEWLINE "force them all to leave..." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] NORTH GATE GUARD: Fixes formatting by changing to BOX_BREAK2
    EZTR_Basic_ReplaceText(
        0x0561,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "Wait a moment, Deku Scrub!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "Have you some errand in the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "mountains" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "It is dangerous at night, so I" EZTR_CC_NEWLINE "cannot allow a child like you to go" EZTR_CC_NEWLINE "out alone." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Until you are old enough to carry" EZTR_CC_NEWLINE "a " EZTR_CC_COLOR_RED "weapon" EZTR_CC_COLOR_DEFAULT ", you cannot pass" EZTR_CC_NEWLINE "through here without being " EZTR_CC_NEWLINE "accompanied by an adult." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] WEST GATE GUARD: Fixes missing "by" before "an adult"
    EZTR_Basic_ReplaceText(
        0x0563,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "Wait a moment, Deku Scrub!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "Have you some errand at the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "ocean" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "It is dangerous at night, so I" EZTR_CC_NEWLINE "cannot allow a child like you to go" EZTR_CC_NEWLINE "out alone." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Until you are old enough to carry" EZTR_CC_NEWLINE "a " EZTR_CC_COLOR_RED "weapon" EZTR_CC_COLOR_DEFAULT ", you cannot pass " EZTR_CC_NEWLINE "through here without being" EZTR_CC_NEWLINE "accompanied by an adult." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] WEST GATE GUARD: Fixes incorrect "in the mountains" to "at the ocean" while having your sword upgraded at night. Ported from EU
    EZTR_Basic_ReplaceText(
        0x0569,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "Hey! Stop right there!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "Have you some errand at the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "ocean" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "It's dangerous at night, so I" EZTR_CC_NEWLINE "cannot allow a child like you to..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "..." EZTR_CC_DELAY "|00|0ADo you have a " EZTR_CC_COLOR_RED "sword" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES/CONSISTENCY CHANGES] SOUTH GATE GUARD: Ports GC text color fixes, and adds missing information "at night" from JP and to match other messages
    EZTR_Basic_ReplaceText(
        0x056C,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "Hey! Stop right there!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "Have you some errand in the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "swamp" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "I cannot allow a child like you to..." EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AYour " EZTR_CC_COLOR_RED "sword" EZTR_CC_COLOR_DEFAULT " was " EZTR_CC_COLOR_RED "stolen" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "That's terrible!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Lately, I've been hearing about a" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "shady shop" EZTR_CC_COLOR_DEFAULT " in town that" EZTR_CC_NEWLINE "apparently sells " EZTR_CC_COLOR_RED "stolen goods" EZTR_CC_COLOR_DEFAULT "at " EZTR_CC_COLOR_RED "night" EZTR_CC_COLOR_DEFAULT "..." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Perhaps this is their doing." EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AYou're pretty good with a " EZTR_CC_COLOR_RED "sword" EZTR_CC_COLOR_DEFAULT "," EZTR_CC_NEWLINE "aren't you?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] SOUTH GATE GUARD: Changes "sword", "stolen" and "night" to red to match other messages. Change to "night" was ported from GC
    EZTR_Basic_ReplaceText(
        0x056D,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Have you some errand in the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "swamp" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "It's dangerous at night, so I" EZTR_CC_NEWLINE "cannot allow a child like you to..." EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AYour " EZTR_CC_COLOR_RED "sword" EZTR_CC_COLOR_DEFAULT " was " EZTR_CC_COLOR_RED "stolen" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "So it is true..." EZTR_CC_DELAY "|00|0ALately, I've been" EZTR_CC_NEWLINE "hearing about a " EZTR_CC_COLOR_RED "shady store" EZTR_CC_COLOR_DEFAULT " in" EZTR_CC_NEWLINE "town that sells " EZTR_CC_COLOR_RED "stolen goods " EZTR_CC_COLOR_DEFAULT "at" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "night" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_BOX_BREAK "This must be a result of their" EZTR_CC_NEWLINE "activities..." EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ASo, you're pretty good with a" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "sword" EZTR_CC_COLOR_DEFAULT ", are you?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] WEST GATE GUARD: Changes "in" to "at"
    EZTR_Basic_ReplaceText(
        0x0570,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "Hey! Stop right there!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "Have you some errand at the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "ocean" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "I cannot allow a child like you to..." EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AYour " EZTR_CC_COLOR_RED "sword" EZTR_CC_COLOR_DEFAULT " was " EZTR_CC_COLOR_RED "stolen" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "That's terrible!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Lately, I've been hearing about a" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "shady shop" EZTR_CC_COLOR_DEFAULT " in town that sells" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "stolen goods" EZTR_CC_COLOR_DEFAULT " late at " EZTR_CC_COLOR_RED "night" EZTR_CC_COLOR_DEFAULT "..." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Perhaps this is their doing." EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ASo, you're pretty good with a" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "sword" EZTR_CC_COLOR_DEFAULT ", are you?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] GREAT FAIRY OF MAGIC: Standardizes "magic power" as all lowercase
    EZTR_Basic_ReplaceText(
        0x057A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Tatl, and you, young one of the" EZTR_CC_NEWLINE "altered shape..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Thank you for returning my broken" EZTR_CC_NEWLINE "and shattered body to normal." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "I am the " EZTR_CC_COLOR_GREEN "Great Fairy of Magic" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "I thought that masked child was" EZTR_CC_NEWLINE "helping me, and I grew careless." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "All I can offer you now is this:" EZTR_CC_NEWLINE "I shall grant you " EZTR_CC_COLOR_GREEN "magic power" EZTR_CC_COLOR_DEFAULT " as" EZTR_CC_NEWLINE "a sign of my gratitude." EZTR_CC_NEWLINE "Please accept it!" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] GREAT FAIRY OF POWER: Ports GC formatting fixes.
    EZTR_Basic_ReplaceText(
        0x059C,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Oh, strong young one!" EZTR_CC_NEWLINE "I am the " EZTR_CC_COLOR_RED "Great Fairy of Power" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Thank you for returning my broken" EZTR_CC_NEWLINE "and shattered body to normal." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "As thanks, I shall ease your" EZTR_CC_NEWLINE "weariness." EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] GREAT FAIRY OF COURAGE: Fixes color of Great Bay Great Fairy's name to blue to match their fountain and subsequent visit name color 
    EZTR_Basic_ReplaceText(
        0x059F,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Oh, courageous young one!" EZTR_CC_NEWLINE "I am the " EZTR_CC_COLOR_BLUE "Great Fairy of Courage" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Thank you for returning my broken" EZTR_CC_NEWLINE "and shattered body to normal." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "As thanks, I shall lend you my" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "strength" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] GREAT FAIRY OF WISDOM: Fixes Snowhead Great Fairy incorrectly introducing herself as "Great Fairy of Courage" on subsequent visits, and fixes surrounding dialogue to match. Ported from EU
    EZTR_Basic_ReplaceText(
        0x05A0,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Oh, wise young one!" EZTR_CC_NEWLINE "I am the " EZTR_CC_COLOR_GREEN "Great Fairy of Wisdom" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Thank you for returning my broken" EZTR_CC_NEWLINE "and shattered body to normal." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "As thanks, I shall ease your" EZTR_CC_NEWLINE "weariness." EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES/CONSISTENCY CHANGES] GREAT FAIRY OF WISDOM: Fixes color of Snowhead Great Fairy's name to match their fountain and subsequent visit name color, and standardizes "magic power" as all lowercase
    EZTR_Basic_ReplaceText(
        0x05A3,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Oh, wise young one!" EZTR_CC_NEWLINE "I am the " EZTR_CC_COLOR_GREEN "Great Fairy of Wisdom" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Thank you for returning my broken" EZTR_CC_NEWLINE "and shattered body to normal." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "As thanks, I shall enhance your" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "magic power" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] GREAT FAIRY OF COURAGE: Fixes Great Bay Great Fairy incorrectly introducing herself as "Great Fairy of Wisdom" on subsequent visits, and fixes surrounding dialogue to match. Ported from EU
    EZTR_Basic_ReplaceText(
        0x05A4,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Oh, courageous young one!" EZTR_CC_NEWLINE "I am the " EZTR_CC_COLOR_BLUE "Great Fairy of Courage" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Thank you for returning my broken" EZTR_CC_NEWLINE "and shattered body to normal." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "As thanks, I shall ease your" EZTR_CC_NEWLINE "weariness." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] GREAT FAIRY OF KINDNESS: Fixes missing "Great" before "Fairy's Sword"
    EZTR_Basic_ReplaceText(
        0x05A7,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Oh, compassionate young one!" EZTR_CC_NEWLINE "I am the " EZTR_CC_COLOR_YELLOW "Great Fairy of Kindness" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Thank you for returning my broken" EZTR_CC_NEWLINE "and shattered body to normal." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "As thanks, I grant you the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Great Fairy's Sword" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] SHIKASHI: Fixes incorrect sound effect from "6949" to "6946". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x05EC,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|46Well, well...A strange-looking child" EZTR_CC_NEWLINE "has joined me today..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Are you a new friend of the" EZTR_CC_NEWLINE "Bombers gang?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "...Hmmm." EZTR_CC_NEWLINE "Your manners seem much better" EZTR_CC_NEWLINE "than those of your mischievous" EZTR_CC_NEWLINE "friend from the other day." EZTR_CC_BOX_BREAK "" EZTR_CC_SFX "|69|47Hrnf, hrnf, hrnf!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SHIKASHI: Capitalizes "clock tower" for standardization
    EZTR_Basic_ReplaceText(
        0x05EE,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Even now! Just watch him! He's" EZTR_CC_NEWLINE "probably causing trouble around" EZTR_CC_NEWLINE "the " EZTR_CC_COLOR_RED "Clock Tower" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SHIKASHI: Capitalizes "clock tower" for standardization
    EZTR_Basic_ReplaceText(
        0x05F1,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Well, did you find that" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "troublemaker" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "You can zoom in with " EZTR_CC_BTN_A "." EZTR_CC_NEWLINE "Try looking near the " EZTR_CC_COLOR_RED "Clock Tower" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES/CONSISTENCY CHANGES] SHIKASHI: Changes "clock tower" and "clock door" to red to match JP, and capitalizes the former for standardization
    EZTR_Basic_ReplaceText(
        0x05F3,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "But I wonder how that" EZTR_CC_NEWLINE "troublemaker got on top of the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Clock Tower" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "The only way up there is through" EZTR_CC_NEWLINE "the " EZTR_CC_COLOR_RED "clock door" EZTR_CC_COLOR_DEFAULT ", and that opens" EZTR_CC_NEWLINE "only on the " EZTR_CC_COLOR_RED "eve of the carnival" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SHIKASHI: Capitalizes "clock tower" for standardization
    EZTR_Basic_ReplaceText(
        0x05F4,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "What could that " EZTR_CC_COLOR_RED "troublemaker" EZTR_CC_COLOR_DEFAULT " be" EZTR_CC_NEWLINE "doing atop the " EZTR_CC_COLOR_RED "Clock Tower" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "I just hope he's not plotting" EZTR_CC_NEWLINE "another one of his no-good" EZTR_CC_NEWLINE "tricks..." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] TOWN BUSINESS SCRUB: Adds comma after "shop"
    EZTR_Basic_ReplaceText(
        0x060E,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|39|8BI've already sold out of my wares," EZTR_CC_NEWLINE "and the carnival hasn't even" EZTR_CC_NEWLINE "begun." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "I'm thinking of closing up shop, so" EZTR_CC_NEWLINE "I can buy a gift for my wife and" EZTR_CC_NEWLINE "return to her in my village!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] TOWN BUSINESS SCRUB: Adds comma after "spot"
    EZTR_Basic_ReplaceText(
        0x0615,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "If you have one, I'll trade you this" EZTR_CC_NEWLINE "spot, and I'll throw in the Deku" EZTR_CC_NEWLINE "Flower, too!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "This is a very popular spot among" EZTR_CC_NEWLINE "Deku Scrubs. Haven't you heard" EZTR_CC_NEWLINE "about this spot? I'm telling you," EZTR_CC_NEWLINE "it's a real bargain!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONFIG] Configuration for Bremor translation
    if (CONFIG_CARPENTER != CARPENTER_VANILLA) {
        if (CONFIG_CARPENTER == CARPENTER_GC) { 
            // [TRANSLATION FIXES] BREMOR: Fixes Day 1 dialogue "Brac" mistranslation to match GC
            EZTR_Basic_ReplaceText(
                0x061C,
                EZTR_STANDARD_TEXT_BOX_I,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "" EZTR_CC_SFX "|69|6ATsk! Another all-nighter t'night?" EZTR_CC_NEWLINE "I wonder if we'll finish it..." EZTR_CC_EVENT2 "" EZTR_CC_END "",
                NULL
            );
            // [TRANSLATION FIXES] BREMOR: Fixes Day 2 dialogue "Brac" mistranslation to match GC
            EZTR_Basic_ReplaceText(
                0x061F,
                EZTR_STANDARD_TEXT_BOX_I,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "" EZTR_CC_SFX "|69|6ATch! Stupid all-nighters..." EZTR_CC_NEWLINE "Can we finish this in time?" EZTR_CC_EVENT2 "" EZTR_CC_END "",
                    NULL
            );
        } else {
            // [TRANSLATION FIXES] BREMOR: Fixes Day 1 dialogue "Brac" mistranslation to match EU and 3DS
            EZTR_Basic_ReplaceText(
                0x061C,
                EZTR_STANDARD_TEXT_BOX_I,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "" EZTR_CC_SFX "|69|6AHeigh-ho, heigh-ho!" EZTR_CC_NEWLINE "It looks like another all-nighter." EZTR_CC_NEWLINE "I wonder if that'll get finished." EZTR_CC_EVENT2 "" EZTR_CC_END "",
                NULL
            );
            // [TRANSLATION FIXES] BREMOR: Fixes Day 2 dialogue "Brac" mistranslation to match EU and 3DS
            EZTR_Basic_ReplaceText(
                0x061F,
                EZTR_STANDARD_TEXT_BOX_I,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "" EZTR_CC_SFX "|69|6AHeigh-ho, heigh-ho!" EZTR_CC_NEWLINE "It's gonna be another all-nighter" EZTR_CC_NEWLINE "like I figured. I wonder if it'll get" EZTR_CC_NEWLINE "finished on time." EZTR_CC_EVENT2 "" EZTR_CC_END "",
                NULL
            );
            // [TRANSLATION FIXES] BREMOR: Changes Day 3 dialogue to match EU and 3DS
            EZTR_Basic_ReplaceText(
                0x0622,
                EZTR_STANDARD_TEXT_BOX_I,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "" EZTR_CC_SFX "|69|6AHeigh-ho, heigh-ho!" EZTR_CC_NEWLINE "I knew it..." EZTR_CC_NEWLINE "It's startin' to feel like this job'll" EZTR_CC_NEWLINE "be impossible." EZTR_CC_EVENT2 "" EZTR_CC_END "",
                NULL
            );
        };
    };

    // [GRAMMAR FIXES] TOWN BUSINESS SCRUB: Adds comma after "shop"
    EZTR_Basic_ReplaceText(
        0x0628,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|39|8BThe town's carnival is starting to" EZTR_CC_NEWLINE "look a little iffy." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "I'm thinking of closing up shop, so" EZTR_CC_NEWLINE "I can get a gift for my wife and" EZTR_CC_NEWLINE "return to her in my village..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MUTOH: Capitalizes "clock tower" for standardization
    EZTR_Basic_ReplaceText(
        0x062B,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|4FIt's the eve of the carnival, and" EZTR_CC_NEWLINE "I can't even get to the Clock" EZTR_CC_NEWLINE "Tower's stairway entrance!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "This stinks worse than Dodongo" EZTR_CC_NEWLINE "breath! Hmph! This had better be" EZTR_CC_NEWLINE "the last of the surprises!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MUTOH: Capitalizes both instances of "clock tower" for standardization 
    EZTR_Basic_ReplaceText(
        0x062C,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|4FHey, Deku kid! You waitin' for us" EZTR_CC_NEWLINE "to finish the bridge from the" EZTR_CC_NEWLINE "festival tower to the " EZTR_CC_COLOR_RED "Clock Tower" EZTR_CC_NEWLINE "entrance " EZTR_CC_COLOR_DEFAULT "up there?" EZTR_CC_BOX_BREAK "Sorry! My apprentices panicked" EZTR_CC_NEWLINE "and ran away! This is all we get" EZTR_CC_NEWLINE "for a festival tower. It's not quite" EZTR_CC_NEWLINE "tall enough, is it? Sheesh!" EZTR_CC_BOX_BREAK "Even if we went to the top of the" EZTR_CC_NEWLINE "festival tower, we wouldn't be able" EZTR_CC_NEWLINE "to get up to the Clock Tower" EZTR_CC_NEWLINE "entrance!" EZTR_CC_BOX_BREAK "I apologize for all this." EZTR_CC_NEWLINE "I wish I could scare that moon" EZTR_CC_NEWLINE "away!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] TRADING POST OWNER: Fixes missing period after CONTROL_PAD
    EZTR_Basic_ReplaceText(
        0x0640,
        EZTR_STANDARD_TEXT_BOX_II,
        49,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "View items with " EZTR_CC_CONTROL_PAD "." EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "Talk to the shopkeeper" EZTR_CC_NEWLINE "Leave" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] BOMB SHOP OWNER: Changes "bomb bag" to be capitalized and changes it to red to match other messages talking about this item
    EZTR_Basic_ReplaceText(
        0x0645,
        EZTR_STANDARD_TEXT_BOX_II,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I can't sell you any if you don't" EZTR_CC_NEWLINE "have a " EZTR_CC_COLOR_RED "Bomb Bag" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] OLD LADY FROM BOMB SHOP: Changes "Giants" to lowercase to match rest of game
    EZTR_Basic_ReplaceText(
        0x065A,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "A nice fella helped me out, so we" EZTR_CC_NEWLINE "can finally sell " EZTR_CC_COLOR_RED "Big Bomb Bags" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Once again, the giants are looking" EZTR_CC_NEWLINE "out for me!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLD LADY FROM BOMB SHOP: Changes "Daddy's" to lowercase
    EZTR_Basic_ReplaceText(
        0x065C,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "But it's been our lifelong dream to" EZTR_CC_NEWLINE "sell " EZTR_CC_COLOR_RED "Big Bomb Bags " EZTR_CC_COLOR_DEFAULT "since back in" EZTR_CC_NEWLINE "your daddy's day." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Since we can't get the Goron-made" EZTR_CC_NEWLINE "goods, this was our big chance," EZTR_CC_NEWLINE "sonny!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] BOMB SHOP GORON: Adds period at beginning to complete ellipsis
    EZTR_Basic_ReplaceText(
        0x0665,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "...This is just between us, but I" EZTR_CC_NEWLINE "have a huge bomb that this shop" EZTR_CC_NEWLINE "doesn't even carry." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [DELAY FIXES] BOMB SHOP GORON: Fixes incorrect delay length value. Ported from EU
    EZTR_Basic_ReplaceText(
        0x066A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "Oh!" EZTR_CC_QUICKTEXT_DISABLE " " EZTR_CC_DELAY "|00|04But my product is so heavy," EZTR_CC_NEWLINE "I don't think you can carry it..." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/FORMATTING FIXES] BOMB SHOP GORON: Fixes capitalized "Instructor" and changes it to lowercase to match rest of game text, and fixes formatting
    EZTR_Basic_ReplaceText(
        0x067F,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "Huh?" EZTR_CC_QUICKTEXT_DISABLE " " EZTR_CC_DELAY "|00|04Do you mean that you still" EZTR_CC_NEWLINE "aren't approved to carry " EZTR_CC_COLOR_RED "Powder" EZTR_CC_NEWLINE "Kegs" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_SFX "|39|1CToo bad. I was hoping I could sell" EZTR_CC_NEWLINE "you my last one." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN " " EZTR_CC_BOX_BREAK2 "Powder Kegs are extremely" EZTR_CC_NEWLINE "powerful and dangerous, so those" EZTR_CC_NEWLINE "who haven't been " EZTR_CC_COLOR_RED "approved " EZTR_CC_COLOR_DEFAULT "by the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "instructor" EZTR_CC_COLOR_DEFAULT " can't carry them." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] TRADING POST OWNER: Ports GC formatting fixes.
    EZTR_Basic_ReplaceText(
        0x06A7,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|51Welcome." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Hey, you're pretty fit. I'll bet you" EZTR_CC_NEWLINE "do a lot of training!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TRADING POST OWNER: Standardizes "magic power" as all lowercase
    EZTR_Basic_ReplaceText(
        0x06B2,
        EZTR_STANDARD_TEXT_BOX_II,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        30,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Green Potion: 30 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Use this if your magic power is" EZTR_CC_NEWLINE "low. But first, you'll need an" EZTR_CC_NEWLINE "empty bottle." EZTR_CC_PERSISTENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] TRADING POST OWNER: Fixes lowercase "arrows"
    EZTR_Basic_ReplaceText(
        0x06BB,
        EZTR_STANDARD_TEXT_BOX_II,
        49,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        40,
        EZTR_NO_VALUE,
        true,
        "50 Arrows: 40 Rupees" EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "I'll buy them" EZTR_CC_NEWLINE "No thanks" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] NIGHT TRADING POST GUY: Changes "Rupees" to pink
    EZTR_Basic_ReplaceText(
        0x06DA,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Heyyy...You don't even have enough" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_PINK "Rupees" EZTR_CC_COLOR_DEFAULT ", man!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] NIGHT TRADING POST GUY: Fixes incorrect "anymore" by changing to "any more". Ported from GC
    EZTR_Basic_ReplaceText(
        0x06DB,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "What? Heyyy, man! You can't hold" EZTR_CC_NEWLINE "any more!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] JIM: Changes "but" to lowercase like in other version of this message. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x070F,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|00I thought you were tougher than" EZTR_CC_NEWLINE "that...but you're nothing special!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] JIM: Adds comma after "rules"
    EZTR_Basic_ReplaceText(
        0x0710,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|03You did it!" EZTR_CC_NEWLINE "So what's your name, guy?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_DELAY "|00|0A" EZTR_CC_COLOR_RED "" EZTR_CC_NAME "" EZTR_CC_COLOR_DEFAULT ", huh?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "All right! That Skull Kid broke our" EZTR_CC_NEWLINE "rules, and he's been doing all" EZTR_CC_NEWLINE "kinds of bad things lately." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Starting today, he's out! I'm" EZTR_CC_NEWLINE "making " EZTR_CC_COLOR_RED "" EZTR_CC_NAME "" EZTR_CC_COLOR_DEFAULT " a " EZTR_CC_COLOR_RED "Bomber" EZTR_CC_COLOR_DEFAULT "! You" EZTR_CC_NEWLINE "guys don't mind, right?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] JIM: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x0733,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_DELAY "|00|0A" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|69|03You're pretty good!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "You managed to figure out a " EZTR_CC_COLOR_RED "code" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "that only we know! Now that's" EZTR_CC_NEWLINE "something! I like you!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] BOMBER: Changes "Observatory" to lowercase to match rest of game
    EZTR_Basic_ReplaceText(
        0x0749,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The " EZTR_CC_COLOR_RED "secret route" EZTR_CC_COLOR_DEFAULT " to the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "observatory" EZTR_CC_COLOR_DEFAULT "? How do you know" EZTR_CC_NEWLINE "about that?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Only " EZTR_CC_COLOR_RED "Jim" EZTR_CC_COLOR_DEFAULT " and us are supposed to" EZTR_CC_NEWLINE "know about that " EZTR_CC_COLOR_RED "secret route" EZTR_CC_COLOR_DEFAULT "..." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );
    
    // [FORMATTING FIXES] BOMBER: Adds NEWLINE at beginning to fix broken formatting
    EZTR_Basic_ReplaceText(
        0x075A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_NEWLINE "Do you remember the code?" EZTR_CC_NEWLINE "It's " EZTR_CC_COLOR_RED "" EZTR_CC_BOMBER_CODE "" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Go to the " EZTR_CC_COLOR_RED "secret hideout" EZTR_CC_COLOR_DEFAULT " before" EZTR_CC_NEWLINE "you forget it! It's in " EZTR_CC_COLOR_RED "East Clock" EZTR_CC_NEWLINE "Town" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] DEKU PALACE GUARD: Fixes formatting by changing to BOX_BREAK2
    EZTR_Basic_ReplaceText(
        0x082F,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|82I saw it! That " EZTR_CC_COLOR_RED "monkey" EZTR_CC_COLOR_DEFAULT " and the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "princess" EZTR_CC_COLOR_DEFAULT " entering the " EZTR_CC_COLOR_RED "temple" EZTR_CC_COLOR_DEFAULT " at" EZTR_CC_NEWLINE "night!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "...But only the monkey came" EZTR_CC_NEWLINE "back out!" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] DEKU PALACE GUARD: Capitalizes "royal family" to match rest of game
    EZTR_Basic_ReplaceText(
        0x0831,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|82Only Royal Family members can" EZTR_CC_NEWLINE "enter the sunken temple, so it's" EZTR_CC_NEWLINE "obvious that the monkey was" EZTR_CC_NEWLINE "using her!" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] KOTAKE: Fixes formatting by removing extraneous NEWLINE at end.
    EZTR_Basic_ReplaceText(
        0x0834,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|CBTee-hee-hee!" EZTR_CC_NEWLINE "...Welcome." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "My potions work very well," EZTR_CC_NEWLINE "they do." EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TRANSLATION FIXES/TYPO FIXES] KOTAKE: Ports "gathering herbs" to "picking mushrooms" change from EU and fixes accidental capital "P" added in that version
    EZTR_Basic_ReplaceText(
        0x0849,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Have you seen an old hag named" EZTR_CC_NEWLINE "Koume who looks just like me?" EZTR_CC_NEWLINE "She hasn't come back from" EZTR_CC_NEWLINE "picking mushrooms..." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] KOUME: Fixes incorrect sound effect from "3901" to "3AC7". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x0859,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|C7Oh! Thanks for what you did back" EZTR_CC_NEWLINE "there!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "In a special deal just for you, I'll" EZTR_CC_NEWLINE "let you take this cruise for free." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] KOUME: Adds comma after "unfortunately"
    EZTR_Basic_ReplaceText(
        0x0867,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|C7Well, this is where the boat" EZTR_CC_NEWLINE "cruise leaves from, but" EZTR_CC_NEWLINE "unfortunately, it's for humans only." EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] KOUME: Fixes incorrect sound effect from "3901" to "3AC7".
    EZTR_Basic_ReplaceText(
        0x0868,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|C7Oh! Thanks for what you did back" EZTR_CC_NEWLINE "there!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "As a special just for you, I'll let" EZTR_CC_NEWLINE "you take this cruise for free." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] KOUME: Changes "Rupees" to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x0875,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Why, you don't have enough" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_PINK "Rupees" EZTR_CC_COLOR_DEFAULT "! Don't you try to make" EZTR_CC_NEWLINE "a fool out of me!" EZTR_CC_END "",
        NULL
    );

    // [CONFIG] Configuration for formatting of Koume's highscore dialogue
    if (!CONFIG_KOUME_FORMAT) {
        // [FORMATTING FIXES/COLOR FIXES] KOUME: Ports GC formatting fixes, and changes "hits" to red to match similar messages.
        EZTR_Basic_ReplaceText(
            0x0876,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Your last record was" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "" EZTR_CC_HS_BOAT_ARCHERY " hits" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_SFX "|39|01If you get more than that, you'll" EZTR_CC_NEWLINE "win a " EZTR_CC_COLOR_RED "prize" EZTR_CC_COLOR_DEFAULT ". " EZTR_CC_NEWLINE "Now, then. Here we go!" EZTR_CC_END "",
            NULL
        );
    } else {
        // [FORMATTING FIXES/COLOR FIXES] KOUME: Ports EU formatting fixes, and changes "hits" to red to match similar messages
        EZTR_Basic_ReplaceText(
            0x0876,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Your last record was" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "" EZTR_CC_HS_BOAT_ARCHERY " hits" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_SFX "|39|01If you get more than that, you'll" EZTR_CC_NEWLINE "win a " EZTR_CC_COLOR_RED "prize" EZTR_CC_COLOR_DEFAULT ". " EZTR_CC_BOX_BREAK "Now, then. Here we go!" EZTR_CC_END "",
            NULL
        );
    };

    // [TYPO FIXES/COLOR FIXES] KOUME: Fixes missing puncuation after "hits" and colors score red to match other results dialogue 
    EZTR_Basic_ReplaceText(
        0x0878,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|39|01" EZTR_CC_COLOR_RED "" EZTR_CC_POINTS_BOAT_ARCHERY " hits" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "Say...you're pretty good." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Well, as I promised..." EZTR_CC_NEWLINE "Here! Take this." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] KOUME: Colors score red to match other results dialogues
    EZTR_Basic_ReplaceText(
        0x087A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|C7Wow! That was sloppy!" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "" EZTR_CC_POINTS_BOAT_ARCHERY " hits" EZTR_CC_COLOR_DEFAULT ", eh..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] KOUME: Changes color of first comma to match rest of game
    EZTR_Basic_ReplaceText(
        0x087C,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|C7Wow. That was sloppy!" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "" EZTR_CC_POINTS_BOAT_ARCHERY " hits" EZTR_CC_COLOR_DEFAULT ", huh?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "You have to get more than " EZTR_CC_COLOR_RED "" EZTR_CC_HS_BOAT_ARCHERY " hits" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "Otherwise, no prize." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] KOUME: Changes score to red to match other results dialogues
    EZTR_Basic_ReplaceText(
        0x087D,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "" EZTR_CC_POINTS_BOAT_ARCHERY "" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "Pretty good, considering..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_SFX "|39|01Well, as I promised..." EZTR_CC_NEWLINE "Here! Take this." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] KOTAKE: Changes color of comma to match rest of game
    EZTR_Basic_ReplaceText(
        0x0881,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "What's that? You want a " EZTR_CC_COLOR_BLUE "Blue" EZTR_CC_NEWLINE "Potion" EZTR_CC_COLOR_DEFAULT ", do you?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Well, you gave me a mushroom, so" EZTR_CC_NEWLINE "I'll give you one for free." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] MR. MONKEY: Fixes misplacement of CC_COLOR_RED, causing "Please!" to be accidentally be red. Ported from 3DS 
    EZTR_Basic_ReplaceText(
        0x08D3,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "If you have one, show me! We" EZTR_CC_NEWLINE "have to use it..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Please! " EZTR_CC_COLOR_RED "An instrument that can " EZTR_CC_NEWLINE "blare out a lot of sound that'll" EZTR_CC_NEWLINE "carry a long way" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] MR. MONKEY: Fixes incorrect sound effect from "2693" to "2963". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x08E8,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|63Ooh! Hot! Hot!" EZTR_CC_NEWLINE "St-stop it! Please!!!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] SWAMP SPIDER HOUSE MAN: Adds comma after "rich"
    EZTR_Basic_ReplaceText(
        0x0917,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "You see, a while back, someone" EZTR_CC_NEWLINE "told me I could become rich, and" EZTR_CC_NEWLINE "he gave me this " EZTR_CC_COLOR_RED "mask" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "He said the instructions were" EZTR_CC_NEWLINE "inscribed somewhere in here, but" EZTR_CC_NEWLINE "when I went to look, I was" EZTR_CC_NEWLINE "cursed!" EZTR_CC_BOX_BREAK "If I had known it would be such" EZTR_CC_NEWLINE "an ordeal, I never would have" EZTR_CC_NEWLINE "taken it. Here! Take it!" EZTR_CC_NEWLINE "It's yours!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] SWAMP SPIDER HOUSE MAN: Adds comma after "rich"
    EZTR_Basic_ReplaceText(
        0x091A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "You see, a while back, someone" EZTR_CC_NEWLINE "told me that I could become rich," EZTR_CC_NEWLINE "and he gave me this " EZTR_CC_COLOR_RED "mask" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "He said the instructions were" EZTR_CC_NEWLINE "inscribed somewhere in here, but" EZTR_CC_NEWLINE "when I went to look, I was" EZTR_CC_NEWLINE "cursed!" EZTR_CC_BOX_BREAK "If I had known it would be such" EZTR_CC_NEWLINE "an ordeal, I never would have" EZTR_CC_NEWLINE "taken it. I'm getting rid of it!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] BEAN SELLER: Changes "10 Rupees" from red to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x0933,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        10,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|67It's " EZTR_CC_COLOR_PINK "10 Rupees" EZTR_CC_COLOR_DEFAULT " for one pod." EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "I'll buy it" EZTR_CC_NEWLINE "No thanks" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] BEAN SELLER: Fixes incorrect "anymore" by changing to "any more". Ported from GC
    EZTR_Basic_ReplaceText(
        0x0937,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|68Mmm..." EZTR_CC_NEWLINE "You can't carry any more." EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] DEKU PRINCESS: Formatting fixes by changing to BOX_BREAK2.
    EZTR_Basic_ReplaceText(
        0x0962,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|39|8CAha! Just as I suspected!" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AYou see, your body smells a little" EZTR_CC_NEWLINE "bit like monkey." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "So...the monkey made it back fine" EZTR_CC_NEWLINE "after all. That's good." EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] DEKU PRINCESS: Fixes incorrect sound effect from "6394" to "6934". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x0963,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I was worried that when I didn't" EZTR_CC_NEWLINE "come home, my father would think" EZTR_CC_NEWLINE "that monkey had kidnapped me!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "I was worried that my father" EZTR_CC_NEWLINE "would even go so far as to punish" EZTR_CC_NEWLINE "the poor monkey!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_SFX "|69|34Hoo-hoo-hoo." EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] DEKU PRINCESS: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x0964,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_DELAY "|00|0A......" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ADon't tell me..."  EZTR_CC_DELAY "|00|14" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|69|35" EZTR_CC_QUICKTEXT_ENABLE "" EZTR_CC_COLOR_RED "Are you serious" EZTR_CC_COLOR_DEFAULT "?!?" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_FADE_SKIPPABLE "|01|53" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES/GRAMMAR FIXES] DEKU PRINCESS: Changes "father" to be capitalized, and fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x0965,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Is Father actually doing that?!?" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|69|36Yet another hasty decision," EZTR_CC_NEWLINE "Father!" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] DEKU PRINCESS: Changes second "W" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x0966,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|39|37W-well, we haven't any time to" EZTR_CC_NEWLINE "lose..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Quickly, Mr. " EZTR_CC_NAME ", could you" EZTR_CC_NEWLINE "please find something to " EZTR_CC_COLOR_RED "carry" EZTR_CC_COLOR_DEFAULT " me" EZTR_CC_NEWLINE "in so you can take me to the" EZTR_CC_NEWLINE "Deku Palace?" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] DEKU PRINCESS: Standardizes stutters in "Hwh-Hwhy," "Huh-Hurry" and "Ho-Hopen" to lowercase
    EZTR_Basic_ReplaceText(
        0x0969,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_DEKU_PRINCESS,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|39|37Hwh-hwhy are you hwaiting?" EZTR_CC_NEWLINE "Mr. " EZTR_CC_COLOR_RED "" EZTR_CC_NAME "" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Huh-hurry! Ho-hopen this " EZTR_CC_COLOR_RED "bottle" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "and release me right hwh-hwhere" EZTR_CC_NEWLINE "my father is standing." EZTR_CC_FADE "|00|1E" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] DEKU PRINCESS: Changes second "H" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x096A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|36H-hufff-huhhh!" EZTR_CC_NEWLINE "" EZTR_CC_QUICKTEXT_ENABLE "Foolish father!!!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_FADE "|00|14" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] DEKU PRINCESS: Changes third "H" in "Huh-Hurry" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x0971,
        EZTR_STANDARD_TEXT_BOX_I,
        16,
        EZTR_ICON_DEKU_PRINCESS,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|37Ungh! Mr. " EZTR_CC_COLOR_RED "" EZTR_CC_NAME "" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "There's nuh-no time to lose!" EZTR_CC_NEWLINE "Huh-hurry! Take me to the palace!" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] BOAT TOUR: Fixes "swampwater" typo by changing to "swamp water". Ported from GC
    EZTR_Basic_ReplaceText(
        0x09E4,
        EZTR_STANDARD_TEXT_BOX_I,
        16,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Now arriving at " EZTR_CC_COLOR_RED "Deku Palace" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_BOX_BREAK_DELAYED "|00|28" EZTR_CC_CARRIAGE_RETURN "The swamp water is poisonous" EZTR_CC_NEWLINE "here, so please watch your step." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] SWAMP TOURIST CENTER GUIDE: Fixes missing spaces after first and second "Oh!" Ported from GC
    EZTR_Basic_ReplaceText(
        0x09EC,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|4DOh! " EZTR_CC_DELAY "|00|04Oh! " EZTR_CC_DELAY "|00|0A" EZTR_CC_QUICKTEXT_ENABLE "The king!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|14You are amazing!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SWAMP SHOOTING GALLERY: Changes "20 Rupees" from red to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x0A2A,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        20,
        EZTR_NO_VALUE,
        true,
        "One game's " EZTR_CC_COLOR_PINK "20 Rupees" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN " " EZTR_CC_NEWLINE "" EZTR_CC_TWO_CHOICE "OK" EZTR_CC_NEWLINE "No thanks" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] Changes color of "Rupees" to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x0A31,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|4CDon't be stoopid, mate!" EZTR_CC_NEWLINE "Ya don't 'ave 'nuff " EZTR_CC_COLOR_PINK "Rupees" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] GORON SHOP (SPRING): Fixes Red Potion being referred to as "them" rather than "it"
    EZTR_Basic_ReplaceText(
        0x0BD0,
        EZTR_STANDARD_TEXT_BOX_II,
        49,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        0x0031,
        EZTR_NO_VALUE,
        true,
        "Red Potion: 50 Rupees" EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "I'll buy it" EZTR_CC_NEWLINE "No thanks" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] OWL: Changes second "H" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x0BEA,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Hoo-hoot!" EZTR_CC_NEWLINE "We meet again, fairy child! Have" EZTR_CC_NEWLINE "my stone statues been of help?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Well, it seems you may have the" EZTR_CC_NEWLINE "strength to change the fate of" EZTR_CC_NEWLINE "this land as I had expected." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "But the road ahead is even more" EZTR_CC_NEWLINE "challenging. Many trials await you." EZTR_CC_NEWLINE "Please watch over these Gorons" EZTR_CC_NEWLINE "around you." EZTR_CC_BOX_BREAK "Their land is doomed to be" EZTR_CC_NEWLINE "smothered in snow and ice" EZTR_CC_NEWLINE "forever. " EZTR_CC_COLOR_RED "It will become a land" EZTR_CC_NEWLINE "where no living thing can survive" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_BOX_BREAK "Without courage and" EZTR_CC_NEWLINE "determination, you surely will" EZTR_CC_NEWLINE "collapse from the extreme " EZTR_CC_NEWLINE "conditions..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] OWL: Changes second "H" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x0BED,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Hoo-hoot!" EZTR_CC_NEWLINE "You are a child of many" EZTR_CC_NEWLINE "strengths!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Well, perhaps you do have enough" EZTR_CC_NEWLINE "strength to change the fate of" EZTR_CC_NEWLINE "this mountain after all." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "I shall take to the air now, flying" EZTR_CC_NEWLINE "toward that shrine across the" EZTR_CC_NEWLINE "way, so follow behind me." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_COLOR_RED "Do not be daunted by" EZTR_CC_NEWLINE "appearances" EZTR_CC_COLOR_DEFAULT ". Instead, let your" EZTR_CC_NEWLINE "feelings guide you, and the true" EZTR_CC_NEWLINE "path shall open before you." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OWL: Adds comma after "here"
    EZTR_Basic_ReplaceText(
        0x0BF0,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "What is it that you are doing?" EZTR_CC_NEWLINE "Beyond here, you will fall into " EZTR_CC_NEWLINE "oblivion unless you have great" EZTR_CC_NEWLINE "courage and determination." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] OWL: Changes second "H" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x0BF1,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "It seems things are not going well" EZTR_CC_NEWLINE "for you...Hoo-hoot! Fear not, it" EZTR_CC_NEWLINE "never goes well at first for" EZTR_CC_NEWLINE "anyone." EZTR_CC_BOX_BREAK "But by no means should you" EZTR_CC_NEWLINE "grow impatient. Impatience brings" EZTR_CC_NEWLINE "uneasiness and distracts the" EZTR_CC_NEWLINE "heart." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] OWL: Changes second "H" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x0BF5,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Hoo-hoot!" EZTR_CC_NEWLINE "I have certainly been assured of" EZTR_CC_NEWLINE "your courage and determination." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "From here on, you must not be" EZTR_CC_NEWLINE "fooled by appearances. You must" EZTR_CC_NEWLINE "rely on your feelings..." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Now, enter the " EZTR_CC_COLOR_RED "shrine" EZTR_CC_COLOR_DEFAULT ". Something" EZTR_CC_NEWLINE "that will aid you in your quest" EZTR_CC_NEWLINE "lies within. Use that" EZTR_CC_COLOR_RED " item" EZTR_CC_COLOR_DEFAULT " when" EZTR_CC_NEWLINE "returning from here." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] OWL: Changes ellipsis color to match rest of game
    EZTR_Basic_ReplaceText(
        0x0BFC,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "If you have left " EZTR_CC_COLOR_RED "proof " EZTR_CC_COLOR_DEFAULT "of our" EZTR_CC_NEWLINE "encounter on any of those " EZTR_CC_COLOR_RED "stone" EZTR_CC_NEWLINE "statues" EZTR_CC_COLOR_DEFAULT "..." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Then the " EZTR_CC_COLOR_RED "song" EZTR_CC_COLOR_DEFAULT " carved at my feet" EZTR_CC_NEWLINE "will certainly be of some" EZTR_CC_NEWLINE "assistance..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES/FORMATTING FIXES/COLOR FIXES] OWL STATUE: Changes color of colon to match rest of game, changes "Day One" to "the Dawn of the First Day" and makes it red, changes formatting to fit new text, and changes "The" before "Song of Time" to lowercase
    EZTR_Basic_ReplaceText(
        0x0C01,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You can " EZTR_CC_COLOR_RED "save" EZTR_CC_COLOR_DEFAULT " your " EZTR_CC_COLOR_RED "progress" EZTR_CC_COLOR_DEFAULT " and" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "quit" EZTR_CC_COLOR_DEFAULT " here. When you" EZTR_CC_NEWLINE "reselect your file, my face will" EZTR_CC_NEWLINE "appear by your file name." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_BOX_BREAK "" EZTR_CC_QUICKTEXT_ENABLE "This indicates that the next time" EZTR_CC_NEWLINE "you reopen your file, you'll resume" EZTR_CC_NEWLINE "playing at this " EZTR_CC_COLOR_RED "very place" EZTR_CC_COLOR_DEFAULT " and" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "time" EZTR_CC_COLOR_DEFAULT " with your " EZTR_CC_COLOR_RED "current status" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_BOX_BREAK "" EZTR_CC_COLOR_RED "" EZTR_CC_QUICKTEXT_ENABLE "Warning" EZTR_CC_COLOR_DEFAULT ": If you reopen this Owl" EZTR_CC_NEWLINE "File, then reset without saving at" EZTR_CC_NEWLINE "an owl statue, you'll lose the" EZTR_CC_NEWLINE "progress you've saved here..." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_BOX_BREAK "" EZTR_CC_QUICKTEXT_ENABLE "The next time you open the file, you'll" EZTR_CC_NEWLINE "restart at the " EZTR_CC_COLOR_RED "Dawn of the First Day" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_NEWLINE "with the status you had when you" EZTR_CC_NEWLINE "last saved using the Song of Time." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_BOX_BREAK "" EZTR_CC_COLOR_RED "Save" EZTR_CC_COLOR_DEFAULT " your " EZTR_CC_COLOR_RED "progress" EZTR_CC_COLOR_DEFAULT " up to this" EZTR_CC_NEWLINE "point and " EZTR_CC_COLOR_RED "quit" EZTR_CC_COLOR_DEFAULT " playing?" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "No" EZTR_CC_NEWLINE "Yes" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES/GRAMMAR FIXES] ZUBORA: Fixes color of period after "sunrise" to match rest of game, and adds comma after "edge"
    EZTR_Basic_ReplaceText(
        0x0C3B,
        EZTR_STANDARD_TEXT_BOX_I,
        49,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        100,
        EZTR_NO_VALUE,
        true,
        "All right...To " EZTR_CC_COLOR_RED "reforge " EZTR_CC_COLOR_DEFAULT "your sword," EZTR_CC_NEWLINE "it will cost you " EZTR_CC_COLOR_PINK "100 Rupees" EZTR_CC_COLOR_DEFAULT ". It'll" EZTR_CC_NEWLINE "be ready at " EZTR_CC_COLOR_RED "sunrise" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_QUICKTEXT_ENABLE "You'll have to let us hold onto" EZTR_CC_NEWLINE "your sword until then." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Keep in mind that after you use" EZTR_CC_NEWLINE "your reforged sword " EZTR_CC_COLOR_RED "100 times" EZTR_CC_COLOR_DEFAULT ", it" EZTR_CC_NEWLINE "will lose its edge, and it'll be back" EZTR_CC_NEWLINE "to its original sharpness..." EZTR_CC_BOX_BREAK "So, would you like your sword" EZTR_CC_NEWLINE "reforged for " EZTR_CC_COLOR_PINK "100 Rupees" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "I'll do it" EZTR_CC_NEWLINE "No thanks" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] ZUBORA: Capitalizes "racetrack" to match rest of game
    EZTR_Basic_ReplaceText(
        0x0C4B,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "To make your sword any stronger," EZTR_CC_NEWLINE "I'll need " EZTR_CC_COLOR_RED "gold dust" EZTR_CC_COLOR_DEFAULT ", which just so" EZTR_CC_NEWLINE "happens to be first prize at the" EZTR_CC_NEWLINE "Goron Racetrack." EZTR_CC_BOX_BREAK "If I can just get some gold dust..." EZTR_CC_NEWLINE "and this is just between us...I can" EZTR_CC_NEWLINE "make you the " EZTR_CC_COLOR_RED "strongest of" EZTR_CC_NEWLINE "swords" EZTR_CC_COLOR_DEFAULT ". The strongest..." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] POWDER KEG SALESMAN: Fixes incorrect sound effect "38BB" to "3ABB". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x0C80,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|BBI'm the Goron who sells the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Powder Keg" EZTR_CC_COLOR_DEFAULT ", the most famous" EZTR_CC_NEWLINE "product of the Gorons." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] POWDER KEG SALESMAN: Capitalizes "kegs" to match rest of game 
    EZTR_Basic_ReplaceText(
        0x0C81,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|FCWant a " EZTR_CC_COLOR_RED "Powder Keg" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "Powder Kegs explode with powerful" EZTR_CC_NEWLINE "blasts and are very dangerous..." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Until I have tested you to see if" EZTR_CC_NEWLINE "you can use them properly, I can't" EZTR_CC_NEWLINE "let you use any on your own." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] DARMANI: Fixes incorrect sound effect from from "3AE8" to "3AD0" and fixes it not playing. Ported from EU.
    EZTR_Basic_ReplaceText(
        0x0CEA,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        0x0CEB,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "..." EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|3A|D0How infuriating!" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] DARMANI: Fixes incorrect sound effect from "3AE8" to "3AD0". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x0CEF,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|D0What a soothing melody..." EZTR_CC_NEWLINE "My sorrows are melting away into" EZTR_CC_NEWLINE "the song." EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] DARMANI GRAVE: Fixes formatting of options by removing accidental space and NEWLINE.
    EZTR_Basic_ReplaceText(
        0x0CF4,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Will you read the knowledge" EZTR_CC_NEWLINE "imparted by the hero?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_COLOR_GREEN "" EZTR_CC_THREE_CHOICE "Techniques for action" EZTR_CC_NEWLINE "Techniques for battle" EZTR_CC_NEWLINE "Don't read" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] GORON SHRINE GORON: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x0CFB,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "..." EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|3A|04Darmani?" EZTR_CC_NEWLINE "You're alive?!" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES/TYPO FIXES/FORMATTING FIXES] CHANDELIER HINT GORON: Fixes sound effect not playing, fixes missing "the" after "chandelier", and changes formatting to fit new word and to match other version of this message.
    EZTR_Basic_ReplaceText(
        0x0D20,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "..." EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|39|EBIt is you." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Y-you can have the food I hid in" EZTR_CC_NEWLINE "the chandelier up there, so" EZTR_CC_NEWLINE "p-please, j-just die in peace." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] DON GERO GORON: Changes second "T" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x0D66,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|BDTh-that's it! It's so good that I" EZTR_CC_NEWLINE "dream about it..." EZTR_CC_NEWLINE "Dodongo Cavern's finest quality" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "rock sirloin" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] SNOWHEAD FROG: Adds comma after "ended"
    EZTR_Basic_ReplaceText(
        0x0D76,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I have been waiting for you, Don" EZTR_CC_NEWLINE "Gero." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Forgive me if I'm mistaken, but it" EZTR_CC_NEWLINE "looks like you've lost a little" EZTR_CC_NEWLINE "weight..." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "As you can see, Don Gero, the" EZTR_CC_NEWLINE "long winter has ended, and spring" EZTR_CC_NEWLINE "has finally come to these" EZTR_CC_NEWLINE "mountains." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] DON GERO GORON: Adds comma after "coming", and changes "have" to "has"
    EZTR_Basic_ReplaceText(
        0x0D89,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Hello?" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|3A|04You are Don Gero!!!" EZTR_CC_NEWLINE "It has been so long!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Just as you instructed, I came" EZTR_CC_NEWLINE "here to start up the frog's choir" EZTR_CC_NEWLINE "as soon as spring arrived." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "But spring doesn't seem to be" EZTR_CC_NEWLINE "coming, and none of the choir has" EZTR_CC_NEWLINE "gathered!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] GORON ELDER: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x0DBB,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "But...that's impossible. I refuse to" EZTR_CC_NEWLINE "flinch. If I can see past the" EZTR_CC_NEWLINE "illusion, " EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|3A|BByou'll vanish in an" EZTR_CC_NEWLINE "instant!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] GORON ELDER: Fixes missing sound effect "3ABB". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x0DBC,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|BBNo matter how long you follow me," EZTR_CC_NEWLINE "it's not going to do you any good." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] DARMANI GRAVEDIGGER UNFROZEN: Fixes incorrect sound effect "3AFD" to "38FD". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x0E14,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "But the hot spring is now covered" EZTR_CC_NEWLINE "by the gravestone. I can't move a" EZTR_CC_NEWLINE "gravestone that big by myself." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_SFX "|38|FDBut I guess this is what's meant" EZTR_CC_NEWLINE "by the Goron saying, |22There's no" EZTR_CC_NEWLINE "use in crying over split rocks.|22" EZTR_CC_NEWLINE "...Brrrrrr." EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] DARMANI GRAVEDIGGER UNFROZEN: Fixes formatting by changing to BOX_BREAK2
    EZTR_Basic_ReplaceText(
        0x0E19,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|B4There used to be a hot spring" EZTR_CC_NEWLINE "bubbling beneath the great" EZTR_CC_NEWLINE "Darmani's grave." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "If I had some of that " EZTR_CC_COLOR_RED "hot spring" EZTR_CC_NEWLINE "water" EZTR_CC_COLOR_DEFAULT ", I might be able to thaw out" EZTR_CC_NEWLINE "my frozen brother." EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] DARMANI GRAVEDIGGER UNFROZEN: Capitalizes "brother"
    EZTR_Basic_ReplaceText(
        0x0E1B,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|04Oh!!! Are you all right, Brother?" EZTR_CC_NEWLINE "You were frozen, but the great" EZTR_CC_NEWLINE "Darmani saved you!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] DARMANI GRAVEDIGGER FROZEN: Changes second "R" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x0E20,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "R-really?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] DARMANI GRAVEDIGGER UNFROZEN: Adds comma after "frozen", and capitalizes "brother"
    EZTR_Basic_ReplaceText(
        0x0E23,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|04Oh! Are you all right, Brother?" EZTR_CC_NEWLINE "You were frozen, and this person" EZTR_CC_NEWLINE "saved you!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] GORON GRAVEDIGGER FROZEN: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x0E25,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "...Really? I don't know who you" EZTR_CC_NEWLINE "are, " EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|39|1Cbut thank you!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] DARMANI GRAVEDIGGER FROZEN: Changes second "Y" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x0E30,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|B4H-h-hoooo...It's cold." EZTR_CC_NEWLINE "This cold has me seeing Darmani's" EZTR_CC_NEWLINE "ghost...Y-yikes..." EZTR_CC_NEWLINE "I th-think I'll go freeze again..." EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] DARMANI GRAVEDIGGER UNFROZEN: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x0E31,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Thank you for saving my brother." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "But something has to be done" EZTR_CC_NEWLINE "about this cold. Otherwise, " EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|38|B4we'll" EZTR_CC_NEWLINE "be Goronsicles." EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] GORON SHRINE GORON: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x0E51,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The Elder's son is in there." EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|39|1C...This crying is heartbreaking." EZTR_CC_NEWLINE "Will it ever stop?" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES/GRAMMAR FIXES] GORON ELDER'S SON: Ports fix for missing sound effect "38E9" from EU, and changes second "daddy" to be capitalized.
    EZTR_Basic_ReplaceText(
        0x0E74,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        0x0E75,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|E9Waaa...Hunh, ugh...u-waahhh!" EZTR_CC_NEWLINE "Da-daaaddy, Daaaddy! Hunh..." EZTR_CC_NEWLINE "I'm cooooold...Daaaddy!" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] GORON ELDER'S SON: Changes second "daddy" to be capitalized.
    EZTR_Basic_ReplaceText(
        0x0E76,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|E9Waaah...Henh, uwaaaaah..." EZTR_CC_NEWLINE "Daaaaaddy, Daaaddy...H-hunh..." EZTR_CC_NEWLINE "I'm cooold, Daaaddy!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] GORON ELDER'S SON: Changes "daddy" to be capitalized.
    EZTR_Basic_ReplaceText(
        0x0E77,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "That song...That's the song Daddy" EZTR_CC_NEWLINE "always plays for me before I" EZTR_CC_NEWLINE "go to sleep..." EZTR_CC_NEWLINE "I'll sing the next part." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] GORON ELDER'S SON: Changes "daddy's" to be capitalized.
    EZTR_Basic_ReplaceText(
        0x0E78,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|18Mmmmm..." EZTR_CC_NEWLINE "It's just like..." EZTR_CC_DELAY "|00|0ADaddy's..." EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0Aright..." EZTR_CC_DELAY "|00|0Abeside me..." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] GORON ELDER'S SON: Capitalizes "races" to match rest of game 
    EZTR_Basic_ReplaceText(
        0x0E83,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "If you can, you should go see the" EZTR_CC_NEWLINE "Goron Races that are gonna be" EZTR_CC_NEWLINE "held on the other side of this" EZTR_CC_NEWLINE "mountain." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] GORON ELDER'S SON: Capitalizes "races" to match rest of game
    EZTR_Basic_ReplaceText(
        0x0E87,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Once you see these Goron Races," EZTR_CC_NEWLINE "you'll wish you were born a Goron." EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] GORON ELDER'S SON: Adds comma after "enter"
    EZTR_Basic_ReplaceText(
        0x0E89,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "You're gonna enter, aren't you?" EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "Yep" EZTR_CC_NEWLINE "Nope" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] GORON ELDER'S SON: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x0E8D,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "..." EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|3A|C8You really do want to race." EZTR_CC_NEWLINE "I know you do." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] GORON ELDER'S SON: Changes "daddy" to be capitalized
    EZTR_Basic_ReplaceText(
        0x0E91,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "This is from Daddy..." EZTR_CC_NEWLINE "It's the prize." EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] PROFESSOR: Ports GC formatting changes.
    EZTR_Basic_ReplaceText(
        0x0FA4,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The reason for this is that the" EZTR_CC_NEWLINE "recent abnormal weather has" EZTR_CC_NEWLINE "caused the ocean temperature to" EZTR_CC_NEWLINE "rise in this region." EZTR_CC_BOX_BREAK "" EZTR_CC_COLOR_RED "Zora eggs " EZTR_CC_COLOR_DEFAULT "are very sensitive to" EZTR_CC_NEWLINE "changes in the temperature." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "The only way the eggs can hatch" EZTR_CC_NEWLINE "is if they're placed in this" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "aquarium water" EZTR_CC_COLOR_DEFAULT ", which I set aside" EZTR_CC_NEWLINE "for them long ago." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] PROFESSOR: Fixes "spash" typo. Ported from EU
    EZTR_Basic_ReplaceText(
        0x0FBE,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The ocean's temperature has" EZTR_CC_NEWLINE "returned to normal. Did you come" EZTR_CC_NEWLINE "here to splash around in the sea?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "If you try swimming with that" EZTR_CC_NEWLINE "puny body, you'll be sorry!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] MIKAU: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x1007,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_DELAY "|00|0A" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|69|72...to shore..." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES/TYPO FIXES] MIKAU: Ports fix for missing sound effect "6975" from EU, and pots fix for accidentally capitalized "You" from 3DS.
    EZTR_Basic_ReplaceText(
        0x100D,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|75But " EZTR_CC_COLOR_RED "that girl" EZTR_CC_COLOR_DEFAULT ", our vocalist..." EZTR_CC_NEWLINE "She laid some strange " EZTR_CC_COLOR_RED "eggs" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "And she's lost her voice," EZTR_CC_NEWLINE "you can't hear what she says." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] MIKAU: Fixes missing sound effect "6974". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x100E,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|74Whoa-oh! In " EZTR_CC_COLOR_RED "Great Bay" EZTR_CC_COLOR_DEFAULT " now" EZTR_CC_NEWLINE "somethin' is a-happenin'." EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0A" EZTR_CC_QUICKTEXT_ENABLE "Is it now?" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] MIKAU: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x1013,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "That's all..." EZTR_CC_DELAY "|00|0A" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|69|76" EZTR_CC_QUICKTEXT_ENABLE "Thank you!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] MIKAU GRAVE: Fixes formatting for choices by removing accidental NEWLINE
    EZTR_Basic_ReplaceText(
        0x1019,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Will you try to sing Mikau's" EZTR_CC_NEWLINE "lyrics?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_COLOR_GREEN "" EZTR_CC_THREE_CHOICE "1. We the Zora" EZTR_CC_NEWLINE "2. Zora Fight Song" EZTR_CC_NEWLINE "I won't sing" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] MIKAU GRAVE: Fixes duplicate sound effect. Ported from EU.
    EZTR_Basic_ReplaceText(
        0x101B,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|76For my punch of anger, hit" EZTR_CC_NEWLINE "" EZTR_CC_BTN_B ". Press " EZTR_CC_BTN_B " repeatedly for a" EZTR_CC_NEWLINE "flurry of attacks! Yeah, yeah." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "For my deadly move, press and" EZTR_CC_NEWLINE "hold " EZTR_CC_BTN_B ". Now release! It's the" EZTR_CC_NEWLINE "final blow. My double cutters!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONFIG] Configuration for Lulu diary mistranslation fix
    if (CONFIG_LULU_DIARY != DIARY_VANILLA) {
        if (CONFIG_LULU_DIARY == DIARY_FAITHFUL) {
            // [MISTRANSLATION FIXES] LULU'S DIARY: Fixes mistranslation by changing "had" to "hadn't"
            EZTR_Basic_ReplaceText(
                0x101F,
                EZTR_STANDARD_TEXT_BOX_II,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "Today, I told everything to Mikau," EZTR_CC_NEWLINE "the one person whom I didn't" EZTR_CC_NEWLINE "want to know about it." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "At first, I was too embarrassed" EZTR_CC_NEWLINE "and too sad to do anything." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "But with the words that Mikau" EZTR_CC_NEWLINE "said at that moment, I felt that" EZTR_CC_NEWLINE "all hope hadn't been lost." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "But please, Mikau, I'm begging you," EZTR_CC_NEWLINE "don't do anything rash." EZTR_CC_EVENT2 "" EZTR_CC_END "",
                NULL
            );
        } else {
            // [MISTRANSLATION FIXES] LULU'S DIARY: Ports 3DS translation fix
            EZTR_Basic_ReplaceText(
                0x101F,
                EZTR_STANDARD_TEXT_BOX_II,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "Today, I told everything to Mikau," EZTR_CC_NEWLINE "the one person whom I didn't" EZTR_CC_NEWLINE "want to know about it." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "At first, I was too embarrassed" EZTR_CC_NEWLINE "and too sad to do anything." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "But with the words that Mikau" EZTR_CC_NEWLINE "said at that moment, I felt that" EZTR_CC_NEWLINE "my heart was saved." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Please, Mikau, I'm begging you," EZTR_CC_NEWLINE "don't do anything rash." EZTR_CC_EVENT2 "" EZTR_CC_END "",
                NULL
            );
        } 
    };

    // [CONSISTENCY CHANGES] GIANT TURTLE: Capitalizes "hookshot" for standardization
    EZTR_Basic_ReplaceText(
        0x102A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Why so slow?" EZTR_CC_NEWLINE "Hurry up and fire your " EZTR_CC_COLOR_RED "Hookshot" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "into the palm " EZTR_CC_COLOR_RED "tree" EZTR_CC_COLOR_DEFAULT " on my back," EZTR_CC_NEWLINE "" EZTR_CC_NAME "." EZTR_CC_END "",
        NULL
    );

    // [CONFIG] Configuration for Giant Turtle mistranslation fix
    if (!CONFIG_GIANT_TURTLE) {
        // [MISTRANSLATION FIXES] GIANT TURTLE: Fixes mistranslation in order to refer to Mikau instead of itself, and correctly orders dialogue 
        EZTR_Basic_ReplaceText(
            0x1030,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Now the Zora warrior's soul can" EZTR_CC_NEWLINE "rest in peace. But the evil that" EZTR_CC_NEWLINE "haunts this land has not completely" EZTR_CC_NEWLINE "vanished, " EZTR_CC_NAME "." EZTR_CC_BOX_BREAK "I too must abide the laws of ancient" EZTR_CC_NEWLINE "times and again merely watch from" EZTR_CC_NEWLINE "my deep slumber. I shall depart after" EZTR_CC_NEWLINE "enjoying Lulu's voice a bit longer." EZTR_CC_BOX_BREAK "I think the gods can permit that." EZTR_CC_NEWLINE "Hyeh, hyeh, hyeh." EZTR_CC_END "",
            NULL
        );
    };    

    // [CONSISTENCY CHANGES] FISHERMAN: Capitalizes "hookshot" for standardization
    EZTR_Basic_ReplaceText(
        0x1075,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|4DOh! That's my " EZTR_CC_COLOR_RED "Hookshot " EZTR_CC_COLOR_DEFAULT "that the" EZTR_CC_NEWLINE "pirates stole!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [MISTRANSLATION FIXES/FORMATTING FIXES] FISHERMAN: Changes "I had" to "I've been waiting for" to fix meaning, and changes formmating to fit new words. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x107B,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|4DOh! That's it! That's it!" EZTR_CC_NEWLINE "I've been waiting for a picture" EZTR_CC_NEWLINE "like that." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Well, aren't you a crafty one?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] FISHERMAN: Capitalizes "hookshot" and colors it red to match rest of game
    EZTR_Basic_ReplaceText(
        0x108C,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "See, it was long ago when I used" EZTR_CC_NEWLINE "to use this thing called a" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Hookshot" EZTR_CC_COLOR_DEFAULT " to catch fish off the" EZTR_CC_NEWLINE "coast..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] FISHERMAN: Fixes missing period to complete second ellipsis
    EZTR_Basic_ReplaceText(
        0x108E,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "They say..." EZTR_CC_NEWLINE "it's a legendary treasure..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER BEAVER BROTHER: Capitalizes "little brother"
    EZTR_Basic_ReplaceText(
        0x10DE,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|19Did you call me, Little Brother?" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER BEAVER BROTHER: Capitalizes "big brother"
    EZTR_Basic_ReplaceText(
        0x10DF,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|1AI called you, Big Brother!" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|14Actually..." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER BEAVER BROTHER: Capitalizes "little brother"
    EZTR_Basic_ReplaceText(
        0x10E2,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "......" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_SFX "|29|19Don't worry, Little Brother!" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER BEAVER BROTHER: Capitalizes "little brother"
    EZTR_Basic_ReplaceText(
        0x10E6,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|19He says he won't do it, Little" EZTR_CC_NEWLINE "Brother!" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER BEAVER BROTHER: Capitalizes "little brother"
    EZTR_Basic_ReplaceText(
        0x10EC,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|19Koo, koo, koo." EZTR_CC_NEWLINE "He says he won't do it, Little" EZTR_CC_NEWLINE "Brother!" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER BEAVER BROTHER: Capitalizes "big brother"
    EZTR_Basic_ReplaceText(
        0x10ED,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|1AKoo, koo, koo." EZTR_CC_NEWLINE "That's right, Big Brother!" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER BEAVER BROTHER: Capitalizes "little brother"
    EZTR_Basic_ReplaceText(
        0x10EE,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|19He did it, Little Brother." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER BEAVER BROTHER: Capitalizes "big brother"
    EZTR_Basic_ReplaceText(
        0x10EF,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|1AYeah, he did it, Big Brother." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER BEAVER BROTHER: Capitalizes "little brother"
    EZTR_Basic_ReplaceText(
        0x10F0,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|19There's nothing we can do, Little" EZTR_CC_NEWLINE "Brother." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES/SFX FIXES] YOUNGER BEAVER BROTHER: Capitalizes "big brother", and moves sound effect to after ellipses.
    EZTR_Basic_ReplaceText(
        0x10F1,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "......" EZTR_CC_DELAY "|00|14" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|29|1AThis is a mess, Big Brother." EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER BEAVER BROTHER: Capitalizes "little brother"
    EZTR_Basic_ReplaceText(
        0x10F3,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|19He's back, Little Brother." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER BEAVER BROTHER: Capitalizes "big brother"
    EZTR_Basic_ReplaceText(
        0x10F4,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|1AYeah, he's back, Big Brother." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER BEAVER BROTHER: Capitalizes "little brother"  
    EZTR_Basic_ReplaceText(
        0x10F5,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|19But we don't have any more empty" EZTR_CC_NEWLINE "bottles...do we, Little Brother?" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER BEAVER BROTHER: Capitalizes "big brother"
    EZTR_Basic_ReplaceText(
        0x10F6,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|1ANo, we don't have any, Big" EZTR_CC_NEWLINE "Brother." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] OLDER BEAVER BROTHER: Fixes accidental capitalization of first "Race"
    EZTR_Basic_ReplaceText(
        0x10F8,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "What will you do?" EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "I'll race" EZTR_CC_NEWLINE "I won't race" EZTR_CC_END "",
        NULL
    );
    
    // [GRAMMAR FIXES] OLDER BEAVER BROTHER: Capitalizes "little brother"
    EZTR_Basic_ReplaceText(
        0x10FB,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|19He did it again, Little Brother." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER BEAVER BROTHER: Capitalizes "big brother"
    EZTR_Basic_ReplaceText(
        0x10FC,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|1AHe did it again, Big Brother." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER BEAVER BROTHER: Capitalizes "little brother"
    EZTR_Basic_ReplaceText(
        0x10FD,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|19...That's shameful, Little Brother." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Now race me!" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER BEAVER BROTHER: Capitalizes "little brother"
    EZTR_Basic_ReplaceText(
        0x10FF,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|19I guess he's just a stick in" EZTR_CC_NEWLINE "the mud, Little Brother." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER BEAVER BROTHER: Capitalizes "big brother"
    EZTR_Basic_ReplaceText(
        0x1100,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|1ASurprising, isn't it, Big" EZTR_CC_NEWLINE "Brother?" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] OLDER BEAVER BROTHER: Changes "rings" to red to match other dialogues
    EZTR_Basic_ReplaceText(
        0x1101,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|19The time limit is the same as it" EZTR_CC_NEWLINE "was for my little brother--" EZTR_CC_COLOR_RED "1:50" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "...But there are " EZTR_CC_COLOR_RED "25 rings" EZTR_CC_COLOR_DEFAULT " this time." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Don't fall behind!" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER BEAVER BROTHER: Capitalizes "little brother"
    EZTR_Basic_ReplaceText(
        0x1102,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|19He's a formidable opponent, Little" EZTR_CC_NEWLINE "Brother!" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES/FORMATTING FIXES] YOUNGER BEAVER BROTHER: Capitalizes "big brother", removes "just" before "talk" and fixes formatting to account. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x1103,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|1AYou're all talk, eh, Big Brother?" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER BEAVER BROTHER: Capitalizes "little brother"
    EZTR_Basic_ReplaceText(
        0x1104,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|19If we give THAT to him, I wonder" EZTR_CC_NEWLINE "if he'll leave us alone, Little" EZTR_CC_NEWLINE "Brother." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER BEAVER BROTHER: Capitalizes "big brother"
    EZTR_Basic_ReplaceText(
        0x1105,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|1AYeah, I want to quit, Big Brother." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] OLDER BEAVER BROTHER: Changes "rings" to red to match other dialogues
    EZTR_Basic_ReplaceText(
        0x1108,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|29|19The time limit is the same as it" EZTR_CC_NEWLINE "was for my little brother--" EZTR_CC_COLOR_RED "1:40" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "But now there are " EZTR_CC_COLOR_RED "25 rings" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Don't fall behind!" EZTR_CC_END "",
        NULL
    );
    
    // [CONSISTENCY CHANGES] STALCHILD: Changes second "I" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x1152,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I-is that so, sir?" EZTR_CC_NEWLINE "Uh...I apologize, sir!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "I shall continue my investigation!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] AVEIL: Removes erroneous comma after "And"
    EZTR_Basic_ReplaceText(
        0x1195,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I've been waiting for you!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "And did you find the rest of the" EZTR_CC_NEWLINE "eggs?" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] GERUDO PIRATE: Changes stutters in "N-No" and "B-But" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x1196,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "...N-no." EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AB-but..." EZTR_CC_DELAY "|00|0Athat's beca..." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] AVEIL: Changes "the" to "a"
    EZTR_Basic_ReplaceText(
        0x1197,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "What are you trying to pull" EZTR_CC_NEWLINE "here?!?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "If people hear the great pirates" EZTR_CC_NEWLINE "have lost the treasure they stole," EZTR_CC_NEWLINE "we'll become a laughing stock!" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] JAPAS: Changes "Band" to lowercase
    EZTR_Basic_ReplaceText(
        0x11F8,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|6BWhat's with you?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "This room belongs to " EZTR_CC_COLOR_RED "Japas" EZTR_CC_COLOR_DEFAULT ", the" EZTR_CC_NEWLINE "genius bassist of the Zora band." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES/GRAMMAR FIXES] TIJO: Ports incorrect sound effect fix for "6948" to "6968" from EU; switches "just" and "can't" and formatting changes ported from 3DS.
    EZTR_Basic_ReplaceText(
        0x1229,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|68This is a problem. You can't just" EZTR_CC_NEWLINE "come in and hang out in our room!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] EVAN: Removes extraneous "in" after "out". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x1238,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Have you been to see Lulu out" EZTR_CC_NEWLINE "back by the ocean?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Ever since the pirates stole her" EZTR_CC_NEWLINE "eggs, she's just been standing out" EZTR_CC_NEWLINE "there gazing at the sea and" EZTR_CC_NEWLINE "sighing..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );
    
    // [DELAY FIXES] JAPAS: Fixes incorrect delay length value. Ported from EU
    EZTR_Basic_ReplaceText(
        0x1255,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You're late, Mikau! Where were" EZTR_CC_NEWLINE "you while you were skippin'" EZTR_CC_NEWLINE "practice?" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_DELAY "|00|0ALulu's been waiting for you." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] POT MINIGAME ZORA: Moves "just" from before "can't" to after
    EZTR_Basic_ReplaceText(
        0x1266,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "You can't just play guitar all the" EZTR_CC_NEWLINE "time. You gotta get out and move" EZTR_CC_NEWLINE "your body once in a while." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] POT MINIGAME ZORA: Adds comma after "soon" 
    EZTR_Basic_ReplaceText(
        0x1267,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Clock Town's carnival is coming" EZTR_CC_NEWLINE "soon, and business there is good." EZTR_CC_NEWLINE "That'd be nice...Thing's here aren't" EZTR_CC_NEWLINE "picking up yet." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ZORA IN FRONT OF EVAN'S ROOM: Changes "band" to lowercase
    EZTR_Basic_ReplaceText(
        0x1285,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "This is the room of Evan, the" EZTR_CC_NEWLINE "leader of the Zora band, The" EZTR_CC_NEWLINE "Indigo-Go's." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] ZORA HALL LIGHT TESTER: Removes erroneous "do"
    EZTR_Basic_ReplaceText(
        0x12C4,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Now hurry up and start your" EZTR_CC_NEWLINE "rehearsal before the lights go out." EZTR_CC_NEWLINE "Hurry! Hurry!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] ZORA HALL WALKING ZORA: Switches "just" and "can't"
    EZTR_Basic_ReplaceText(
        0x12C9,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Once the rehearsal starts, you'll" EZTR_CC_NEWLINE "have to buy a ticket. You can't" EZTR_CC_NEWLINE "just go and take a seat." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] ZORA HALL WALKING ZORA: Fixes "in" to "out". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x12CD,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Is Lulu all right? She was just" EZTR_CC_NEWLINE "staring out at the lone island out" EZTR_CC_NEWLINE "back...She looks kinda strange." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [MISTRANSLATION FIXES] ZORA SHOP: Swaps "We" and "didn't" to fix meaning and to match Deku version of this message
    EZTR_Basic_ReplaceText(
        0x12CF,
        EZTR_STANDARD_TEXT_BOX_II,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Didn't we have what you wanted?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] ZORA SHOP: Changes "it" to "them" referring to Arrows
    EZTR_Basic_ReplaceText(
        0x12DE,
        EZTR_STANDARD_TEXT_BOX_II,
        49,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        20,
        EZTR_NO_VALUE,
        true,
        "10 Arrows: 20 Rupees" EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "I'll buy them" EZTR_CC_NEWLINE "No thanks" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] ZORA SHOP: Changes "anymore" to "any more". Ported from GC
    EZTR_Basic_ReplaceText(
        0x12E3,
        EZTR_STANDARD_TEXT_BOX_II,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "You can't hold any more." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ZORA OUTSIDE FORTRESS: Switches "is" and "usually". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x12F8,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The Pirates' Fortress is usually" EZTR_CC_NEWLINE "closed off by an iron gate, so you" EZTR_CC_NEWLINE "can't get in from here." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] ZORA OUTSIDE FORTRESS: Changes "Pirates' Fortress" to red to match other version of this message
    EZTR_Basic_ReplaceText(
        0x12FF,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Is this your first time at the" EZTR_CC_NEWLINE "ocean? This is the ominous" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Pirates' Fortress" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] ZORA HALL ZORA: Changes "you're" to "your"
    EZTR_Basic_ReplaceText(
        0x1304,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Mikau! Man, your guitar playing" EZTR_CC_NEWLINE "is the best!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] GARO ROBE: Fixes missing comma after "Sharp"
    EZTR_Basic_ReplaceText(
        0x139B,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The soul of the composer named" EZTR_CC_NEWLINE "Flat rests in Ikana Graveyard." EZTR_CC_NEWLINE "I have heard his brother, Sharp, is" EZTR_CC_NEWLINE "here in Ikana." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/CONSISTENCY CHANGES] GARO ROBE: Fixes uncapitalized "hill", and capitalizes "spring water cave" to match other cave names. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x139F,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "To revive the dried-up river on" EZTR_CC_NEWLINE "Ikana Hill, you must go to the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Spring Water Cave" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );
    // [CONSISTENCY CHANGES] GARO ROBE: Capitalizes "spring water cave" to match other cave names. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x13A0,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "If one tries to enter the Spring" EZTR_CC_NEWLINE "Water Cave without knowing the" EZTR_CC_NEWLINE "song buried in a grave, that poor" EZTR_CC_NEWLINE "visitor shall meet with disaster." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] GARO ROBE: Fixes color of ellipsis to match rest of game
    EZTR_Basic_ReplaceText(
        0x13A5,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The ReDeads in Ikana were once" EZTR_CC_NEWLINE "members of the castle's " EZTR_CC_COLOR_RED "dancing" EZTR_CC_NEWLINE "troupe" EZTR_CC_COLOR_DEFAULT "..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] GARO ROBE: Changes both instances of "King" to lowercase. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x13A8,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "To counter the rage of the king" EZTR_CC_NEWLINE "of Ikana Castle, " EZTR_CC_COLOR_RED "burn" EZTR_CC_COLOR_DEFAULT " away that" EZTR_CC_NEWLINE "which disrupts the light and shine" EZTR_CC_NEWLINE "the " EZTR_CC_COLOR_RED "sacred rays" EZTR_CC_COLOR_DEFAULT " on the king." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] GARO MASTER: Fixes missing fade effect that resulted in a lingering dialogue box. Ported from EU
    EZTR_Basic_ReplaceText(
        0x13B1,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "That is the law of us Garo." EZTR_CC_FADE "|00|28" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] GRAVEYARD STALCHILD: Capitalizes "captain" to match rest of game
    EZTR_Basic_ReplaceText(
        0x13EE,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "We haven't seen you in some time," EZTR_CC_NEWLINE "Captain, sir!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "As per your orders, sir, we've" EZTR_CC_NEWLINE "been guarding these graves" EZTR_CC_NEWLINE "closely." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] DAMPE: Removes extraneous comma after "keeper"
    EZTR_Basic_ReplaceText(
        0x13FE,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|44I am Dampe, the grave keeper" EZTR_CC_NEWLINE "who watches over this graveyard." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "My face is frightening, but I am" EZTR_CC_NEWLINE "not a bad person!" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] DAMPE: Changes "King" to lowercase. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x13FF,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "All the graves here belong to the" EZTR_CC_NEWLINE "family members of the king of" EZTR_CC_NEWLINE "Ikana Castle, a place that lies" EZTR_CC_NEWLINE "beyond the mountains." EZTR_CC_BOX_BREAK "Even nowadays, the " EZTR_CC_COLOR_RED "ghosts " EZTR_CC_COLOR_DEFAULT "come" EZTR_CC_NEWLINE "out at night. It is a frightening" EZTR_CC_NEWLINE "graveyard." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] DAMPE: Fixes missing "to" before "see". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x1401,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|45Do you want to see the dancing" EZTR_CC_NEWLINE "bones?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "If you do, then just wait here" EZTR_CC_NEWLINE "until " EZTR_CC_COLOR_RED "night" EZTR_CC_COLOR_DEFAULT " comes." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "I don't want to see something evil" EZTR_CC_NEWLINE "like that, though..." EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] KAFEI: Fixes formatting by changing to BOX_BREAK2
    EZTR_Basic_ReplaceText(
        0x145F,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "His " EZTR_CC_COLOR_RED "storage" EZTR_CC_COLOR_DEFAULT " for the things he's" EZTR_CC_NEWLINE "stolen is on the other side of this" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "rock door" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Only " EZTR_CC_COLOR_RED "Sakon" EZTR_CC_COLOR_DEFAULT " can open it. The only" EZTR_CC_NEWLINE "way in is to wait for " EZTR_CC_COLOR_RED "Sakon" EZTR_CC_COLOR_DEFAULT " to" EZTR_CC_NEWLINE "arrive." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONFIG] Configuration for mistranslation fix for Tatl's dialogue in Sakon's hideout
    if (CONFIG_TATL_KAFEI != TATL_KAFEI_VANILLA) {
        if (CONFIG_TATL_KAFEI == TATL_KAFEI_FAITHFUL) {
            // [MISTRANSLATION FIXES] TATL: Changes "moving ahead" to "running away" to make statement make sense.
            EZTR_Basic_ReplaceText(
                0x146B,
                EZTR_STANDARD_TEXT_BOX_I,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "" EZTR_CC_COLOR_LIGHTBLUE "" EZTR_CC_SFX "|68|46I don't like him..." EZTR_CC_NEWLINE "But is there a choice?" EZTR_CC_NEWLINE "Should we help him?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Not running away in the face" EZTR_CC_NEWLINE "of danger when you know it's for" EZTR_CC_NEWLINE "the better is just like " EZTR_CC_COLOR_RED "Tael" EZTR_CC_COLOR_LIGHTBLUE "." EZTR_CC_NEWLINE "...That's it...Let's go!" EZTR_CC_END "",
                NULL
            );
        } else { 
            // [MISTRANSLATION FIXES] TATL: Ports mistranslation fix from 3DS
            EZTR_Basic_ReplaceText(
                0x146B,
                EZTR_STANDARD_TEXT_BOX_I,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "" EZTR_CC_COLOR_LIGHTBLUE "" EZTR_CC_SFX "|68|46I don't like him..." EZTR_CC_NEWLINE "But do we have any choice?" EZTR_CC_NEWLINE "Should we help him?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "He's just like " EZTR_CC_COLOR_RED "Tael" EZTR_CC_COLOR_LIGHTBLUE "...rushing ahead in" EZTR_CC_NEWLINE "the face of danger, never thinking of" EZTR_CC_NEWLINE "the consequences..." EZTR_CC_NEWLINE "...That's it. We have to help. Let's go!" EZTR_CC_END "",
                NULL
            );
        }
    };

    // [TYPO FIXES] SAKON: Fixes missing exclamation point after "impenetrable".
    EZTR_Basic_ReplaceText(
        0x146C,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Yesss! My security system is" EZTR_CC_NEWLINE "impenetrable!" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES/FORMATTING FIXES] TATL: Fixes sound effect not playing, and fixes formatting to match EU.
    EZTR_Basic_ReplaceText(
        0x146F,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        EZTR_CC_DELAY "|00|0A" EZTR_CC_COLOR_LIGHTBLUE "" EZTR_CC_SFX "|29|35You did great." EZTR_CC_NEWLINE "She'll...understand." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "C'mon, let's go." EZTR_CC_NEWLINE "Play your ocarina and get us" EZTR_CC_NEWLINE "outside. Let him be alone." EZTR_CC_END "",
        NULL
    );

    // [MISTRANSLATION FIXES] SYSTEM: Changes "I" to "You"
    EZTR_Basic_ReplaceText(
        0x1470,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "You got the " EZTR_CC_COLOR_RED "Sun's Mask " EZTR_CC_COLOR_DEFAULT "back!" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] FLAT: Fixes "family" being accidentally lowercase
    EZTR_Basic_ReplaceText(
        0x14B5,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I served the Ikana Royal Family." EZTR_CC_NEWLINE "I am the composer called " EZTR_CC_COLOR_RED "Flat" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/FORMATTING FIXES] SHARP: Fixes missing "the" before "land" and changes formatting to fit. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x14BF,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "What business have you in Ikana" EZTR_CC_NEWLINE "Kingdom, the land where only the" EZTR_CC_NEWLINE "dead roam?" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] SHARP: Changes both instances of "King" to lowercase
    EZTR_Basic_ReplaceText(
        0x14CE,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I, the only one who knows the" EZTR_CC_NEWLINE "way into the " EZTR_CC_COLOR_RED "temple" EZTR_CC_COLOR_DEFAULT ", shall direct" EZTR_CC_NEWLINE "you to the " EZTR_CC_COLOR_RED "king" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "The king is in the ruins of Ikana" EZTR_CC_NEWLINE "Castle, awaiting the coming of the" EZTR_CC_NEWLINE "one who will break the curse." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SHARP: Changes second "W" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x14C6,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "W-what is this?" EZTR_CC_NEWLINE "...This song?" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SHARP: Changes second "N" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x14C7,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "...N-no, it can't be. " EZTR_CC_NEWLINE "This song..." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SPIRIT HOUSE POE COLLECTOR: Changes laugh to match other Poe Collector laughs
    EZTR_Basic_ReplaceText(
        0x14D0,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Yee-hee-hee..." EZTR_CC_NEWLINE "Ikana Kingdom was founded on" EZTR_CC_NEWLINE "this land, stained with a history" EZTR_CC_NEWLINE "of darkness, drenched in blood..." EZTR_CC_BOX_BREAK "Even now it is a place where" EZTR_CC_NEWLINE "troubled, regretful spirits gather." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] ROAD TO IKANA POE COLLECTOR: Fixes dialogue to refer to both Gorman brothers. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x14EE,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Yee-hee-hee." EZTR_CC_NEWLINE "Do you have your own" EZTR_CC_COLOR_RED " horse" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "And if you are not wearing the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "mask " EZTR_CC_COLOR_DEFAULT "that houses the " EZTR_CC_COLOR_RED "wandering" EZTR_CC_NEWLINE "spirits" EZTR_CC_COLOR_DEFAULT ", which the " EZTR_CC_COLOR_RED "black-hearted"  EZTR_CC_NEWLINE "ones" EZTR_CC_COLOR_DEFAULT " near the " EZTR_CC_COLOR_RED "ranch" EZTR_CC_COLOR_DEFAULT " have..." EZTR_CC_BOX_BREAK "I will not let you pass." EZTR_CC_NEWLINE "Yee-hee-hee." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );
    
    // [CONSISTENCY CHANGES] ROAD TO IKANA POE COLLECTOR: Fixes dialogue to refer to both Gorman brothers. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x14F4,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Yee-hee-hee!" EZTR_CC_NEWLINE "Do you have your own" EZTR_CC_COLOR_RED " horse" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "And if you are not wearing the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "mask " EZTR_CC_COLOR_DEFAULT "containing " EZTR_CC_COLOR_RED "wandering spirits" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "which the " EZTR_CC_COLOR_RED "black-hearted ones" EZTR_CC_COLOR_DEFAULT " near " EZTR_CC_NEWLINE "the " EZTR_CC_COLOR_RED "ranch" EZTR_CC_COLOR_DEFAULT " have..." EZTR_CC_BOX_BREAK "I will not let you pass." EZTR_CC_NEWLINE "Yee-hee-hee!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] SECRET SHRINE POE COLLECTOR: Fixes extraneous "the" before "Ikana's"
    EZTR_Basic_ReplaceText(
        0x14F5,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Yee-hee-hee." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "It seems, somehow, you have" EZTR_CC_NEWLINE "managed to send Ikana's" EZTR_CC_NEWLINE "wandering spirits into peace..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] SECRET SHRINE POE COLLECTOR: Ports GC formatting fixes.
    EZTR_Basic_ReplaceText(
        0x14F6,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "But outside of Ikana..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "There are still swarms of" EZTR_CC_NEWLINE "wandering spirits with lingering" EZTR_CC_NEWLINE "regrets..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SECRET SHRINE POE COLLECTOR: Changes "this room" to "these rooms" to correctly reference the multiple rooms in Secret Shrine
    EZTR_Basic_ReplaceText(
        0x14F7,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The " EZTR_CC_COLOR_RED "ones" EZTR_CC_COLOR_DEFAULT " in these " EZTR_CC_COLOR_RED "rooms " EZTR_CC_COLOR_DEFAULT "want to" EZTR_CC_NEWLINE "meet you again and have been" EZTR_CC_NEWLINE "waiting here for quite a while." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Go see them if you feel like it..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] SECRET SHRINE POE COLLECTOR: Fixes accidental comma in laugh
    EZTR_Basic_ReplaceText(
        0x14FC,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Yee-hee-hee!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "If you want to meet the ones in" EZTR_CC_NEWLINE "this room, then " EZTR_CC_COLOR_RED "extend" EZTR_CC_COLOR_DEFAULT " your " EZTR_CC_COLOR_RED "life" EZTR_CC_NEWLINE "energy " EZTR_CC_COLOR_DEFAULT "more." EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] THIN LACKEY: Fixes incorrect sound effect, the second "3A39" to "3A89".
    EZTR_Basic_ReplaceText(
        0x151D,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|39B-blocking you?!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_SFX "|3A|89The reason he beat us is because" EZTR_CC_NEWLINE "you were so feeble! Don't blame" EZTR_CC_NEWLINE "this on me!" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] LARGE LACKEY: Fixes incorrect sound effect "3A35" to "3A36".
    EZTR_Basic_ReplaceText(
        0x151E,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|36What?!" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|3A|88Just try saying that again to" EZTR_CC_NEWLINE "my bony face!" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] THIN LACKEY: Fixes sound effects not playing, and fixes incorrect sound effects (second onwards "3A39" to "3A89").
    EZTR_Basic_ReplaceText(
        0x151F,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_DELAY "|00|0A" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|3A|39Feeble!" EZTR_CC_DELAY "|00|14" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|3A|89" EZTR_CC_QUICKTEXT_ENABLE "Feeble!" EZTR_CC_QUICKTEXT_DISABLE " " EZTR_CC_QUICKTEXT_ENABLE "Feeble!" EZTR_CC_QUICKTEXT_DISABLE " " EZTR_CC_QUICKTEXT_ENABLE "Feeble!" EZTR_CC_QUICKTEXT_DISABLE " " EZTR_CC_QUICKTEXT_ENABLE "Feeble!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_TEXT_SPEED "" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|3A|89" EZTR_CC_QUICKTEXT_ENABLE "Feeble!" EZTR_CC_QUICKTEXT_DISABLE " " EZTR_CC_QUICKTEXT_ENABLE "Feeble!" EZTR_CC_QUICKTEXT_DISABLE " " EZTR_CC_QUICKTEXT_ENABLE "Feeble!" EZTR_CC_QUICKTEXT_DISABLE " " EZTR_CC_QUICKTEXT_ENABLE "Feeble!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_TEXT_SPEED "" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|3A|89" EZTR_CC_QUICKTEXT_ENABLE "Feeble!" EZTR_CC_QUICKTEXT_DISABLE " " EZTR_CC_QUICKTEXT_ENABLE "Feeble!" EZTR_CC_QUICKTEXT_DISABLE " " EZTR_CC_QUICKTEXT_ENABLE "Feeble!" EZTR_CC_QUICKTEXT_DISABLE " " EZTR_CC_QUICKTEXT_ENABLE "Feeble!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] LARGE LACKEY: Changes "A" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x1526,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|36Rrrrrr-ah!!!" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] IGOS DU IKANA: Changes "King" to lowercase. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x152B,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "You who bring light into darkness," EZTR_CC_NEWLINE "I am the king of Ikana Kingdom," EZTR_CC_NEWLINE "Igos du Ikana." EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] IGOS DU IKANA: Adds comma after "Tower". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x152D,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "To return true light to this land," EZTR_CC_NEWLINE "you must seal the doors of " EZTR_CC_COLOR_RED "Stone" EZTR_CC_NEWLINE "Tower" EZTR_CC_COLOR_DEFAULT ", where the winds of" EZTR_CC_NEWLINE "darkness blow through." EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES/FORMATTING FIXES] IGOS DU IKANA: Moves "even" from before "be" to before "Hundreds", and changes formatting to fit. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x152E,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "But Stone Tower is an impenetrable" EZTR_CC_NEWLINE "stronghold. Even hundreds of" EZTR_CC_NEWLINE "soldiers from my kingdom would not" EZTR_CC_NEWLINE "be able to topple it." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] IGOS DU IKANA: Changes second "t" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x1542,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "...T-tiny!!!" EZTR_CC_PERSISTENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] PAMELA: Capitalizes "father"
    EZTR_Basic_ReplaceText(
        0x158C,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Your strange power..." EZTR_CC_NEWLINE "If Father sees that, he'll surely" EZTR_CC_NEWLINE "want to research it." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] PAMELA'S FATHER: Changes first comma to ellipsis and capitalizes "the" to improve readability. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x1591,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "By the way...The song, " EZTR_CC_QUICKTEXT_ENABLE "Farewell to" EZTR_CC_NEWLINE "Gibdos" EZTR_CC_QUICKTEXT_DISABLE ", which the music box is" EZTR_CC_NEWLINE "now playing, drives away Gibdos." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "I discovered it after many years" EZTR_CC_NEWLINE "of researching Gibdos." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] PAMELA'S FATHER: Fixes missing period after "inside"
    EZTR_Basic_ReplaceText(
        0x159B,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "A tale in Ikana tells of a treasure" EZTR_CC_NEWLINE "that rests at the bottom of the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "well " EZTR_CC_COLOR_DEFAULT "on the hilltop." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "It seems the spirits of those who" EZTR_CC_NEWLINE "became Gibdos upon entering the" EZTR_CC_NEWLINE "well in search of that treasure" EZTR_CC_NEWLINE "still linger inside." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] PAMELA'S FATHER: Fixes missing comma after "ninja"
    EZTR_Basic_ReplaceText(
        0x15A3,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Although they are said to be" EZTR_CC_NEWLINE "shells, Garos are still ninja, and" EZTR_CC_NEWLINE "they will not show themselves in" EZTR_CC_NEWLINE "front of people." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] SWAMP BUSINESS SCRUB: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x15E6,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I'm going off to town right now!" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|38|80I'll leave the rest up to you!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SWAMP BUSINESS SCRUB: Capitalizes "magic beans" to match rest of dialogue
    EZTR_Basic_ReplaceText(
        0x15E9,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|D2Do you know what " EZTR_CC_COLOR_GREEN "Magic Beans" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "are, sir?" EZTR_CC_NEWLINE "I'll sell you one for " EZTR_CC_COLOR_PINK "10 Rupees" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] ALL BUSINESS SCRUBS: Changes "Do you need any" to "Are you interested" to fit different contexts better, since this message is shared. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x15EA,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Are you interested?" EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "Yes" EZTR_CC_NEWLINE "No" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SWAMP BUSINESS SCRUB: Capitalizes "magic beans" to match rest of dialogue
    EZTR_Basic_ReplaceText(
        0x15EC,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|81Oh, you don't know how to use" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "Magic Beans" EZTR_CC_COLOR_DEFAULT "? Then, I guess I can't" EZTR_CC_NEWLINE "sell you any..." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SWAMP BUSINESS SCRUB: Capitalizes "magic beans" to match rest of dialogue
    EZTR_Basic_ReplaceText(
        0x15EE,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|81You can't hold any more " EZTR_CC_COLOR_GREEN "Magic" EZTR_CC_NEWLINE "Beans" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES/CONSISTENCY CHANGES] SWAMP BUSINESS SCRUB: Capitalizes "magic beans" and colors it green to match rest of dialogue
    EZTR_Basic_ReplaceText(
        0x15F3,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|D2Do you know what " EZTR_CC_COLOR_GREEN "Magic Beans" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_NEWLINE "are?" EZTR_CC_NEWLINE "I'll sell you one for " EZTR_CC_COLOR_PINK "10 Rupees" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] MOUNTAIN BUSINESS SCRUB: Fixes missing sound effect "3AD2". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x15F6,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|D2But I can't open a business back" EZTR_CC_NEWLINE "home without following the proper" EZTR_CC_NEWLINE "procedures..." EZTR_CC_NEWLINE "Do you know what I mean?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] MOUNTAIN BUSINESS SCRUB: Changes "Swamp Title Deed" to red to match similar message for other Business Scrubs
    EZTR_Basic_ReplaceText(
        0x15F9,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|80Ah! That's a " EZTR_CC_COLOR_RED "Swamp Title Deed" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "I wish you would give that to me!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] MOUNTAIN BUSINESS SCRUB: Fixes missing pink color for "1000 Rupees" from JP and other version of this message
    EZTR_Basic_ReplaceText(
        0x1606,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|81I'll give you my Biggest Bomb Bag," EZTR_CC_NEWLINE "regularly priced at " EZTR_CC_COLOR_PINK "1000 Rupees" EZTR_CC_COLOR_DEFAULT "," EZTR_CC_NEWLINE "for your " EZTR_CC_COLOR_RED "Big Bomb Bag " EZTR_CC_COLOR_DEFAULT "and just" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_PINK "200 Rupees" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] OCEAN BUSINESS SCRUB: Moves sound effect to after ellipsis to match timing of similar messages from Canyon Business Scrub.
    EZTR_Basic_ReplaceText(
        0x160A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|80" EZTR_CC_QUICKTEXT_ENABLE "That's a..." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "..." EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|38|81Oh, that's a Swamp Title Deed." EZTR_CC_NEWLINE "I'm not going back home, yet." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] OCEAN BUSINESS SCRUB: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x1615,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "..." EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|39|8BThanks to you, I'm doing business" EZTR_CC_NEWLINE "on a mountain so cold I could die!" EZTR_CC_NEWLINE "...What a swindle." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Even if it's just out of pure" EZTR_CC_NEWLINE "stubbornness, I'm going to keep" EZTR_CC_NEWLINE "the shop going..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] OCEAN BUSINESS SCRUB: Changes second and third "G" in "G-G-Geeesh" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x1616,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Brrrrrr..." EZTR_CC_SFX "|39|8BWelcome." EZTR_CC_NEWLINE "P-please buy something." EZTR_CC_NEWLINE "G-g-geeesh...It's...c-cold..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] OCEAN BUSINESS SCRUB: Changes second "D" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x1618,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "D-do you need one?" EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "Yes" EZTR_CC_NEWLINE "No" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] OCEAN BUSINESS SCRUB: Changes stutter in "Y-You" and "D-Don't" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x1619,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|81You don't?!?" EZTR_CC_NEWLINE "Y-you know, it's c-c-cold..." EZTR_CC_NEWLINE "D-don't t-t-talk to me until you" EZTR_CC_NEWLINE "w-want one." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] CANYON BUSINNESS SCRUB: Changes "Potion" to "Potions" to match rest of game
    EZTR_Basic_ReplaceText(
        0x161C,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|39|A7I'm here to sell " EZTR_CC_COLOR_BLUE "Blue Potions" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Actually, I want to do business in" EZTR_CC_NEWLINE "the sea breeze while listening to" EZTR_CC_NEWLINE "the sound of the waves." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] CANYON BUSINESS SCRUB: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x161E,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|80" EZTR_CC_QUICKTEXT_ENABLE "That's a..." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "..." EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|38|81Oh, that's a Swamp Title Deed." EZTR_CC_NEWLINE "Big waves don't reach the swamp." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] CANYON BUSINESS SCRUB: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x161F,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|38|80" EZTR_CC_QUICKTEXT_ENABLE "That's a..." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "..." EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|38|81Oh, that's a Mountain Title Deed." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Sea breezes don't blow on tall" EZTR_CC_NEWLINE "mountains." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] CANYON BUSINESS SCRUB: Changes "Potion" to "Potions" to match rest of game
    EZTR_Basic_ReplaceText(
        0x1626,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|D2Don't you need any " EZTR_CC_COLOR_BLUE "Blue Potions" EZTR_CC_COLOR_DEFAULT " in" EZTR_CC_NEWLINE "case you get cursed?" EZTR_CC_NEWLINE "One drink is " EZTR_CC_COLOR_PINK "100 Rupees" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] TOWN BUSINESS SCRUB: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x1633,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "..." EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|39|8BHmmm...No good?" EZTR_CC_NEWLINE "In that case, you leave me no" EZTR_CC_NEWLINE "choice..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] SCARECROW: Ports GC formatting changes.
    EZTR_Basic_ReplaceText(
        0x1659,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "How's that? Pretty interesting," EZTR_CC_NEWLINE "isn't it?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "But I'm sure I'd like any song" EZTR_CC_NEWLINE "written by you better, baby!" EZTR_CC_NEWLINE "If you like, you can play one" EZTR_CC_NEWLINE "for me!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] MENU: Fixes Hero's bow description icon from displaying Quiver to Hero's Bow
    EZTR_Basic_ReplaceText(
        0x1701,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_HEROS_BOW,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Hero's Bow" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Press " EZTR_CC_COLOR_YELLOW "" EZTR_CC_BTN_C "" EZTR_CC_COLOR_DEFAULT " to shoot an " EZTR_CC_COLOR_RED "arrow" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "Use " EZTR_CC_CONTROL_PAD " to aim." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] MENU: Fixes extraneous "to" after "Set"
    EZTR_Basic_ReplaceText(
        0x1702,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_FIRE_ARROW,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Fire Arrow" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Set it to " EZTR_CC_BTN_C " to arm your bow" EZTR_CC_NEWLINE "with arrows that burst into flame." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MENU: Changes "Ice Arrow" from red to blue to match item get message color
    EZTR_Basic_ReplaceText(
        0x1703,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_ICE_ARROW,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_BLUE "Ice Arrow" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Set it to " EZTR_CC_BTN_C " to arm your bow" EZTR_CC_NEWLINE "with arrows that freeze." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MENU: Changes "Light Arrow" from red to yellow to match item get message color
    EZTR_Basic_ReplaceText(
        0x1704,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_LIGHT_ARROW,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_YELLOW "Light Arrow" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Set it to " EZTR_CC_BTN_C " to arm your bow." EZTR_CC_NEWLINE "Aim its sacred light at evil." EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] MENU: Fixes Magic Beans description's lack of color. Ported from EU
    EZTR_Basic_ReplaceText(
        0x170A,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_MAGIC_BEAN,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Magic Beans" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_NEWLINE "Use " EZTR_CC_BTN_C " to plant them." EZTR_CC_NEWLINE "Plant them in " EZTR_CC_COLOR_RED "soft soil" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MENU: Changes Red Potion description to match format of other two potions
    EZTR_Basic_ReplaceText(
        0x1713,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_RED_POTION_1,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Red Potion" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Use it with " EZTR_CC_BTN_C " to replenish your" EZTR_CC_NEWLINE "life energy." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MENU: Changes Blue Potion description's color to blue to match item get message and other potions
    EZTR_Basic_ReplaceText(
        0x1715,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_BLUE_POTION,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_BLUE "Blue Potion" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Use it with " EZTR_CC_BTN_C " to replenish both" EZTR_CC_NEWLINE "life energy and magic power." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MENU: Changes "mailbox" to "postbox" for standardization
    EZTR_Basic_ReplaceText(
        0x172F,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_LETTER_TO_KAFEI,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Letter to Kafei" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Use it with " EZTR_CC_BTN_C "." EZTR_CC_NEWLINE "Drop it into a postbox." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MENU: Changes "mailboxes" to "postboxes" for standardization 
    EZTR_Basic_ReplaceText(
        0x173E,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_POSTMANS_HAT,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Postman's Hat" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "You can look in postboxes when" EZTR_CC_NEWLINE "you wear this with " EZTR_CC_BTN_C "." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MENU: Changes "Use" to "Wear" to match other mask descriptions
    EZTR_Basic_ReplaceText(
        0x1741,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_GIBDO_MASK,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Gibdo Mask" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Wear it with " EZTR_CC_BTN_C ". Even a real Gibdo" EZTR_CC_NEWLINE "will mistake you for its own kind." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MENU: Changes "Frog Choir" to lowercase to match rest of game
    EZTR_Basic_ReplaceText(
        0x1742,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_DON_GEROS_MASK,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Don Gero's Mask" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "When you wear it, you can call" EZTR_CC_NEWLINE "the frog choir members together." EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES/CONSISTENCY CHANGES] MENU: Changes "Z" to BTN_Z to match rest of text box and item get message, moves it down a line and adds a dash afterward for standardization
    EZTR_Basic_ReplaceText(
        0x1788,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_HEROS_SHIELD,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_YELLOW "Hero's Shield" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Use with " EZTR_CC_BTN_R ". Press " EZTR_CC_BTN_R " while " EZTR_CC_COLOR_RED "" EZTR_CC_NEWLINE "" EZTR_CC_BTN_Z "-Targeting" EZTR_CC_COLOR_DEFAULT " to defend while moving." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] MENU: Fixes Largest Quiver being mistakenly referred to as "Biggest Quiver"
    EZTR_Basic_ReplaceText(
        0x178C,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_BIGGEST_QUIVER,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_YELLOW "Largest Quiver" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "This can hold up to a maximum of" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "50 arrows" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MENU: Changes "Bombs" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x178D,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_BOMB_BAG,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_YELLOW "Bomb Bag" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "This can hold up to a maximum of" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "20 bombs" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MENU: Changes "Bombs" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x178E,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_BIG_BOMB_BAG,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_YELLOW "Big Bomb Bag" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "This can hold up to a maximum of" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "30 bombs" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MENU: Changes "Bombs" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x178F,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_BIGGER_BOMB_BAG,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_YELLOW "Biggest Bomb Bag" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "This can hold up to a maximum of" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "40 bombs" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] DOORS: Adds "Out on mail run:" line to clarify that the hours are when the postman is out. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x1809,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Post Office" EZTR_CC_NEWLINE "Out on mail run:" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "9 a.m. to 3 p.m." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] DOORS: Changes "Open" to "Opens". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x180A,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Curiosity Shop" EZTR_CC_NEWLINE "Opens at " EZTR_CC_COLOR_RED "10 p.m." EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] DOORS: Changes color of last period to red to match rest of game
    EZTR_Basic_ReplaceText(
        0x180D,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Magic Hags' Potion Shop" EZTR_CC_NEWLINE "Preparing for business." EZTR_CC_NEWLINE "Open " EZTR_CC_COLOR_RED "6 a.m. to 6 p.m." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] DOORS: Changes "Open from " to "Opens at ". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x1812,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "|22Latte|22" EZTR_CC_NEWLINE "The Members-Only Milk Bar" EZTR_CC_NEWLINE "Opens at " EZTR_CC_COLOR_RED "10 p.m." EZTR_CC_END "",
        NULL
    );

    // [MISTRANSLATION FIXES] TATL: Changes "You've" to "It's" to refer to the Gekko
    EZTR_Basic_ReplaceText(
        0x1903,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "It's run inside a " EZTR_CC_COLOR_DEFAULT "Mad Jelly" EZTR_CC_COLOR_LIGHTBLUE "." EZTR_CC_NEWLINE "Since its body is so soft, normal" EZTR_CC_NEWLINE "attacks won't do any good! Figure" EZTR_CC_NEWLINE "out another way!" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] TATL: Adds comma after "body"
    EZTR_Basic_ReplaceText(
        0x1907,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "Don't tell me you don't know about" EZTR_CC_NEWLINE "the " EZTR_CC_COLOR_DEFAULT "Deku Baba" EZTR_CC_COLOR_LIGHTBLUE "! Cut it down when" EZTR_CC_NEWLINE "it has extended its body, and Deku" EZTR_CC_NEWLINE "Nuts or Sticks will come out." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] TATL: Removes incorrect space between "gun" and "powder". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x190B,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "That's a " EZTR_CC_COLOR_DEFAULT "Nejiron" EZTR_CC_COLOR_LIGHTBLUE "." EZTR_CC_NEWLINE "Don't get too close to it." EZTR_CC_NEWLINE "Sniff...Sniff..." EZTR_CC_NEWLINE "It smells like gunpowder!" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/CONSISTENCY CHANGES] TATL: Fixes "Dinofols" typo. Also changes "targeting" to "Z-Targeting" for standardization 
    EZTR_Basic_ReplaceText(
        0x1910,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "What?! Don't you know about" EZTR_CC_NEWLINE "the " EZTR_CC_COLOR_DEFAULT "Dinolfos" EZTR_CC_COLOR_LIGHTBLUE "? Use Z-Targeting" EZTR_CC_NEWLINE "methods while defending. And" EZTR_CC_NEWLINE "watch out for its fiery breath!" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TATL: Adds dash between "Z" and "Targeting" for standardization
    EZTR_Basic_ReplaceText(
        0x1912,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "What?! Don't you know about" EZTR_CC_NEWLINE "the " EZTR_CC_COLOR_DEFAULT "Keese" EZTR_CC_COLOR_LIGHTBLUE "? Use Z-Targeting when" EZTR_CC_NEWLINE "it gets close. Even if it flies off," EZTR_CC_NEWLINE "I'll follow it for you." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TATL: Changes "target" to "Z-Targeting" to follow the GC change, but uses better formatting
    EZTR_Basic_ReplaceText(
        0x1916,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "Stick with using the basic" EZTR_CC_NEWLINE "Z-Targeting methods while defending." EZTR_CC_NEWLINE "...He's a different rank than those" EZTR_CC_NEWLINE "other two lackeys, though..." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES/TYPO FIXES] TATL: Adds dash betwen "Z" and "Targeting" for standardization. Also changes "Unthinkable" to lowercase, ported from 3DS
    EZTR_Basic_ReplaceText(
        0x191D,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "Use Z-Targeting methods while" EZTR_CC_NEWLINE "defending...The |22unthinkable?|22" EZTR_CC_NEWLINE "What could that possibly be" EZTR_CC_NEWLINE "in a place as dark as this?" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES/CONSISTENCY CHANGES] TATL: Changes formatting by moving "Z" to the next line and adds dash afterwards to match GC
    EZTR_Basic_ReplaceText(
        0x1944,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "What?! You don't know about the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Poe" EZTR_CC_COLOR_LIGHTBLUE "? If you try to use " EZTR_CC_NEWLINE "Z-Targeting, it vanishes." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TATL: Adds dash between "Z" and "Targeting" for standardization
    EZTR_Basic_ReplaceText(
        0x1946,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "Don't you know about the " EZTR_CC_COLOR_DEFAULT "Blue" EZTR_CC_NEWLINE "Tektite" EZTR_CC_COLOR_LIGHTBLUE "? Use Z-Targeting to follow" EZTR_CC_NEWLINE "it as it bounces!" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] TATL: Fixes incorrect "Pea Hat" to be spelled as "Peahat"
    EZTR_Basic_ReplaceText(
        0x1948,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "Don't tell me you don't know about" EZTR_CC_NEWLINE "the " EZTR_CC_COLOR_DEFAULT "Peahat" EZTR_CC_COLOR_LIGHTBLUE "! Just remember that" EZTR_CC_NEWLINE "its root area is soft!" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] TATL: Fixes incorrect "Pea Hat" to be spelled as "Peahat"
    EZTR_Basic_ReplaceText(
        0x1949,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Peahat Larva" EZTR_CC_COLOR_LIGHTBLUE "...You don't know" EZTR_CC_NEWLINE "about it? If it comes at you, get" EZTR_CC_NEWLINE "in the defensive position to knock" EZTR_CC_NEWLINE "it back!" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] TATL: Fixes "Wizrobe" typo by changing to "Wizzrobe"
    EZTR_Basic_ReplaceText(
        0x194B,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "It's a " EZTR_CC_COLOR_DEFAULT "Wizzrobe" EZTR_CC_COLOR_LIGHTBLUE "." EZTR_CC_NEWLINE "You'll get your chance right when" EZTR_CC_NEWLINE "it starts to attack. Be on the" EZTR_CC_NEWLINE "lookout for it!" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] TATL: Removes accidental exclamation mark next to first period. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x1951,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "It's " EZTR_CC_COLOR_DEFAULT "Jo" EZTR_CC_COLOR_LIGHTBLUE ", second of the four ghost" EZTR_CC_NEWLINE "sisters. Aim when she appears." EZTR_CC_NEWLINE "Hurry! There's no time!" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TATL: Changes "Z targeting" to "Z-Targeting" for standardization
    EZTR_Basic_ReplaceText(
        0x1954,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "The " EZTR_CC_COLOR_DEFAULT "pirate" EZTR_CC_COLOR_LIGHTBLUE " found you!" EZTR_CC_NEWLINE "Use Z-Targeting and look for your" EZTR_CC_NEWLINE "chance. You're caught if you don't" EZTR_CC_NEWLINE "win." EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] TATL: Adds comma after "up"
    EZTR_Basic_ReplaceText(
        0x195F,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "That's a " EZTR_CC_COLOR_DEFAULT "Gekko" EZTR_CC_COLOR_LIGHTBLUE "." EZTR_CC_NEWLINE "It gets itself all worked up, and" EZTR_CC_NEWLINE "then it just runs around." EZTR_CC_NEWLINE "I hate it." EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] TATL: Changes text box type to BLUE_TEXT_BOX to match other Tatl hints
    EZTR_Basic_ReplaceText(
        0x1964,
        EZTR_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "The power of this mask allows" EZTR_CC_NEWLINE "you to see what you can smell..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "If it's possible, put the " EZTR_CC_COLOR_RED "scent" EZTR_CC_COLOR_LIGHTBLUE " in" EZTR_CC_NEWLINE "something and take it to the" EZTR_CC_NEWLINE "Magic Hags' Potion Shop." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SYSTEM: Writes out "2nd" as "Second" to match rest of the game. Ported from GC
    EZTR_Basic_ReplaceText(
        0x1B90,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Proceed to the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Night of the Second Day" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "Yes" EZTR_CC_NEWLINE "No" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SYSTEM: Writes out "2nd" as "Second" to match rest of the game. Ported from GC
    EZTR_Basic_ReplaceText(
        0x1B92,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Proceed to the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Dawn of the Second Day" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "Yes" EZTR_CC_NEWLINE "No" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] SIGNS: Changes "Band" to lowercase
    EZTR_Basic_ReplaceText(
        0x1C00,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "The Indigo-Go's" EZTR_CC_COLOR_DEFAULT ", the Zora band" EZTR_CC_NEWLINE "that's revived the deep-sea sound" EZTR_CC_NEWLINE "with its famous song, will be" EZTR_CC_NEWLINE "playing at the Carnival of Time!!!" EZTR_CC_BOX_BREAK "Contact Madame Aroma regarding" EZTR_CC_NEWLINE "performances and details." EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] SIGNS: Changes color of last period to match punctuation coloration of rest of sign
    EZTR_Basic_ReplaceText(
        0x1C02,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Patron Guidelines for the " EZTR_CC_NEWLINE "Milk Bar, " EZTR_CC_COLOR_RED "Latte" EZTR_CC_COLOR_DEFAULT ":" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "We offer our customers limited-" EZTR_CC_NEWLINE "run milk. Thus, we are a members-" EZTR_CC_NEWLINE "only establishment." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Those who do not have " EZTR_CC_COLOR_RED "proof of" EZTR_CC_NEWLINE "membership " EZTR_CC_COLOR_DEFAULT "will be " EZTR_CC_COLOR_RED "refused" EZTR_CC_NEWLINE "service" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "             The Owner" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] SIGNS: Changes "with" to "in". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x1C0A,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Enter all disciples and those who" EZTR_CC_NEWLINE "choose to be enlightened in the" EZTR_CC_NEWLINE "way of the sword." EZTR_CC_NEWLINE "       Mighty Training Center" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TINGLE: Changes "green clothes" to green to match rest of game
    EZTR_Basic_ReplaceText(
        0x1D00,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|79What's this?" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "Green clothes" EZTR_CC_COLOR_DEFAULT "...White fairy..." EZTR_CC_NEWLINE "Sir, could you, by chance, be a" EZTR_CC_NEWLINE "forest fairy?" EZTR_CC_BOX_BREAK "Oh my!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TINGLE: Changes color of "Tingle" from pink to green to match his glorious green hues (and to also match rest of his dialogue)
    EZTR_Basic_ReplaceText(
        0x1D01,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|7AMy name is " EZTR_CC_COLOR_GREEN "Tingle" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "I think I am the same as you, sir." EZTR_CC_NEWLINE "A forest fairy!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Alas, though I am already age 35," EZTR_CC_NEWLINE "no fairy has come to me yet..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "My father tells me to grow up" EZTR_CC_NEWLINE "and act my age, but why?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "I tell you...Tingle is the very" EZTR_CC_NEWLINE "reincarnation of a fairy!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES/CONSISTENCY CHANGES] TINGLE: Changes formatting so price options line up better, and changes colors of prices to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x1D11,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        5,
        40,
        true,
        "" EZTR_CC_COLOR_GREEN "" EZTR_CC_THREE_CHOICE "Clock Town    " EZTR_CC_COLOR_PINK "5 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "Woodfall      " EZTR_CC_COLOR_PINK "40 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "No thanks" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES/CONSISTENCY CHANGES] TINGLE: Changes formatting so price options line up better, and changes colors of prices to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x1D12,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        20,
        40,
        true,
        "" EZTR_CC_COLOR_GREEN "" EZTR_CC_THREE_CHOICE "Woodfall      " EZTR_CC_COLOR_PINK "20 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "Snowhead     " EZTR_CC_COLOR_PINK "40 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "No thanks" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES/CONSISTENCY CHANGES] TINGLE: Changes formatting so price options line up better, and changes colors of prices to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x1D13,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        20,
        40,
        true,
        "" EZTR_CC_COLOR_GREEN "" EZTR_CC_THREE_CHOICE "Snowhead     " EZTR_CC_COLOR_PINK "20 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "Romani Ranch " EZTR_CC_COLOR_PINK "40 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "No thanks" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES/CONSISTENCY CHANGES] TINGLE: Changes formatting so price options line up better, and changes colors of prices to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x1D14,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        20,
        40,
        true,
        "" EZTR_CC_COLOR_GREEN "" EZTR_CC_THREE_CHOICE "Romani Ranch " EZTR_CC_COLOR_PINK "20 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "Great Bay    " EZTR_CC_COLOR_PINK "40 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "No thanks" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES/CONSISTENCY CHANGES] TINGLE: Changes formatting so price options line up better, and changes colors of prices to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x1D15,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        20,
        40,
        true,
        "" EZTR_CC_COLOR_GREEN "" EZTR_CC_THREE_CHOICE "Great Bay    " EZTR_CC_COLOR_PINK "20 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "Stone Tower  " EZTR_CC_COLOR_PINK "40 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "No thanks" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES/CONSISTENCY CHANGES] TINGLE: Changes formatting so price options line up better, and changes colors of prices to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x1D16,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        20,
        40,
        true,
        "" EZTR_CC_COLOR_GREEN "" EZTR_CC_THREE_CHOICE "Stone Tower  " EZTR_CC_COLOR_PINK "20 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "Clock Town   " EZTR_CC_COLOR_PINK "40 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "No thanks" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] TATL: Adds BOX_BREAK2 after "here" to match EU
    EZTR_Basic_ReplaceText(
        0x1F47,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "Whoa! Whoa! " EZTR_CC_COLOR_RED "Skull Kid" EZTR_CC_COLOR_LIGHTBLUE ", wait for" EZTR_CC_NEWLINE "me! I'm still here!!!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_COLOR_RED "Tael" EZTR_CC_COLOR_LIGHTBLUE ", you can't leave without me!" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES/CONSISTENCY CHANGES] TAEL: Capitalizes "sis", and changes "Why" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x1F43,
        EZTR_STANDARD_TEXT_BOX_I,
        17,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|68|47" EZTR_CC_COLOR_PINK "...Aw, but Sis..." EZTR_CC_NEWLINE "W...why can't I try it out, too?" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TAEL: Changes second "s" to uppercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x1F48,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_PINK "S-S..." EZTR_CC_COLOR_RED "Sis" EZTR_CC_COLOR_PINK "!" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_FADE "|00|3C" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] TATL: Fixes length of fade effect. Ported from EU.
    EZTR_Basic_ReplaceText(
        0x1F74,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "" EZTR_CC_DELAY "|00|14" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|68|50" EZTR_CC_COLOR_LIGHTBLUE "" EZTR_CC_NAME "!" EZTR_CC_FADE "|00|1E" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] HAPPY MASK SALESMAN: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x1FAD,
        EZTR_STANDARD_TEXT_BOX_I,
        49,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Well then, " EZTR_CC_DELAY "|00|14I am counting on you" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|69|7F..." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] HAPPY MASK SALESMAN: Changes middle exclamation mark to question mark, similiar to 3DS change
    EZTR_Basic_ReplaceText(
        0x1FBB,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "What have you done to me!?!" EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] HAPPY MASK SALESMAN: Fixes missing fade effect. Ported from EU
    EZTR_Basic_ReplaceText(
        0x1FBF,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "It is said that an evil and wicked" EZTR_CC_NEWLINE "power is bestowed upon the one" EZTR_CC_NEWLINE "who wears that mask." EZTR_CC_FADE "|00|5A" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] HAPPY MASK SALESMAN: Fixes missing sound effect "6983". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x1FF8,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|83That's the " EZTR_CC_COLOR_RED "Garo's Mask" EZTR_CC_COLOR_DEFAULT ", isn't it?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] TAEL: Changes "Swamp", "Mountain", "Ocean" and "Canyon" to red to match JP and 3DS
    EZTR_Basic_ReplaceText(
        0x200B,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "" EZTR_CC_SFX "|68|51Swamp" EZTR_CC_COLOR_PINK ". " EZTR_CC_COLOR_RED "" EZTR_CC_DELAY "|00|0AMountain" EZTR_CC_COLOR_PINK "." EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "" EZTR_CC_DELAY "|00|0AOcean" EZTR_CC_COLOR_PINK ". " EZTR_CC_COLOR_RED "" EZTR_CC_DELAY "|00|0ACanyon" EZTR_CC_COLOR_PINK "." EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AHurry..." EZTR_CC_COLOR_RED "The four" EZTR_CC_COLOR_PINK " who are there..." EZTR_CC_NEWLINE "Bring them " EZTR_CC_COLOR_RED "here" EZTR_CC_COLOR_PINK "..." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] TATL: Adds missing question mark before first exclamation mark. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x202E,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "" EZTR_CC_QUICKTEXT_ENABLE "Tael! Why are you protecting him?!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "Aren't you mad at him for hitting" EZTR_CC_NEWLINE "you so much?" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] TAEL: Moves "always" from before "want" to after "to". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x203E,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|68|51" EZTR_CC_COLOR_PINK "I don't want to always be running" EZTR_CC_NEWLINE "away!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "If only I had been stronger, the" EZTR_CC_NEWLINE "Skull Kid wouldn't have..." EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] TAEL: Capitalizes "sis". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x2048,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_PINK "How?" EZTR_CC_NEWLINE "...How did you know that, Sis?" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TATL: Changes second "W" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x2076,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|68|50" EZTR_CC_COLOR_LIGHTBLUE "W-what exactly are all of you?" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] TATL: Moves "still" from before "think" to after "you"re". Ported from 3DS 
    EZTR_Basic_ReplaceText(
        0x200D,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "Nooo!!" EZTR_CC_NEWLINE "What are you doing to my" EZTR_CC_NEWLINE "brother?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Skull Kid, do you think you're still" EZTR_CC_NEWLINE "our friend after that?!!?" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] TATL: Fixes missing sound effect "6845". Ported from EU
    EZTR_Basic_ReplaceText(
        0x208E,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_LIGHTBLUE "" EZTR_CC_DELAY "|00|14|22F" EZTR_CC_DELAY "|00|14o" EZTR_CC_DELAY "|00|14r" EZTR_CC_DELAY "|00|14g" EZTR_CC_DELAY "|00|14i" EZTR_CC_DELAY "|00|14v" EZTR_CC_DELAY "|00|14e " EZTR_CC_DELAY "|00|14y" EZTR_CC_DELAY "|00|14o" EZTR_CC_DELAY "|00|14u" EZTR_CC_DELAY "|00|14r " EZTR_CC_DELAY "|00|14f" EZTR_CC_DELAY "|00|14r" EZTR_CC_DELAY "|00|14i" EZTR_CC_DELAY "|00|14e" EZTR_CC_DELAY "|00|14n" EZTR_CC_DELAY "|00|14d.|22" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_COLOR_LIGHTBLUE "" EZTR_CC_DELAY "|00|14Forgive our friend?" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_COLOR_LIGHTBLUE "" EZTR_CC_SFX "|68|45What do you mean by forgive?" EZTR_CC_NEWLINE "Huh? What friend?" EZTR_CC_FADE "|00|1E" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/CONSISTENCY CHANGES] GOSSIP STONES: Capitalizes "mask", and colors "Don Gero'd mask" red to match other Gossip Stone hints
    EZTR_Basic_ReplaceText(
        0x20B2,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The" EZTR_CC_COLOR_RED " frogs" EZTR_CC_COLOR_DEFAULT " that are supposed to" EZTR_CC_NEWLINE "gather in the mountains when" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "spring" EZTR_CC_COLOR_DEFAULT " arrives are elsewhere." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "You need " EZTR_CC_COLOR_RED "Don Gero's Mask" EZTR_CC_COLOR_DEFAULT " to" EZTR_CC_NEWLINE "bring them together." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "The frogs in " EZTR_CC_COLOR_RED "Clock Town" EZTR_CC_COLOR_DEFAULT ", " EZTR_CC_COLOR_RED "the" EZTR_CC_NEWLINE "swamp" EZTR_CC_COLOR_DEFAULT ", " EZTR_CC_COLOR_RED "Woodfall Temple" EZTR_CC_COLOR_DEFAULT " and" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Great Bay Temple" EZTR_CC_COLOR_DEFAULT " make four..." EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] GOSSIP STONES: Adds comma after "Mask"
    EZTR_Basic_ReplaceText(
        0x20B9,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The symbol of marriage, the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Couple's Mask" EZTR_CC_COLOR_DEFAULT ", seems to have the" EZTR_CC_NEWLINE "power to " EZTR_CC_COLOR_RED "calm" EZTR_CC_COLOR_DEFAULT " and " EZTR_CC_COLOR_RED "silence" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "arguments." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] GOSSIP STONES: Changes "mask" to red to match rest of Gossip Stone hints
    EZTR_Basic_ReplaceText(
        0x20C7,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The " EZTR_CC_COLOR_RED "mask " EZTR_CC_COLOR_DEFAULT "that can see into" EZTR_CC_NEWLINE "people's hearts and minds also" EZTR_CC_NEWLINE "seems to work on animals" EZTR_CC_NEWLINE "as well..." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] GOSSIP STONES: Changes last "the" to "a". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x20D8,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "It seems an " EZTR_CC_COLOR_RED "animal mask" EZTR_CC_COLOR_DEFAULT " that was" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "popular" EZTR_CC_COLOR_DEFAULT " with children long ago is" EZTR_CC_NEWLINE "being cherished by the owner of" EZTR_CC_NEWLINE "a suspicious shop..." EZTR_CC_END "",
        NULL
    );

     // [CONFIG] Configuration for Gibdo Mask Hint Gossip Stone mistranslation fix
    if (CONFIG_GIBDO_GOSSIP != GIBDO_VANILLA) {
        if (CONFIG_GIBDO_GOSSIP == GIBDO_FAITHFUL) {       
            // [MISTRANSLATION FIXES/FORMATTING FIXES] GOSSIP STONES: Changes "could fall" to "fell", and reformats message to fill new empty space
            EZTR_Basic_ReplaceText(
                0x210E,
                EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "It seems the" EZTR_CC_COLOR_RED " Gibdo Mask " EZTR_CC_COLOR_DEFAULT "fell from" EZTR_CC_NEWLINE "Pamela's father's cursed face..." EZTR_CC_END "",
                NULL
            );
        } else {
            // [MISTRANSLATION FIXES] GOSSIP STONES: Ports mistranslation fix from 3DS, but uses better version of formatting
            EZTR_Basic_ReplaceText(
                0x210E,
                EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "It seems Pamela's father was" EZTR_CC_NEWLINE "wearing the" EZTR_CC_COLOR_RED " Gibdo Mask" EZTR_CC_COLOR_DEFAULT "..." EZTR_CC_END "",
                NULL
            );
        }
    };

    // [COLOR FIXES] GOSSIP STONES: Changes "Giant's Mask" to red to match other mask hints and JP 
    EZTR_Basic_ReplaceText(
        0x2116,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "It seems the " EZTR_CC_COLOR_RED "Giant's Mask" EZTR_CC_COLOR_DEFAULT " was" EZTR_CC_NEWLINE "dormant in " EZTR_CC_COLOR_RED "Stone Tower Temple" EZTR_CC_COLOR_DEFAULT "..." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] BOMBER'S NOTEBOOK: Adds comma after "Anju" and "innkeeper" to match other messages
    EZTR_Basic_ReplaceText(
        0x2134,
        EZTR_BOMBERS_NOTEBOOK,
        0,
        EZTR_ICON_ANJU,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Anju, the innkeeper," EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0A" EZTR_CC_QUICKTEXT_ENABLE "was added to your " EZTR_CC_COLOR_RED "notebook" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] BOMBER'S NOTEBOOK: Capitalizes "sisters" to match rest of game, such as "Gorman Brothers"
    EZTR_Basic_ReplaceText(
        0x213F,
        EZTR_BOMBERS_NOTEBOOK,
        0,
        EZTR_ICON_ROSA_SISTERS,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The Rosa Sisters, twin dancers," EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0A" EZTR_CC_QUICKTEXT_ENABLE "were added to your " EZTR_CC_COLOR_RED "notebook" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES/FORMATTING FIXES] BOMBER'S NOTEBOOK: Adds "of Memories" after "Pendant" to match other message and JP, and moves "Inn" left to account for this
    EZTR_Basic_ReplaceText(
        0x219E,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_PENDANT_OF_MEMORIES,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_BLUE "Delivered Pendant of Memories" EZTR_CC_COLOR_DEFAULT "   " EZTR_CC_COLOR_GREEN "Inn" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Conveyed Kafei's intentions to Anju" EZTR_CC_PERSISTENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] BOMBER'S NOTEBOOK: Moves space from before BOMBER_CODE to after, and changes "North of town" to "North Clock Town"
    EZTR_Basic_ReplaceText(
        0x21A8,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_EXCLAMATION_MARK,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_BLUE "Secret code:" EZTR_CC_COLOR_DEFAULT " " EZTR_CC_COLOR_RED "" EZTR_CC_BOMBER_CODE "" EZTR_CC_COLOR_DEFAULT "  " EZTR_CC_COLOR_GREEN "North Clock Town" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Code for entering Bombers' hideout" EZTR_CC_PERSISTENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] BOMBER'S NOTEBOOK: Changes "North of Town" to "North Clock Town"
    EZTR_Basic_ReplaceText(
        0x21A9,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_BOMBERS_NOTEBOOK,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_BLUE "Bombers' Notebook" EZTR_CC_COLOR_DEFAULT "   " EZTR_CC_COLOR_GREEN "North Clock Town" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Members-only schedule book" EZTR_CC_PERSISTENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] BOMBER'S NOTEBOOK: Capitalizes "sisters" to match rest of game, such as "Gorman Brothers", and changes "West of Town" to "West Clock Town", and capitalizes "thanks" to match other notebook reward names
    EZTR_Basic_ReplaceText(
        0x21AB,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_PIECE_OF_HEART,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_BLUE "Rosa Sisters' Thanks" EZTR_CC_COLOR_DEFAULT "  " EZTR_CC_COLOR_GREEN "West Clock Town" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Thanks for teaching the dance" EZTR_CC_PERSISTENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] BOMBER'S NOTEBOOK: Capitalizes "paper" to match other notebook reward names
    EZTR_Basic_ReplaceText(
        0x21AC,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_PIECE_OF_HEART,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_BLUE "Thanks for the Paper" EZTR_CC_COLOR_DEFAULT "  " EZTR_CC_COLOR_GREEN "Inn Restroom" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Thanks for helping person in toilet" EZTR_CC_PERSISTENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] BOMBER'S NOTEBOOK: Fixes missing space in "horserace"
    EZTR_Basic_ReplaceText(
        0x21B3,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_GARO_MASK,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_BLUE "Garo's Mask" EZTR_CC_COLOR_DEFAULT "          " EZTR_CC_COLOR_GREEN "Gorman Track" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Prize for winning Gorman horse race" EZTR_CC_PERSISTENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] BOMBER'S NOTEBOOK: Changes "North of Town" to "North Clock Town"
    EZTR_Basic_ReplaceText(
        0x21B7,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_BLAST_MASK,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_BLUE "Blast Mask" EZTR_CC_COLOR_DEFAULT "           " EZTR_CC_COLOR_GREEN "North Clock Town" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Thanks for guarding bag from thief" EZTR_CC_PERSISTENT "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] BOMBER'S NOTEBOOK: Formatting changes for Toilet Hand's entry
    EZTR_Basic_ReplaceText(
        0x21D6,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_TOILET_HAND,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "???" EZTR_CC_COLOR_DEFAULT " (Person living in the inn's restroom)" EZTR_CC_NEWLINE "Details are unknown" EZTR_CC_PERSISTENT "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] BOMBER'S NOTEBOOK: Formatting changes for Kamaro's entry
    EZTR_Basic_ReplaceText(
        0x21D8,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_KAMARO,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Kamaro" EZTR_CC_COLOR_DEFAULT ", ghost of a charismatic dancer" EZTR_CC_NEWLINE "Enjoys moonlight" EZTR_CC_PERSISTENT "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] BOMBER'S NOTEBOOK: Formatting changes for Grog's entry
    EZTR_Basic_ReplaceText(
        0x21D9,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_GROG,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Grog" EZTR_CC_COLOR_DEFAULT ", Cucco Shack's breeder" EZTR_CC_NEWLINE "His crest is frightful" EZTR_CC_PERSISTENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] TRADING POST PART-TIMER: Fixes accidental comma after "And"
    EZTR_Basic_ReplaceText(
        0x2334,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Nah, I don't know that kid. And" EZTR_CC_NEWLINE "the manager's not here now, so I" EZTR_CC_NEWLINE "really can't help you." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] EAST CLOCK TOWN BOMBER: Changes second "I" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x235B,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I-is s-someone...there?" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [MISTRANSLATION FIXES] MUTOH: Replaces "sons" with "apprentices" to match JP and 3DS
    EZTR_Basic_ReplaceText(
        0x2363,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "!!!" EZTR_CC_NEWLINE "The mayor's son?" EZTR_CC_NEWLINE "No good runnin' off before the" EZTR_CC_NEWLINE "ceremony!" EZTR_CC_BOX_BREAK "...I wish I could get mad, but my" EZTR_CC_NEWLINE "own apprentices ran off in a hurry" EZTR_CC_NEWLINE "before the carnival..." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "What a shame! I could cry!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] SHIKASHI: Fixes missing sound effect "6946". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x236A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|46Kafei?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "I can recall when he was in the" EZTR_CC_NEWLINE "Bombers." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Don't see his face much anymore," EZTR_CC_NEWLINE "though...Well, what could he be" EZTR_CC_NEWLINE "doing?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Try asking the children. The" EZTR_CC_NEWLINE "Bombers know all about what goes" EZTR_CC_NEWLINE "on in town." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] SWAMP SHOOTING GALLERY: Changes "Congratulations" to lowercase
    EZTR_Basic_ReplaceText(
        0x2375,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|4BAye, congratulations!" EZTR_CC_NEWLINE "Who's gettin' married?" EZTR_CC_NEWLINE "Awn't they gonna 'ave a big" EZTR_CC_NEWLINE "ceremony?" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] SWORDSMAN: Fixes incorrect "the" to "your", like other version of this message. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x2713,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "When you sharpen your sword" EZTR_CC_NEWLINE "skills, your mind is sharpened" EZTR_CC_NEWLINE "naturally." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] SWORDSMAN: Changes formatting so option prices line up better
    EZTR_Basic_ReplaceText(
        0x2716,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        1,
        10,
        true,
        "So, will you try it?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_COLOR_GREEN "" EZTR_CC_THREE_CHOICE "Novice Course  " EZTR_CC_COLOR_PINK "1 Rupee" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "Expert Course " EZTR_CC_COLOR_PINK "10 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "No thanks" EZTR_CC_END "",
        NULL
    );

    // [CONFIG] Configuration for Swordsman mistranslation fix
    if (CONFIG_SWORDSMAN != SWORDSMAN_VANILLA) {
        if (CONFIG_SWORDSMAN == SWORDSMAN_FAITHFUL) {
            // [MISTRANSLATION FIXES] SWORDSMAN: Removes "the" after "using"
            EZTR_Basic_ReplaceText(
                0x273A,
                EZTR_STANDARD_TEXT_BOX_I,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "" EZTR_CC_SFX "|69|5AThe " EZTR_CC_COLOR_RED "Expert Course" EZTR_CC_COLOR_DEFAULT " is a practice" EZTR_CC_NEWLINE "session!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Cut down the " EZTR_CC_COLOR_RED "10" EZTR_CC_COLOR_DEFAULT " logs using" EZTR_CC_NEWLINE "highly difficult techniques!" EZTR_CC_EVENT "" EZTR_CC_END "",
                NULL
            );
            // [MISTRANSLATION FIXES] SWORDSMAN: Changes "be" to "have been"
            EZTR_Basic_ReplaceText(
                0x273B,
                EZTR_STANDARD_TEXT_BOX_I,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "If you score a perfect " EZTR_CC_COLOR_RED "30 points" EZTR_CC_COLOR_DEFAULT "," EZTR_CC_NEWLINE "you shall have been taught all the" EZTR_CC_NEWLINE "secrets!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Have you prepared?" EZTR_CC_EVENT2 "" EZTR_CC_END "",
                NULL
            );
        } else {
            // [MISTRANSLATION FIXES] SWORDSMAN: Ports mistranslation fix from 3DS
            EZTR_Basic_ReplaceText(
                0x273A,
                EZTR_STANDARD_TEXT_BOX_I,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "" EZTR_CC_SFX "|69|5AThe " EZTR_CC_COLOR_RED "Expert Course" EZTR_CC_COLOR_DEFAULT " is a practice" EZTR_CC_NEWLINE "session!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Cut down the " EZTR_CC_COLOR_RED "10" EZTR_CC_COLOR_DEFAULT " logs using my" EZTR_CC_NEWLINE "most difficult technique!" EZTR_CC_EVENT "" EZTR_CC_END "",
                NULL
            );
            // [MISTRANSLATION FIXES] SWORDSMAN: Ports mistranslation fix from 3DS
            EZTR_Basic_ReplaceText(
                0x273B,
                EZTR_STANDARD_TEXT_BOX_I,
                0,
                EZTR_ICON_NO_ICON,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "If you score a perfect " EZTR_CC_COLOR_RED "30 points" EZTR_CC_COLOR_DEFAULT "," EZTR_CC_NEWLINE "I'll know you've mastered all of my" EZTR_CC_NEWLINE "secret techniques!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Have you prepared?" EZTR_CC_EVENT2 "" EZTR_CC_END "",
                NULL
            );
        }
    };

    // [TYPO FIXES] SWORDSMAN: Fixes incorrect space in "Be gone". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x273F,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|5B" EZTR_CC_QUICKTEXT_ENABLE "Why do you wear the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "All-Night Mask" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Are you suggesting that my " EZTR_CC_NEWLINE "instructions will put you to sleep?" EZTR_CC_NEWLINE "How rude! Begone!" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES/TYPO FIXES] SWORDSMAN: Fixes sound effect not playing and removes accidental space before "Do".
    EZTR_Basic_ReplaceText(
        0x2743,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "......" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|69|5CDo you really wish to study the" EZTR_CC_NEWLINE "sword?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "I can't find the will to teach you" EZTR_CC_NEWLINE "when their milk has no freshness..." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] SWORDSMAN: Fixes incorrect space in "Be gone". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x274A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "......" EZTR_CC_NEWLINE "Why that mask?" EZTR_CC_NEWLINE "Are you making fun of me? If" EZTR_CC_NEWLINE "you're making fun of me, begone!" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] POSTMAN: Changes "Postmaster" to "Postmistress". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x277F,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|6FI have a delivery for you," EZTR_CC_NEWLINE "Postmistress!!!" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] POSTMAN: Changes "Postmaster" to "Postmistress". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x2780,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I have decided to flee." EZTR_CC_NEWLINE "It is an order from the" EZTR_CC_NEWLINE "Postmistress." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "I am now free! I can set my own" EZTR_CC_NEWLINE "schedule!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] POSTBOX: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x2784,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Deposit mail here." EZTR_CC_DELAY "|00|0A" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|28|4C" EZTR_CC_QUICKTEXT_ENABLE "Ka-ching!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );
    
    // [SFX FIXES] POSTBOX: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x2785,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I cannot accept anything other" EZTR_CC_NEWLINE "than letters." EZTR_CC_DELAY "|00|0A" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|28|4C" EZTR_CC_QUICKTEXT_ENABLE "Ka-ching!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES/DELAY FIXES] POSTBOX: Fixes sound effect not playing, and changes delay length from 4 to 10 to match other postbox messages.
    EZTR_Basic_ReplaceText(
        0x2786,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Thank you for using the postal" EZTR_CC_NEWLINE "system." EZTR_CC_DELAY "|00|0A" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|28|4C" EZTR_CC_QUICKTEXT_ENABLE "Ka-ching!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] POSTBOX: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x2787,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Your letter has been received." EZTR_CC_DELAY "|00|0A" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|28|4C" EZTR_CC_QUICKTEXT_ENABLE "Ka-ching!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] POSTBOX: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x2788,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "It shall be delivered this" EZTR_CC_NEWLINE "afternoon." EZTR_CC_DELAY "|00|0A" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|28|4C" EZTR_CC_QUICKTEXT_ENABLE "Ka-ching!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] POSTBOX: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x2789,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "It shall be delivered tomorrow." EZTR_CC_DELAY "|00|0A" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|28|4C" EZTR_CC_QUICKTEXT_ENABLE "Ka-ching!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] POSTBOX: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x27A1,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "You are doing a great job." EZTR_CC_DELAY "|00|0A" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|28|4C" EZTR_CC_QUICKTEXT_ENABLE "Ka-ching!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] POSTBOX: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x27A2,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Some item other than a letter has" EZTR_CC_NEWLINE "been deposited." EZTR_CC_DELAY "|00|0A" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|28|4C" EZTR_CC_QUICKTEXT_ENABLE "Ka-ching!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] POSTBOX: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x27A3,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Nice work." EZTR_CC_DELAY "|00|0A" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|28|4C" EZTR_CC_QUICKTEXT_ENABLE "Ka-ching!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] POSTBOX: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x27A4,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Please take " EZTR_CC_COLOR_RED "priority mail " EZTR_CC_COLOR_DEFAULT "to the" EZTR_CC_NEWLINE "Post Office. It will even be" EZTR_CC_NEWLINE "accepted late at night." EZTR_CC_DELAY "|00|0A" EZTR_CC_NEWLINE "" EZTR_CC_SFX "|28|4C" EZTR_CC_QUICKTEXT_ENABLE "Ka-ching!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] DEKU PLAYGROUND: Adds comma after "above"
    EZTR_Basic_ReplaceText(
        0x27E0,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|3A|D2Even though today is actually the" EZTR_CC_NEWLINE "eve of the carnival, it's quiet" EZTR_CC_NEWLINE "above, and no one's come down" EZTR_CC_NEWLINE "here yet." EZTR_CC_BOX_BREAK "Will you play, young " EZTR_CC_NAME "?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/CONSISTENCY CHANGES] DEKU PLAYGROUND: Fixes missing puncuation after results and changes color of results to red to match other records. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x27EE,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "" EZTR_CC_TIMER_MINIGAME_2 "" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "Amazing...It's a new record!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES/TYPO FIXES/CONSISTENCY CHANGES] DEKU PLAYGROUND: Fixes missing puncuation after results, changes color of results to red to match other records, and fixes sound effect not playing. Ported from 3DS.
    EZTR_Basic_ReplaceText(
        0x27F4,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "" EZTR_CC_TIMER_MINIGAME_2 "" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "..." EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|38|81Amazing. A new record..." EZTR_CC_NEWLINE "And for three days straight?!?" EZTR_CC_NEWLINE "Wow...We've been had." EZTR_CC_BOX_BREAK "Well, you're obviously a pro, and" EZTR_CC_NEWLINE "pros can't play here." EZTR_CC_NEWLINE "Take this and don't come back." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/CONSISTENCY CHANGES] DEKU PLAYGROUND: Fixes missing puncuation after results and changes color of results to red to match other records
    EZTR_Basic_ReplaceText(
        0x27F9,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "" EZTR_CC_TIMER_MINIGAME_2 "" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "Well, that's the way it goes." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] HONEY & DARLING: Removes "again" since this dialogue can appear before you have played the minigame
    EZTR_Basic_ReplaceText(
        0x2847,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|5FOh, will the little Deku Scrub play?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] HONEY & DARLING: Ports capitalization of "shooting" like other messages from 3DS, and changes "Target Shooting" to red and "tonight" to default to match other messages
    EZTR_Basic_ReplaceText(
        0x2848,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|2B" EZTR_CC_COLOR_RED "Target Shooting" EZTR_CC_COLOR_DEFAULT " runs until tonight," EZTR_CC_NEWLINE "so why don't we let him play," EZTR_CC_NEWLINE "Darling?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] HONEY & DARLING: Fixes missing comma after "it"
    EZTR_Basic_ReplaceText(
        0x284A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|2AToday is " EZTR_CC_COLOR_RED "Target Shooting" EZTR_CC_COLOR_DEFAULT " day, isn't" EZTR_CC_NEWLINE "it, Darling?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES/TYPO FIXES] HONEY & DARLING: Fixes missing comma after "it", and ports fix for incorrect sound effect "392A" to "692A" from EU.
    EZTR_Basic_ReplaceText(
        0x285A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|2AToday is " EZTR_CC_COLOR_RED "Basket Bomb " EZTR_CC_COLOR_DEFAULT "day, isn't it," EZTR_CC_NEWLINE "Darling?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES/TYPO FIXES] HONEY & DARLING: Fixes missing comma after "it", and ports fix for incorrect sound effect "392A" to "692A" from EU.
    EZTR_Basic_ReplaceText(
        0x285E,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|2AToday is " EZTR_CC_COLOR_RED "Basket Bomb " EZTR_CC_COLOR_DEFAULT "day, isn't it," EZTR_CC_NEWLINE "Darling?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] HONEY & DARLING: Changes "Rupees" from red to pink to match rest of game. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x2871,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        10,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|5FOne game is " EZTR_CC_COLOR_PINK "10 Rupees" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED " " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "I'll play" EZTR_CC_NEWLINE "I won't play" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ANJU: Changes "customer's" to "customers'"
    EZTR_Basic_ReplaceText(
        0x28A6,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|22Umm...Are you...staying the night?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Oh my!" EZTR_CC_NEWLINE "I wonder...Did I by chance ask you" EZTR_CC_NEWLINE "the same thing earlier?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "My mother is always telling me to" EZTR_CC_NEWLINE "remember our customers' faces," EZTR_CC_NEWLINE "but I tend to forget them..." EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] LINK-GORO: Fixes missing comma after "busy"
    EZTR_Basic_ReplaceText(
        0x28B0,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|39|1CThe city is so busy, it's hard to" EZTR_CC_NEWLINE "find one's way-goro..." EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] LINK-GORO: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x28B2,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I should have a reservation-goro." EZTR_CC_NEWLINE "The name is " EZTR_CC_NAME "." EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|38|FCDon't you have it-goro?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ANJU: Changes "2" to "two"
    EZTR_Basic_ReplaceText(
        0x28C3,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "We used to be a cafeteria, but" EZTR_CC_NEWLINE "after my father died, the room" EZTR_CC_NEWLINE "rentals that were part of our" EZTR_CC_NEWLINE "service became our main focus." EZTR_CC_BOX_BREAK "We're just a small inn with only" EZTR_CC_NEWLINE "two rooms, but people from all over" EZTR_CC_NEWLINE "come here at this time of year..." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "See the performers practicing" EZTR_CC_NEWLINE "outside? The second floor bunk" EZTR_CC_NEWLINE "room guests are very spirited at" EZTR_CC_NEWLINE "night with songs and dancing." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] ANJU: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x28CE,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_DELAY "|00|0A" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|69|23|22Whew?|22" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] ANJU'S GRANDMOTHER: Changes second and third "W" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x28CF,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Er..." EZTR_CC_NEWLINE "W-w-whewwwould you like me to" EZTR_CC_NEWLINE "read you a story?" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] ANJU: Removes accidental space before "me"
    EZTR_Basic_ReplaceText(
        0x28EB,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I'm...actually...afraid to meet him..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "and to hear the reason why he" EZTR_CC_NEWLINE "wanted to disappear..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "It might be because of...me..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ANJU: Adds comma after "letter"
    EZTR_Basic_ReplaceText(
        0x28F4,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "But in the letter, it said he " EZTR_CC_NEWLINE "definitely would come back..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] ANJU: Fixes accidental capitalization of "Thank"
    EZTR_Basic_ReplaceText(
        0x28F6,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Yes..." EZTR_CC_NEWLINE "Mother, " EZTR_CC_DELAY "|00|0Athank you." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ANJU'S GRANDMOTHER: Capitalizes "father" and "mother"
    EZTR_Basic_ReplaceText(
        0x2902,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|0COh, Tortus." EZTR_CC_NEWLINE "Did you finish helping Father?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Then let Mother read you a story." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] ANJU'S GRANDMOTHER: Adds "The" before both storybook names to match titles during reading, and removes extra space after "Time". Ported from 3DS 
    EZTR_Basic_ReplaceText(
        0x2903,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Now, which story would you like" EZTR_CC_NEWLINE "to hear?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_COLOR_GREEN "" EZTR_CC_THREE_CHOICE "I'll pass" EZTR_CC_NEWLINE "The Carnival of Time " EZTR_CC_COLOR_RED "(2 hours)" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "The Four Giants " EZTR_CC_COLOR_RED "(Til morning)" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES/CONSISTENCY CHANGES] ANJU"S GRANDMOTHER: Changes "The Carnival of Time" to red to match other storybook name. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x2904,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "The Carnival of Time" EZTR_CC_COLOR_DEFAULT ", is it?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "The carnival is almost here, so it's" EZTR_CC_NEWLINE "good for you to learn its meaning." EZTR_CC_NEWLINE "It's a little long, but I'll read it" EZTR_CC_NEWLINE "with some enthusiasm. Ahem..." EZTR_CC_BOX_BREAK "|22The Carnival of Time.|22" EZTR_CC_NEWLINE "Each year, the season of harmony" EZTR_CC_NEWLINE "begins when the sun and moon" EZTR_CC_NEWLINE "are in alignment." EZTR_CC_BOX_BREAK "Paying homage to the way that" EZTR_CC_NEWLINE "both nature and time are" EZTR_CC_NEWLINE "tirelessly in the process of " EZTR_CC_NEWLINE "progressing..." EZTR_CC_BOX_BREAK "the Carnival of Time is when the" EZTR_CC_NEWLINE "peoples of the four worlds" EZTR_CC_NEWLINE "celebrate that harmony and" EZTR_CC_NEWLINE "request fruitfulness for the year." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES/CONSISTENCY CHANGES] ANJU'S GRANDMOTHER: Changes tense when referring to marriage ceremony to match the rest of the story, changes "doors" to singular, adds a comma after "held", and capitalizes all instances of "clock tower" for standardization
    EZTR_Basic_ReplaceText(
        0x2905,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "For ages, people have worn masks" EZTR_CC_NEWLINE "resembling the giants who are the" EZTR_CC_NEWLINE "gods of the four worlds." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Now, it has become a custom for" EZTR_CC_NEWLINE "each person to bring a handmade" EZTR_CC_NEWLINE "mask to the Carnival of Time." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "It is said that if a couple unites" EZTR_CC_NEWLINE "on the day of the festival and" EZTR_CC_NEWLINE "dedicates a mask as a sign of" EZTR_CC_NEWLINE "their union, it will bring luck." EZTR_CC_BOX_BREAK "The centerpiece of the carnival is" EZTR_CC_NEWLINE "the Clock Tower, and on the eve" EZTR_CC_NEWLINE "of all the festivities, the door to" EZTR_CC_NEWLINE "its roof is opened..." EZTR_CC_BOX_BREAK "From atop the Clock Tower roof, a" EZTR_CC_NEWLINE "ceremony to call the gods is held," EZTR_CC_NEWLINE "and an ancient song is sung." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "All of these festivities for the" EZTR_CC_NEWLINE "Carnival of Time are held so that" EZTR_CC_NEWLINE "we may ask the gods for a rich" EZTR_CC_NEWLINE "harvest in the year to come!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] ANJU'S GRANDMOTHER: Capitalizes "clock tower" for standardization
    EZTR_Basic_ReplaceText(
        0x2906,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|0AYou did a good job!" EZTR_CC_NEWLINE "That's all for Tortus!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Now, when does the Clock Tower" EZTR_CC_NEWLINE "roof open?" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "On the eve of the festival" EZTR_CC_NEWLINE "I dunno" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ANJU'S GRANDMOTHER: Adds comma after "Well" and capitalizes "mother"
    EZTR_Basic_ReplaceText(
        0x2907,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|0AWell, in that case, you try again" EZTR_CC_NEWLINE "with Mother." EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ANJU'S GRANDMOTHER: Adds comma after "ago" and "times" to improve readability. Also changes period after "trapped us" to a comma and changes "Or" to lowercase to rejoin the complete sentence
    EZTR_Basic_ReplaceText(
        0x290B,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "The Four Giants" EZTR_CC_COLOR_DEFAULT ", is it?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "This is quite long, but it is a good" EZTR_CC_NEWLINE "story for you to hear, so I'll read" EZTR_CC_NEWLINE "it with some extra gusto." EZTR_CC_NEWLINE "Ahem..." EZTR_CC_BOX_BREAK "|22The Four Giants.|22" EZTR_CC_NEWLINE "This tale's from long ago, when all" EZTR_CC_NEWLINE "the people weren't separated into" EZTR_CC_NEWLINE "four worlds like they are now." EZTR_CC_BOX_BREAK "In those times, all the people lived" EZTR_CC_NEWLINE "together, and the four giants lived" EZTR_CC_NEWLINE "among them." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "On the day of the festival that" EZTR_CC_NEWLINE "celebrates the harvest, the giants" EZTR_CC_NEWLINE "spoke to the people..." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "|22We have chosen to guard the" EZTR_CC_NEWLINE "people while we sleep...|22" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "|22100 steps north," EZTR_CC_NEWLINE "100 steps south," EZTR_CC_NEWLINE "100 steps east," EZTR_CC_NEWLINE "100 steps west.|22" EZTR_CC_BOX_BREAK "|22If you have need, call us in a" EZTR_CC_NEWLINE "loud voice by declaring something" EZTR_CC_NEWLINE "such as, 'The mountain blizzard" EZTR_CC_NEWLINE "has trapped us,'|22" EZTR_CC_BOX_BREAK "|22or 'The ocean is about to" EZTR_CC_NEWLINE "swallow us.' Your cries shall carry" EZTR_CC_NEWLINE "to us...|22" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ANJU'S GRANDMOTHER: Adds comma after "rejoiced"
    EZTR_Basic_ReplaceText(
        0x290C,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Now then...There was one who" EZTR_CC_NEWLINE "was shocked and saddened by" EZTR_CC_NEWLINE "all this." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "A little imp." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "The imp was a friend of the" EZTR_CC_NEWLINE "giants since before they had" EZTR_CC_NEWLINE "created the four worlds." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "|22Why must you leave?|22" EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "|22Why do you not stay?|22" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "The childhood friend felt" EZTR_CC_NEWLINE "neglected, so he spread his anger" EZTR_CC_NEWLINE "across the four worlds." EZTR_CC_NEWLINE "Repeatedly, he wronged all people." EZTR_CC_BOX_BREAK "Overwhelmed with misfortune, the" EZTR_CC_NEWLINE "people sang the song of prayer to" EZTR_CC_NEWLINE "the giants who lived in each of" EZTR_CC_NEWLINE "the four compass directions." EZTR_CC_BOX_BREAK "The giants heard their cry and" EZTR_CC_NEWLINE "responded with a roar." EZTR_CC_NEWLINE "|22Oh, imp. Oh, imp. We are the" EZTR_CC_NEWLINE "protectors of the people.|22" EZTR_CC_BOX_BREAK "|22You have caused the people pain." EZTR_CC_NEWLINE "Oh, imp, leave these four worlds!" EZTR_CC_NEWLINE "Otherwise, we shall tear you" EZTR_CC_NEWLINE "apart!|22" EZTR_CC_BOX_BREAK "The imp was frightened and" EZTR_CC_NEWLINE "saddened." EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "He had lost his old friends." EZTR_CC_BOX_BREAK "The imp returned to the heavens," EZTR_CC_NEWLINE "and harmony was restored to the" EZTR_CC_NEWLINE "four worlds." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "And the people rejoiced, and they" EZTR_CC_NEWLINE "worshiped the giants of the four" EZTR_CC_NEWLINE "worlds like gods. And they lived" EZTR_CC_NEWLINE "happily...ever after..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ANJU'S GRANDMOTHER: Capitalizes "mother" 
    EZTR_Basic_ReplaceText(
        0x290E,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|0AOh, really?" EZTR_CC_NEWLINE "But you listened hard, so Mother" EZTR_CC_NEWLINE "is happy." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] ROSA SISTERS: Ports GC formatting fixes.
    EZTR_Basic_ReplaceText(
        0x2924,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "We're pretty prepared, but our" EZTR_CC_NEWLINE "troupe leader seems to be acting" EZTR_CC_NEWLINE "strange for some reason." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Well, we haven't even seen the" EZTR_CC_NEWLINE "stage yet...It looks like we're going" EZTR_CC_NEWLINE "straight to the big show without" EZTR_CC_NEWLINE "any rehearsal." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] GURU-GURU: Fixes missing period after "carnival"
    EZTR_Basic_ReplaceText(
        0x292A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|59Doo-doo-doooo..." EZTR_CC_NEWLINE "Don't speak to her right now. " EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "She hasn't finished her new dance" EZTR_CC_NEWLINE "for the town's carnival." EZTR_CC_NEWLINE "Doo-da-daa..." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Even though the song is finished." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] GURU-GURU: Fixes missing period after "sad". Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x292C,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|59La-la-la..." EZTR_CC_NEWLINE "They said I was" EZTR_CC_NEWLINE "much too loud" EZTR_CC_NEWLINE "when I practiced in my room." EZTR_CC_BOX_BREAK "They got mad." EZTR_CC_NEWLINE "Sigh...Now I'm sad." EZTR_CC_NEWLINE "I'll just stay here all night and" EZTR_CC_NEWLINE "away from their pad." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] GURU-GURU: Fixes missing sound effect "6980". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x2931,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|80Why was the...? Why was the...?" EZTR_CC_NEWLINE "Why was the dog the leader?!?" EZTR_CC_NEWLINE "Was it 'cause something was" EZTR_CC_NEWLINE "wrong with me, sir???" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] GURU-GURU: Adds comma after "quickly"
    EZTR_Basic_ReplaceText(
        0x2936,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The leader was a good instructor." EZTR_CC_NEWLINE "His members matured quickly, and" EZTR_CC_NEWLINE "they became adults in an instant." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] JUGGLER TWINS: Capitalizes "sisters" to match rest of game, such as "Gorman Brothers"
    EZTR_Basic_ReplaceText(
        0x2940,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|56Did you meet the Rosa Sisters," EZTR_CC_NEWLINE "our fellow performers from the" EZTR_CC_NEWLINE "troupe? They're twins, too!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] JUGGLER TWINS: Capitalizes "brother"
    EZTR_Basic_ReplaceText(
        0x2945,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "You're joking, aren't you, Brother?" EZTR_CC_NEWLINE "He'll make our game too complex!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TOILET HAND: Changes stutter to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x2948,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|74Pa-pa-pa-paper, please!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TOILET HAND: Changes second "N" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x2949,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|74N-not that!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] ANJU: Capitalizes "scrubs" to match rest of game. Ported from 3DS 
    EZTR_Basic_ReplaceText(
        0x2952,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Hello, Mr. Scrub." EZTR_CC_NEWLINE "How about this rain?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Do you Scrubs feel sad on rainy" EZTR_CC_NEWLINE "days, too?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "...." EZTR_CC_NEWLINE "But Deku Scrubs are supposed to" EZTR_CC_NEWLINE "like rain. At least one of us has" EZTR_CC_NEWLINE "reason to be happy..." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] Adds extra period after "Anj.." to complete ellipsis
    EZTR_Basic_ReplaceText(
        0x295A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Umm, Anj..." EZTR_CC_NEWLINE "We'll be leaving right away..." EZTR_CC_NEWLINE "Mumble, mumble...." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] GURU-GURU: Removes accidental apostrophe in "times"
    EZTR_Basic_ReplaceText(
        0x2960,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|59Doo-doo-doooo..." EZTR_CC_NEWLINE "Though we're running out of time," EZTR_CC_NEWLINE "the troupe leader won't wake up." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "In times like this, it means the" EZTR_CC_NEWLINE "leader has something he's hiding" EZTR_CC_NEWLINE "from us." EZTR_CC_NEWLINE "Do-dee-da-da..." EZTR_CC_BOX_BREAK "But the song is done..." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONFIG] Configuration for Gorman in Stock Pot Inn
    if (!CONFIG_GORMAN_CARDS) {
        // [MISTRANSLATION FIXES] GORMAN: Ports mistranslation fix from 3DS
        EZTR_Basic_ReplaceText(
            0x2962,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "I have decided we will leave the" EZTR_CC_NEWLINE "town tomorrow. We can't expect" EZTR_CC_NEWLINE "anyone to attend our show." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Aren't you going to flee?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "If you have nowhere else to go," EZTR_CC_NEWLINE "you should seek refuge at the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Gorman Track" EZTR_CC_COLOR_DEFAULT " in the " EZTR_CC_COLOR_RED "south" EZTR_CC_COLOR_DEFAULT ". That" EZTR_CC_NEWLINE "is my brothers' ranch." EZTR_CC_BOX_BREAK "My brothers...They're nice guys." EZTR_CC_END "",
            NULL
        );
    };

    // [GRAMMAR FIXES] KAFEI: Adds comma after "ceremony"
    EZTR_Basic_ReplaceText(
        0x2972,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Before my wedding ceremony, I was" EZTR_CC_NEWLINE "quite happy. I was targeted" EZTR_CC_NEWLINE "because of what I had been" EZTR_CC_NEWLINE "turned into." EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] KAFEI: Ports GC formatting fixes.
    EZTR_Basic_ReplaceText(
        0x2974,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I know Anju is worried...but I can't" EZTR_CC_NEWLINE "go out yet." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "I made a promise to her that I" EZTR_CC_NEWLINE "would bring the wedding mask and" EZTR_CC_NEWLINE "greet her." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] CURIOSITY SHOP OWNER: Fixes referring to Big Bomb Bag as "Bomb Bag"
    EZTR_Basic_ReplaceText(
        0x29D3,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|52Tonight's special bargain was just" EZTR_CC_NEWLINE "stolen. It just came in seconds" EZTR_CC_NEWLINE "ago. This is really hot!" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|14" EZTR_CC_QUICKTEXT_ENABLE "I kid you not!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_BOX_BREAK "Actually, it's somethin' sold over" EZTR_CC_NEWLINE "at the " EZTR_CC_COLOR_RED "Bomb Shop" EZTR_CC_COLOR_DEFAULT ", but a thief" EZTR_CC_NEWLINE "sold it to me..." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "It's a " EZTR_CC_QUICKTEXT_ENABLE "" EZTR_CC_COLOR_RED "Big Bomb Bag" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ACheck it out! Buy it!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] CURIOSITY SHOP OWNER: Fixes referring to Big Bomb Bag as "Bomb Bag"
    EZTR_Basic_ReplaceText(
        0x29D7,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|52Tonight's special bargain was just" EZTR_CC_NEWLINE "stolen. It just came in seconds" EZTR_CC_NEWLINE "ago. It's really hot!" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|14" EZTR_CC_QUICKTEXT_ENABLE "I kid you not." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_BOX_BREAK "Actually, it's somethin' sold over" EZTR_CC_NEWLINE "at the " EZTR_CC_COLOR_RED "Bomb Shop" EZTR_CC_COLOR_DEFAULT ", but a thief" EZTR_CC_NEWLINE "sold it to me." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "It's a " EZTR_CC_QUICKTEXT_ENABLE "" EZTR_CC_COLOR_RED "Big Bomb Bag" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ACheck it out! Buy it!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] CURIOSITY SHOP OWNER: Fixes referring to Big Bomb Bag as "Bomb Bag"
    EZTR_Basic_ReplaceText(
        0x29DB,
        EZTR_STANDARD_TEXT_BOX_II,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        0x0030,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_RED "Big Bomb Bag: 100 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "This is just between us, but this" EZTR_CC_NEWLINE "is actually the Bomb Shop's." EZTR_CC_PERSISTENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SYSTEM: Fixes referring to Big Bomb Bag as "Bomb Bag"
    EZTR_Basic_ReplaceText(
        0x29DC,
        EZTR_STANDARD_TEXT_BOX_II,
        49,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        0x0031,
        EZTR_NO_VALUE,
        true,
        "Big Bomb Bag: 100 Rupees" EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "I'll buy it" EZTR_CC_NEWLINE "No thanks" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] CURIOSITY SHOP OWNER: Fixes formatting by changing second box to BOX_BREAK2
    EZTR_Basic_ReplaceText(
        0x29E2,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Now Kafei..." EZTR_CC_NEWLINE "I've known him since he was real" EZTR_CC_NEWLINE "little..." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "But when he showed up looking all" EZTR_CC_NEWLINE "young in that little " EZTR_CC_COLOR_RED "brat body" EZTR_CC_COLOR_DEFAULT "," EZTR_CC_NEWLINE "I didn't know what I was seeing! " EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "All it took was one glance at that" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Keaton Mask " EZTR_CC_COLOR_DEFAULT "he was carrying for" EZTR_CC_NEWLINE "me to realize that I was looking" EZTR_CC_NEWLINE "at my old friend." EZTR_CC_BOX_BREAK "I gave him that mask a long time" EZTR_CC_NEWLINE "ago when he was just li'l Kafei." EZTR_CC_NEWLINE "Didn't know he kept it that well" EZTR_CC_NEWLINE "for so long..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] SAKON: Changes exclamation mark color to match rest of game
    EZTR_Basic_ReplaceText(
        0x29E6,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Don't be such a Rupee pincher," EZTR_CC_NEWLINE "you miser." EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0A" EZTR_CC_QUICKTEXT_ENABLE "" EZTR_CC_COLOR_PINK "200" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] CURIOSITY SHOP OWNER: Fixes duplicate sound effect. Ported from EU.
    EZTR_Basic_ReplaceText(
        0x29E7,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|80Well, why don't I just offer you" EZTR_CC_NEWLINE "even less? And y'know, this is the" EZTR_CC_NEWLINE "Bomb Shop's! How 'bout if I tell" EZTR_CC_NEWLINE "'em all about you?" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] SAKON: Changes second and third "W" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x29EE,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "W-w-wait! It's a deal! It's a deal!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] CURIOSITY SHOP OWNER: Colors HELD_ITEM_PRICE pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x29EF,
        EZTR_STANDARD_TEXT_BOX_II,
        49,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "For that, I'll give you" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_PINK "" EZTR_CC_HELD_ITEM_PRICE "" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "I'll take it" EZTR_CC_NEWLINE "No thanks" EZTR_CC_END "",
        NULL
    );

    // [CONFIG] Configuration for mistranslation fix for Old Lady from Bomb Shop while being stolen from
    if (!CONFIG_OLD_LADY) {
        // [MISTRANSLATION FIXES] OLD LADY FROM BOMB SHOP: Ports mistranslation fix from 3DS
        EZTR_Basic_ReplaceText(
            0x2A30,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_SFX "|69|07Ouch! Watch where you're going!" EZTR_CC_EVENT "" EZTR_CC_END "",
            NULL
        );
        // [MISTRANSLATION FIXES] OLD LADY FROM BOMB SHOP: Ports mistranslation fix from 3DS
        EZTR_Basic_ReplaceText(
            0x2A31,
            EZTR_STANDARD_TEXT_BOX_I,
            16,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_SFX "|69|08Stop! Thief!!! I'm just an old lady--" EZTR_CC_NEWLINE "give me my luggage back!!!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
            NULL
        );
    };

    // [TYPO FIXES/FORMATTING FIXES] OLD LADY FROM BOMB SHOP: Fixes incorrect "Bomb Bags" by changing it to "Big Bomb Bags", and changes formatting to fit new word. Ported from 3DS 
    EZTR_Basic_ReplaceText(
        0x2A32,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|09Oh my. And I thought we would" EZTR_CC_NEWLINE "finally be able to stock " EZTR_CC_COLOR_RED "Big Bomb" EZTR_CC_NEWLINE "Bags" EZTR_CC_COLOR_DEFAULT " in our store. What a shame..." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/FORMATTING FIXES] OLD LADY FROM BOMB SHOP: Fixes incorrect "Bomb Bag" by changing it to "Big Bomb Bag", and changes formatting to fit change. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x2A33,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|09Oh my. You think it'll never" EZTR_CC_NEWLINE "happen to you. Well, now I've" EZTR_CC_NEWLINE "learned my lesson." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "And I thought we would finally" EZTR_CC_NEWLINE "be able to stock " EZTR_CC_COLOR_RED "Big Bomb Bags" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_NEWLINE "in our shop. It's too bad..." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/FORMATTING FIXES] OLD LADY FROM BOMB SHOP: Fixes incorrect "Bomb Bag" by changing it to "Big Bomb Bag", and moves "Maybe I'll" down a line to fix subsequent awkward formatting. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x2A34,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|0AThank you. Since he didn't make" EZTR_CC_NEWLINE "off with them, I can finally stock" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Big Bomb Bags " EZTR_CC_COLOR_DEFAULT "at our shop." EZTR_CC_NEWLINE "Maybe I'll put 'em out tomorrow." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] TOTO: Fixes missing sound effect "6950". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x2A9A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|50The Indigo-Go's is the popular" EZTR_CC_NEWLINE "group that we Zora are so proud" EZTR_CC_NEWLINE "of. They've put out a lot of songs." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "One of their hits is" EZTR_CC_NEWLINE "|22Ballad of the Wind Fish.|22" EZTR_CC_NEWLINE "You know that song, don't you?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Huh? You don't?" EZTR_CC_NEWLINE "Really?" EZTR_CC_NEWLINE "Even one that famous?" EZTR_CC_NEWLINE "Hmmm..." EZTR_CC_BOX_BREAK "You'd be able to hear it if the" EZTR_CC_NEWLINE "show wasn't canceled. It's such" EZTR_CC_NEWLINE "a shame." EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] MADAME AROMA: Changes "Mayor's" to lowercase
    EZTR_Basic_ReplaceText(
        0x2A9D,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|0DOh dear, are you on a field trip?" EZTR_CC_NEWLINE "This is my office. The " EZTR_CC_COLOR_RED "mayor's" EZTR_CC_NEWLINE "office" EZTR_CC_COLOR_DEFAULT " is next door." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "If you need to speak to me about" EZTR_CC_NEWLINE "the carnival performances, make" EZTR_CC_NEWLINE "an appointment, please." EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] MADAME AROMA: Fixes formatting of second box by removing extraneous NEWLINE
    EZTR_Basic_ReplaceText(
        0x2A9E,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|0DOh dear, are you on a field trip?" EZTR_CC_NEWLINE "...Or are you the expert person-" EZTR_CC_NEWLINE "finder I hired?" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Yes, yes, yes. I say, you have the" EZTR_CC_NEWLINE "face of a pro." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "The characteristics of the person" EZTR_CC_NEWLINE "I want you to find.." EZTR_CC_NEWLINE "Yes, yes. I know them." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] GORMAN: Changes second and third "W" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x2AAC,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "W-wha-what's this?!?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] TOTO: Moves ellipsis before "Or" up a line to fix appearance of missing punctuation
    EZTR_Basic_ReplaceText(
        0x2AAD,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Allow me to explain." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Oh, excuse me...I am to" EZTR_CC_NEWLINE "work at this year's show..." EZTR_CC_NEWLINE "Or that was the plan." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES/FORMATTING FIXES] VISCEN: Ports changing "Mayor's" and "Members" to lowercase from 3DS, switches "have" and "already", and uses modified version of 3DS formatting
    EZTR_Basic_ReplaceText(
        0x2ABD,
        EZTR_STANDARD_TEXT_BOX_I,
        16,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|6EMost of the townsfolk have already" EZTR_CC_NEWLINE "taken shelter without waiting for" EZTR_CC_NEWLINE "the mayor's orders." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "The only ones left are public" EZTR_CC_NEWLINE "servants and committee members..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Mr. Mayor and Carnival Committee" EZTR_CC_NEWLINE "members, please order those who" EZTR_CC_NEWLINE "remain to evacuate!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] DOTOUR: Changes "Mayor" to lowercase. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x2AD1,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Well, I may be an unreliable" EZTR_CC_NEWLINE "mayor, but at least my family can" EZTR_CC_NEWLINE "depend on me. I want to protect" EZTR_CC_NEWLINE "my wife." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] VISCEN: Changes "Mayor's" to lowercase. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x2AD6,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "...The mayor's orders are absolute!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] RECPTIONIST: Fixes missing period
    EZTR_Basic_ReplaceText(
        0x2AD9,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|2AWelcome." EZTR_CC_NEWLINE "Do you have some" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|04b" EZTR_CC_DELAY "|00|04u" EZTR_CC_DELAY "|00|04s" EZTR_CC_DELAY "|00|04i" EZTR_CC_DELAY "|00|04n" EZTR_CC_DELAY "|00|04e" EZTR_CC_DELAY "|00|04s" EZTR_CC_DELAY "|00|04s?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] RECEPTIONIST: Changes "Mayor's" to lowercase. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x2ADA,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The room on the left is" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|06the mayor's room..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "It sounds like they're having some" EZTR_CC_NEWLINE "kind of " EZTR_CC_DELAY "|00|06meeting, " EZTR_CC_DELAY "|00|04I think." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] RECEPTIONIST: Fixes missing comma after "room"
    EZTR_Basic_ReplaceText(
        0x2ADB,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The room on your right is the" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|08drawing room, and it's also Madame" EZTR_CC_NEWLINE "Aroma's office. " EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/GRAMMAR FIXES] RECEPTIONIST: Fixes capitalization of "Mayor's Office" and adds missing comma after "room"
    EZTR_Basic_ReplaceText(
        0x2ADE,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The room on your left is the" EZTR_CC_NEWLINE "mayor's office..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "And the room on your right is the" EZTR_CC_NEWLINE "drawing room, and it's also Madame" EZTR_CC_NEWLINE "Aroma's office." EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/GRAMMAR FIXES] RECEPTIONIST: Fixes capitalization of "The Mayor's", and removes accidental space after "whatchamacallit..."
    EZTR_Basic_ReplaceText(
        0x2ADF,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The room on your left is" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|06the mayor's office..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "It sounds like their..." EZTR_CC_NEWLINE "whatchamacallit..." EZTR_CC_DELAY "|00|06meeting " EZTR_CC_DELAY "|00|04ended." EZTR_CC_NEWLINE "A lot of tough guys walked out." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] RECEPTIONIST: Fixes missing comma after "room"
    EZTR_Basic_ReplaceText(
        0x2AE0,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The room on your right is" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|08the drawing room, and it's also" EZTR_CC_NEWLINE "Madame Aroma's office." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Don't go in there without an" EZTR_CC_NEWLINE "appointment. The lady will get mad" EZTR_CC_NEWLINE "at you." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] GORMAN: Changes comma to an ellpsis to better match dialogue
    EZTR_Basic_ReplaceText(
        0x2AEA,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Just what should I..." EZTR_CC_NEWLINE "I mean the Gorman Troupe, do?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES/GRAMMAR FIXES] BARTEN: Standardizes "magic power" as all lowercase, and adds comma after "gulp"
    EZTR_Basic_ReplaceText(
        0x2AFB,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "There is one more surprising thing" EZTR_CC_NEWLINE "about this milk..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "It depends on who you ask, but" EZTR_CC_NEWLINE "there are those who consider this" EZTR_CC_NEWLINE "milk as a source of " EZTR_CC_COLOR_GREEN "magic power" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "It takes just one gulp, they say!" EZTR_CC_BOX_BREAK "It's expensive, but thankfully, it's" EZTR_CC_NEWLINE "the one we serve the most." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] BARTEN: Ports GC formatting changes.
    EZTR_Basic_ReplaceText(
        0x2AFE,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "There is a road to the " EZTR_CC_COLOR_RED "south" EZTR_CC_COLOR_DEFAULT " of" EZTR_CC_NEWLINE "town called " EZTR_CC_COLOR_RED "Milk Road" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "This could be someone's prank..." EZTR_CC_NEWLINE "You see, the road is blocked by a" EZTR_CC_NEWLINE "huge " EZTR_CC_COLOR_RED "boulder" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "I can't get any milk in from the" EZTR_CC_NEWLINE "ranch now, so I can't please my" EZTR_CC_NEWLINE "customers. It's terrible!" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] BARTEN: Fixes accidental space between "guest" and ellipsis
    EZTR_Basic_ReplaceText(
        0x2B07,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Fine. Be my...guest." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES/CONSISTENCY CHANGES] BARTEN: Changes formatting so prices line up better, and removes colons after options to match rest of game
    EZTR_Basic_ReplaceText(
        0x2B0B,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        20,
        200,
        true,
        "What'll it be?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_COLOR_GREEN "" EZTR_CC_THREE_CHOICE "Regular Milk  " EZTR_CC_COLOR_PINK "20 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "Chateau     " EZTR_CC_COLOR_PINK "200 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "Nothing" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] GORMAN: Fixes accidental space between "Hey" and ellipsis
    EZTR_Basic_ReplaceText(
        0x2B13,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Hey...You!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Milk..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "It's miiiilk..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Can you get tipsy from something" EZTR_CC_NEWLINE "like milk?!? Hic!" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] MADAME AROMA: Adds comma after "Actually"
    EZTR_Basic_ReplaceText(
        0x2B20,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I'm sorry." EZTR_CC_NEWLINE "At this point in time, I can give" EZTR_CC_NEWLINE "you only something like this." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "Actually, I wanted to give this to" EZTR_CC_NEWLINE "you sooner..." EZTR_CC_NEWLINE "Really!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] TOTO: Changes comma color to match rest of game
    EZTR_Basic_ReplaceText(
        0x2B27,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Wrong! Wrong! Wrong!" EZTR_CC_NEWLINE "The guitar goes on the" EZTR_CC_COLOR_RED " right" EZTR_CC_COLOR_DEFAULT "," EZTR_CC_NEWLINE "the " EZTR_CC_COLOR_RED "right" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] GORMAN: Changes second "t" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x2B35,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Tha-that melody..." EZTR_CC_CONTINUE "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] GORMAN: Changes incorrect "singers" to "singer"
    EZTR_Basic_ReplaceText(
        0x2B38,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I entered show business because I" EZTR_CC_NEWLINE "heard this song at the Carnival of" EZTR_CC_NEWLINE "Time long ago..." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "By doing performances, I thought" EZTR_CC_NEWLINE "maybe I'd get to meet the singer" EZTR_CC_NEWLINE "of that song..." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] LOTTERY SHOP: Changes "6:00" and "11:00" to "6 o'clock" and "11 o'clock" respectively 
    EZTR_Basic_ReplaceText(
        0x2B61,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "We've finished selling tickets" EZTR_CC_NEWLINE "today. Please come back tomorrow." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Please note that the winning" EZTR_CC_NEWLINE "numbers will be announced " EZTR_CC_COLOR_RED "tonight" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "from " EZTR_CC_COLOR_RED "6 o'clock" EZTR_CC_COLOR_DEFAULT " to " EZTR_CC_COLOR_RED "11 o'clock" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] ROMANI: Changes start of second half of scream to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x332F,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|2DAaiieee-aaaaaahhh!!!" EZTR_CC_FADE "|00|1E" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ROMANI: Replaces comma after "boy" with double dash. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x3341,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Hey, Grasshopper, I'm recruiting" EZTR_CC_NEWLINE "for an assistant right now!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "You're a boy--won't you try?" EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "Yes" EZTR_CC_NEWLINE "No" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] ROMANI: Changes "10" and "balloons" to red. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x3349,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "There are " EZTR_CC_COLOR_RED "10" EZTR_CC_COLOR_DEFAULT " ghost-shaped " EZTR_CC_COLOR_RED "balloons" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_NEWLINE "in the ranch, so hurry and burst" EZTR_CC_NEWLINE "them all. If you take over" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "2 minutes" EZTR_CC_COLOR_DEFAULT ", you're out." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] ROMANI: Changes "tonight" and "two" to red to match other versions of this message
    EZTR_Basic_ReplaceText(
        0x334E,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The operation starts " EZTR_CC_COLOR_RED "tonight" EZTR_CC_COLOR_DEFAULT " at" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "two" EZTR_CC_COLOR_DEFAULT ". I'll be waiting in the barn." EZTR_CC_NEWLINE "Don't be late!" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] ROMANI: Moves ellipsis after "Huh?" to before. Ported from 3DS
    EZTR_Basic_ReplaceText(
        0x3358,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "........." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_DELAY "|00|0A...Huh?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "" EZTR_CC_DELAY "|00|0AYou..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] ROMANI: Fixes missing space between "Practice?" and following ellipsis
    EZTR_Basic_ReplaceText(
        0x3359,
        EZTR_STANDARD_TEXT_BOX_I,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Practice? " EZTR_CC_DELAY "|00|14...You want to?" EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "Yes" EZTR_CC_NEWLINE "No" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/COLOR FIXES] ROMANI: Changes "record" to "time" to reflect the dialogue box being meant to display results, not the record. Also colors score red to match other results dialogues 
    EZTR_Basic_ReplaceText(
        0x335E,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|41The time was " EZTR_CC_COLOR_RED "" EZTR_CC_TIMER_MINIGAME_2 "" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0A...I think." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] ROMANI: Removes extraneous "you"
    EZTR_Basic_ReplaceText(
        0x336C,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "You're our bodyguard, Grasshopper," EZTR_CC_NEWLINE "so all you have to do is" EZTR_CC_NEWLINE "practice hard!" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] CREMIA: Standardizes "magic power" as all lowercase
    EZTR_Basic_ReplaceText(
        0x3395,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The special Romani-bred cows" EZTR_CC_NEWLINE "are the source of Chateau Romani," EZTR_CC_NEWLINE "the most desired of forbidden" EZTR_CC_NEWLINE "milk!" EZTR_CC_BOX_BREAK "It is a mystical milk that fills you" EZTR_CC_NEWLINE "with magic power..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "If you seek the dreamy milk of" EZTR_CC_NEWLINE "Chateau Romani, please visit" EZTR_CC_NEWLINE "Latte, near Clock Town's East" EZTR_CC_NEWLINE "Gate." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ROMANI: Capitalizes "sister"
    EZTR_Basic_ReplaceText(
        0x339E,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Yes, Sister..." EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] CREMIA: Fixes color of question mark to match rest of game
    EZTR_Basic_ReplaceText(
        0x339F,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "We put the cows to pasture when" EZTR_CC_NEWLINE "morning comes. Do you know the" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Romani breed" EZTR_CC_COLOR_DEFAULT "?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES/FORMATTING FIXES] CREMIA: Standardizes "magic power" as all lowercase, and changes formatting to more polished version from other version of this dialogue
    EZTR_Basic_ReplaceText(
        0x33A0,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "The special Romani-bred cows" EZTR_CC_NEWLINE "are the source of Chateau Romani," EZTR_CC_NEWLINE "the most desired of forbidden" EZTR_CC_NEWLINE "milk!" EZTR_CC_BOX_BREAK "It is a mystical milk that fills you" EZTR_CC_NEWLINE "with magic power..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "If you seek the dreamy milk of" EZTR_CC_NEWLINE "Chateau Romani, please visit" EZTR_CC_NEWLINE "Latte, near Clock Town's East" EZTR_CC_NEWLINE "Gate." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ROMANI: Capitalizes "sister"
    EZTR_Basic_ReplaceText(
        0x33A2,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|41That again, Sister?" EZTR_CC_NEWLINE "I'm sick of hearing it!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] CREMIA: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x33A5,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_DELAY "|00|0A" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|69|29Oh...Sorry." EZTR_CC_NEWLINE "Now...I'm kind of...Thinking..." EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Last night" EZTR_CC_COLOR_DEFAULT "...My sister..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] CREMIA: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x33A7,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_DELAY "|00|0A" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|69|29Oh...Sorry." EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Two days ago" EZTR_CC_COLOR_DEFAULT "...My sister..." EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|14I'm sorry..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ROMANI: Capitalizes "sister"
    EZTR_Basic_ReplaceText(
        0x33AC,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|41YES, Sister..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] CREMIA: Changes "this" to default color to match other version of this message
    EZTR_Basic_ReplaceText(
        0x33AE,
        EZTR_STANDARD_TEXT_BOX_I,
        48,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I'm going by wagon into town." EZTR_CC_NEWLINE "Would you like a ride?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "I'll be leaving about " EZTR_CC_COLOR_RED "6 o'clock" EZTR_CC_COLOR_DEFAULT " this" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "evening" EZTR_CC_COLOR_DEFAULT ", so you can join me if" EZTR_CC_NEWLINE "you'd like." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] CREMIA: Fixes sound effect not playing.
    EZTR_Basic_ReplaceText(
        0x33B1,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_DELAY "|00|0A" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|69|29Oh...I'm sorry." EZTR_CC_NEWLINE "Right now...I'm thinking...a little..." EZTR_CC_NEWLINE "My little sister..." EZTR_CC_NEWLINE "My sister, she...she..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] CREMIA: Changes "7:00" to "7 o'clock" and colors it red to match other times
    EZTR_Basic_ReplaceText(
        0x33B5,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Oh...Well, I'll be leaving at " EZTR_CC_COLOR_RED "7 o'clock" EZTR_CC_COLOR_DEFAULT "" EZTR_CC_NEWLINE "tonight, so come over if you" EZTR_CC_NEWLINE "change your mind." EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] CREMIA: Adds comma after "boulder"
    EZTR_Basic_ReplaceText(
        0x33BA,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "First Milk Road is blocked by a" EZTR_CC_NEWLINE "boulder, and now..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "We have to take this detour" EZTR_CC_NEWLINE "through ugly country..." EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] ROMANI: Capitalizes "sister"
    EZTR_Basic_ReplaceText(
        0x33CC,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Yes, Sister." EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES] CREMIA: Fixes formaating of first box by adding NEWLINE at beginning
    EZTR_Basic_ReplaceText(
        0x33D4,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_NEWLINE "In town...I have a friend." EZTR_CC_NEWLINE "Her name's " EZTR_CC_COLOR_RED "Anju" EZTR_CC_COLOR_DEFAULT "..." EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK_DELAYED "|00|1E" EZTR_CC_CARRIAGE_RETURN "Anju..." EZTR_CC_NEWLINE "The day after tomorrow is her" EZTR_CC_NEWLINE "wedding." EZTR_CC_FADE "|00|1E" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] CREMIA: You feel all warm and fuzzy! inside!
    EZTR_Basic_ReplaceText(
        0x33D6,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_QUICKTEXT_ENABLE "You did it!" EZTR_CC_QUICKTEXT_DISABLE " " EZTR_CC_DELAY "|00|04You helped Cremia!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "You feel all warm and fuzzy" EZTR_CC_NEWLINE "inside! " EZTR_CC_DELAY "|00|0ASigh..." EZTR_CC_NEWLINE "You could get used to this!" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER GORMAN BROTHER: Adds comma after "Brothers"
    EZTR_Basic_ReplaceText(
        0x345D,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "We're the Gorman Brothers, and" EZTR_CC_NEWLINE "this is our horse training center..." EZTR_CC_NEWLINE "Without a horse...you..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES/GRAMMAR FIXES] YOUNGER GORMAN BROTHER: Fixes "Bothers" typo, adds missing "is", and adds comma after "Brothers"
    EZTR_Basic_ReplaceText(
        0x3461,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "We're the Gorman Brothers, and" EZTR_CC_NEWLINE "this is our horse training center!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] OLDER GORMAN BROTHER: Fixes incorrect sound effect "6852" to "6952"
    EZTR_Basic_ReplaceText(
        0x346A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|52Much obliged." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER GORMAN BROTHER: Capitalizes "little brother"
    EZTR_Basic_ReplaceText(
        0x346D,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Is that pathetic thing your horse?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "I would've guessed that little thing" EZTR_CC_NEWLINE "was a mule fer sure, ain't that" EZTR_CC_NEWLINE "right, Little Brother?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER GORMAN BROTHER: Adds comma after "that" 
    EZTR_Basic_ReplaceText(
        0x3473,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "You gotta keep at least " EZTR_CC_COLOR_PINK "10 Rupees" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "handy! Why would you carry" EZTR_CC_NEWLINE "around a nice wallet like that," EZTR_CC_NEWLINE "then?" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER GORMAN BROTHER: Capitalizes "bro"
    EZTR_Basic_ReplaceText(
        0x347B,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Big Bro, I wonder if we can give" EZTR_CC_NEWLINE "that to this guy?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] YOUNGER GORMAN BROTHER: Fixes missing comma after "nice". Ported from GC
    EZTR_Basic_ReplaceText(
        0x3483,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "If you win, we'll give you" EZTR_CC_NEWLINE "somethin' nice, kid." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER GORMAN BROTHER: Adds comma after first "now"
    EZTR_Basic_ReplaceText(
        0x3484,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Now, that's not your horse, is it" EZTR_CC_NEWLINE "now, sir?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Well, that thing's just a colt..." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER GORMAN BROTHER: Fixes missing comma after "Well"
    EZTR_Basic_ReplaceText(
        0x3487,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Well, it's been only that type of" EZTR_CC_NEWLINE "folk coming 'round here lately." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] YOUNGER GORMAN BROTHER: Fixes missing "are" between "what" and "doing"
    EZTR_Basic_ReplaceText(
        0x348B,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Hey you! What're you doing in a" EZTR_CC_NEWLINE "place like this on a day like" EZTR_CC_NEWLINE "today?!?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER GORMAN BROTHER: Adds comma after "Brothers" 
    EZTR_Basic_ReplaceText(
        0x348C,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "We're the Gorman Brothers, and" EZTR_CC_NEWLINE "this is our horse training center." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] OLDER GORMAN BROTHER: Adds comma after "out"
    EZTR_Basic_ReplaceText(
        0x3492,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|52Heh, heh...Much obliged." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "From here on out, the milk" EZTR_CC_NEWLINE "business will be ours!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [COLOR FIXES] OLDER GORMAN BROTHER: Fixes color of comma to match rest of game
    EZTR_Basic_ReplaceText(
        0x3497,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "For " EZTR_CC_COLOR_PINK "10 Rupees" EZTR_CC_COLOR_DEFAULT ", you can have the" EZTR_CC_NEWLINE "opportunity to race against us..." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER GORMAN BROTHER: Capitalizes "bro"
    EZTR_Basic_ReplaceText(
        0x349E,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "Big Bro, I wonder if we can give" EZTR_CC_NEWLINE "that to this guy?" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );
    
    // [SFX FIXES] OLDER GORMAN BROTHER: Fixes incorrect sound effect from "6925" to "6952". Ported from EU.
    EZTR_Basic_ReplaceText(
        0x34A3,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|52Oh, too bad. And I was really" EZTR_CC_NEWLINE "gonna give you some milk if you" EZTR_CC_NEWLINE "had an empty bottle to put it in..." EZTR_CC_NEWLINE "It's true! Tooooo bad!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [GRAMMAR FIXES] YOUNGER GORMAN BROTHER: Fixes missing comma after "brother's", and capitalizes "big bro"
    EZTR_Basic_ReplaceText(
        0x34AA,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "That's our middle brother's," EZTR_CC_NEWLINE "Big Bro!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [SFX FIXES] MAMAMU YAN: Fixes incorrect sound effect "690D" to "690F"
    EZTR_Basic_ReplaceText(
        0x3520,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|0FWhat do you want?" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "This is Mamamu Yan's Doggy" EZTR_CC_NEWLINE "Racetrack, just like the sign says." EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MAMAMU YAN: Changes RUPEES_SELECTED to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x3529,
        EZTR_STANDARD_TEXT_BOX_II,
        1,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_COLOR_PINK "" EZTR_CC_RUPEES_SELECTED "" EZTR_CC_COLOR_DEFAULT " then, right?" EZTR_CC_NEWLINE " " EZTR_CC_NEWLINE "" EZTR_CC_COLOR_GREEN "" EZTR_CC_TWO_CHOICE "Yes" EZTR_CC_NEWLINE "No" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MAMAMU YAN: Changes RUPEES_TOTAL to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x352A,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|12Well, take me for a walk and call" EZTR_CC_NEWLINE "me Spot! You took " EZTR_CC_COLOR_RED "1st place" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "1st place" EZTR_CC_COLOR_DEFAULT "!!!" EZTR_CC_NEWLINE "" EZTR_CC_BOX_BREAK2 "You win " EZTR_CC_COLOR_RED "triple" EZTR_CC_COLOR_DEFAULT " the amount of your" EZTR_CC_NEWLINE "bet! That's " EZTR_CC_COLOR_PINK "" EZTR_CC_RUPEES_TOTAL "" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MAMAMU YAN: Changes RUPEES_TOTAL to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x352B,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|12Sweet hounds of happiness!" EZTR_CC_NEWLINE "You took " EZTR_CC_COLOR_RED "2nd" EZTR_CC_COLOR_DEFAULT "! That's amazing!" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "You win " EZTR_CC_COLOR_RED "double" EZTR_CC_COLOR_DEFAULT " the amount of" EZTR_CC_NEWLINE "your bet! " EZTR_CC_COLOR_PINK "" EZTR_CC_RUPEES_TOTAL "" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_EVENT "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MAMAMU YAN: Changes second and third "N" to lowercase to standardize stutters
    EZTR_Basic_ReplaceText(
        0x352E,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "N-n-nice going!" EZTR_CC_NEWLINE "You've won over " EZTR_CC_COLOR_RED "150 Rupees" EZTR_CC_COLOR_DEFAULT ", so I" EZTR_CC_NEWLINE "have to give you a bonus prize," EZTR_CC_NEWLINE "too!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] MAMAMU YAN: Changes "Rupees" from red to pink to match rest of game
    EZTR_Basic_ReplaceText(
        0x3536,
        EZTR_STANDARD_TEXT_BOX_II,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "I bet you don't have that many" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_PINK "Rupees" EZTR_CC_COLOR_DEFAULT ". Come on, get real." EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] RACE DOG: Changes second "R" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x353E,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|28|D8Rrr-ruff!" EZTR_CC_NEWLINE "" EZTR_CC_QUICKTEXT_ENABLE "I should do all right!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] RACE DOG: Changes second "R" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x353F,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|28|D8Rrr-ruff!" EZTR_CC_NEWLINE "" EZTR_CC_QUICKTEXT_ENABLE "I feel like I could win, but then I" EZTR_CC_NEWLINE "feel like I could lose, too..." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] RACE DOG: Changes second "R" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x3540,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|28|D8Rrr-ruff!" EZTR_CC_NEWLINE "" EZTR_CC_QUICKTEXT_ENABLE "I can't predict the future, so I" EZTR_CC_NEWLINE "don't know how I'll do..." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );

    // [CONSISTENCY CHANGES] RACE DOG: Changes second "R" to lowercase for standardization
    EZTR_Basic_ReplaceText(
        0x3541,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|28|D8Rrr-ruff!" EZTR_CC_NEWLINE "" EZTR_CC_QUICKTEXT_ENABLE "I don't feel much different than" EZTR_CC_NEWLINE "usual..." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
        NULL
    );

    // [FORMATTING FIXES/TYPO FIXES] MAMAMU YAN: Changes formatting to match GC and fixes missing commas to match other versions of this message.
    EZTR_Basic_ReplaceText(
        0x3549,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|14Oh...Actually, I don't think I" EZTR_CC_NEWLINE "can let you play..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "If the doggies smell you, I don't" EZTR_CC_NEWLINE "think I'd be able to pull them" EZTR_CC_NEWLINE "away!" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [TYPO FIXES] MAMAMU YAN: Fixes missing comma to match other versions of this message
    EZTR_Basic_ReplaceText(
        0x354A,
        EZTR_STANDARD_TEXT_BOX_I,
        0,
        EZTR_ICON_NO_ICON,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "" EZTR_CC_SFX "|69|14Oh, well, actually, I don't" EZTR_CC_NEWLINE "think this is a good idea..." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "I mean, look at you..." EZTR_CC_NEWLINE "You know what doggies do to" EZTR_CC_NEWLINE "trees, don't you?" EZTR_CC_EVENT2 "" EZTR_CC_END "",
        NULL
    );

    // [CONFIG] Configuration for Land/Town Title Deed name TODO: Fix bottom of menu preview names for items
    if (CONFIG_LAND_DEED) {
        // [CONSISTENCY CHANGES/FORMATTING FIXES] SWAMP BUSINESS SCRUB: Removes "Town" to match deed name in rest of the game, and changes formatting due to new empty space as well as to match other Scrub trade messages
        EZTR_Basic_ReplaceText(
            0x15E4,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_SFX "|38|80Oh! That's a " EZTR_CC_COLOR_RED "Land Title Deed" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "I wish you'd let me have that." EZTR_CC_EVENT "" EZTR_CC_END "",
            NULL
        );
        // [SFX FIXES/CONSISTENCY CHANGES] OCEAN BUSINESS SCRUB: Changes "Town" to "Land" to match rest of game, and moves SFX to after ellipsis to match timing of Canyon Business Scrub.
        EZTR_Basic_ReplaceText(
            0x1609,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_SFX "|38|80" EZTR_CC_QUICKTEXT_ENABLE "That's a..." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "..." EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|38|81Oh, that's a Land Title Deed." EZTR_CC_NEWLINE "The air's not very good in cities." EZTR_CC_EVENT2 "" EZTR_CC_END "",
            NULL
        );
        // [SFX FIXES/CONSISTENCY CHANGES] CANYON BUSNIESS SCRUB: Changes "Town" to "Land" to match rest of game, adds period to cpmplete ellipsis, and fixes sound effect not playing.
        EZTR_Basic_ReplaceText(
            0x161D,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_SFX "|38|80" EZTR_CC_QUICKTEXT_ENABLE "That's a...!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "..." EZTR_CC_COLOR_DEFAULT "" EZTR_CC_SFX "|38|81Oh, that's a Land Title Deed." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "The town is too loud to hear the" EZTR_CC_NEWLINE "sound of waves." EZTR_CC_EVENT2 "" EZTR_CC_END "",
            NULL
        );
    } else {
        // [CONSISTENCY CHANGES] SYSTEM: Changes "Land" to "Town" to match 3DS name
        EZTR_Basic_ReplaceText(
            0x0097,
            EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
            0,
            EZTR_ICON_TOWN_TITLE_DEED,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_QUICKTEXT_ENABLE "You traded the Moon's Tear for a" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_RED "Town Title Deed" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
            NULL
        );
        // [CONSISTENCY CHANGES] SYSTEM: Changes "Land" to "Town" to match 3DS name
        EZTR_Basic_ReplaceText(
            0x0098,
            EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
            0,
            EZTR_ICON_SWAMP_TITLE_DEED,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_QUICKTEXT_ENABLE "You traded your Town Title Deed" EZTR_CC_NEWLINE "for a " EZTR_CC_COLOR_RED "Swamp Title Deed" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
            NULL
        );
        // [CONSISTENCY CHANGES/FORMATTING FIXES] SWAMP BUSINESS SCRUB: Removes "Land" to match 3DS name, and changes formatting due to new empty space and to match other Scrub trade messages
        EZTR_Basic_ReplaceText(
            0x15E4,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_SFX "|38|80Oh! That's a " EZTR_CC_COLOR_RED "Town Title Deed" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_NEWLINE "I wish you'd let me have that." EZTR_CC_EVENT "" EZTR_CC_END "",
            NULL
        );
        // [CONSISTENCY CHANGES] SWAMP BUSINESS SCRUB: Changes "land" to "title" to respect 3DS name and match other similar Business Scrub messages
        EZTR_Basic_ReplaceText(
            0x15F0,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_SFX "|38|80" EZTR_CC_QUICKTEXT_ENABLE "Thanks for stopping by!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "Oh! You're the one who gave me" EZTR_CC_NEWLINE "the title deed." EZTR_CC_EVENT "" EZTR_CC_END "",
            NULL
        );
        // [CONSISTENCY CHANGES] MENU: Changes "Land" to "Town" to match 3DS name
        EZTR_Basic_ReplaceText(
            0x1729,
            EZTR_STANDARD_TEXT_BOX_II,
            1,
            EZTR_ICON_TOWN_TITLE_DEED,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_COLOR_RED "Town Title Deed" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "The title deed to the Deku Flower" EZTR_CC_NEWLINE "in Clock Town. Use it with " EZTR_CC_BTN_C "." EZTR_CC_END "",
            NULL
        );
        // [CONSISTENCY CHANGES] MENU: Changes "Land" to "Town" to match 3DS name
        EZTR_Basic_ReplaceText(
            0x172A,
            EZTR_STANDARD_TEXT_BOX_II,
            1,
            EZTR_ICON_SWAMP_TITLE_DEED,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_COLOR_RED "Swamp Title Deed" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "You traded the Town Title Deed" EZTR_CC_NEWLINE "for this. Use it with " EZTR_CC_BTN_C "." EZTR_CC_END "",
            NULL
        );
    };

    // [CONFIG] Configuration for Circus/Troupe Leader's Mask name TODO: Fix name preview at bottom of menu
    if (CONFIG_GORMAN_MASK) {
        // [GRAMMAR FIXES/DELAY FIXES] SYSTEM: Adds comma after "sad", and ports missing delay fix from EU
        EZTR_Basic_ReplaceText(
            0x0083,
            EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
            1,
            EZTR_ICON_CIRCUS_LEADERS_MASK,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_QUICKTEXT_ENABLE "You got the " EZTR_CC_COLOR_RED "Circus Leader's" EZTR_CC_NEWLINE "Mask" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AThis mask looks so sad, it could" EZTR_CC_NEWLINE "put a tear in even a demon's eye!" EZTR_CC_END "",
            NULL
        );
        // [TYPO FIXES] BOMBER'S NOTEBOOK: Adds "the" to before "circus"
        EZTR_Basic_ReplaceText(
            0x216E,
            EZTR_BOMBERS_NOTEBOOK,
            0,
            EZTR_ICON_CIRCUS_LEADERS_MASK,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "You saw the tears of the circus" EZTR_CC_NEWLINE "leader, Gorman! " EZTR_CC_DELAY "|00|0A" EZTR_CC_QUICKTEXT_ENABLE "This was added" EZTR_CC_NEWLINE "to your " EZTR_CC_COLOR_RED "notebook" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
            NULL
        );
    } else {
        // [CONSISTENCY CHANGES/GRAMMAR FIXES/DELAY FIXES] SYSTEM: Changes "Circus" to "Troupe", adds comma after "sad", and ports missing delay fix from EU
        EZTR_Basic_ReplaceText(
            0x0083,
            EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
            1,
            EZTR_ICON_CIRCUS_LEADERS_MASK,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_QUICKTEXT_ENABLE "You got the " EZTR_CC_COLOR_RED "Troupe Leader's" EZTR_CC_NEWLINE "Mask" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0AThis mask looks so sad, it could" EZTR_CC_NEWLINE "put a tear in even a demon's eye!" EZTR_CC_END "",
            NULL
        );
        // [CONSISTENCY CHANGES] MENU: Changes "Circus" to "Troupe"
        EZTR_Basic_ReplaceText(
            0x173D,
            EZTR_STANDARD_TEXT_BOX_II,
            1,
            EZTR_ICON_CIRCUS_LEADERS_MASK,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_COLOR_RED "Troupe Leader's Mask" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "People related to Gorman will" EZTR_CC_NEWLINE "react to this." EZTR_CC_END "",
            NULL
        );
        // [CONSISTENCY CHANGES] HAPPY MASK SALESMAN: Changes "Circus" to "Troupe"
        EZTR_Basic_ReplaceText(
            0x1FF4,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_SFX "|69|83That's the " EZTR_CC_COLOR_RED "Troupe Leader's Mask" EZTR_CC_COLOR_DEFAULT "," EZTR_CC_NEWLINE "isn't it?" EZTR_CC_EVENT "" EZTR_CC_END "",
            NULL
        );
        // [CONSISTENCY CHANGES] GOSSIP STONES: Changes "Circus" to "Troupe"
        EZTR_Basic_ReplaceText(
            0x210A,
            EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "It seems the leader of the Gorman" EZTR_CC_NEWLINE "Troupe had the " EZTR_CC_COLOR_RED "Troupe Leader's" EZTR_CC_NEWLINE "Mask" EZTR_CC_COLOR_DEFAULT "..." EZTR_CC_END "",
            NULL
        );
        // [CONSISTENCY CHANGES/TYPO FIXES] BOMBER'S NOTEBOOK: Changes "circus" to "troupe" and adds "the" before it
        EZTR_Basic_ReplaceText(
            0x216E,
            EZTR_BOMBERS_NOTEBOOK,
            0,
            EZTR_ICON_CIRCUS_LEADERS_MASK,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "You saw the tears of the troupe" EZTR_CC_NEWLINE "leader, Gorman! " EZTR_CC_DELAY "|00|0A" EZTR_CC_QUICKTEXT_ENABLE "This was added" EZTR_CC_NEWLINE "to your " EZTR_CC_COLOR_RED "notebook" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_END "",
            NULL
        );
        // [CONSISTENCY CHANGES] BOMBER'S NOTEBOOK: Changes "Circus" to "Troupe"
        EZTR_Basic_ReplaceText(
            0x21B4,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_CIRCUS_LEADERS_MASK,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_COLOR_BLUE "Troupe Leader's Mask" EZTR_CC_COLOR_DEFAULT "     " EZTR_CC_COLOR_GREEN "Milk Bar" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Thanks for moving Gorman with song" EZTR_CC_PERSISTENT "" EZTR_CC_END "",
            NULL
        );
        // [CONSISTENCY CHANGES] TREASURE CHEST GAME: Changes "Circus" to "Troupe"
        EZTR_Basic_ReplaceText(
            0x2341,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Oh, the Troupe Leader's Mask!" EZTR_CC_NEWLINE "He comes here a lot." EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "He always says how his brothers" EZTR_CC_NEWLINE "are at the ranch..." EZTR_CC_END "",
            NULL
        );
    };

    // [CONFIG] Configuration for Boss Key/Big Key name
    if (CONFIG_BOSS_KEY != BOSS_KEY_VANILLA) {
        if (CONFIG_BOSS_KEY == BOSS_KEY_BIG) {
            // [CONSISTENCY CHANGES] SYSTEM: Changes "Boss" to "Big" to match other name used in menu
            EZTR_Basic_ReplaceText(
                0x003D,
                EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
                0,
                EZTR_ICON_BOSS_KEY,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "" EZTR_CC_QUICKTEXT_ENABLE "You got the " EZTR_CC_COLOR_RED "Big Key" EZTR_CC_COLOR_DEFAULT "!" EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_DELAY "|00|0ANow you can enter the chamber" EZTR_CC_NEWLINE "where the boss lurks!" EZTR_CC_END "",
                NULL
            );
        } else {
            // [CONSISTENCY CHANGES] MENU: Changes "Big" to "Boss" to match item get message name
            EZTR_Basic_ReplaceText(
                0x17AC,
                EZTR_STANDARD_TEXT_BOX_II,
                0,
                EZTR_ICON_BOSS_KEY,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                EZTR_NO_VALUE,
                true,
                "" EZTR_CC_COLOR_BLUE "Boss Key" EZTR_CC_NEWLINE "" EZTR_CC_COLOR_DEFAULT "Use it to enter the room in the" EZTR_CC_NEWLINE "dungeon where the boss lurks." EZTR_CC_END "",
                NULL
            );
        }
    };
    
    // [CONFIG] Configuration for extra player added sound effects
    if (CONFIG_EXTRA_SFX) {
        // [EXTRA] GORMAN: Adds sound effect to clarify speaker of message
        EZTR_Basic_ReplaceText(
            0x2B33,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_SFX "|69|80What feels good?!?" EZTR_CC_NEWLINE "That wretched, senseless racket?!" EZTR_CC_END "",
            NULL
        );
    };

    // [CONFIG] Configuration for mistranslation fix for Cremia's welcome speech
    if (!CONFIG_CREMIA_WELCOME) {
        // [MISTRANSLATION FIX] CREMIA: Changes "Chataeu Romani's Village" to "the birthplace of Chateau Romani". Ported from 3DS 
        EZTR_Basic_ReplaceText(
            0x3393,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_SFX "|69|28Welcome to Romani Ranch," EZTR_CC_NEWLINE "" EZTR_CC_QUICKTEXT_ENABLE "the birthplace of Chateau Romani." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "Enjoy yourself." EZTR_CC_END "",
            NULL
        );
        // [MISTRANSLATION FIX] CREMIA: Changes "Chataeu Romani's Village" to "the birthplace of Chateau Romani". Ported from 3DS
        EZTR_Basic_ReplaceText(
            0x339A,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "" EZTR_CC_SFX "|69|28Welcome to Romani Ranch," EZTR_CC_NEWLINE "" EZTR_CC_QUICKTEXT_ENABLE "the birthplace of Chateau Romani." EZTR_CC_QUICKTEXT_DISABLE "" EZTR_CC_NEWLINE "" EZTR_CC_CARRIAGE_RETURN "" EZTR_CC_BOX_BREAK2 "I am the ranch owner, " EZTR_CC_COLOR_RED "Cremia" EZTR_CC_COLOR_DEFAULT "." EZTR_CC_EVENT "" EZTR_CC_END "",
            NULL
        );
    };
}
