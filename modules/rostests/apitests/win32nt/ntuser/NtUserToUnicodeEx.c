/*
 * PROJECT:         ReactOS api tests
 * LICENSE:         GPL - See COPYING in the top level directory
 * PURPOSE:         Test for NtUserToUnicodeEx
 * PROGRAMMERS:
 */

#include <win32nt.h>

START_TEST(NtUserToUnicodeEx)
{
    BYTE KeyState[256] = {0};
    WCHAR Buffer[10];
    HKL hkl = LoadKeyboardLayoutW(L"00000409", KLF_NOTELLSHELL);

    TEST(NtUserToUnicodeEx(27, 1, KeyState, Buffer, 10, 0, 0) == 1);

    /* Test with no key pressed */
    ZeroMemory(KeyState, 256);
    TEST(NtUserToUnicodeEx(27, 1, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 27);
    TEST(NtUserToUnicodeEx(49, 2, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '1');
    TEST(NtUserToUnicodeEx(50, 3, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '2');
    TEST(NtUserToUnicodeEx(51, 4, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '3');
    TEST(NtUserToUnicodeEx(52, 5, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '4');
    TEST(NtUserToUnicodeEx(53, 6, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '5');
    TEST(NtUserToUnicodeEx(54, 7, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '6');
    TEST(NtUserToUnicodeEx(55, 8, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '7');
    TEST(NtUserToUnicodeEx(56, 9, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '8');
    TEST(NtUserToUnicodeEx(57, 10, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '9');
    TEST(NtUserToUnicodeEx(48, 11, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '0');
    TEST(NtUserToUnicodeEx(189, 12, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '-');
    TEST(NtUserToUnicodeEx(187, 13, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '=');
    TEST(NtUserToUnicodeEx(8, 14, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 8);
    TEST(NtUserToUnicodeEx(9, 15, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 9);
    TEST(NtUserToUnicodeEx(81, 16, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'q');
    TEST(NtUserToUnicodeEx(87, 17, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'w');
    TEST(NtUserToUnicodeEx(69, 18, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'e');
    TEST(NtUserToUnicodeEx(82, 19, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'r');
    TEST(NtUserToUnicodeEx(84, 20, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 't');
    TEST(NtUserToUnicodeEx(89, 21, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'y');
    TEST(NtUserToUnicodeEx(85, 22, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'u');
    TEST(NtUserToUnicodeEx(73, 23, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'i');
    TEST(NtUserToUnicodeEx(79, 24, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'o');
    TEST(NtUserToUnicodeEx(80, 25, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'p');
    TEST(NtUserToUnicodeEx(219, 26, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '[');
    TEST(NtUserToUnicodeEx(221, 27, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == ']');
    TEST(NtUserToUnicodeEx(13, 28, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 13);
    TEST(NtUserToUnicodeEx(65, 30, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'a');
    TEST(NtUserToUnicodeEx(83, 31, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 's');
    TEST(NtUserToUnicodeEx(68, 32, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'd');
    TEST(NtUserToUnicodeEx(70, 33, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'f');
    TEST(NtUserToUnicodeEx(71, 34, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'g');
    TEST(NtUserToUnicodeEx(72, 35, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'h');
    TEST(NtUserToUnicodeEx(74, 36, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'j');
    TEST(NtUserToUnicodeEx(75, 37, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'k');
    TEST(NtUserToUnicodeEx(76, 38, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'l');
    TEST(NtUserToUnicodeEx(186, 39, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == ';');
    TEST(NtUserToUnicodeEx(222, 40, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '\'');
    TEST(NtUserToUnicodeEx(192, 41, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '`');
    TEST(NtUserToUnicodeEx(220, 43, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '\\');
    TEST(NtUserToUnicodeEx(90, 44, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'z');
    TEST(NtUserToUnicodeEx(88, 45, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'x');
    TEST(NtUserToUnicodeEx(67, 46, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'c');
    TEST(NtUserToUnicodeEx(86, 47, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'v');
    TEST(NtUserToUnicodeEx(66, 48, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'b');
    TEST(NtUserToUnicodeEx(78, 49, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'n');
    TEST(NtUserToUnicodeEx(77, 50, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'm');
    TEST(NtUserToUnicodeEx(188, 51, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == ',');
    TEST(NtUserToUnicodeEx(190, 52, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '.');
    TEST(NtUserToUnicodeEx(191, 53, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '/');
    TEST(NtUserToUnicodeEx(106, 55, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '*');
    TEST(NtUserToUnicodeEx(32, 57, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == ' ');
    TEST(NtUserToUnicodeEx(109, 74, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '-');
    TEST(NtUserToUnicodeEx(107, 78, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '+');
    TEST(NtUserToUnicodeEx(226, 86, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '\\');
    TEST(NtUserToUnicodeEx(9, 124, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 9);

    /* Test with shift key pressed */
    ZeroMemory(KeyState, 256);
    KeyState[VK_SHIFT] = 0xff;
    TEST(NtUserToUnicodeEx(27, 1, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 27);
    TEST(NtUserToUnicodeEx(49, 2, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '!');
    TEST(NtUserToUnicodeEx(50, 3, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '@');
    TEST(NtUserToUnicodeEx(51, 4, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '#');
    TEST(NtUserToUnicodeEx(52, 5, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '$');
    TEST(NtUserToUnicodeEx(53, 6, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '%');
    TEST(NtUserToUnicodeEx(54, 7, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '^');
    TEST(NtUserToUnicodeEx(55, 8, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '&');
    TEST(NtUserToUnicodeEx(56, 9, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '*');
    TEST(NtUserToUnicodeEx(57, 10, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '(');
    TEST(NtUserToUnicodeEx(48, 11, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == ')');
    TEST(NtUserToUnicodeEx(189, 12, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '_');
    TEST(NtUserToUnicodeEx(187, 13, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '+');
    TEST(NtUserToUnicodeEx(8, 14, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 8);
    TEST(NtUserToUnicodeEx(9, 15, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 9);
    TEST(NtUserToUnicodeEx(81, 16, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'Q');
    TEST(NtUserToUnicodeEx(87, 17, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'W');
    TEST(NtUserToUnicodeEx(69, 18, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'E');
    TEST(NtUserToUnicodeEx(82, 19, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'R');
    TEST(NtUserToUnicodeEx(84, 20, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'T');
    TEST(NtUserToUnicodeEx(89, 21, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'Y');
    TEST(NtUserToUnicodeEx(85, 22, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'U');
    TEST(NtUserToUnicodeEx(73, 23, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'I');
    TEST(NtUserToUnicodeEx(79, 24, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'O');
    TEST(NtUserToUnicodeEx(80, 25, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'P');
    TEST(NtUserToUnicodeEx(219, 26, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '{');
    TEST(NtUserToUnicodeEx(221, 27, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '}');
    TEST(NtUserToUnicodeEx(13, 28, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 13);
    TEST(NtUserToUnicodeEx(65, 30, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'A');
    TEST(NtUserToUnicodeEx(83, 31, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'S');
    TEST(NtUserToUnicodeEx(68, 32, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'D');
    TEST(NtUserToUnicodeEx(70, 33, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'F');
    TEST(NtUserToUnicodeEx(71, 34, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'G');
    TEST(NtUserToUnicodeEx(72, 35, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'H');
    TEST(NtUserToUnicodeEx(74, 36, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'J');
    TEST(NtUserToUnicodeEx(75, 37, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'K');
    TEST(NtUserToUnicodeEx(76, 38, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'L');
    TEST(NtUserToUnicodeEx(186, 39, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == ':');
    TEST(NtUserToUnicodeEx(222, 40, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '"');
    TEST(NtUserToUnicodeEx(192, 41, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '~');
    TEST(NtUserToUnicodeEx(220, 43, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '|');
    TEST(NtUserToUnicodeEx(90, 44, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'Z');
    TEST(NtUserToUnicodeEx(88, 45, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'X');
    TEST(NtUserToUnicodeEx(67, 46, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'C');
    TEST(NtUserToUnicodeEx(86, 47, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'V');
    TEST(NtUserToUnicodeEx(66, 48, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'B');
    TEST(NtUserToUnicodeEx(78, 49, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'N');
    TEST(NtUserToUnicodeEx(77, 50, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'M');
    TEST(NtUserToUnicodeEx(188, 51, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '<');
    TEST(NtUserToUnicodeEx(190, 52, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '>');
    TEST(NtUserToUnicodeEx(191, 53, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '?');
    TEST(NtUserToUnicodeEx(106, 55, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '*');
    TEST(NtUserToUnicodeEx(32, 57, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == ' ');
    TEST(NtUserToUnicodeEx(109, 74, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '-');
    TEST(NtUserToUnicodeEx(107, 78, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '+');
    TEST(NtUserToUnicodeEx(226, 86, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '|');
    TEST(NtUserToUnicodeEx(9, 124, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 9);

    /* Test with ctrl key pressed */
    ZeroMemory(KeyState, 256);
    KeyState[VK_CONTROL] = 0xff;
//  TEST(NtUserToUnicodeEx(27, 1, KeyState, Buffer, 10, 0, hkl) == 1);
//  TEST(Buffer[0] == 27);
//  TEST(NtUserToUnicodeEx(8, 14, KeyState, Buffer, 10, 0, hkl) == 1);
//  TEST(Buffer[0] == 127);
    TEST(NtUserToUnicodeEx(81, 16, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 17);
    TEST(NtUserToUnicodeEx(87, 17, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 23);
    TEST(NtUserToUnicodeEx(69, 18, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 5);
    TEST(NtUserToUnicodeEx(82, 19, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 18);
    TEST(NtUserToUnicodeEx(84, 20, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 20);
    TEST(NtUserToUnicodeEx(89, 21, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 25);
    TEST(NtUserToUnicodeEx(85, 22, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 21);
    TEST(NtUserToUnicodeEx(73, 23, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 9);
    TEST(NtUserToUnicodeEx(79, 24, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 15);
    TEST(NtUserToUnicodeEx(80, 25, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 16);
    TEST(NtUserToUnicodeEx(219, 26, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 27);
    TEST(NtUserToUnicodeEx(221, 27, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 29);
    TEST(NtUserToUnicodeEx(13, 28, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 10);
    TEST(NtUserToUnicodeEx(65, 30, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 1);
    TEST(NtUserToUnicodeEx(83, 31, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 19);
    TEST(NtUserToUnicodeEx(68, 32, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 4);
    TEST(NtUserToUnicodeEx(70, 33, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 6);
    TEST(NtUserToUnicodeEx(71, 34, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 7);
    TEST(NtUserToUnicodeEx(72, 35, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 8);
    TEST(NtUserToUnicodeEx(74, 36, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 10);
    TEST(NtUserToUnicodeEx(75, 37, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 11);
    TEST(NtUserToUnicodeEx(76, 38, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 12);
    TEST(NtUserToUnicodeEx(220, 43, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 28);
    TEST(NtUserToUnicodeEx(90, 44, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 26);
    TEST(NtUserToUnicodeEx(88, 45, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 24);
    TEST(NtUserToUnicodeEx(67, 46, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 3);
    TEST(NtUserToUnicodeEx(86, 47, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 22);
    TEST(NtUserToUnicodeEx(66, 48, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 2);
    TEST(NtUserToUnicodeEx(78, 49, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 14);
    TEST(NtUserToUnicodeEx(77, 50, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 13);
//  TEST(NtUserToUnicodeEx(32, 57, KeyState, Buffer, 10, 0, hkl) == 1);
//  TEST(Buffer[0] == 32);
    TEST(NtUserToUnicodeEx(226, 86, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 28);

    /* Test with VK_CAPITAL key pressed */
    ZeroMemory(KeyState, 256);
    KeyState[VK_CAPITAL] = 0xff;
    TEST(NtUserToUnicodeEx(27, 1, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 27);
    TEST(NtUserToUnicodeEx(49, 2, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '1');
    TEST(NtUserToUnicodeEx(50, 3, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '2');
    TEST(NtUserToUnicodeEx(51, 4, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '3');
    TEST(NtUserToUnicodeEx(52, 5, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '4');
    TEST(NtUserToUnicodeEx(53, 6, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '5');
    TEST(NtUserToUnicodeEx(54, 7, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '6');
    TEST(NtUserToUnicodeEx(55, 8, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '7');
    TEST(NtUserToUnicodeEx(56, 9, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '8');
    TEST(NtUserToUnicodeEx(57, 10, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '9');
    TEST(NtUserToUnicodeEx(48, 11, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '0');
    TEST(NtUserToUnicodeEx(189, 12, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '-');
    TEST(NtUserToUnicodeEx(187, 13, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '=');
    TEST(NtUserToUnicodeEx(8, 14, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 8);
    TEST(NtUserToUnicodeEx(9, 15, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 9);
    TEST(NtUserToUnicodeEx(81, 16, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'Q');
    TEST(NtUserToUnicodeEx(87, 17, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'W');
    TEST(NtUserToUnicodeEx(69, 18, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'E');
    TEST(NtUserToUnicodeEx(82, 19, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'R');
    TEST(NtUserToUnicodeEx(84, 20, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'T');
    TEST(NtUserToUnicodeEx(89, 21, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'Y');
    TEST(NtUserToUnicodeEx(85, 22, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'U');
    TEST(NtUserToUnicodeEx(73, 23, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'I');
    TEST(NtUserToUnicodeEx(79, 24, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'O');
    TEST(NtUserToUnicodeEx(80, 25, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'P');
    TEST(NtUserToUnicodeEx(219, 26, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '[');
    TEST(NtUserToUnicodeEx(221, 27, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == ']');
    TEST(NtUserToUnicodeEx(13, 28, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 13);
    TEST(NtUserToUnicodeEx(65, 30, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'A');
    TEST(NtUserToUnicodeEx(83, 31, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'S');
    TEST(NtUserToUnicodeEx(68, 32, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'D');
    TEST(NtUserToUnicodeEx(70, 33, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'F');
    TEST(NtUserToUnicodeEx(71, 34, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'G');
    TEST(NtUserToUnicodeEx(72, 35, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'H');
    TEST(NtUserToUnicodeEx(74, 36, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'J');
    TEST(NtUserToUnicodeEx(75, 37, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'K');
    TEST(NtUserToUnicodeEx(76, 38, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'L');
    TEST(NtUserToUnicodeEx(186, 39, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == ';');
    TEST(NtUserToUnicodeEx(222, 40, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '\'');
    TEST(NtUserToUnicodeEx(192, 41, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '`');
    TEST(NtUserToUnicodeEx(220, 43, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '\\');
    TEST(NtUserToUnicodeEx(90, 44, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'Z');
    TEST(NtUserToUnicodeEx(88, 45, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'X');
    TEST(NtUserToUnicodeEx(67, 46, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'C');
    TEST(NtUserToUnicodeEx(86, 47, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'V');
    TEST(NtUserToUnicodeEx(66, 48, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'B');
    TEST(NtUserToUnicodeEx(78, 49, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'N');
    TEST(NtUserToUnicodeEx(77, 50, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 'M');
    TEST(NtUserToUnicodeEx(188, 51, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == ',');
    TEST(NtUserToUnicodeEx(190, 52, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '.');
    TEST(NtUserToUnicodeEx(191, 53, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '/');
    TEST(NtUserToUnicodeEx(106, 55, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '*');
    TEST(NtUserToUnicodeEx(32, 57, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == ' ');
    TEST(NtUserToUnicodeEx(109, 74, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '-');
    TEST(NtUserToUnicodeEx(107, 78, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '+');
    TEST(NtUserToUnicodeEx(226, 86, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == '\\');
    TEST(NtUserToUnicodeEx(9, 124, KeyState, Buffer, 10, 0, hkl) == 1);
    TEST(Buffer[0] == 9);
}

