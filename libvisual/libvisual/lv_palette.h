#ifndef _LV_PALETTE_H
#define _LV_PALETTE_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <libvisual/lv_common.h>
#include <libvisual/lv_color.h>
	
typedef struct _VisPalette VisPalette;

/**
 * Data type to describe the palette for an 8 bits screen depth.
 * 
 * To access the RGB value of a certain indexed color simply do:
 * pal->colors[index].(r,g,b)
 *
 * @see visual_palette_new
 */
struct _VisPalette {
	int		 ncolors;	/**< Number of color entries in palette. */
	VisColor	*colors;	/**< Pointer to the colors. */
};

VisPalette *visual_palette_new (int ncolors);
int visual_palette_free (VisPalette *pal);
int visual_palette_copy (VisPalette *dest, VisPalette *src);
int visual_palette_allocate_colors (VisPalette *pal, int ncolors);
int visual_palette_free_colors (VisPalette *pal);
int visual_palette_blend (VisPalette *dest, VisPalette *src1, VisPalette *src2, float rate);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _LV_PALETTE_H */
