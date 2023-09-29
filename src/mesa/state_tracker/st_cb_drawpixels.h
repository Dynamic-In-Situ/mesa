/**************************************************************************
 * 
 * Copyright 2007 VMware, Inc.
 * All Rights Reserved.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL VMWARE AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * 
 **************************************************************************/


#ifndef ST_CB_DRAWPIXELS_H
#define ST_CB_DRAWPIXELS_H


#include <stdbool.h>

struct dd_function_table;
struct st_context;

extern void st_init_drawpixels_functions(struct dd_function_table *functions);

extern void
st_destroy_drawpix(struct st_context *st);

extern const struct tgsi_token *
st_get_drawpix_shader(const struct tgsi_token *tokens, bool use_texcoord,
                      bool scale_and_bias, unsigned scale_const,
                      unsigned bias_const, bool pixel_maps,
                      unsigned drawpix_sampler, unsigned pixelmap_sampler,
                      unsigned texcoord_const, unsigned tex_target);

#endif /* ST_CB_DRAWPIXELS_H */