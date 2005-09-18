/* Libvisual - The audio visualisation framework.
 * 
 * Copyright (C) 2004, 2005 Dennis Smit <ds@nerds-incorporated.org>
 *
 * Authors: Dennis Smit <ds@nerds-incorporated.org>
 *
 * $Id:
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef _LV_COLOR_H
#define _LV_COLOR_H

#include <libvisual/lv_common.h>

VISUAL_BEGIN_DECLS

#define VISUAL_COLOR(obj)				(VISUAL_CHECK_CAST ((obj), VisColor))

typedef struct _VisColor VisColor;

/**
 * Data type to describe a palette entry, or a color. The HSV isn't kept in sync with RGB automaticly
 * but it's there especially for VisUI.
 */
struct _VisColor {
	VisObject	object;	/**< The VisObject data. */
	uint8_t		r;	/**< The red channel of this VisColor. */
	uint8_t		g;	/**< The green channel of this VisColor. */
	uint8_t		b;	/**< The blue channel of this VisColor. */
	uint8_t		unused;	/**< Unused. */
};

VisColor *visual_color_new (void);
int visual_color_set (VisColor *color, uint8_t r, uint8_t g, uint8_t b);
int visual_color_compare (VisColor *src1, VisColor *src2);
int visual_color_from_hsv (VisColor *color, float h, float s, float v);
int visual_color_to_hsv (VisColor *color, float *h, float *s, float *v);
int visual_color_copy (VisColor *dest, VisColor *src);

VISUAL_END_DECLS

#endif /* _LV_COLOR_H */
