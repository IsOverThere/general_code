#ifdef WITH_COLORFUL_PIRINT

#define FONT_COLOR(color)   printf("\033[38;5;"#color"m")
#define FONT_NORMAL   printf("\033[0m")

#define PRINT_INFO_3    printf("[%s:%d %s] ", __FILE__, __LINE__, __FUNCTION__);
#define PRINT_INFO_2    printf("[%d %s] ", __LINE__, __FUNCTION__);

#define INFO_COLOR(color, args...)                 FONT_COLOR(color);PRINT_INFO_2;printf(args);FONT_NORMAL

#else

#define INFO_COLOR(color, args...)

#endif
