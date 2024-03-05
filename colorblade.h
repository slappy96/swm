

static const char *fonts[]          = { "JetBrains Mono:size=12", "fontawesome:size=12" };
static const char dmenufont[]       = "JetBrains Mono:size=12";
static char normbgcolor[]           = "#000000";
static char normbordercolor[]       = "#444444";
static char normfgcolor[]           = "#5f5f00";
static char selfgcolor[]            = "#767676";
static char selbordercolor[]        = "#5f0000";
static char selbgcolor[]            = "#5f0000";
static char *colors[][3] = {
       /*               fg           bg           border   */
       [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
};
