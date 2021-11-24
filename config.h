/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 1000;                    /* minimum width when centered */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "monospace:size=14"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const int line_height_padding = 6;

/* Gruvbox */
static const char bg0[] = "#282828";
static const char red[] = "#cc241d";
static const char green[] = "#98971a";
static const char yellow[] = "#d79921";
static const char blue[] = "#458588";
static const char purple[] = "#b16286";
static const char aqua[] = "#689d6a";
static const char light_gray[] = "#a89984";
static const char gray[] = "#928374";
static const char light_red[] = "#fb4934";
static const char light_green[] = "#b8bb26";
static const char light_yellow[] = "#fabd2f";
static const char light_blue[] = "#83a598";
static const char light_purple[] = "#d3869b";
static const char light_aqua[] = "#8ec07c";
static const char fg1[] = "#ebdbb2";
static const char bg0_h[] = "#1d2021";
static const char bg1[] = "#3c3836";
static const char bg2[] = "#504945";
static const char bg3[] = "#665c54";
static const char bg4[] = "#7c6f64";
static const char bg0_s[] = "#32302f";
static const char fg3[] = "#bdae93";
static const char fg2[] = "#d5c4a1";
static const char fg0[] = "#fbf1c7";
static const char orange[] = "#d65d0e";
static const char light_orange[] = "#fe8019";
static const char dark_blue[] = "#076678";

static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = { fg1, bg0 },
    [SchemeSel] = { fg0, light_green },
    [SchemeOut] = { fg1, aqua },
    [SchemeSelHighlight] = { orange, light_green },
    [SchemeNormHighlight] = { light_yellow, bg0 },
    [SchemeBorder] = { NULL, dark_blue },  // bg will be used
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 7;
static unsigned int columns    = 4;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
