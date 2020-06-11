static const char norm_fg[] = "#decabe";
static const char norm_bg[] = "#141312";
static const char norm_border[] = "#9b8d85";

static const char sel_fg[] = "#decabe";
static const char sel_bg[] = "#935236";
static const char sel_border[] = "#decabe";

static const char urg_fg[] = "#decabe";
static const char urg_bg[] = "#8D402A";
static const char urg_border[] = "#8D402A";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
