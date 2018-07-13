#ifdef WITH_COLORFUL_PIRINT

#define FONT_COLOR(color)   printf("\033[38;5;"#color"m")
#define FONT_NORMAL   printf("\033[0m")
#define FONT_BLACK    printf("\033[0;30m")
#define FONT_RED      printf("\033[0;31m")
#define FONT_GREEN    printf("\033[0;32m")
#define FONT_BROWN    printf("\033[0;33m")
#define FONT_BLUE     printf("\033[0;34m")
#define FONT_PURPLE   printf("\033[0;35m")
#define FONT_CYAN     printf("\033[0;36m")
#define FONT_L_GRAY   printf("\033[0;37m")
#define FONT_D_GRAY   printf("\033[1;30m")
#define FONT_L_RED    printf("\033[1;31m")
#define FONT_L_GREEN  printf("\033[1;32m")
#define FONT_YELLOW   printf("\033[1;33m")
#define FONT_L_BLUE   printf("\033[1;34m")
#define FONT_PINK     printf("\033[1;35m")
#define FONT_L_CYAN   printf("\033[1;36m")
#define FONT_WHITE    printf("\033[1;37m")

#define HL_RED        printf("\033[0;41m")
#define HL_GREEN      printf("\033[0;42m")
#define HL_BROWN      printf("\033[0;43m")
#define HL_BLUE       printf("\033[0;44m")
#define HL_PURPLE     printf("\033[0;45m")
#define HL_CYAN       printf("\033[0;46m")
#define HL_GRAY       printf("\033[0;47m")

#define INFO_COLOR(color, args...)                 FONT_COLOR(color);printf(args);FONT_NORMAL

/***FONT_BLACK***/
#define INFO_BLACK(args...)                FONT_BLACK;printf(args);FONT_NORMAL

/***FONT_RED***/
#define INFO_RED(args...)                  FONT_RED;printf(args);FONT_NORMAL

/***FONT_GREEN***/
#define INFO_GREEN(args...)                FONT_GREEN;printf(args);FONT_NORMAL

/***FONT_BROWN***/
#define INFO_BROWN(args...)                FONT_BROWN;printf(args);FONT_NORMAL

/***FONT_BLUE***/
#define INFO_BLUE(args...)                 FONT_BLUE;printf(args);FONT_NORMAL

/***FONT_PURPLE***/
#define INFO_PURPLE(args...)               FONT_PURPLE;printf(args);FONT_NORMAL

/***FONT_CYAN***/
#define INFO_CYAN(args...)                 FONT_CYAN;printf(args);FONT_NORMAL

/***FONT_L_GRAY***/
#define INFO_L_GRAY(args...)               FONT_L_GRAY;printf(args);FONT_NORMAL

/***FONT_D_GRAY***/
#define INFO_D_GRAY(args...)               FONT_D_GRAY;printf(args);FONT_NORMAL

/***FONT_L_RED***/
#define INFO_L_RED(args...)                FONT_L_RED;printf(args);FONT_NORMAL

/***FONT_L_GREEN***/
#define INFO_L_GREEN(args...)              FONT_L_GREEN;printf(args);FONT_NORMAL

/***FONT_YELLOW***/
#define INFO_YELLOW(args...)               FONT_YELLOW;printf(args);FONT_NORMAL

/***FONT_L_BLUE***/
#define INFO_L_BLUE(args...)               FONT_L_BLUE;printf(args);FONT_NORMAL

/***FONT_PINK***/
#define INFO_PINK(args...)                 FONT_PINK;printf(args);FONT_NORMAL

/***FONT_L_CYAN***/
#define INFO_L_CYAN(args...)               FONT_L_CYAN;printf(args);FONT_NORMAL

/***FONT_WHITE***/
#define INFO_WHITE(args...)                FONT_WHITE;printf(args);FONT_NORMAL

/***HL_RED***/
#define PRINT_HL_RED(args...)                    HL_RED;printf(args);FONT_NORMAL

/***HL_GREEN***/
#define PRINT_HL_GREEN(args...)                  HL_GREEN;printf(args);FONT_NORMAL

/***HL_BROWN***/
#define PRINT_HL_BROWN(args...)                  HL_BROWN;printf(args);FONT_NORMAL

/***HL_BLUE***/
#define PRINT_HL_BLUE(args...)                   HL_BLUE;printf(args);FONT_NORMAL

/***HL_PURPLE***/
#define PRINT_HL_PURPLE(args...)                 HL_PURPLE;printf(args);FONT_NORMAL

/***HL_CYAN***/
#define PRINT_HL_CYAN(args...)                   HL_CYAN;printf(args);FONT_NORMAL

/***HL_GRAY***/
#define PRINT_HL_GRAY(args...)                   HL_GRAY;printf(args);FONT_NORMAL

/***xxxXXX***/
/*
#define PRINT_xxxXXX(args...)               FONT_xxxXXX;printf(args);FONT_NORMAL
*/

#else
#define INFO_COLOR(color, args...)

/***FONT_BLACK***/
#define INFO_BLACK(args...)

/***FONT_RED***/
#define INFO_RED(args...)

/***FONT_GREEN***/
#define INFO_GREEN(args...)

/***FONT_BROWN***/
#define INFO_BROWN(args...)

/***FONT_BLUE***/
#define INFO_BLUE(args...)

/***FONT_PURPLE***/
#define INFO_PURPLE(args...)

/***FONT_CYAN***/
#define INFO_CYAN(args...)

/***FONT_L_GRAY***/
#define INFO_L_GRAY(args...)

/***FONT_D_GRAY***/
#define INFO_D_GRAY(args...)

/***FONT_L_RED***/
#define INFO_L_RED(args...)

/***FONT_L_GREEN***/
#define INFO_L_GREEN(args...)

/***FONT_YELLOW***/
#define INFO_YELLOW(args...)

/***FONT_L_BLUE***/
#define INFO_L_BLUE(args...)

/***FONT_PINK***/
#define INFO_PINK(args...)

/***FONT_L_CYAN***/
#define INFO_L_CYAN(args...)

/***FONT_WHITE***/
#define INFO_WHITE(args...)

/***HL_RED***/
#define PRINT_HL_RED(args...)

/***HL_GREEN***/
#define PRINT_HL_GREEN(args...)

/***HL_BROWN***/
#define PRINT_HL_BROWN(args...)

/***HL_BLUE***/
#define PRINT_HL_BLUE(args...)

/***HL_PURPLE***/
#define PRINT_HL_PURPLE(args...)

/***HL_CYAN***/
#define PRINT_HL_CYAN(args...)

/***HL_GRAY***/
#define PRINT_HL_GRAY(args...)

#endif
