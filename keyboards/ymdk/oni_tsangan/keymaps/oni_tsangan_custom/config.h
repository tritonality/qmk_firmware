#pragma once

/* ------------------------------------------------------------------------- */
/*  USB identification – **must** match the JSON you load in VIA             */
/* ------------------------------------------------------------------------- */
#undef  VENDOR_ID            /* in case the keyboard already defined them   */
#undef  PRODUCT_ID
#define VENDOR_ID  0x1209      /* community VID – whitelisted by VIA        */
#define PRODUCT_ID 0x7101      /* any free PID you like                     */

#define MANUFACTURER "YMDK"
#define PRODUCT      "Oni Tsangan"

/* ------------------------------------------------------------------------- */
/*  VIA settings                                                             */
/* ------------------------------------------------------------------------- */
#define DYNAMIC_KEYMAP_LAYER_COUNT 4   /* VIA can edit the first 4 layers    */ 
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
// Ensure VIA sees RGB Matrix
#ifdef VIA_ENABLE
    #define DYNAMIC_KEYMAP_LAYER_COUNT 4
#endif