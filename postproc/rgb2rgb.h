/* 
 *
 *  rgb2rgb.h, Software RGB to RGB converter
 *
 */

#ifndef RGB2RGB_INCLUDED
#define RGB2RGB_INCLUDED

extern void rgb24to32(uint8_t *src,uint8_t *dst,uint32_t src_size);
extern void rgb32to24(uint8_t *src,uint8_t *dst,uint32_t src_size);

#endif
