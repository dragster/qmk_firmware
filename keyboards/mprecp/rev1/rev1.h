#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT(\
    L00_00, L00_01, L00_02, L00_03, \
    L01_00, L01_01, L01_02, L01_03, \
    L02_00, L02_01, L02_02, L02_03, \
    L03_00, L03_01, L03_02, L03_03\
) {\
    {L00_00, L00_01, L00_02, L00_03}, \
    {L01_00, L01_01, L01_02, L01_03}, \
    {L02_00, L02_01, L02_02, L02_03}, \
    {L03_00, L03_01, L03_02, L03_03}\
}

