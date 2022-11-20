/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_all( \
	L0D, R5D, R5E, L0C, L0E, R5C, L0A, L0B, L0F, R5F, R5B, R5A, L4F, L1D, R6D, R6E, L1C, L1E, R6C, L1A, L1B, L1F, R6F, R6B, R6A, L2D, R7D, L2C, L2E, R7E, R7C, L2A, L2B, L2F, R7F, R7B, R7A, L3D, R8D, L3C, L3E, R8E, R8C, L3A, L3B, L3F, R8F, R8B, R8A, L4C, L4D, R9D, L4B, R9E, R9C, R9B, R9F, L4E \
) { \
	{L0A, L0B, L0C, L0D, L0E, L0F}, \
	{L1A, L1B, L1C, L1D, L1E, L1F}, \
	{L2A, L2B, L2C, L2D, L2E, L2F}, \
	{L3A, L3B, L3C, L3D, L3E, L3F}, \
	{XXX, L4B, L4C, L4D, L4E, L4F}, \
	{R5A, R5B, R5C, R5D, R5E, R5F}, \
	{R6A, R6B, R6C, R6D, R6E, R6F}, \
	{R7A, R7B, R7C, R7D, R7E, R7F}, \
	{R8A, R8B, R8C, R8D, R8E, R8F}, \
	{XXX, R9B, R9C, R9D, R9E, R9F} \
}
