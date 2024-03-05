

static const char *fonts[]          = { "JetBrains Mono:size=12", "fontawesome:size=12" };
static const char dmenufont[]       = "JetBrains Mono:size=12";
static char normbgcolor[]           = "#2e3440";
static char normbordercolor[]       = "#4c566a";
static char normfgcolor[]           = "#8fbcbb";
static char selfgcolor[]            = "#d8dee9";
static char selbordercolor[]        = "#bf616a";
static char selbgcolor[]            = "#434c5e";
static char *colors[][3] = {
       /*               fg           bg           border   */
       [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
};

