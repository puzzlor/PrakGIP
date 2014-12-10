// Datei: sort_template.h 
#pragma once 
template <typename T> void aufsteigend(T &x, T &y);
template <typename T> void absteigend(T &x, T &y);
template <typename T1, typename T2> void sortiere(T1 *anker, void(*cmp_p)(T2 &, T2 &));
