#ifndef COLORS_H
#define COLORS_H

#define ESC "\e["
#define CLR_RESET "\e[0m"

#define MOD_REG   "0;"
#define MOD_BOLD  "1;"
#define MOD_UNDER "4;"
#define MOD_HIGH  "0;9"
#define MOD_B_HIGH "1;9"

#define C_BLACK   "30m"
#define C_RED     "31m"
#define C_GREEN   "32m"
#define C_YELLOW  "33m"
#define C_BLUE    "34m"
#define C_MAGENTA "35m"
#define C_CYAN    "36m"
#define C_WHITE   "37m"

#define BG_BLACK  "40m"
#define BG_RED    "41m"
#define BG_GREEN  "42m"
#define BG_YELLOW "43m"
#define BG_BLUE   "44m"
#define BG_MAGENTA "45m"
#define BG_CYAN   "46m"
#define BG_WHITE  "47m"

#define H_BG_BLACK  "0;100m"
#define H_BG_RED    "0;101m"
#define H_BG_GREEN  "0;102m"
#define H_BG_YELLOW "0;103m"
#define H_BG_BLUE   "0;104m"
#define H_BG_MAGENTA "0;105m"
#define H_BG_CYAN   "0;106m"
#define H_BG_WHITE  "0;107m"

// Standard colors
#define CLR_BLACK   ESC MOD_REG   C_BLACK
#define CLR_RED     ESC MOD_REG   C_RED
#define CLR_GREEN   ESC MOD_REG   C_GREEN
#define CLR_YELLOW  ESC MOD_REG   C_YELLOW
#define CLR_BLUE    ESC MOD_REG   C_BLUE
#define CLR_MAGENTA ESC MOD_REG   C_MAGENTA
#define CLR_CYAN    ESC MOD_REG   C_CYAN
#define CLR_WHITE   ESC MOD_REG   C_WHITE

// High colors
#define CLR_H_BLACK   ESC MOD_HIGH   C_BLACK
#define CLR_H_RED     ESC MOD_HIGH   C_RED
#define CLR_H_GREEN   ESC MOD_HIGH   C_GREEN
#define CLR_H_YELLOW  ESC MOD_HIGH   C_YELLOW
#define CLR_H_BLUE    ESC MOD_HIGH   C_BLUE
#define CLR_H_MAGENTA ESC MOD_HIGH   C_MAGENTA
#define CLR_H_CYAN    ESC MOD_HIGH   C_CYAN
#define CLR_H_WHITE   ESC MOD_HIGH   C_WHITE

// Bold colors
#define CLR_B_BLACK   ESC MOD_BOLD  C_BLACK
#define CLR_B_RED     ESC MOD_BOLD  C_RED
#define CLR_B_GREEN   ESC MOD_BOLD  C_GREEN
#define CLR_B_YELLOW  ESC MOD_BOLD  C_YELLOW
#define CLR_B_BLUE    ESC MOD_BOLD  C_BLUE
#define CLR_B_MAGENTA ESC MOD_BOLD  C_MAGENTA
#define CLR_B_CYAN    ESC MOD_BOLD  C_CYAN
#define CLR_B_WHITE   ESC MOD_BOLD  C_WHITE

// Bold high colors
#define CLR_B_H_BLACK   ESC MOD_B_HIGH C_BLACK
#define CLR_B_H_RED     ESC MOD_B_HIGH C_RED
#define CLR_B_H_GREEN   ESC MOD_B_HIGH C_GREEN
#define CLR_B_H_YELLOW  ESC MOD_B_HIGH C_YELLOW
#define CLR_B_H_BLUE    ESC MOD_B_HIGH C_BLUE
#define CLR_B_H_MAGENTA ESC MOD_B_HIGH C_MAGENTA
#define CLR_B_H_CYAN    ESC MOD_B_HIGH C_CYAN
#define CLR_B_H_WHITE   ESC MOD_B_HIGH C_WHITE

// Underline colors
#define CLR_U_BLACK   ESC MOD_UNDER C_BLACK
#define CLR_U_RED     ESC MOD_UNDER C_RED
#define CLR_U_GREEN   ESC MOD_UNDER C_GREEN
#define CLR_U_YELLOW  ESC MOD_UNDER C_YELLOW
#define CLR_U_BLUE    ESC MOD_UNDER C_BLUE
#define CLR_U_MAGENTA ESC MOD_UNDER C_MAGENTA
#define CLR_U_CYAN    ESC MOD_UNDER C_CYAN
#define CLR_U_WHITE   ESC MOD_UNDER C_WHITE

// Background colors
#define CLR_BG_BLACK   ESC BG_BLACK
#define CLR_BG_RED     ESC BG_RED
#define CLR_BG_GREEN   ESC BG_GREEN
#define CLR_BG_YELLOW  ESC BG_YELLOW
#define CLR_BG_BLUE    ESC BG_BLUE
#define CLR_BG_MAGENTA ESC BG_MAGENTA
#define CLR_BG_CYAN    ESC BG_CYAN
#define CLR_BG_WHITE   ESC BG_WHITE

// High background colors
#define CLR_H_BG_BLACK   ESC H_BG_BLACK
#define CLR_H_BG_RED     ESC H_BG_RED
#define CLR_H_BG_GREEN   ESC H_BG_GREEN
#define CLR_H_BG_YELLOW  ESC H_BG_YELLOW
#define CLR_H_BG_BLUE    ESC H_BG_BLUE
#define CLR_H_BG_MAGENTA ESC H_BG_MAGENTA
#define CLR_H_BG_CYAN    ESC H_BG_CYAN
#define CLR_H_BG_WHITE   ESC H_BG_WHITE

#endif