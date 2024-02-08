/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup"; // use "nobody" for arch

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* default message */
static const char * message = "O imperialismo e todos os reacionarios sao tigres de papel"; // no accent so it wont print bugged shit
// static const char * message = Despair is typical of those who do not understand the causes of evil, see no way out, and are incapable of struggle
//static const char * message = "人生が痛みだ";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
//static const char * font_name = "6x10";
static const char * font_name = "-gnu-unifont-*-*-*-*-*-*-*-*-*-*-*";

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
/* Enable blur */
/* Set blur radius */
static const int blurRadius = 15;
/* Enable Pixelation */
//#define PIXELATION
/* Set pixelation radius */
static const int pixelSize = 50;

/* time in seconds before the monitor shuts down */
static const int monitortime = 120;
