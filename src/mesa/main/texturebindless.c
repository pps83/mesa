/*
 * Copyright © 2017 Valve Corporation.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include "glheader.h"
#include "context.h"
#include "enums.h"
#include "imports.h"
#include "macros.h"
#include "mtypes.h"
#include "texobj.h"
#include "texturebindless.h"

#include "util/set.h"
#include "util/hash_table.h"

GLuint64 GLAPIENTRY
_mesa_GetTextureHandleARB(GLuint texture)
{
   return 0;
}

GLuint64 GLAPIENTRY
_mesa_GetTextureSamplerHandleARB(GLuint texture, GLuint sampler)
{
   return 0;
}

void GLAPIENTRY
_mesa_MakeTextureHandleResidentARB(GLuint64 handle)
{
}

void GLAPIENTRY
_mesa_MakeTextureHandleNonResidentARB(GLuint64 handle)
{
}

GLuint64 GLAPIENTRY
_mesa_GetImageHandleARB(GLuint texture, GLint level, GLboolean layered,
                        GLint layer, GLenum format)
{
   return 0;
}

void GLAPIENTRY
_mesa_MakeImageHandleResidentARB(GLuint64 handle, GLenum access)
{
}

void GLAPIENTRY
_mesa_MakeImageHandleNonResidentARB(GLuint64 handle)
{
}

GLboolean GLAPIENTRY
_mesa_IsTextureHandleResidentARB(GLuint64 handle)
{
   return GL_FALSE;
}

GLboolean GLAPIENTRY
_mesa_IsImageHandleResidentARB(GLuint64 handle)
{
   return GL_FALSE;
}