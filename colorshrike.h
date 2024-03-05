
static const char *fonts[]          = { "JetBrains Mono:size=12", "fontawesome:size=12" };
static const char dmenufont[]       = "JetBrains Mono:size=12";
static char normbgcolor[]           = "#000000";
static char normbordercolor[]       = "#444444";
static char normfgcolor[]           = "#177ed4";
static char selfgcolor[]            = "#eeeeee";
static char selbordercolor[]        = "#d46d17";
static char selbgcolor[]            = "#d46d17";
static char *colors[][3] = {
       /*               fg           bg           border   */
       [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
};
