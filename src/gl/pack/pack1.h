// OpenGL 2.0 >> 3.0

// Simplified version of the header file

// // #define GLAPI extern

// ======== glu
//#include "glu_pack.h"

//EX(gluBuild2DMipmaps);




// ======== gl
#include "pack.h"



// GL_VERSION_1_0
// typedef void GLvoid;
// typedef unsigned int GLenum;
// #include <KHR/khrplatform.h>
// typedef khronos_float_t GLfloat;
// typedef int GLint;
// typedef int GLsizei;
// typedef unsigned int GLbitfield;
// typedef double GLdouble;
// typedef unsigned int GLuint;
// typedef unsigned char GLboolean;
// typedef khronos_uint8_t GLubyte;
// #define GL_DEPTH_BUFFER_BIT               0x00000100
// #define GL_STENCIL_BUFFER_BIT             0x00000400
// #define GL_COLOR_BUFFER_BIT               0x00004000
// #define GL_FALSE                          0
// #define GL_TRUE                           1
// #define GL_POINTS                         0x0000
// #define GL_LINES                          0x0001
// #define GL_LINE_LOOP                      0x0002
// #define GL_LINE_STRIP                     0x0003
// #define GL_TRIANGLES                      0x0004
// #define GL_TRIANGLE_STRIP                 0x0005
// #define GL_TRIANGLE_FAN                   0x0006
// #define GL_QUADS                          0x0007
// #define GL_NEVER                          0x0200
// #define GL_LESS                           0x0201
// #define GL_EQUAL                          0x0202
// #define GL_LEQUAL                         0x0203
// #define GL_GREATER                        0x0204
// #define GL_NOTEQUAL                       0x0205
// #define GL_GEQUAL                         0x0206
// #define GL_ALWAYS                         0x0207
// #define GL_ZERO                           0
// #define GL_ONE                            1
// #define GL_SRC_COLOR                      0x0300
// #define GL_ONE_MINUS_SRC_COLOR            0x0301
// #define GL_SRC_ALPHA                      0x0302
// #define GL_ONE_MINUS_SRC_ALPHA            0x0303
// #define GL_DST_ALPHA                      0x0304
// #define GL_ONE_MINUS_DST_ALPHA            0x0305
// #define GL_DST_COLOR                      0x0306
// #define GL_ONE_MINUS_DST_COLOR            0x0307
// #define GL_SRC_ALPHA_SATURATE             0x0308
// #define GL_NONE                           0
// #define GL_FRONT_LEFT                     0x0400
// #define GL_FRONT_RIGHT                    0x0401
// #define GL_BACK_LEFT                      0x0402
// #define GL_BACK_RIGHT                     0x0403
// #define GL_FRONT                          0x0404
// #define GL_BACK                           0x0405
// #define GL_LEFT                           0x0406
// #define GL_RIGHT                          0x0407
// #define GL_FRONT_AND_BACK                 0x0408
// #define GL_NO_ERROR                       0
// #define GL_INVALID_ENUM                   0x0500
// #define GL_INVALID_VALUE                  0x0501
// #define GL_INVALID_OPERATION              0x0502
// #define GL_OUT_OF_MEMORY                  0x0505
// #define GL_CW                             0x0900
// #define GL_CCW                            0x0901
// #define GL_POINT_SIZE                     0x0B11
// #define GL_POINT_SIZE_RANGE               0x0B12
// #define GL_POINT_SIZE_GRANULARITY         0x0B13
// #define GL_LINE_SMOOTH                    0x0B20
// #define GL_LINE_WIDTH                     0x0B21
// #define GL_LINE_WIDTH_RANGE               0x0B22
// #define GL_LINE_WIDTH_GRANULARITY         0x0B23
// #define GL_POLYGON_MODE                   0x0B40
// #define GL_POLYGON_SMOOTH                 0x0B41
// #define GL_CULL_FACE                      0x0B44
// #define GL_CULL_FACE_MODE                 0x0B45
// #define GL_FRONT_FACE                     0x0B46
// #define GL_DEPTH_RANGE                    0x0B70
// #define GL_DEPTH_TEST                     0x0B71
// #define GL_DEPTH_WRITEMASK                0x0B72
// #define GL_DEPTH_CLEAR_VALUE              0x0B73
// #define GL_DEPTH_FUNC                     0x0B74
// #define GL_STENCIL_TEST                   0x0B90
// #define GL_STENCIL_CLEAR_VALUE            0x0B91
// #define GL_STENCIL_FUNC                   0x0B92
// #define GL_STENCIL_VALUE_MASK             0x0B93
// #define GL_STENCIL_FAIL                   0x0B94
// #define GL_STENCIL_PASS_DEPTH_FAIL        0x0B95
// #define GL_STENCIL_PASS_DEPTH_PASS        0x0B96
// #define GL_STENCIL_REF                    0x0B97
// #define GL_STENCIL_WRITEMASK              0x0B98
// #define GL_VIEWPORT                       0x0BA2
// #define GL_DITHER                         0x0BD0
// #define GL_BLEND_DST                      0x0BE0
// #define GL_BLEND_SRC                      0x0BE1
// #define GL_BLEND                          0x0BE2
// #define GL_LOGIC_OP_MODE                  0x0BF0
// #define GL_DRAW_BUFFER                    0x0C01
// #define GL_READ_BUFFER                    0x0C02
// #define GL_SCISSOR_BOX                    0x0C10
// #define GL_SCISSOR_TEST                   0x0C11
// #define GL_COLOR_CLEAR_VALUE              0x0C22
// #define GL_COLOR_WRITEMASK                0x0C23
// #define GL_DOUBLEBUFFER                   0x0C32
// #define GL_STEREO                         0x0C33
// #define GL_LINE_SMOOTH_HINT               0x0C52
// #define GL_POLYGON_SMOOTH_HINT            0x0C53
// #define GL_UNPACK_SWAP_BYTES              0x0CF0
// #define GL_UNPACK_LSB_FIRST               0x0CF1
// #define GL_UNPACK_ROW_LENGTH              0x0CF2
// #define GL_UNPACK_SKIP_ROWS               0x0CF3
// #define GL_UNPACK_SKIP_PIXELS             0x0CF4
// #define GL_UNPACK_ALIGNMENT               0x0CF5
// #define GL_PACK_SWAP_BYTES                0x0D00
// #define GL_PACK_LSB_FIRST                 0x0D01
// #define GL_PACK_ROW_LENGTH                0x0D02
// #define GL_PACK_SKIP_ROWS                 0x0D03
// #define GL_PACK_SKIP_PIXELS               0x0D04
// #define GL_PACK_ALIGNMENT                 0x0D05
// #define GL_MAX_TEXTURE_SIZE               0x0D33
// #define GL_MAX_VIEWPORT_DIMS              0x0D3A
// #define GL_SUBPIXEL_BITS                  0x0D50
// #define GL_TEXTURE_1D                     0x0DE0
// #define GL_TEXTURE_2D                     0x0DE1
// #define GL_TEXTURE_WIDTH                  0x1000
// #define GL_TEXTURE_HEIGHT                 0x1001
// #define GL_TEXTURE_BORDER_COLOR           0x1004
// #define GL_DONT_CARE                      0x1100
// #define GL_FASTEST                        0x1101
// #define GL_NICEST                         0x1102
// #define GL_BYTE                           0x1400
// #define GL_UNSIGNED_BYTE                  0x1401
// #define GL_SHORT                          0x1402
// #define GL_UNSIGNED_SHORT                 0x1403
// #define GL_INT                            0x1404
// #define GL_UNSIGNED_INT                   0x1405
// #define GL_FLOAT                          0x1406
// #define GL_STACK_OVERFLOW                 0x0503
// #define GL_STACK_UNDERFLOW                0x0504
// #define GL_CLEAR                          0x1500
// #define GL_AND                            0x1501
// #define GL_AND_REVERSE                    0x1502
// #define GL_COPY                           0x1503
// #define GL_AND_INVERTED                   0x1504
// #define GL_NOOP                           0x1505
// #define GL_XOR                            0x1506
// #define GL_OR                             0x1507
// #define GL_NOR                            0x1508
// #define GL_EQUIV                          0x1509
// #define GL_INVERT                         0x150A
// #define GL_OR_REVERSE                     0x150B
// #define GL_COPY_INVERTED                  0x150C
// #define GL_OR_INVERTED                    0x150D
// #define GL_NAND                           0x150E
// #define GL_SET                            0x150F
// #define GL_TEXTURE                        0x1702
// #define GL_COLOR                          0x1800
// #define GL_DEPTH                          0x1801
// #define GL_STENCIL                        0x1802
// #define GL_STENCIL_INDEX                  0x1901
// #define GL_DEPTH_COMPONENT                0x1902
// #define GL_RED                            0x1903
// #define GL_GREEN                          0x1904
// #define GL_BLUE                           0x1905
// #define GL_ALPHA                          0x1906
// #define GL_RGB                            0x1907
// #define GL_RGBA                           0x1908
// #define GL_POINT                          0x1B00
// #define GL_LINE                           0x1B01
// #define GL_FILL                           0x1B02
// #define GL_KEEP                           0x1E00
// #define GL_REPLACE                        0x1E01
// #define GL_INCR                           0x1E02
// #define GL_DECR                           0x1E03
// #define GL_VENDOR                         0x1F00
// #define GL_RENDERER                       0x1F01
// #define GL_VERSION                        0x1F02
// #define GL_EXTENSIONS                     0x1F03
// #define GL_NEAREST                        0x2600
// #define GL_LINEAR                         0x2601
// #define GL_NEAREST_MIPMAP_NEAREST         0x2700
// #define GL_LINEAR_MIPMAP_NEAREST          0x2701
// #define GL_NEAREST_MIPMAP_LINEAR          0x2702
// #define GL_LINEAR_MIPMAP_LINEAR           0x2703
// #define GL_TEXTURE_MAG_FILTER             0x2800
// #define GL_TEXTURE_MIN_FILTER             0x2801
// #define GL_TEXTURE_WRAP_S                 0x2802
// #define GL_TEXTURE_WRAP_T                 0x2803
// #define GL_REPEAT                         0x2901

/* GLAPI void  */    EX(glCullFace);    // (GLenum mode);
/* GLAPI void  */    EX(glFrontFace);    // (GLenum mode);
/* GLAPI void  */    EX(glHint);    // (GLenum target, GLenum mode);
/* GLAPI void  */    EX(glLineWidth);    // (GLfloat width);
/* GLAPI void  */    EX(glPointSize);    // (GLfloat size);
/* GLAPI void  */    EX(glPolygonMode);    // (GLenum face, GLenum mode);
/* GLAPI void  */    EX(glScissor);    // (GLint x, GLint y, GLsizei width, GLsizei height);
/* GLAPI void  */    EX(glTexParameterf);    // (GLenum target, GLenum pname, GLfloat param);
/* GLAPI void  */    EX(glTexParameterfv);    // (GLenum target, GLenum pname, const GLfloat *params);
/* GLAPI void  */    EX(glTexParameteri);    // (GLenum target, GLenum pname, GLint param);
/* GLAPI void  */    EX(glTexParameteriv);    // (GLenum target, GLenum pname, const GLint *params);
/* GLAPI void  */    EX(glTexImage1D);    // (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
/* GLAPI void  */    EX(glTexImage2D);    // (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
/* GLAPI void  */    EX(glDrawBuffer);    // (GLenum buf);
/* GLAPI void  */    EX(glClear);    // (GLbitfield mask);
/* GLAPI void  */    EX(glClearColor);    // (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
/* GLAPI void  */    EX(glClearStencil);    // (GLint s);
/* GLAPI void  */    EX(glClearDepth);    // (GLdouble depth);
/* GLAPI void  */    EX(glStencilMask);    // (GLuint mask);
/* GLAPI void  */    EX(glColorMask);    // (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
/* GLAPI void  */    EX(glDepthMask);    // (GLboolean flag);
/* GLAPI void  */    EX(glDisable);    // (GLenum cap);
/* GLAPI void  */    EX(glEnable);    // (GLenum cap);
/* GLAPI void  */    EX(glFinish);    // (void);
/* GLAPI void  */    EX(glFlush);    // (void);
/* GLAPI void  */    EX(glBlendFunc);    // (GLenum sfactor, GLenum dfactor);
/* GLAPI void  */    EX(glLogicOp);    // (GLenum opcode);
/* GLAPI void  */    EX(glStencilFunc);    // (GLenum func, GLint ref, GLuint mask);
/* GLAPI void  */    EX(glStencilOp);    // (GLenum fail, GLenum zfail, GLenum zpass);
/* GLAPI void  */    EX(glDepthFunc);    // (GLenum func);
/* GLAPI void  */    EX(glPixelStoref);    // (GLenum pname, GLfloat param);
/* GLAPI void  */    EX(glPixelStorei);    // (GLenum pname, GLint param);
/* GLAPI void  */    EX(glReadBuffer);    // (GLenum src);
/* GLAPI void  */    EX(glReadPixels);    // (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
/* GLAPI void  */    EX(glGetBooleanv);    // (GLenum pname, GLboolean *data);
/* GLAPI void  */    EX(glGetDoublev);    // (GLenum pname, GLdouble *data);
/* GLAPI GLenum  */    EX(glGetError);    // (void);
/* GLAPI void  */    EX(glGetFloatv);    // (GLenum pname, GLfloat *data);
/* GLAPI void  */    EX(glGetIntegerv);    // (GLenum pname, GLint *data);
/* GLAPI const GLubyte * */    EX(glGetString);    // (GLenum name);
/* GLAPI void  */    EX(glGetTexImage);    // (GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
/* GLAPI void  */    EX(glGetTexParameterfv);    // (GLenum target, GLenum pname, GLfloat *params);
/* GLAPI void  */    EX(glGetTexParameteriv);    // (GLenum target, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetTexLevelParameterfv);    // (GLenum target, GLint level, GLenum pname, GLfloat *params);
/* GLAPI void  */    EX(glGetTexLevelParameteriv);    // (GLenum target, GLint level, GLenum pname, GLint *params);
/* GLAPI GLboolean  */    EX(glIsEnabled);    // (GLenum cap);
/* GLAPI void  */    EX(glDepthRange);    // (GLdouble n, GLdouble f);
/* GLAPI void  */    EX(glViewport);    // (GLint x, GLint y, GLsizei width, GLsizei height);


// GL_VERSION_1_1
// typedef khronos_float_t GLclampf;
// typedef double GLclampd;
// #define GL_COLOR_LOGIC_OP                 0x0BF2
// #define GL_POLYGON_OFFSET_UNITS           0x2A00
// #define GL_POLYGON_OFFSET_POINT           0x2A01
// #define GL_POLYGON_OFFSET_LINE            0x2A02
// #define GL_POLYGON_OFFSET_FILL            0x8037
// #define GL_POLYGON_OFFSET_FACTOR          0x8038
// #define GL_TEXTURE_BINDING_1D             0x8068
// #define GL_TEXTURE_BINDING_2D             0x8069
// #define GL_TEXTURE_INTERNAL_FORMAT        0x1003
// #define GL_TEXTURE_RED_SIZE               0x805C
// #define GL_TEXTURE_GREEN_SIZE             0x805D
// #define GL_TEXTURE_BLUE_SIZE              0x805E
// #define GL_TEXTURE_ALPHA_SIZE             0x805F
// #define GL_DOUBLE                         0x140A
// #define GL_PROXY_TEXTURE_1D               0x8063
// #define GL_PROXY_TEXTURE_2D               0x8064
// #define GL_R3_G3_B2                       0x2A10
// #define GL_RGB4                           0x804F
// #define GL_RGB5                           0x8050
// #define GL_RGB8                           0x8051
// #define GL_RGB10                          0x8052
// #define GL_RGB12                          0x8053
// #define GL_RGB16                          0x8054
// #define GL_RGBA2                          0x8055
// #define GL_RGBA4                          0x8056
// #define GL_RGB5_A1                        0x8057
// #define GL_RGBA8                          0x8058
// #define GL_RGB10_A2                       0x8059
// #define GL_RGBA12                         0x805A
// #define GL_RGBA16                         0x805B
// #define GL_VERTEX_ARRAY                   0x8074

/* GLAPI void  */    EX(glDrawArrays);    // (GLenum mode, GLint first, GLsizei count);
/* GLAPI void  */    EX(glDrawElements);    // (GLenum mode, GLsizei count, GLenum type, const void *indices);
/* GLAPI void  */    EX(glGetPointerv);    // (GLenum pname, void **params);
/* GLAPI void  */    EX(glPolygonOffset);    // (GLfloat factor, GLfloat units);
/* GLAPI void  */    EX(glCopyTexImage1D);    // (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
/* GLAPI void  */    EX(glCopyTexImage2D);    // (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
/* GLAPI void  */    EX(glCopyTexSubImage1D);    // (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
/* GLAPI void  */    EX(glCopyTexSubImage2D);    // (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
/* GLAPI void  */    EX(glTexSubImage1D);    // (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
/* GLAPI void  */    EX(glTexSubImage2D);    // (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
/* GLAPI void  */    EX(glBindTexture);    // (GLenum target, GLuint texture);
/* GLAPI void  */    EX(glDeleteTextures);    // (GLsizei n, const GLuint *textures);
/* GLAPI void  */    EX(glGenTextures);    // (GLsizei n, GLuint *textures);
/* GLAPI GLboolean  */    EX(glIsTexture);    // (GLuint texture);


// GL_VERSION_1_2
// #define GL_UNSIGNED_BYTE_3_3_2            0x8032
// #define GL_UNSIGNED_SHORT_4_4_4_4         0x8033
// #define GL_UNSIGNED_SHORT_5_5_5_1         0x8034
// #define GL_UNSIGNED_INT_8_8_8_8           0x8035
// #define GL_UNSIGNED_INT_10_10_10_2        0x8036
// #define GL_TEXTURE_BINDING_3D             0x806A
// #define GL_PACK_SKIP_IMAGES               0x806B
// #define GL_PACK_IMAGE_HEIGHT              0x806C
// #define GL_UNPACK_SKIP_IMAGES             0x806D
// #define GL_UNPACK_IMAGE_HEIGHT            0x806E
// #define GL_TEXTURE_3D                     0x806F
// #define GL_PROXY_TEXTURE_3D               0x8070
// #define GL_TEXTURE_DEPTH                  0x8071
// #define GL_TEXTURE_WRAP_R                 0x8072
// #define GL_MAX_3D_TEXTURE_SIZE            0x8073
// #define GL_UNSIGNED_BYTE_2_3_3_REV        0x8362
// #define GL_UNSIGNED_SHORT_5_6_5           0x8363
// #define GL_UNSIGNED_SHORT_5_6_5_REV       0x8364
// #define GL_UNSIGNED_SHORT_4_4_4_4_REV     0x8365
// #define GL_UNSIGNED_SHORT_1_5_5_5_REV     0x8366
// #define GL_UNSIGNED_INT_8_8_8_8_REV       0x8367
// #define GL_UNSIGNED_INT_2_10_10_10_REV    0x8368
// #define GL_BGR                            0x80E0
// #define GL_BGRA                           0x80E1
// #define GL_MAX_ELEMENTS_VERTICES          0x80E8
// #define GL_MAX_ELEMENTS_INDICES           0x80E9
// #define GL_CLAMP_TO_EDGE                  0x812F
// #define GL_TEXTURE_MIN_LOD                0x813A
// #define GL_TEXTURE_MAX_LOD                0x813B
// #define GL_TEXTURE_BASE_LEVEL             0x813C
// #define GL_TEXTURE_MAX_LEVEL              0x813D
// #define GL_SMOOTH_POINT_SIZE_RANGE        0x0B12
// #define GL_SMOOTH_POINT_SIZE_GRANULARITY  0x0B13
// #define GL_SMOOTH_LINE_WIDTH_RANGE        0x0B22
// #define GL_SMOOTH_LINE_WIDTH_GRANULARITY  0x0B23
// #define GL_ALIASED_LINE_WIDTH_RANGE       0x846E

/* GLAPI void  */    EX(glDrawRangeElements);    // (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
/* GLAPI void  */    EX(glTexImage3D);    // (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
/* GLAPI void  */    EX(glTexSubImage3D);    // (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
/* GLAPI void  */    EX(glCopyTexSubImage3D);    // (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);


// GL_VERSION_1_3
// #define GL_TEXTURE0                       0x84C0
// #define GL_TEXTURE1                       0x84C1
// #define GL_TEXTURE2                       0x84C2
// #define GL_TEXTURE3                       0x84C3
// #define GL_TEXTURE4                       0x84C4
// #define GL_TEXTURE5                       0x84C5
// #define GL_TEXTURE6                       0x84C6
// #define GL_TEXTURE7                       0x84C7
// #define GL_TEXTURE8                       0x84C8
// #define GL_TEXTURE9                       0x84C9
// #define GL_TEXTURE10                      0x84CA
// #define GL_TEXTURE11                      0x84CB
// #define GL_TEXTURE12                      0x84CC
// #define GL_TEXTURE13                      0x84CD
// #define GL_TEXTURE14                      0x84CE
// #define GL_TEXTURE15                      0x84CF
// #define GL_TEXTURE16                      0x84D0
// #define GL_TEXTURE17                      0x84D1
// #define GL_TEXTURE18                      0x84D2
// #define GL_TEXTURE19                      0x84D3
// #define GL_TEXTURE20                      0x84D4
// #define GL_TEXTURE21                      0x84D5
// #define GL_TEXTURE22                      0x84D6
// #define GL_TEXTURE23                      0x84D7
// #define GL_TEXTURE24                      0x84D8
// #define GL_TEXTURE25                      0x84D9
// #define GL_TEXTURE26                      0x84DA
// #define GL_TEXTURE27                      0x84DB
// #define GL_TEXTURE28                      0x84DC
// #define GL_TEXTURE29                      0x84DD
// #define GL_TEXTURE30                      0x84DE
// #define GL_TEXTURE31                      0x84DF
// #define GL_ACTIVE_TEXTURE                 0x84E0
// #define GL_MULTISAMPLE                    0x809D
// #define GL_SAMPLE_ALPHA_TO_COVERAGE       0x809E
// #define GL_SAMPLE_ALPHA_TO_ONE            0x809F
// #define GL_SAMPLE_COVERAGE                0x80A0
// #define GL_SAMPLE_BUFFERS                 0x80A8
// #define GL_SAMPLES                        0x80A9
// #define GL_SAMPLE_COVERAGE_VALUE          0x80AA
// #define GL_SAMPLE_COVERAGE_INVERT         0x80AB
// #define GL_TEXTURE_CUBE_MAP               0x8513
// #define GL_TEXTURE_BINDING_CUBE_MAP       0x8514
// #define GL_TEXTURE_CUBE_MAP_POSITIVE_X    0x8515
// #define GL_TEXTURE_CUBE_MAP_NEGATIVE_X    0x8516
// #define GL_TEXTURE_CUBE_MAP_POSITIVE_Y    0x8517
// #define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y    0x8518
// #define GL_TEXTURE_CUBE_MAP_POSITIVE_Z    0x8519
// #define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z    0x851A
// #define GL_PROXY_TEXTURE_CUBE_MAP         0x851B
// #define GL_MAX_CUBE_MAP_TEXTURE_SIZE      0x851C
// #define GL_COMPRESSED_RGB                 0x84ED
// #define GL_COMPRESSED_RGBA                0x84EE
// #define GL_TEXTURE_COMPRESSION_HINT       0x84EF
// #define GL_TEXTURE_COMPRESSED_IMAGE_SIZE  0x86A0
// #define GL_TEXTURE_COMPRESSED             0x86A1
// #define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
// #define GL_COMPRESSED_TEXTURE_FORMATS     0x86A3
// #define GL_CLAMP_TO_BORDER                0x812D

/* GLAPI void  */    EX(glActiveTexture);    // (GLenum texture);
/* GLAPI void  */    EX(glSampleCoverage);    // (GLfloat value, GLboolean invert);
/* GLAPI void  */    EX(glCompressedTexImage3D);    // (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
/* GLAPI void  */    EX(glCompressedTexImage2D);    // (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
/* GLAPI void  */    EX(glCompressedTexImage1D);    // (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
/* GLAPI void  */    EX(glCompressedTexSubImage3D);    // (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
/* GLAPI void  */    EX(glCompressedTexSubImage2D);    // (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
/* GLAPI void  */    EX(glCompressedTexSubImage1D);    // (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
/* GLAPI void  */    EX(glGetCompressedTexImage);    // (GLenum target, GLint level, void *img);


// GL_VERSION_1_4
// #define GL_BLEND_DST_RGB                  0x80C8
// #define GL_BLEND_SRC_RGB                  0x80C9
// #define GL_BLEND_DST_ALPHA                0x80CA
// #define GL_BLEND_SRC_ALPHA                0x80CB
// #define GL_POINT_FADE_THRESHOLD_SIZE      0x8128
// #define GL_DEPTH_COMPONENT16              0x81A5
// #define GL_DEPTH_COMPONENT24              0x81A6
// #define GL_DEPTH_COMPONENT32              0x81A7
// #define GL_MIRRORED_REPEAT                0x8370
// #define GL_MAX_TEXTURE_LOD_BIAS           0x84FD
// #define GL_TEXTURE_LOD_BIAS               0x8501
// #define GL_INCR_WRAP                      0x8507
// #define GL_DECR_WRAP                      0x8508
// #define GL_TEXTURE_DEPTH_SIZE             0x884A
// #define GL_TEXTURE_COMPARE_MODE           0x884C
// #define GL_TEXTURE_COMPARE_FUNC           0x884D
// #define GL_BLEND_COLOR                    0x8005
// #define GL_BLEND_EQUATION                 0x8009
// #define GL_CONSTANT_COLOR                 0x8001
// #define GL_ONE_MINUS_CONSTANT_COLOR       0x8002
// #define GL_CONSTANT_ALPHA                 0x8003
// #define GL_ONE_MINUS_CONSTANT_ALPHA       0x8004
// #define GL_FUNC_ADD                       0x8006
// #define GL_FUNC_REVERSE_SUBTRACT          0x800B
// #define GL_FUNC_SUBTRACT                  0x800A
// #define GL_MIN                            0x8007
// #define GL_MAX                            0x8008

/* GLAPI void  */    EX(glBlendFuncSeparate);    // (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
/* GLAPI void  */    EX(glMultiDrawArrays);    // (GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
/* GLAPI void  */    EX(glMultiDrawElements);    // (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount);
/* GLAPI void  */    EX(glPointParameterf);    // (GLenum pname, GLfloat param);
/* GLAPI void  */    EX(glPointParameterfv);    // (GLenum pname, const GLfloat *params);
/* GLAPI void  */    EX(glPointParameteri);    // (GLenum pname, GLint param);
/* GLAPI void  */    EX(glPointParameteriv);    // (GLenum pname, const GLint *params);
/* GLAPI void  */    EX(glBlendColor);    // (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
/* GLAPI void  */    EX(glBlendEquation);    // (GLenum mode);


// GL_VERSION_1_5
// typedef khronos_ssize_t GLsizeiptr;
// typedef khronos_intptr_t GLintptr;
// #define GL_BUFFER_SIZE                    0x8764
// #define GL_BUFFER_USAGE                   0x8765
// #define GL_QUERY_COUNTER_BITS             0x8864
// #define GL_CURRENT_QUERY                  0x8865
// #define GL_QUERY_RESULT                   0x8866
// #define GL_QUERY_RESULT_AVAILABLE         0x8867
// #define GL_ARRAY_BUFFER                   0x8892
// #define GL_ELEMENT_ARRAY_BUFFER           0x8893
// #define GL_ARRAY_BUFFER_BINDING           0x8894
// #define GL_ELEMENT_ARRAY_BUFFER_BINDING   0x8895
// #define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
// #define GL_READ_ONLY                      0x88B8
// #define GL_WRITE_ONLY                     0x88B9
// #define GL_READ_WRITE                     0x88BA
// #define GL_BUFFER_ACCESS                  0x88BB
// #define GL_BUFFER_MAPPED                  0x88BC
// #define GL_BUFFER_MAP_POINTER             0x88BD
// #define GL_STREAM_DRAW                    0x88E0
// #define GL_STREAM_READ                    0x88E1
// #define GL_STREAM_COPY                    0x88E2
// #define GL_STATIC_DRAW                    0x88E4
// #define GL_STATIC_READ                    0x88E5
// #define GL_STATIC_COPY                    0x88E6
// #define GL_DYNAMIC_DRAW                   0x88E8
// #define GL_DYNAMIC_READ                   0x88E9
// #define GL_DYNAMIC_COPY                   0x88EA
// #define GL_SAMPLES_PASSED                 0x8914
// #define GL_SRC1_ALPHA                     0x8589

/* GLAPI void  */    EX(glGenQueries);    // (GLsizei n, GLuint *ids);
/* GLAPI void  */    EX(glDeleteQueries);    // (GLsizei n, const GLuint *ids);
/* GLAPI GLboolean  */    EX(glIsQuery);    // (GLuint id);
/* GLAPI void  */    EX(glBeginQuery);    // (GLenum target, GLuint id);
/* GLAPI void  */    EX(glEndQuery);    // (GLenum target);
/* GLAPI void  */    EX(glGetQueryiv);    // (GLenum target, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetQueryObjectiv);    // (GLuint id, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetQueryObjectuiv);    // (GLuint id, GLenum pname, GLuint *params);
/* GLAPI void  */    EX(glBindBuffer);    // (GLenum target, GLuint buffer);
/* GLAPI void  */    EX(glDeleteBuffers);    // (GLsizei n, const GLuint *buffers);
/* GLAPI void  */    EX(glGenBuffers);    // (GLsizei n, GLuint *buffers);
/* GLAPI GLboolean  */    EX(glIsBuffer);    // (GLuint buffer);
/* GLAPI void  */    EX(glBufferData);    // (GLenum target, GLsizeiptr size, const void *data, GLenum usage);
/* GLAPI void  */    EX(glBufferSubData);    // (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
/* GLAPI void  */    EX(glGetBufferSubData);    // (GLenum target, GLintptr offset, GLsizeiptr size, void *data);
/* GLAPI void * */    EX(glMapBuffer);    // (GLenum target, GLenum access);
/* GLAPI GLboolean  */    EX(glUnmapBuffer);    // (GLenum target);
/* GLAPI void  */    EX(glGetBufferParameteriv);    // (GLenum target, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetBufferPointerv);    // (GLenum target, GLenum pname, void **params);


// GL_VERSION_2_0
// typedef char GLchar;
// typedef khronos_int16_t GLshort;
// typedef khronos_int8_t GLbyte;
// typedef khronos_uint16_t GLushort;
// #define GL_BLEND_EQUATION_RGB             0x8009
// #define GL_VERTEX_ATTRIB_ARRAY_ENABLED    0x8622
// #define GL_VERTEX_ATTRIB_ARRAY_SIZE       0x8623
// #define GL_VERTEX_ATTRIB_ARRAY_STRIDE     0x8624
// #define GL_VERTEX_ATTRIB_ARRAY_TYPE       0x8625
// #define GL_CURRENT_VERTEX_ATTRIB          0x8626
// #define GL_VERTEX_PROGRAM_POINT_SIZE      0x8642
// #define GL_VERTEX_ATTRIB_ARRAY_POINTER    0x8645
// #define GL_STENCIL_BACK_FUNC              0x8800
// #define GL_STENCIL_BACK_FAIL              0x8801
// #define GL_STENCIL_BACK_PASS_DEPTH_FAIL   0x8802
// #define GL_STENCIL_BACK_PASS_DEPTH_PASS   0x8803
// #define GL_MAX_DRAW_BUFFERS               0x8824
// #define GL_DRAW_BUFFER0                   0x8825
// #define GL_DRAW_BUFFER1                   0x8826
// #define GL_DRAW_BUFFER2                   0x8827
// #define GL_DRAW_BUFFER3                   0x8828
// #define GL_DRAW_BUFFER4                   0x8829
// #define GL_DRAW_BUFFER5                   0x882A
// #define GL_DRAW_BUFFER6                   0x882B
// #define GL_DRAW_BUFFER7                   0x882C
// #define GL_DRAW_BUFFER8                   0x882D
// #define GL_DRAW_BUFFER9                   0x882E
// #define GL_DRAW_BUFFER10                  0x882F
// #define GL_DRAW_BUFFER11                  0x8830
// #define GL_DRAW_BUFFER12                  0x8831
// #define GL_DRAW_BUFFER13                  0x8832
// #define GL_DRAW_BUFFER14                  0x8833
// #define GL_DRAW_BUFFER15                  0x8834
// #define GL_BLEND_EQUATION_ALPHA           0x883D
// #define GL_MAX_VERTEX_ATTRIBS             0x8869
// #define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
// #define GL_MAX_TEXTURE_IMAGE_UNITS        0x8872
// #define GL_FRAGMENT_SHADER                0x8B30
// #define GL_VERTEX_SHADER                  0x8B31
// #define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
// #define GL_MAX_VERTEX_UNIFORM_COMPONENTS  0x8B4A
// #define GL_MAX_VARYING_FLOATS             0x8B4B
// #define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
// #define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
// #define GL_SHADER_TYPE                    0x8B4F
// #define GL_FLOAT_VEC2                     0x8B50
// #define GL_FLOAT_VEC3                     0x8B51
// #define GL_FLOAT_VEC4                     0x8B52
// #define GL_INT_VEC2                       0x8B53
// #define GL_INT_VEC3                       0x8B54
// #define GL_INT_VEC4                       0x8B55
// #define GL_BOOL                           0x8B56
// #define GL_BOOL_VEC2                      0x8B57
// #define GL_BOOL_VEC3                      0x8B58
// #define GL_BOOL_VEC4                      0x8B59
// #define GL_FLOAT_MAT2                     0x8B5A
// #define GL_FLOAT_MAT3                     0x8B5B
// #define GL_FLOAT_MAT4                     0x8B5C
// #define GL_SAMPLER_1D                     0x8B5D
// #define GL_SAMPLER_2D                     0x8B5E
// #define GL_SAMPLER_3D                     0x8B5F
// #define GL_SAMPLER_CUBE                   0x8B60
// #define GL_SAMPLER_1D_SHADOW              0x8B61
// #define GL_SAMPLER_2D_SHADOW              0x8B62
// #define GL_DELETE_STATUS                  0x8B80
// #define GL_COMPILE_STATUS                 0x8B81
// #define GL_LINK_STATUS                    0x8B82
// #define GL_VALIDATE_STATUS                0x8B83
// #define GL_INFO_LOG_LENGTH                0x8B84
// #define GL_ATTACHED_SHADERS               0x8B85
// #define GL_ACTIVE_UNIFORMS                0x8B86
// #define GL_ACTIVE_UNIFORM_MAX_LENGTH      0x8B87
// #define GL_SHADER_SOURCE_LENGTH           0x8B88
// #define GL_ACTIVE_ATTRIBUTES              0x8B89
// #define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH    0x8B8A
// #define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
// #define GL_SHADING_LANGUAGE_VERSION       0x8B8C
// #define GL_CURRENT_PROGRAM                0x8B8D
// #define GL_POINT_SPRITE_COORD_ORIGIN      0x8CA0
// #define GL_LOWER_LEFT                     0x8CA1
// #define GL_UPPER_LEFT                     0x8CA2
// #define GL_STENCIL_BACK_REF               0x8CA3
// #define GL_STENCIL_BACK_VALUE_MASK        0x8CA4
// #define GL_STENCIL_BACK_WRITEMASK         0x8CA5

/* GLAPI void  */    EX(glBlendEquationSeparate);    // (GLenum modeRGB, GLenum modeAlpha);
/* GLAPI void  */    EX(glDrawBuffers);    // (GLsizei n, const GLenum *bufs);
/* GLAPI void  */    EX(glStencilOpSeparate);    // (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
/* GLAPI void  */    EX(glStencilFuncSeparate);    // (GLenum face, GLenum func, GLint ref, GLuint mask);
/* GLAPI void  */    EX(glStencilMaskSeparate);    // (GLenum face, GLuint mask);
/* GLAPI void  */    EX(glAttachShader);    // (GLuint program, GLuint shader);
/* GLAPI void  */    EX(glBindAttribLocation);    // (GLuint program, GLuint index, const GLchar *name);
/* GLAPI void  */    EX(glCompileShader);    // (GLuint shader);
/* GLAPI GLuint  */    EX(glCreateProgram);    // (void);
/* GLAPI GLuint  */    EX(glCreateShader);    // (GLenum type);
/* GLAPI void  */    EX(glDeleteProgram);    // (GLuint program);
/* GLAPI void  */    EX(glDeleteShader);    // (GLuint shader);
/* GLAPI void  */    EX(glDetachShader);    // (GLuint program, GLuint shader);
/* GLAPI void  */    EX(glDisableVertexAttribArray);    // (GLuint index);
/* GLAPI void  */    EX(glEnableVertexAttribArray);    // (GLuint index);
/* GLAPI void  */    EX(glGetActiveAttrib);    // (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
/* GLAPI void  */    EX(glGetActiveUniform);    // (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
/* GLAPI void  */    EX(glGetAttachedShaders);    // (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
/* GLAPI GLint  */    EX(glGetAttribLocation);    // (GLuint program, const GLchar *name);
/* GLAPI void  */    EX(glGetProgramiv);    // (GLuint program, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetProgramInfoLog);    // (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
/* GLAPI void  */    EX(glGetShaderiv);    // (GLuint shader, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetShaderInfoLog);    // (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
/* GLAPI void  */    EX(glGetShaderSource);    // (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
/* GLAPI GLint  */    EX(glGetUniformLocation);    // (GLuint program, const GLchar *name);
/* GLAPI void  */    EX(glGetUniformfv);    // (GLuint program, GLint location, GLfloat *params);
/* GLAPI void  */    EX(glGetUniformiv);    // (GLuint program, GLint location, GLint *params);
/* GLAPI void  */    EX(glGetVertexAttribdv);    // (GLuint index, GLenum pname, GLdouble *params);
/* GLAPI void  */    EX(glGetVertexAttribfv);    // (GLuint index, GLenum pname, GLfloat *params);
/* GLAPI void  */    EX(glGetVertexAttribiv);    // (GLuint index, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetVertexAttribPointerv);    // (GLuint index, GLenum pname, void **pointer);
/* GLAPI GLboolean  */    EX(glIsProgram);    // (GLuint program);
/* GLAPI GLboolean  */    EX(glIsShader);    // (GLuint shader);
/* GLAPI void  */    EX(glLinkProgram);    // (GLuint program);
/* GLAPI void  */    EX(glShaderSource);    // (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
/* GLAPI void  */    EX(glUseProgram);    // (GLuint program);
/* GLAPI void  */    EX(glUniform1f);    // (GLint location, GLfloat v0);
/* GLAPI void  */    EX(glUniform2f);    // (GLint location, GLfloat v0, GLfloat v1);
/* GLAPI void  */    EX(glUniform3f);    // (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
/* GLAPI void  */    EX(glUniform4f);    // (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
/* GLAPI void  */    EX(glUniform1i);    // (GLint location, GLint v0);
/* GLAPI void  */    EX(glUniform2i);    // (GLint location, GLint v0, GLint v1);
/* GLAPI void  */    EX(glUniform3i);    // (GLint location, GLint v0, GLint v1, GLint v2);
/* GLAPI void  */    EX(glUniform4i);    // (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
/* GLAPI void  */    EX(glUniform1fv);    // (GLint location, GLsizei count, const GLfloat *value);
/* GLAPI void  */    EX(glUniform2fv);    // (GLint location, GLsizei count, const GLfloat *value);
/* GLAPI void  */    EX(glUniform3fv);    // (GLint location, GLsizei count, const GLfloat *value);
/* GLAPI void  */    EX(glUniform4fv);    // (GLint location, GLsizei count, const GLfloat *value);
/* GLAPI void  */    EX(glUniform1iv);    // (GLint location, GLsizei count, const GLint *value);
/* GLAPI void  */    EX(glUniform2iv);    // (GLint location, GLsizei count, const GLint *value);
/* GLAPI void  */    EX(glUniform3iv);    // (GLint location, GLsizei count, const GLint *value);
/* GLAPI void  */    EX(glUniform4iv);    // (GLint location, GLsizei count, const GLint *value);
/* GLAPI void  */    EX(glUniformMatrix2fv);    // (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glUniformMatrix3fv);    // (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glUniformMatrix4fv);    // (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glValidateProgram);    // (GLuint program);
/* GLAPI void  */    EX(glVertexAttrib1d);    // (GLuint index, GLdouble x);
/* GLAPI void  */    EX(glVertexAttrib1dv);    // (GLuint index, const GLdouble *v);
/* GLAPI void  */    EX(glVertexAttrib1f);    // (GLuint index, GLfloat x);
/* GLAPI void  */    EX(glVertexAttrib1fv);    // (GLuint index, const GLfloat *v);
/* GLAPI void  */    EX(glVertexAttrib1s);    // (GLuint index, GLshort x);
/* GLAPI void  */    EX(glVertexAttrib1sv);    // (GLuint index, const GLshort *v);
/* GLAPI void  */    EX(glVertexAttrib2d);    // (GLuint index, GLdouble x, GLdouble y);
/* GLAPI void  */    EX(glVertexAttrib2dv);    // (GLuint index, const GLdouble *v);
/* GLAPI void  */    EX(glVertexAttrib2f);    // (GLuint index, GLfloat x, GLfloat y);
/* GLAPI void  */    EX(glVertexAttrib2fv);    // (GLuint index, const GLfloat *v);
/* GLAPI void  */    EX(glVertexAttrib2s);    // (GLuint index, GLshort x, GLshort y);
/* GLAPI void  */    EX(glVertexAttrib2sv);    // (GLuint index, const GLshort *v);
/* GLAPI void  */    EX(glVertexAttrib3d);    // (GLuint index, GLdouble x, GLdouble y, GLdouble z);
/* GLAPI void  */    EX(glVertexAttrib3dv);    // (GLuint index, const GLdouble *v);
/* GLAPI void  */    EX(glVertexAttrib3f);    // (GLuint index, GLfloat x, GLfloat y, GLfloat z);
/* GLAPI void  */    EX(glVertexAttrib3fv);    // (GLuint index, const GLfloat *v);
/* GLAPI void  */    EX(glVertexAttrib3s);    // (GLuint index, GLshort x, GLshort y, GLshort z);
/* GLAPI void  */    EX(glVertexAttrib3sv);    // (GLuint index, const GLshort *v);
/* GLAPI void  */    EX(glVertexAttrib4Nbv);    // (GLuint index, const GLbyte *v);
/* GLAPI void  */    EX(glVertexAttrib4Niv);    // (GLuint index, const GLint *v);
/* GLAPI void  */    EX(glVertexAttrib4Nsv);    // (GLuint index, const GLshort *v);
/* GLAPI void  */    EX(glVertexAttrib4Nub);    // (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
/* GLAPI void  */    EX(glVertexAttrib4Nubv);    // (GLuint index, const GLubyte *v);
/* GLAPI void  */    EX(glVertexAttrib4Nuiv);    // (GLuint index, const GLuint *v);
/* GLAPI void  */    EX(glVertexAttrib4Nusv);    // (GLuint index, const GLushort *v);
/* GLAPI void  */    EX(glVertexAttrib4bv);    // (GLuint index, const GLbyte *v);
/* GLAPI void  */    EX(glVertexAttrib4d);    // (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
/* GLAPI void  */    EX(glVertexAttrib4dv);    // (GLuint index, const GLdouble *v);
/* GLAPI void  */    EX(glVertexAttrib4f);    // (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
/* GLAPI void  */    EX(glVertexAttrib4fv);    // (GLuint index, const GLfloat *v);
/* GLAPI void  */    EX(glVertexAttrib4iv);    // (GLuint index, const GLint *v);
/* GLAPI void  */    EX(glVertexAttrib4s);    // (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
/* GLAPI void  */    EX(glVertexAttrib4sv);    // (GLuint index, const GLshort *v);
/* GLAPI void  */    EX(glVertexAttrib4ubv);    // (GLuint index, const GLubyte *v);
/* GLAPI void  */    EX(glVertexAttrib4uiv);    // (GLuint index, const GLuint *v);
/* GLAPI void  */    EX(glVertexAttrib4usv);    // (GLuint index, const GLushort *v);
/* GLAPI void  */    EX(glVertexAttribPointer);    // (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);


// GL_VERSION_2_1
// #define GL_PIXEL_PACK_BUFFER              0x88EB
// #define GL_PIXEL_UNPACK_BUFFER            0x88EC
// #define GL_PIXEL_PACK_BUFFER_BINDING      0x88ED
// #define GL_PIXEL_UNPACK_BUFFER_BINDING    0x88EF
// #define GL_FLOAT_MAT2x3                   0x8B65
// #define GL_FLOAT_MAT2x4                   0x8B66
// #define GL_FLOAT_MAT3x2                   0x8B67
// #define GL_FLOAT_MAT3x4                   0x8B68
// #define GL_FLOAT_MAT4x2                   0x8B69
// #define GL_FLOAT_MAT4x3                   0x8B6A
// #define GL_SRGB                           0x8C40
// #define GL_SRGB8                          0x8C41
// #define GL_SRGB_ALPHA                     0x8C42
// #define GL_SRGB8_ALPHA8                   0x8C43
// #define GL_COMPRESSED_SRGB                0x8C48
// #define GL_COMPRESSED_SRGB_ALPHA          0x8C49

/* GLAPI void  */    EX(glUniformMatrix2x3fv);    // (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glUniformMatrix3x2fv);    // (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glUniformMatrix2x4fv);    // (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glUniformMatrix4x2fv);    // (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glUniformMatrix3x4fv);    // (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glUniformMatrix4x3fv);    // (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);


// GL_VERSION_3_0
// typedef khronos_uint16_t GLhalf;
// #define GL_COMPARE_REF_TO_TEXTURE         0x884E
// #define GL_CLIP_DISTANCE0                 0x3000
// #define GL_CLIP_DISTANCE1                 0x3001
// #define GL_CLIP_DISTANCE2                 0x3002
// #define GL_CLIP_DISTANCE3                 0x3003
// #define GL_CLIP_DISTANCE4                 0x3004
// #define GL_CLIP_DISTANCE5                 0x3005
// #define GL_CLIP_DISTANCE6                 0x3006
// #define GL_CLIP_DISTANCE7                 0x3007
// #define GL_MAX_CLIP_DISTANCES             0x0D32
// #define GL_MAJOR_VERSION                  0x821B
// #define GL_MINOR_VERSION                  0x821C
// #define GL_NUM_EXTENSIONS                 0x821D
// #define GL_CONTEXT_FLAGS                  0x821E
// #define GL_COMPRESSED_RED                 0x8225
// #define GL_COMPRESSED_RG                  0x8226
// #define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT 0x00000001
// #define GL_RGBA32F                        0x8814
// #define GL_RGB32F                         0x8815
// #define GL_RGBA16F                        0x881A
// #define GL_RGB16F                         0x881B
// #define GL_VERTEX_ATTRIB_ARRAY_INTEGER    0x88FD
// #define GL_MAX_ARRAY_TEXTURE_LAYERS       0x88FF
// #define GL_MIN_PROGRAM_TEXEL_OFFSET       0x8904
// #define GL_MAX_PROGRAM_TEXEL_OFFSET       0x8905
// #define GL_CLAMP_READ_COLOR               0x891C
// #define GL_FIXED_ONLY                     0x891D
// #define GL_MAX_VARYING_COMPONENTS         0x8B4B
// #define GL_TEXTURE_1D_ARRAY               0x8C18
// #define GL_PROXY_TEXTURE_1D_ARRAY         0x8C19
// #define GL_TEXTURE_2D_ARRAY               0x8C1A
// #define GL_PROXY_TEXTURE_2D_ARRAY         0x8C1B
// #define GL_TEXTURE_BINDING_1D_ARRAY       0x8C1C
// #define GL_TEXTURE_BINDING_2D_ARRAY       0x8C1D
// #define GL_R11F_G11F_B10F                 0x8C3A
// #define GL_UNSIGNED_INT_10F_11F_11F_REV   0x8C3B
// #define GL_RGB9_E5                        0x8C3D
// #define GL_UNSIGNED_INT_5_9_9_9_REV       0x8C3E
// #define GL_TEXTURE_SHARED_SIZE            0x8C3F
// #define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
// #define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
// #define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
// #define GL_TRANSFORM_FEEDBACK_VARYINGS    0x8C83
// #define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
// #define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
// #define GL_PRIMITIVES_GENERATED           0x8C87
// #define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
// #define GL_RASTERIZER_DISCARD             0x8C89
// #define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
// #define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
// #define GL_INTERLEAVED_ATTRIBS            0x8C8C
// #define GL_SEPARATE_ATTRIBS               0x8C8D
// #define GL_TRANSFORM_FEEDBACK_BUFFER      0x8C8E
// #define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
// #define GL_RGBA32UI                       0x8D70
// #define GL_RGB32UI                        0x8D71
// #define GL_RGBA16UI                       0x8D76
// #define GL_RGB16UI                        0x8D77
// #define GL_RGBA8UI                        0x8D7C
// #define GL_RGB8UI                         0x8D7D
// #define GL_RGBA32I                        0x8D82
// #define GL_RGB32I                         0x8D83
// #define GL_RGBA16I                        0x8D88
// #define GL_RGB16I                         0x8D89
// #define GL_RGBA8I                         0x8D8E
// #define GL_RGB8I                          0x8D8F
// #define GL_RED_INTEGER                    0x8D94
// #define GL_GREEN_INTEGER                  0x8D95
// #define GL_BLUE_INTEGER                   0x8D96
// #define GL_RGB_INTEGER                    0x8D98
// #define GL_RGBA_INTEGER                   0x8D99
// #define GL_BGR_INTEGER                    0x8D9A
// #define GL_BGRA_INTEGER                   0x8D9B
// #define GL_SAMPLER_1D_ARRAY               0x8DC0
// #define GL_SAMPLER_2D_ARRAY               0x8DC1
// #define GL_SAMPLER_1D_ARRAY_SHADOW        0x8DC3
// #define GL_SAMPLER_2D_ARRAY_SHADOW        0x8DC4
// #define GL_SAMPLER_CUBE_SHADOW            0x8DC5
// #define GL_UNSIGNED_INT_VEC2              0x8DC6
// #define GL_UNSIGNED_INT_VEC3              0x8DC7
// #define GL_UNSIGNED_INT_VEC4              0x8DC8
// #define GL_INT_SAMPLER_1D                 0x8DC9
// #define GL_INT_SAMPLER_2D                 0x8DCA
// #define GL_INT_SAMPLER_3D                 0x8DCB
// #define GL_INT_SAMPLER_CUBE               0x8DCC
// #define GL_INT_SAMPLER_1D_ARRAY           0x8DCE
// #define GL_INT_SAMPLER_2D_ARRAY           0x8DCF
// #define GL_UNSIGNED_INT_SAMPLER_1D        0x8DD1
// #define GL_UNSIGNED_INT_SAMPLER_2D        0x8DD2
// #define GL_UNSIGNED_INT_SAMPLER_3D        0x8DD3
// #define GL_UNSIGNED_INT_SAMPLER_CUBE      0x8DD4
// #define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY  0x8DD6
// #define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY  0x8DD7
// #define GL_QUERY_WAIT                     0x8E13
// #define GL_QUERY_NO_WAIT                  0x8E14
// #define GL_QUERY_BY_REGION_WAIT           0x8E15
// #define GL_QUERY_BY_REGION_NO_WAIT        0x8E16
// #define GL_BUFFER_ACCESS_FLAGS            0x911F
// #define GL_BUFFER_MAP_LENGTH              0x9120
// #define GL_BUFFER_MAP_OFFSET              0x9121
// #define GL_DEPTH_COMPONENT32F             0x8CAC
// #define GL_DEPTH32F_STENCIL8              0x8CAD
// #define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD
// #define GL_INVALID_FRAMEBUFFER_OPERATION  0x0506
// #define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
// #define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
// #define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
// #define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
// #define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
// #define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
// #define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
// #define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
// #define GL_FRAMEBUFFER_DEFAULT            0x8218
// #define GL_FRAMEBUFFER_UNDEFINED          0x8219
// #define GL_DEPTH_STENCIL_ATTACHMENT       0x821A
// #define GL_MAX_RENDERBUFFER_SIZE          0x84E8
// #define GL_DEPTH_STENCIL                  0x84F9
// #define GL_UNSIGNED_INT_24_8              0x84FA
// #define GL_DEPTH24_STENCIL8               0x88F0
// #define GL_TEXTURE_STENCIL_SIZE           0x88F1
// #define GL_TEXTURE_RED_TYPE               0x8C10
// #define GL_TEXTURE_GREEN_TYPE             0x8C11
// #define GL_TEXTURE_BLUE_TYPE              0x8C12
// #define GL_TEXTURE_ALPHA_TYPE             0x8C13
// #define GL_TEXTURE_DEPTH_TYPE             0x8C16
// #define GL_UNSIGNED_NORMALIZED            0x8C17
// #define GL_FRAMEBUFFER_BINDING            0x8CA6
// #define GL_DRAW_FRAMEBUFFER_BINDING       0x8CA6
// #define GL_RENDERBUFFER_BINDING           0x8CA7
// #define GL_READ_FRAMEBUFFER               0x8CA8
// #define GL_DRAW_FRAMEBUFFER               0x8CA9
// #define GL_READ_FRAMEBUFFER_BINDING       0x8CAA
// #define GL_RENDERBUFFER_SAMPLES           0x8CAB
// #define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
// #define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
// #define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
// #define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
// #define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
// #define GL_FRAMEBUFFER_COMPLETE           0x8CD5
// #define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
// #define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
// #define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER 0x8CDB
// #define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER 0x8CDC
// #define GL_FRAMEBUFFER_UNSUPPORTED        0x8CDD
// #define GL_MAX_COLOR_ATTACHMENTS          0x8CDF
// #define GL_COLOR_ATTACHMENT0              0x8CE0
// #define GL_COLOR_ATTACHMENT1              0x8CE1
// #define GL_COLOR_ATTACHMENT2              0x8CE2
// #define GL_COLOR_ATTACHMENT3              0x8CE3
// #define GL_COLOR_ATTACHMENT4              0x8CE4
// #define GL_COLOR_ATTACHMENT5              0x8CE5
// #define GL_COLOR_ATTACHMENT6              0x8CE6
// #define GL_COLOR_ATTACHMENT7              0x8CE7
// #define GL_COLOR_ATTACHMENT8              0x8CE8
// #define GL_COLOR_ATTACHMENT9              0x8CE9
// #define GL_COLOR_ATTACHMENT10             0x8CEA
// #define GL_COLOR_ATTACHMENT11             0x8CEB
// #define GL_COLOR_ATTACHMENT12             0x8CEC
// #define GL_COLOR_ATTACHMENT13             0x8CED
// #define GL_COLOR_ATTACHMENT14             0x8CEE
// #define GL_COLOR_ATTACHMENT15             0x8CEF
// #define GL_COLOR_ATTACHMENT16             0x8CF0
// #define GL_COLOR_ATTACHMENT17             0x8CF1
// #define GL_COLOR_ATTACHMENT18             0x8CF2
// #define GL_COLOR_ATTACHMENT19             0x8CF3
// #define GL_COLOR_ATTACHMENT20             0x8CF4
// #define GL_COLOR_ATTACHMENT21             0x8CF5
// #define GL_COLOR_ATTACHMENT22             0x8CF6
// #define GL_COLOR_ATTACHMENT23             0x8CF7
// #define GL_COLOR_ATTACHMENT24             0x8CF8
// #define GL_COLOR_ATTACHMENT25             0x8CF9
// #define GL_COLOR_ATTACHMENT26             0x8CFA
// #define GL_COLOR_ATTACHMENT27             0x8CFB
// #define GL_COLOR_ATTACHMENT28             0x8CFC
// #define GL_COLOR_ATTACHMENT29             0x8CFD
// #define GL_COLOR_ATTACHMENT30             0x8CFE
// #define GL_COLOR_ATTACHMENT31             0x8CFF
// #define GL_DEPTH_ATTACHMENT               0x8D00
// #define GL_STENCIL_ATTACHMENT             0x8D20
// #define GL_FRAMEBUFFER                    0x8D40
// #define GL_RENDERBUFFER                   0x8D41
// #define GL_RENDERBUFFER_WIDTH             0x8D42
// #define GL_RENDERBUFFER_HEIGHT            0x8D43
// #define GL_RENDERBUFFER_INTERNAL_FORMAT   0x8D44
// #define GL_STENCIL_INDEX1                 0x8D46
// #define GL_STENCIL_INDEX4                 0x8D47
// #define GL_STENCIL_INDEX8                 0x8D48
// #define GL_STENCIL_INDEX16                0x8D49
// #define GL_RENDERBUFFER_RED_SIZE          0x8D50
// #define GL_RENDERBUFFER_GREEN_SIZE        0x8D51
// #define GL_RENDERBUFFER_BLUE_SIZE         0x8D52
// #define GL_RENDERBUFFER_ALPHA_SIZE        0x8D53
// #define GL_RENDERBUFFER_DEPTH_SIZE        0x8D54
// #define GL_RENDERBUFFER_STENCIL_SIZE      0x8D55
// #define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
// #define GL_MAX_SAMPLES                    0x8D57
// #define GL_FRAMEBUFFER_SRGB               0x8DB9
// #define GL_HALF_FLOAT                     0x140B
// #define GL_MAP_READ_BIT                   0x0001
// #define GL_MAP_WRITE_BIT                  0x0002
// #define GL_MAP_INVALIDATE_RANGE_BIT       0x0004
// #define GL_MAP_INVALIDATE_BUFFER_BIT      0x0008
// #define GL_MAP_FLUSH_EXPLICIT_BIT         0x0010
// #define GL_MAP_UNSYNCHRONIZED_BIT         0x0020
// #define GL_COMPRESSED_RED_RGTC1           0x8DBB
// #define GL_COMPRESSED_SIGNED_RED_RGTC1    0x8DBC
// #define GL_COMPRESSED_RG_RGTC2            0x8DBD
// #define GL_COMPRESSED_SIGNED_RG_RGTC2     0x8DBE
// #define GL_RG                             0x8227
// #define GL_RG_INTEGER                     0x8228
// #define GL_R8                             0x8229
// #define GL_R16                            0x822A
// #define GL_RG8                            0x822B
// #define GL_RG16                           0x822C
// #define GL_R16F                           0x822D
// #define GL_R32F                           0x822E
// #define GL_RG16F                          0x822F
// #define GL_RG32F                          0x8230
// #define GL_R8I                            0x8231
// #define GL_R8UI                           0x8232
// #define GL_R16I                           0x8233
// #define GL_R16UI                          0x8234
// #define GL_R32I                           0x8235
// #define GL_R32UI                          0x8236
// #define GL_RG8I                           0x8237
// #define GL_RG8UI                          0x8238
// #define GL_RG16I                          0x8239
// #define GL_RG16UI                         0x823A
// #define GL_RG32I                          0x823B
// #define GL_RG32UI                         0x823C
// #define GL_VERTEX_ARRAY_BINDING           0x85B5

/* GLAPI void  */    EX(glColorMaski);    // (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
/* GLAPI void  */    EX(glGetBooleani_v);    // (GLenum target, GLuint index, GLboolean *data);
/* GLAPI void  */    EX(glGetIntegeri_v);    // (GLenum target, GLuint index, GLint *data);
/* GLAPI void  */    EX(glEnablei);    // (GLenum target, GLuint index);
/* GLAPI void  */    EX(glDisablei);    // (GLenum target, GLuint index);
/* GLAPI GLboolean  */    EX(glIsEnabledi);    // (GLenum target, GLuint index);
/* GLAPI void  */    EX(glBeginTransformFeedback);    // (GLenum primitiveMode);
/* GLAPI void  */    EX(glEndTransformFeedback);    // (void);
/* GLAPI void  */    EX(glBindBufferRange);    // (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
/* GLAPI void  */    EX(glBindBufferBase);    // (GLenum target, GLuint index, GLuint buffer);
/* GLAPI void  */    EX(glTransformFeedbackVaryings);    // (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
/* GLAPI void  */    EX(glGetTransformFeedbackVarying);    // (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
/* GLAPI void  */    EX(glClampColor);    // (GLenum target, GLenum clamp);
/* GLAPI void  */    EX(glBeginConditionalRender);    // (GLuint id, GLenum mode);
/* GLAPI void  */    EX(glEndConditionalRender);    // (void);
/* GLAPI void  */    EX(glVertexAttribIPointer);    // (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
/* GLAPI void  */    EX(glGetVertexAttribIiv);    // (GLuint index, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetVertexAttribIuiv);    // (GLuint index, GLenum pname, GLuint *params);
/* GLAPI void  */    EX(glVertexAttribI1i);    // (GLuint index, GLint x);
/* GLAPI void  */    EX(glVertexAttribI2i);    // (GLuint index, GLint x, GLint y);
/* GLAPI void  */    EX(glVertexAttribI3i);    // (GLuint index, GLint x, GLint y, GLint z);
/* GLAPI void  */    EX(glVertexAttribI4i);    // (GLuint index, GLint x, GLint y, GLint z, GLint w);
/* GLAPI void  */    EX(glVertexAttribI1ui);    // (GLuint index, GLuint x);
/* GLAPI void  */    EX(glVertexAttribI2ui);    // (GLuint index, GLuint x, GLuint y);
/* GLAPI void  */    EX(glVertexAttribI3ui);    // (GLuint index, GLuint x, GLuint y, GLuint z);
/* GLAPI void  */    EX(glVertexAttribI4ui);    // (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
/* GLAPI void  */    EX(glVertexAttribI1iv);    // (GLuint index, const GLint *v);
/* GLAPI void  */    EX(glVertexAttribI2iv);    // (GLuint index, const GLint *v);
/* GLAPI void  */    EX(glVertexAttribI3iv);    // (GLuint index, const GLint *v);
/* GLAPI void  */    EX(glVertexAttribI4iv);    // (GLuint index, const GLint *v);
/* GLAPI void  */    EX(glVertexAttribI1uiv);    // (GLuint index, const GLuint *v);
/* GLAPI void  */    EX(glVertexAttribI2uiv);    // (GLuint index, const GLuint *v);
/* GLAPI void  */    EX(glVertexAttribI3uiv);    // (GLuint index, const GLuint *v);
/* GLAPI void  */    EX(glVertexAttribI4uiv);    // (GLuint index, const GLuint *v);
/* GLAPI void  */    EX(glVertexAttribI4bv);    // (GLuint index, const GLbyte *v);
/* GLAPI void  */    EX(glVertexAttribI4sv);    // (GLuint index, const GLshort *v);
/* GLAPI void  */    EX(glVertexAttribI4ubv);    // (GLuint index, const GLubyte *v);
/* GLAPI void  */    EX(glVertexAttribI4usv);    // (GLuint index, const GLushort *v);
/* GLAPI void  */    EX(glGetUniformuiv);    // (GLuint program, GLint location, GLuint *params);
/* GLAPI void  */    EX(glBindFragDataLocation);    // (GLuint program, GLuint color, const GLchar *name);
/* GLAPI GLint  */    EX(glGetFragDataLocation);    // (GLuint program, const GLchar *name);
/* GLAPI void  */    EX(glUniform1ui);    // (GLint location, GLuint v0);
/* GLAPI void  */    EX(glUniform2ui);    // (GLint location, GLuint v0, GLuint v1);
/* GLAPI void  */    EX(glUniform3ui);    // (GLint location, GLuint v0, GLuint v1, GLuint v2);
/* GLAPI void  */    EX(glUniform4ui);    // (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
/* GLAPI void  */    EX(glUniform1uiv);    // (GLint location, GLsizei count, const GLuint *value);
/* GLAPI void  */    EX(glUniform2uiv);    // (GLint location, GLsizei count, const GLuint *value);
/* GLAPI void  */    EX(glUniform3uiv);    // (GLint location, GLsizei count, const GLuint *value);
/* GLAPI void  */    EX(glUniform4uiv);    // (GLint location, GLsizei count, const GLuint *value);
/* GLAPI void  */    EX(glTexParameterIiv);    // (GLenum target, GLenum pname, const GLint *params);
/* GLAPI void  */    EX(glTexParameterIuiv);    // (GLenum target, GLenum pname, const GLuint *params);
/* GLAPI void  */    EX(glGetTexParameterIiv);    // (GLenum target, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetTexParameterIuiv);    // (GLenum target, GLenum pname, GLuint *params);
/* GLAPI void  */    EX(glClearBufferiv);    // (GLenum buffer, GLint drawbuffer, const GLint *value);
/* GLAPI void  */    EX(glClearBufferuiv);    // (GLenum buffer, GLint drawbuffer, const GLuint *value);
/* GLAPI void  */    EX(glClearBufferfv);    // (GLenum buffer, GLint drawbuffer, const GLfloat *value);
/* GLAPI void  */    EX(glClearBufferfi);    // (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
/* GLAPI const GLubyte * */    EX(glGetStringi);    // (GLenum name, GLuint index);
/* GLAPI GLboolean  */    EX(glIsRenderbuffer);    // (GLuint renderbuffer);
/* GLAPI void  */    EX(glBindRenderbuffer);    // (GLenum target, GLuint renderbuffer);
/* GLAPI void  */    EX(glDeleteRenderbuffers);    // (GLsizei n, const GLuint *renderbuffers);
/* GLAPI void  */    EX(glGenRenderbuffers);    // (GLsizei n, GLuint *renderbuffers);
/* GLAPI void  */    EX(glRenderbufferStorage);    // (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
/* GLAPI void  */    EX(glGetRenderbufferParameteriv);    // (GLenum target, GLenum pname, GLint *params);
/* GLAPI GLboolean  */    EX(glIsFramebuffer);    // (GLuint framebuffer);
/* GLAPI void  */    EX(glBindFramebuffer);    // (GLenum target, GLuint framebuffer);
/* GLAPI void  */    EX(glDeleteFramebuffers);    // (GLsizei n, const GLuint *framebuffers);
/* GLAPI void  */    EX(glGenFramebuffers);    // (GLsizei n, GLuint *framebuffers);
/* GLAPI GLenum  */    EX(glCheckFramebufferStatus);    // (GLenum target);
/* GLAPI void  */    EX(glFramebufferTexture1D);    // (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
/* GLAPI void  */    EX(glFramebufferTexture2D);    // (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
/* GLAPI void  */    EX(glFramebufferTexture3D);    // (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
/* GLAPI void  */    EX(glFramebufferRenderbuffer);    // (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
/* GLAPI void  */    EX(glGetFramebufferAttachmentParameteriv);    // (GLenum target, GLenum attachment, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGenerateMipmap);    // (GLenum target);
/* GLAPI void  */    EX(glBlitFramebuffer);    // (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
/* GLAPI void  */    EX(glRenderbufferStorageMultisample);    // (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
/* GLAPI void  */    EX(glFramebufferTextureLayer);    // (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
/* GLAPI void * */    EX(glMapBufferRange);    // (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
/* GLAPI void  */    EX(glFlushMappedBufferRange);    // (GLenum target, GLintptr offset, GLsizeiptr length);
/* GLAPI void  */    EX(glBindVertexArray);    // (GLuint array);
/* GLAPI void  */    EX(glDeleteVertexArrays);    // (GLsizei n, const GLuint *arrays);
/* GLAPI void  */    EX(glGenVertexArrays);    // (GLsizei n, GLuint *arrays);
/* GLAPI GLboolean  */    EX(glIsVertexArray);    // (GLuint array);



// GL_VERSION_3_1
// #define GL_SAMPLER_2D_RECT                0x8B63
// #define GL_SAMPLER_2D_RECT_SHADOW         0x8B64
// #define GL_SAMPLER_BUFFER                 0x8DC2
// #define GL_INT_SAMPLER_2D_RECT            0x8DCD
// #define GL_INT_SAMPLER_BUFFER             0x8DD0
// #define GL_UNSIGNED_INT_SAMPLER_2D_RECT   0x8DD5
// #define GL_UNSIGNED_INT_SAMPLER_BUFFER    0x8DD8
// #define GL_TEXTURE_BUFFER                 0x8C2A
// #define GL_MAX_TEXTURE_BUFFER_SIZE        0x8C2B
// #define GL_TEXTURE_BINDING_BUFFER         0x8C2C
// #define GL_TEXTURE_BUFFER_DATA_STORE_BINDING 0x8C2D
// #define GL_TEXTURE_RECTANGLE              0x84F5
// #define GL_TEXTURE_BINDING_RECTANGLE      0x84F6
// #define GL_PROXY_TEXTURE_RECTANGLE        0x84F7
// #define GL_MAX_RECTANGLE_TEXTURE_SIZE     0x84F8
// #define GL_R8_SNORM                       0x8F94
// #define GL_RG8_SNORM                      0x8F95
// #define GL_RGB8_SNORM                     0x8F96
// #define GL_RGBA8_SNORM                    0x8F97
// #define GL_R16_SNORM                      0x8F98
// #define GL_RG16_SNORM                     0x8F99
// #define GL_RGB16_SNORM                    0x8F9A
// #define GL_RGBA16_SNORM                   0x8F9B
// #define GL_SIGNED_NORMALIZED              0x8F9C
// #define GL_PRIMITIVE_RESTART              0x8F9D
// #define GL_PRIMITIVE_RESTART_INDEX        0x8F9E
// #define GL_COPY_READ_BUFFER               0x8F36
// #define GL_COPY_WRITE_BUFFER              0x8F37
// #define GL_UNIFORM_BUFFER                 0x8A11
// #define GL_UNIFORM_BUFFER_BINDING         0x8A28
// #define GL_UNIFORM_BUFFER_START           0x8A29
// #define GL_UNIFORM_BUFFER_SIZE            0x8A2A
// #define GL_MAX_VERTEX_UNIFORM_BLOCKS      0x8A2B
// #define GL_MAX_GEOMETRY_UNIFORM_BLOCKS    0x8A2C
// #define GL_MAX_FRAGMENT_UNIFORM_BLOCKS    0x8A2D
// #define GL_MAX_COMBINED_UNIFORM_BLOCKS    0x8A2E
// #define GL_MAX_UNIFORM_BUFFER_BINDINGS    0x8A2F
// #define GL_MAX_UNIFORM_BLOCK_SIZE         0x8A30
// #define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
// #define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS 0x8A32
// #define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
// #define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
// #define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
// #define GL_ACTIVE_UNIFORM_BLOCKS          0x8A36
// #define GL_UNIFORM_TYPE                   0x8A37
// #define GL_UNIFORM_SIZE                   0x8A38
// #define GL_UNIFORM_NAME_LENGTH            0x8A39
// #define GL_UNIFORM_BLOCK_INDEX            0x8A3A
// #define GL_UNIFORM_OFFSET                 0x8A3B
// #define GL_UNIFORM_ARRAY_STRIDE           0x8A3C
// #define GL_UNIFORM_MATRIX_STRIDE          0x8A3D
// #define GL_UNIFORM_IS_ROW_MAJOR           0x8A3E
// #define GL_UNIFORM_BLOCK_BINDING          0x8A3F
// #define GL_UNIFORM_BLOCK_DATA_SIZE        0x8A40
// #define GL_UNIFORM_BLOCK_NAME_LENGTH      0x8A41
// #define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS  0x8A42
// #define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
// #define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
// #define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER 0x8A45
// #define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
// #define GL_INVALID_INDEX                  0xFFFFFFFFu

/* GLAPI void  */    EX(glDrawArraysInstanced);    // (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
/* GLAPI void  */    EX(glDrawElementsInstanced);    // (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
/* GLAPI void  */    EX(glTexBuffer);    // (GLenum target, GLenum internalformat, GLuint buffer);
/* GLAPI void  */    EX(glPrimitiveRestartIndex);    // (GLuint index);
/* GLAPI void  */    EX(glCopyBufferSubData);    // (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
/* GLAPI void  */    EX(glGetUniformIndices);    // (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
/* GLAPI void  */    EX(glGetActiveUniformsiv);    // (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetActiveUniformName);    // (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
/* GLAPI GLuint  */    EX(glGetUniformBlockIndex);    // (GLuint program, const GLchar *uniformBlockName);
/* GLAPI void  */    EX(glGetActiveUniformBlockiv);    // (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetActiveUniformBlockName);    // (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
/* GLAPI void  */    EX(glUniformBlockBinding);    // (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);



// GL_VERSION_3_2
// typedef struct __GLsync *GLsync;
// typedef khronos_uint64_t GLuint64;
// typedef khronos_int64_t GLint64;
// #define GL_CONTEXT_CORE_PROFILE_BIT       0x00000001
// #define GL_CONTEXT_COMPATIBILITY_PROFILE_BIT 0x00000002
// #define GL_LINES_ADJACENCY                0x000A
// #define GL_LINE_STRIP_ADJACENCY           0x000B
// #define GL_TRIANGLES_ADJACENCY            0x000C
// #define GL_TRIANGLE_STRIP_ADJACENCY       0x000D
// #define GL_PROGRAM_POINT_SIZE             0x8642
// #define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS 0x8C29
// #define GL_FRAMEBUFFER_ATTACHMENT_LAYERED 0x8DA7
// #define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS 0x8DA8
// #define GL_GEOMETRY_SHADER                0x8DD9
// #define GL_GEOMETRY_VERTICES_OUT          0x8916
// #define GL_GEOMETRY_INPUT_TYPE            0x8917
// #define GL_GEOMETRY_OUTPUT_TYPE           0x8918
// #define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS 0x8DDF
// #define GL_MAX_GEOMETRY_OUTPUT_VERTICES   0x8DE0
// #define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS 0x8DE1
// #define GL_MAX_VERTEX_OUTPUT_COMPONENTS   0x9122
// #define GL_MAX_GEOMETRY_INPUT_COMPONENTS  0x9123
// #define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS 0x9124
// #define GL_MAX_FRAGMENT_INPUT_COMPONENTS  0x9125
// #define GL_CONTEXT_PROFILE_MASK           0x9126
// #define GL_DEPTH_CLAMP                    0x864F
// #define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION 0x8E4C
// #define GL_FIRST_VERTEX_CONVENTION        0x8E4D
// #define GL_LAST_VERTEX_CONVENTION         0x8E4E
// #define GL_PROVOKING_VERTEX               0x8E4F
// #define GL_TEXTURE_CUBE_MAP_SEAMLESS      0x884F
// #define GL_MAX_SERVER_WAIT_TIMEOUT        0x9111
// #define GL_OBJECT_TYPE                    0x9112
// #define GL_SYNC_CONDITION                 0x9113
// #define GL_SYNC_STATUS                    0x9114
// #define GL_SYNC_FLAGS                     0x9115
// #define GL_SYNC_FENCE                     0x9116
// #define GL_SYNC_GPU_COMMANDS_COMPLETE     0x9117
// #define GL_UNSIGNALED                     0x9118
// #define GL_SIGNALED                       0x9119
// #define GL_ALREADY_SIGNALED               0x911A
// #define GL_TIMEOUT_EXPIRED                0x911B
// #define GL_CONDITION_SATISFIED            0x911C
// #define GL_WAIT_FAILED                    0x911D
// #define GL_TIMEOUT_IGNORED                0xFFFFFFFFFFFFFFFFull
// #define GL_SYNC_FLUSH_COMMANDS_BIT        0x00000001
// #define GL_SAMPLE_POSITION                0x8E50
// #define GL_SAMPLE_MASK                    0x8E51
// #define GL_SAMPLE_MASK_VALUE              0x8E52
// #define GL_MAX_SAMPLE_MASK_WORDS          0x8E59
// #define GL_TEXTURE_2D_MULTISAMPLE         0x9100
// #define GL_PROXY_TEXTURE_2D_MULTISAMPLE   0x9101
// #define GL_TEXTURE_2D_MULTISAMPLE_ARRAY   0x9102
// #define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9103
// #define GL_TEXTURE_BINDING_2D_MULTISAMPLE 0x9104
// #define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY 0x9105
// #define GL_TEXTURE_SAMPLES                0x9106
// #define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS 0x9107
// #define GL_SAMPLER_2D_MULTISAMPLE         0x9108
// #define GL_INT_SAMPLER_2D_MULTISAMPLE     0x9109
// #define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
// #define GL_SAMPLER_2D_MULTISAMPLE_ARRAY   0x910B
// #define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
// #define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D
// #define GL_MAX_COLOR_TEXTURE_SAMPLES      0x910E
// #define GL_MAX_DEPTH_TEXTURE_SAMPLES      0x910F
// #define GL_MAX_INTEGER_SAMPLES            0x9110

/* GLAPI void  */    EX(glDrawElementsBaseVertex);    // (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
/* GLAPI void  */    EX(glDrawRangeElementsBaseVertex);    // (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
/* GLAPI void  */    EX(glDrawElementsInstancedBaseVertex);    // (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
/* GLAPI void  */    EX(glMultiDrawElementsBaseVertex);    // (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex);
/* GLAPI void  */    EX(glProvokingVertex);    // (GLenum mode);
/* GLAPI GLsync  */    EX(glFenceSync);    // (GLenum condition, GLbitfield flags);
/* GLAPI GLboolean  */    EX(glIsSync);    // (GLsync sync);
/* GLAPI void  */    EX(glDeleteSync);    // (GLsync sync);
/* GLAPI GLenum  */    EX(glClientWaitSync);    // (GLsync sync, GLbitfield flags, GLuint64 timeout);
/* GLAPI void  */    EX(glWaitSync);    // (GLsync sync, GLbitfield flags, GLuint64 timeout);
/* GLAPI void  */    EX(glGetInteger64v);    // (GLenum pname, GLint64 *data);
/* GLAPI void  */    EX(glGetSynciv);    // (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
/* GLAPI void  */    EX(glGetInteger64i_v);    // (GLenum target, GLuint index, GLint64 *data);
/* GLAPI void  */    EX(glGetBufferParameteri64v);    // (GLenum target, GLenum pname, GLint64 *params);
/* GLAPI void  */    EX(glFramebufferTexture);    // (GLenum target, GLenum attachment, GLuint texture, GLint level);
/* GLAPI void  */    EX(glTexImage2DMultisample);    // (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
/* GLAPI void  */    EX(glTexImage3DMultisample);    // (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
/* GLAPI void  */    EX(glGetMultisamplefv);    // (GLenum pname, GLuint index, GLfloat *val);
/* GLAPI void  */    EX(glSampleMaski);    // (GLuint maskNumber, GLbitfield mask);



// GL_VERSION_3_3
// #define GL_VERTEX_ATTRIB_ARRAY_DIVISOR    0x88FE
// #define GL_SRC1_COLOR                     0x88F9
// #define GL_ONE_MINUS_SRC1_COLOR           0x88FA
// #define GL_ONE_MINUS_SRC1_ALPHA           0x88FB
// #define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS   0x88FC
// #define GL_ANY_SAMPLES_PASSED             0x8C2F
// #define GL_SAMPLER_BINDING                0x8919
// #define GL_RGB10_A2UI                     0x906F
// #define GL_TEXTURE_SWIZZLE_R              0x8E42
// #define GL_TEXTURE_SWIZZLE_G              0x8E43
// #define GL_TEXTURE_SWIZZLE_B              0x8E44
// #define GL_TEXTURE_SWIZZLE_A              0x8E45
// #define GL_TEXTURE_SWIZZLE_RGBA           0x8E46
// #define GL_TIME_ELAPSED                   0x88BF
// #define GL_TIMESTAMP                      0x8E28
// #define GL_INT_2_10_10_10_REV             0x8D9F

/* GLAPI void  */    EX(glBindFragDataLocationIndexed);    // (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
/* GLAPI GLint  */    EX(glGetFragDataIndex);    // (GLuint program, const GLchar *name);
/* GLAPI void  */    EX(glGenSamplers);    // (GLsizei count, GLuint *samplers);
/* GLAPI void  */    EX(glDeleteSamplers);    // (GLsizei count, const GLuint *samplers);
/* GLAPI GLboolean  */    EX(glIsSampler);    // (GLuint sampler);
/* GLAPI void  */    EX(glBindSampler);    // (GLuint unit, GLuint sampler);
/* GLAPI void  */    EX(glSamplerParameteri);    // (GLuint sampler, GLenum pname, GLint param);
/* GLAPI void  */    EX(glSamplerParameteriv);    // (GLuint sampler, GLenum pname, const GLint *param);
/* GLAPI void  */    EX(glSamplerParameterf);    // (GLuint sampler, GLenum pname, GLfloat param);
/* GLAPI void  */    EX(glSamplerParameterfv);    // (GLuint sampler, GLenum pname, const GLfloat *param);
/* GLAPI void  */    EX(glSamplerParameterIiv);    // (GLuint sampler, GLenum pname, const GLint *param);
/* GLAPI void  */    EX(glSamplerParameterIuiv);    // (GLuint sampler, GLenum pname, const GLuint *param);
/* GLAPI void  */    EX(glGetSamplerParameteriv);    // (GLuint sampler, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetSamplerParameterIiv);    // (GLuint sampler, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetSamplerParameterfv);    // (GLuint sampler, GLenum pname, GLfloat *params);
/* GLAPI void  */    EX(glGetSamplerParameterIuiv);    // (GLuint sampler, GLenum pname, GLuint *params);
/* GLAPI void  */    EX(glQueryCounter);    // (GLuint id, GLenum target);
/* GLAPI void  */    EX(glGetQueryObjecti64v);    // (GLuint id, GLenum pname, GLint64 *params);
/* GLAPI void  */    EX(glGetQueryObjectui64v);    // (GLuint id, GLenum pname, GLuint64 *params);
/* GLAPI void  */    EX(glVertexAttribDivisor);    // (GLuint index, GLuint divisor);
/* GLAPI void  */    EX(glVertexAttribP1ui);    // (GLuint index, GLenum type, GLboolean normalized, GLuint value);
/* GLAPI void  */    EX(glVertexAttribP1uiv);    // (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
/* GLAPI void  */    EX(glVertexAttribP2ui);    // (GLuint index, GLenum type, GLboolean normalized, GLuint value);
/* GLAPI void  */    EX(glVertexAttribP2uiv);    // (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
/* GLAPI void  */    EX(glVertexAttribP3ui);    // (GLuint index, GLenum type, GLboolean normalized, GLuint value);
/* GLAPI void  */    EX(glVertexAttribP3uiv);    // (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
/* GLAPI void  */    EX(glVertexAttribP4ui);    // (GLuint index, GLenum type, GLboolean normalized, GLuint value);
/* GLAPI void  */    EX(glVertexAttribP4uiv);    // (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);



// GL_VERSION_4_0
// #define GL_SAMPLE_SHADING                 0x8C36
// #define GL_MIN_SAMPLE_SHADING_VALUE       0x8C37
// #define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5E
// #define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5F
// #define GL_TEXTURE_CUBE_MAP_ARRAY         0x9009
// #define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY 0x900A
// #define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY   0x900B
// #define GL_SAMPLER_CUBE_MAP_ARRAY         0x900C
// #define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW  0x900D
// #define GL_INT_SAMPLER_CUBE_MAP_ARRAY     0x900E
// #define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY 0x900F
// #define GL_DRAW_INDIRECT_BUFFER           0x8F3F
// #define GL_DRAW_INDIRECT_BUFFER_BINDING   0x8F43
// #define GL_GEOMETRY_SHADER_INVOCATIONS    0x887F
// #define GL_MAX_GEOMETRY_SHADER_INVOCATIONS 0x8E5A
// #define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET 0x8E5B
// #define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET 0x8E5C
// #define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS 0x8E5D
// #define GL_MAX_VERTEX_STREAMS             0x8E71
// #define GL_DOUBLE_VEC2                    0x8FFC
// #define GL_DOUBLE_VEC3                    0x8FFD
// #define GL_DOUBLE_VEC4                    0x8FFE
// #define GL_DOUBLE_MAT2                    0x8F46
// #define GL_DOUBLE_MAT3                    0x8F47
// #define GL_DOUBLE_MAT4                    0x8F48
// #define GL_DOUBLE_MAT2x3                  0x8F49
// #define GL_DOUBLE_MAT2x4                  0x8F4A
// #define GL_DOUBLE_MAT3x2                  0x8F4B
// #define GL_DOUBLE_MAT3x4                  0x8F4C
// #define GL_DOUBLE_MAT4x2                  0x8F4D
// #define GL_DOUBLE_MAT4x3                  0x8F4E
// #define GL_ACTIVE_SUBROUTINES             0x8DE5
// #define GL_ACTIVE_SUBROUTINE_UNIFORMS     0x8DE6
// #define GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS 0x8E47
// #define GL_ACTIVE_SUBROUTINE_MAX_LENGTH   0x8E48
// #define GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH 0x8E49
// #define GL_MAX_SUBROUTINES                0x8DE7
// #define GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS 0x8DE8
// #define GL_NUM_COMPATIBLE_SUBROUTINES     0x8E4A
// #define GL_COMPATIBLE_SUBROUTINES         0x8E4B
// #define GL_PATCHES                        0x000E
// #define GL_PATCH_VERTICES                 0x8E72
// #define GL_PATCH_DEFAULT_INNER_LEVEL      0x8E73
// #define GL_PATCH_DEFAULT_OUTER_LEVEL      0x8E74
// #define GL_TESS_CONTROL_OUTPUT_VERTICES   0x8E75
// #define GL_TESS_GEN_MODE                  0x8E76
// #define GL_TESS_GEN_SPACING               0x8E77
// #define GL_TESS_GEN_VERTEX_ORDER          0x8E78
// #define GL_TESS_GEN_POINT_MODE            0x8E79
// #define GL_ISOLINES                       0x8E7A
// #define GL_FRACTIONAL_ODD                 0x8E7B
// #define GL_FRACTIONAL_EVEN                0x8E7C
// #define GL_MAX_PATCH_VERTICES             0x8E7D
// #define GL_MAX_TESS_GEN_LEVEL             0x8E7E
// #define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E7F
// #define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E80
// #define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS 0x8E81
// #define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS 0x8E82
// #define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS 0x8E83
// #define GL_MAX_TESS_PATCH_COMPONENTS      0x8E84
// #define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS 0x8E85
// #define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS 0x8E86
// #define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS 0x8E89
// #define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS 0x8E8A
// #define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS 0x886C
// #define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS 0x886D
// #define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E1E
// #define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E1F
// #define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER 0x84F0
// #define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER 0x84F1
// #define GL_TESS_EVALUATION_SHADER         0x8E87
// #define GL_TESS_CONTROL_SHADER            0x8E88
// #define GL_TRANSFORM_FEEDBACK             0x8E22
// #define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED 0x8E23
// #define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE 0x8E24
// #define GL_TRANSFORM_FEEDBACK_BINDING     0x8E25
// #define GL_MAX_TRANSFORM_FEEDBACK_BUFFERS 0x8E70

/* GLAPI void  */    EX(glMinSampleShading);    // (GLfloat value);
/* GLAPI void  */    EX(glBlendEquationi);    // (GLuint buf, GLenum mode);
/* GLAPI void  */    EX(glBlendEquationSeparatei);    // (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
/* GLAPI void  */    EX(glBlendFunci);    // (GLuint buf, GLenum src, GLenum dst);
/* GLAPI void  */    EX(glBlendFuncSeparatei);    // (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
/* GLAPI void  */    EX(glDrawArraysIndirect);    // (GLenum mode, const void *indirect);
/* GLAPI void  */    EX(glDrawElementsIndirect);    // (GLenum mode, GLenum type, const void *indirect);
/* GLAPI void  */    EX(glUniform1d);    // (GLint location, GLdouble x);
/* GLAPI void  */    EX(glUniform2d);    // (GLint location, GLdouble x, GLdouble y);
/* GLAPI void  */    EX(glUniform3d);    // (GLint location, GLdouble x, GLdouble y, GLdouble z);
/* GLAPI void  */    EX(glUniform4d);    // (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
/* GLAPI void  */    EX(glUniform1dv);    // (GLint location, GLsizei count, const GLdouble *value);
/* GLAPI void  */    EX(glUniform2dv);    // (GLint location, GLsizei count, const GLdouble *value);
/* GLAPI void  */    EX(glUniform3dv);    // (GLint location, GLsizei count, const GLdouble *value);
/* GLAPI void  */    EX(glUniform4dv);    // (GLint location, GLsizei count, const GLdouble *value);
/* GLAPI void  */    EX(glUniformMatrix2dv);    // (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glUniformMatrix3dv);    // (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glUniformMatrix4dv);    // (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glUniformMatrix2x3dv);    // (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glUniformMatrix2x4dv);    // (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glUniformMatrix3x2dv);    // (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glUniformMatrix3x4dv);    // (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glUniformMatrix4x2dv);    // (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glUniformMatrix4x3dv);    // (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glGetUniformdv);    // (GLuint program, GLint location, GLdouble *params);
/* GLAPI GLint  */    EX(glGetSubroutineUniformLocation);    // (GLuint program, GLenum shadertype, const GLchar *name);
/* GLAPI GLuint  */    EX(glGetSubroutineIndex);    // (GLuint program, GLenum shadertype, const GLchar *name);
/* GLAPI void  */    EX(glGetActiveSubroutineUniformiv);    // (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
/* GLAPI void  */    EX(glGetActiveSubroutineUniformName);    // (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
/* GLAPI void  */    EX(glGetActiveSubroutineName);    // (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
/* GLAPI void  */    EX(glUniformSubroutinesuiv);    // (GLenum shadertype, GLsizei count, const GLuint *indices);
/* GLAPI void  */    EX(glGetUniformSubroutineuiv);    // (GLenum shadertype, GLint location, GLuint *params);
/* GLAPI void  */    EX(glGetProgramStageiv);    // (GLuint program, GLenum shadertype, GLenum pname, GLint *values);
/* GLAPI void  */    EX(glPatchParameteri);    // (GLenum pname, GLint value);
/* GLAPI void  */    EX(glPatchParameterfv);    // (GLenum pname, const GLfloat *values);
/* GLAPI void  */    EX(glBindTransformFeedback);    // (GLenum target, GLuint id);
/* GLAPI void  */    EX(glDeleteTransformFeedbacks);    // (GLsizei n, const GLuint *ids);
/* GLAPI void  */    EX(glGenTransformFeedbacks);    // (GLsizei n, GLuint *ids);
/* GLAPI GLboolean  */    EX(glIsTransformFeedback);    // (GLuint id);
/* GLAPI void  */    EX(glPauseTransformFeedback);    // (void);
/* GLAPI void  */    EX(glResumeTransformFeedback);    // (void);
/* GLAPI void  */    EX(glDrawTransformFeedback);    // (GLenum mode, GLuint id);
/* GLAPI void  */    EX(glDrawTransformFeedbackStream);    // (GLenum mode, GLuint id, GLuint stream);
/* GLAPI void  */    EX(glBeginQueryIndexed);    // (GLenum target, GLuint index, GLuint id);
/* GLAPI void  */    EX(glEndQueryIndexed);    // (GLenum target, GLuint index);
/* GLAPI void  */    EX(glGetQueryIndexediv);    // (GLenum target, GLuint index, GLenum pname, GLint *params);



// GL_VERSION_4_1
// #define GL_FIXED                          0x140C
// #define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
// #define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
// #define GL_LOW_FLOAT                      0x8DF0
// #define GL_MEDIUM_FLOAT                   0x8DF1
// #define GL_HIGH_FLOAT                     0x8DF2
// #define GL_LOW_INT                        0x8DF3
// #define GL_MEDIUM_INT                     0x8DF4
// #define GL_HIGH_INT                       0x8DF5
// #define GL_SHADER_COMPILER                0x8DFA
// #define GL_SHADER_BINARY_FORMATS          0x8DF8
// #define GL_NUM_SHADER_BINARY_FORMATS      0x8DF9
// #define GL_MAX_VERTEX_UNIFORM_VECTORS     0x8DFB
// #define GL_MAX_VARYING_VECTORS            0x8DFC
// #define GL_MAX_FRAGMENT_UNIFORM_VECTORS   0x8DFD
// #define GL_RGB565                         0x8D62
// #define GL_PROGRAM_BINARY_RETRIEVABLE_HINT 0x8257
// #define GL_PROGRAM_BINARY_LENGTH          0x8741
// #define GL_NUM_PROGRAM_BINARY_FORMATS     0x87FE
// #define GL_PROGRAM_BINARY_FORMATS         0x87FF
// #define GL_VERTEX_SHADER_BIT              0x00000001
// #define GL_FRAGMENT_SHADER_BIT            0x00000002
// #define GL_GEOMETRY_SHADER_BIT            0x00000004
// #define GL_TESS_CONTROL_SHADER_BIT        0x00000008
// #define GL_TESS_EVALUATION_SHADER_BIT     0x00000010
// #define GL_ALL_SHADER_BITS                0xFFFFFFFF
// #define GL_PROGRAM_SEPARABLE              0x8258
// #define GL_ACTIVE_PROGRAM                 0x8259
// #define GL_PROGRAM_PIPELINE_BINDING       0x825A
// #define GL_MAX_VIEWPORTS                  0x825B
// #define GL_VIEWPORT_SUBPIXEL_BITS         0x825C
// #define GL_VIEWPORT_BOUNDS_RANGE          0x825D
// #define GL_LAYER_PROVOKING_VERTEX         0x825E
// #define GL_VIEWPORT_INDEX_PROVOKING_VERTEX 0x825F
// #define GL_UNDEFINED_VERTEX               0x8260

/* GLAPI void  */    EX(glReleaseShaderCompiler);    // (void);
/* GLAPI void  */    EX(glShaderBinary);    // (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length);
/* GLAPI void  */    EX(glGetShaderPrecisionFormat);    // (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
/* GLAPI void  */    EX(glDepthRangef);    // (GLfloat n, GLfloat f);
/* GLAPI void  */    EX(glClearDepthf);    // (GLfloat d);
/* GLAPI void  */    EX(glGetProgramBinary);    // (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
/* GLAPI void  */    EX(glProgramBinary);    // (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
/* GLAPI void  */    EX(glProgramParameteri);    // (GLuint program, GLenum pname, GLint value);
/* GLAPI void  */    EX(glUseProgramStages);    // (GLuint pipeline, GLbitfield stages, GLuint program);
/* GLAPI void  */    EX(glActiveShaderProgram);    // (GLuint pipeline, GLuint program);
/* GLAPI GLuint  */    EX(glCreateShaderProgramv);    // (GLenum type, GLsizei count, const GLchar *const*strings);
/* GLAPI void  */    EX(glBindProgramPipeline);    // (GLuint pipeline);
/* GLAPI void  */    EX(glDeleteProgramPipelines);    // (GLsizei n, const GLuint *pipelines);
/* GLAPI void  */    EX(glGenProgramPipelines);    // (GLsizei n, GLuint *pipelines);
/* GLAPI GLboolean  */    EX(glIsProgramPipeline);    // (GLuint pipeline);
/* GLAPI void  */    EX(glGetProgramPipelineiv);    // (GLuint pipeline, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glProgramUniform1i);    // (GLuint program, GLint location, GLint v0);
/* GLAPI void  */    EX(glProgramUniform1iv);    // (GLuint program, GLint location, GLsizei count, const GLint *value);
/* GLAPI void  */    EX(glProgramUniform1f);    // (GLuint program, GLint location, GLfloat v0);
/* GLAPI void  */    EX(glProgramUniform1fv);    // (GLuint program, GLint location, GLsizei count, const GLfloat *value);
/* GLAPI void  */    EX(glProgramUniform1d);    // (GLuint program, GLint location, GLdouble v0);
/* GLAPI void  */    EX(glProgramUniform1dv);    // (GLuint program, GLint location, GLsizei count, const GLdouble *value);
/* GLAPI void  */    EX(glProgramUniform1ui);    // (GLuint program, GLint location, GLuint v0);
/* GLAPI void  */    EX(glProgramUniform1uiv);    // (GLuint program, GLint location, GLsizei count, const GLuint *value);
/* GLAPI void  */    EX(glProgramUniform2i);    // (GLuint program, GLint location, GLint v0, GLint v1);
/* GLAPI void  */    EX(glProgramUniform2iv);    // (GLuint program, GLint location, GLsizei count, const GLint *value);
/* GLAPI void  */    EX(glProgramUniform2f);    // (GLuint program, GLint location, GLfloat v0, GLfloat v1);
/* GLAPI void  */    EX(glProgramUniform2fv);    // (GLuint program, GLint location, GLsizei count, const GLfloat *value);
/* GLAPI void  */    EX(glProgramUniform2d);    // (GLuint program, GLint location, GLdouble v0, GLdouble v1);
/* GLAPI void  */    EX(glProgramUniform2dv);    // (GLuint program, GLint location, GLsizei count, const GLdouble *value);
/* GLAPI void  */    EX(glProgramUniform2ui);    // (GLuint program, GLint location, GLuint v0, GLuint v1);
/* GLAPI void  */    EX(glProgramUniform2uiv);    // (GLuint program, GLint location, GLsizei count, const GLuint *value);
/* GLAPI void  */    EX(glProgramUniform3i);    // (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
/* GLAPI void  */    EX(glProgramUniform3iv);    // (GLuint program, GLint location, GLsizei count, const GLint *value);
/* GLAPI void  */    EX(glProgramUniform3f);    // (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
/* GLAPI void  */    EX(glProgramUniform3fv);    // (GLuint program, GLint location, GLsizei count, const GLfloat *value);
/* GLAPI void  */    EX(glProgramUniform3d);    // (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
/* GLAPI void  */    EX(glProgramUniform3dv);    // (GLuint program, GLint location, GLsizei count, const GLdouble *value);
/* GLAPI void  */    EX(glProgramUniform3ui);    // (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
/* GLAPI void  */    EX(glProgramUniform3uiv);    // (GLuint program, GLint location, GLsizei count, const GLuint *value);
/* GLAPI void  */    EX(glProgramUniform4i);    // (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
/* GLAPI void  */    EX(glProgramUniform4iv);    // (GLuint program, GLint location, GLsizei count, const GLint *value);
/* GLAPI void  */    EX(glProgramUniform4f);    // (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
/* GLAPI void  */    EX(glProgramUniform4fv);    // (GLuint program, GLint location, GLsizei count, const GLfloat *value);
/* GLAPI void  */    EX(glProgramUniform4d);    // (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
/* GLAPI void  */    EX(glProgramUniform4dv);    // (GLuint program, GLint location, GLsizei count, const GLdouble *value);
/* GLAPI void  */    EX(glProgramUniform4ui);    // (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
/* GLAPI void  */    EX(glProgramUniform4uiv);    // (GLuint program, GLint location, GLsizei count, const GLuint *value);
/* GLAPI void  */    EX(glProgramUniformMatrix2fv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glProgramUniformMatrix3fv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glProgramUniformMatrix4fv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glProgramUniformMatrix2dv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glProgramUniformMatrix3dv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glProgramUniformMatrix4dv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glProgramUniformMatrix2x3fv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glProgramUniformMatrix3x2fv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glProgramUniformMatrix2x4fv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glProgramUniformMatrix4x2fv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glProgramUniformMatrix3x4fv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glProgramUniformMatrix4x3fv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
/* GLAPI void  */    EX(glProgramUniformMatrix2x3dv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glProgramUniformMatrix3x2dv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glProgramUniformMatrix2x4dv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glProgramUniformMatrix4x2dv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glProgramUniformMatrix3x4dv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glProgramUniformMatrix4x3dv);    // (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
/* GLAPI void  */    EX(glValidateProgramPipeline);    // (GLuint pipeline);
/* GLAPI void  */    EX(glGetProgramPipelineInfoLog);    // (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
/* GLAPI void  */    EX(glVertexAttribL1d);    // (GLuint index, GLdouble x);
/* GLAPI void  */    EX(glVertexAttribL2d);    // (GLuint index, GLdouble x, GLdouble y);
/* GLAPI void  */    EX(glVertexAttribL3d);    // (GLuint index, GLdouble x, GLdouble y, GLdouble z);
/* GLAPI void  */    EX(glVertexAttribL4d);    // (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
/* GLAPI void  */    EX(glVertexAttribL1dv);    // (GLuint index, const GLdouble *v);
/* GLAPI void  */    EX(glVertexAttribL2dv);    // (GLuint index, const GLdouble *v);
/* GLAPI void  */    EX(glVertexAttribL3dv);    // (GLuint index, const GLdouble *v);
/* GLAPI void  */    EX(glVertexAttribL4dv);    // (GLuint index, const GLdouble *v);
/* GLAPI void  */    EX(glVertexAttribLPointer);    // (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
/* GLAPI void  */    EX(glGetVertexAttribLdv);    // (GLuint index, GLenum pname, GLdouble *params);
/* GLAPI void  */    EX(glViewportArrayv);    // (GLuint first, GLsizei count, const GLfloat *v);
/* GLAPI void  */    EX(glViewportIndexedf);    // (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
/* GLAPI void  */    EX(glViewportIndexedfv);    // (GLuint index, const GLfloat *v);
/* GLAPI void  */    EX(glScissorArrayv);    // (GLuint first, GLsizei count, const GLint *v);
/* GLAPI void  */    EX(glScissorIndexed);    // (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
/* GLAPI void  */    EX(glScissorIndexedv);    // (GLuint index, const GLint *v);
/* GLAPI void  */    EX(glDepthRangeArrayv);    // (GLuint first, GLsizei count, const GLdouble *v);
/* GLAPI void  */    EX(glDepthRangeIndexed);    // (GLuint index, GLdouble n, GLdouble f);
/* GLAPI void  */    EX(glGetFloati_v);    // (GLenum target, GLuint index, GLfloat *data);
/* GLAPI void  */    EX(glGetDoublei_v);    // (GLenum target, GLuint index, GLdouble *data);



// GL_VERSION_4_2
// #define GL_COPY_READ_BUFFER_BINDING       0x8F36
// #define GL_COPY_WRITE_BUFFER_BINDING      0x8F37
// #define GL_TRANSFORM_FEEDBACK_ACTIVE      0x8E24
// #define GL_TRANSFORM_FEEDBACK_PAUSED      0x8E23
// #define GL_UNPACK_COMPRESSED_BLOCK_WIDTH  0x9127
// #define GL_UNPACK_COMPRESSED_BLOCK_HEIGHT 0x9128
// #define GL_UNPACK_COMPRESSED_BLOCK_DEPTH  0x9129
// #define GL_UNPACK_COMPRESSED_BLOCK_SIZE   0x912A
// #define GL_PACK_COMPRESSED_BLOCK_WIDTH    0x912B
// #define GL_PACK_COMPRESSED_BLOCK_HEIGHT   0x912C
// #define GL_PACK_COMPRESSED_BLOCK_DEPTH    0x912D
// #define GL_PACK_COMPRESSED_BLOCK_SIZE     0x912E
// #define GL_NUM_SAMPLE_COUNTS              0x9380
// #define GL_MIN_MAP_BUFFER_ALIGNMENT       0x90BC
// #define GL_ATOMIC_COUNTER_BUFFER          0x92C0
// #define GL_ATOMIC_COUNTER_BUFFER_BINDING  0x92C1
// #define GL_ATOMIC_COUNTER_BUFFER_START    0x92C2
// #define GL_ATOMIC_COUNTER_BUFFER_SIZE     0x92C3
// #define GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE 0x92C4
// #define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS 0x92C5
// #define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES 0x92C6
// #define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER 0x92C7
// #define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER 0x92C8
// #define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER 0x92C9
// #define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER 0x92CA
// #define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER 0x92CB
// #define GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS 0x92CC
// #define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS 0x92CD
// #define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS 0x92CE
// #define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS 0x92CF
// #define GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS 0x92D0
// #define GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS 0x92D1
// #define GL_MAX_VERTEX_ATOMIC_COUNTERS     0x92D2
// #define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS 0x92D3
// #define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS 0x92D4
// #define GL_MAX_GEOMETRY_ATOMIC_COUNTERS   0x92D5
// #define GL_MAX_FRAGMENT_ATOMIC_COUNTERS   0x92D6
// #define GL_MAX_COMBINED_ATOMIC_COUNTERS   0x92D7
// #define GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE 0x92D8
// #define GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS 0x92DC
// #define GL_ACTIVE_ATOMIC_COUNTER_BUFFERS  0x92D9
// #define GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX 0x92DA
// #define GL_UNSIGNED_INT_ATOMIC_COUNTER    0x92DB
// #define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT 0x00000001
// #define GL_ELEMENT_ARRAY_BARRIER_BIT      0x00000002
// #define GL_UNIFORM_BARRIER_BIT            0x00000004
// #define GL_TEXTURE_FETCH_BARRIER_BIT      0x00000008
// #define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT 0x00000020
// #define GL_COMMAND_BARRIER_BIT            0x00000040
// #define GL_PIXEL_BUFFER_BARRIER_BIT       0x00000080
// #define GL_TEXTURE_UPDATE_BARRIER_BIT     0x00000100
// #define GL_BUFFER_UPDATE_BARRIER_BIT      0x00000200
// #define GL_FRAMEBUFFER_BARRIER_BIT        0x00000400
// #define GL_TRANSFORM_FEEDBACK_BARRIER_BIT 0x00000800
// #define GL_ATOMIC_COUNTER_BARRIER_BIT     0x00001000
// #define GL_ALL_BARRIER_BITS               0xFFFFFFFF
// #define GL_MAX_IMAGE_UNITS                0x8F38
// #define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS 0x8F39
// #define GL_IMAGE_BINDING_NAME             0x8F3A
// #define GL_IMAGE_BINDING_LEVEL            0x8F3B
// #define GL_IMAGE_BINDING_LAYERED          0x8F3C
// #define GL_IMAGE_BINDING_LAYER            0x8F3D
// #define GL_IMAGE_BINDING_ACCESS           0x8F3E
// #define GL_IMAGE_1D                       0x904C
// #define GL_IMAGE_2D                       0x904D
// #define GL_IMAGE_3D                       0x904E
// #define GL_IMAGE_2D_RECT                  0x904F
// #define GL_IMAGE_CUBE                     0x9050
// #define GL_IMAGE_BUFFER                   0x9051
// #define GL_IMAGE_1D_ARRAY                 0x9052
// #define GL_IMAGE_2D_ARRAY                 0x9053
// #define GL_IMAGE_CUBE_MAP_ARRAY           0x9054
// #define GL_IMAGE_2D_MULTISAMPLE           0x9055
// #define GL_IMAGE_2D_MULTISAMPLE_ARRAY     0x9056
// #define GL_INT_IMAGE_1D                   0x9057
// #define GL_INT_IMAGE_2D                   0x9058
// #define GL_INT_IMAGE_3D                   0x9059
// #define GL_INT_IMAGE_2D_RECT              0x905A
// #define GL_INT_IMAGE_CUBE                 0x905B
// #define GL_INT_IMAGE_BUFFER               0x905C
// #define GL_INT_IMAGE_1D_ARRAY             0x905D
// #define GL_INT_IMAGE_2D_ARRAY             0x905E
// #define GL_INT_IMAGE_CUBE_MAP_ARRAY       0x905F
// #define GL_INT_IMAGE_2D_MULTISAMPLE       0x9060
// #define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x9061
// #define GL_UNSIGNED_INT_IMAGE_1D          0x9062
// #define GL_UNSIGNED_INT_IMAGE_2D          0x9063
// #define GL_UNSIGNED_INT_IMAGE_3D          0x9064
// #define GL_UNSIGNED_INT_IMAGE_2D_RECT     0x9065
// #define GL_UNSIGNED_INT_IMAGE_CUBE        0x9066
// #define GL_UNSIGNED_INT_IMAGE_BUFFER      0x9067
// #define GL_UNSIGNED_INT_IMAGE_1D_ARRAY    0x9068
// #define GL_UNSIGNED_INT_IMAGE_2D_ARRAY    0x9069
// #define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY 0x906A
// #define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE 0x906B
// #define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x906C
// #define GL_MAX_IMAGE_SAMPLES              0x906D
// #define GL_IMAGE_BINDING_FORMAT           0x906E
// #define GL_IMAGE_FORMAT_COMPATIBILITY_TYPE 0x90C7
// #define GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE 0x90C8
// #define GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS 0x90C9
// #define GL_MAX_VERTEX_IMAGE_UNIFORMS      0x90CA
// #define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS 0x90CB
// #define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS 0x90CC
// #define GL_MAX_GEOMETRY_IMAGE_UNIFORMS    0x90CD
// #define GL_MAX_FRAGMENT_IMAGE_UNIFORMS    0x90CE
// #define GL_MAX_COMBINED_IMAGE_UNIFORMS    0x90CF
// #define GL_COMPRESSED_RGBA_BPTC_UNORM     0x8E8C
// #define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM 0x8E8D
// #define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT 0x8E8E
// #define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT 0x8E8F
// #define GL_TEXTURE_IMMUTABLE_FORMAT       0x912F

/* GLAPI void  */    EX(glDrawArraysInstancedBaseInstance);    // (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
/* GLAPI void  */    EX(glDrawElementsInstancedBaseInstance);    // (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
/* GLAPI void  */    EX(glDrawElementsInstancedBaseVertexBaseInstance);    // (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
/* GLAPI void  */    EX(glGetInternalformativ);    // (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params);
/* GLAPI void  */    EX(glGetActiveAtomicCounterBufferiv);    // (GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glBindImageTexture);    // (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
/* GLAPI void  */    EX(glMemoryBarrier);    // (GLbitfield barriers);
/* GLAPI void  */    EX(glTexStorage1D);    // (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
/* GLAPI void  */    EX(glTexStorage2D);    // (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
/* GLAPI void  */    EX(glTexStorage3D);    // (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
/* GLAPI void  */    EX(glDrawTransformFeedbackInstanced);    // (GLenum mode, GLuint id, GLsizei instancecount);
/* GLAPI void  */    EX(glDrawTransformFeedbackStreamInstanced);    // (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);



// GL_VERSION_4_3
// typedef void ( *GLDEBUGPROC)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
// #define GL_NUM_SHADING_LANGUAGE_VERSIONS  0x82E9
// #define GL_VERTEX_ATTRIB_ARRAY_LONG       0x874E
// #define GL_COMPRESSED_RGB8_ETC2           0x9274
// #define GL_COMPRESSED_SRGB8_ETC2          0x9275
// #define GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9276
// #define GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9277
// #define GL_COMPRESSED_RGBA8_ETC2_EAC      0x9278
// #define GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC 0x9279
// #define GL_COMPRESSED_R11_EAC             0x9270
// #define GL_COMPRESSED_SIGNED_R11_EAC      0x9271
// #define GL_COMPRESSED_RG11_EAC            0x9272
// #define GL_COMPRESSED_SIGNED_RG11_EAC     0x9273
// #define GL_PRIMITIVE_RESTART_FIXED_INDEX  0x8D69
// #define GL_ANY_SAMPLES_PASSED_CONSERVATIVE 0x8D6A
// #define GL_MAX_ELEMENT_INDEX              0x8D6B
// #define GL_COMPUTE_SHADER                 0x91B9
// #define GL_MAX_COMPUTE_UNIFORM_BLOCKS     0x91BB
// #define GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS 0x91BC
// #define GL_MAX_COMPUTE_IMAGE_UNIFORMS     0x91BD
// #define GL_MAX_COMPUTE_SHARED_MEMORY_SIZE 0x8262
// #define GL_MAX_COMPUTE_UNIFORM_COMPONENTS 0x8263
// #define GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS 0x8264
// #define GL_MAX_COMPUTE_ATOMIC_COUNTERS    0x8265
// #define GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS 0x8266
// #define GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS 0x90EB
// #define GL_MAX_COMPUTE_WORK_GROUP_COUNT   0x91BE
// #define GL_MAX_COMPUTE_WORK_GROUP_SIZE    0x91BF
// #define GL_COMPUTE_WORK_GROUP_SIZE        0x8267
// #define GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER 0x90EC
// #define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER 0x90ED
// #define GL_DISPATCH_INDIRECT_BUFFER       0x90EE
// #define GL_DISPATCH_INDIRECT_BUFFER_BINDING 0x90EF
// #define GL_COMPUTE_SHADER_BIT             0x00000020
// #define GL_DEBUG_OUTPUT_SYNCHRONOUS       0x8242
// #define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH 0x8243
// #define GL_DEBUG_CALLBACK_FUNCTION        0x8244
// #define GL_DEBUG_CALLBACK_USER_PARAM      0x8245
// #define GL_DEBUG_SOURCE_API               0x8246
// #define GL_DEBUG_SOURCE_WINDOW_SYSTEM     0x8247
// #define GL_DEBUG_SOURCE_SHADER_COMPILER   0x8248
// #define GL_DEBUG_SOURCE_THIRD_PARTY       0x8249
// #define GL_DEBUG_SOURCE_APPLICATION       0x824A
// #define GL_DEBUG_SOURCE_OTHER             0x824B
// #define GL_DEBUG_TYPE_ERROR               0x824C
// #define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR 0x824D
// #define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR  0x824E
// #define GL_DEBUG_TYPE_PORTABILITY         0x824F
// #define GL_DEBUG_TYPE_PERFORMANCE         0x8250
// #define GL_DEBUG_TYPE_OTHER               0x8251
// #define GL_MAX_DEBUG_MESSAGE_LENGTH       0x9143
// #define GL_MAX_DEBUG_LOGGED_MESSAGES      0x9144
// #define GL_DEBUG_LOGGED_MESSAGES          0x9145
// #define GL_DEBUG_SEVERITY_HIGH            0x9146
// #define GL_DEBUG_SEVERITY_MEDIUM          0x9147
// #define GL_DEBUG_SEVERITY_LOW             0x9148
// #define GL_DEBUG_TYPE_MARKER              0x8268
// #define GL_DEBUG_TYPE_PUSH_GROUP          0x8269
// #define GL_DEBUG_TYPE_POP_GROUP           0x826A
// #define GL_DEBUG_SEVERITY_NOTIFICATION    0x826B
// #define GL_MAX_DEBUG_GROUP_STACK_DEPTH    0x826C
// #define GL_DEBUG_GROUP_STACK_DEPTH        0x826D
// #define GL_BUFFER                         0x82E0
// #define GL_SHADER                         0x82E1
// #define GL_PROGRAM                        0x82E2
// #define GL_QUERY                          0x82E3
// #define GL_PROGRAM_PIPELINE               0x82E4
// #define GL_SAMPLER                        0x82E6
// #define GL_MAX_LABEL_LENGTH               0x82E8
// #define GL_DEBUG_OUTPUT                   0x92E0
// #define GL_CONTEXT_FLAG_DEBUG_BIT         0x00000002
// #define GL_MAX_UNIFORM_LOCATIONS          0x826E
// #define GL_FRAMEBUFFER_DEFAULT_WIDTH      0x9310
// #define GL_FRAMEBUFFER_DEFAULT_HEIGHT     0x9311
// #define GL_FRAMEBUFFER_DEFAULT_LAYERS     0x9312
// #define GL_FRAMEBUFFER_DEFAULT_SAMPLES    0x9313
// #define GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS 0x9314
// #define GL_MAX_FRAMEBUFFER_WIDTH          0x9315
// #define GL_MAX_FRAMEBUFFER_HEIGHT         0x9316
// #define GL_MAX_FRAMEBUFFER_LAYERS         0x9317
// #define GL_MAX_FRAMEBUFFER_SAMPLES        0x9318
// #define GL_INTERNALFORMAT_SUPPORTED       0x826F
// #define GL_INTERNALFORMAT_PREFERRED       0x8270
// #define GL_INTERNALFORMAT_RED_SIZE        0x8271
// #define GL_INTERNALFORMAT_GREEN_SIZE      0x8272
// #define GL_INTERNALFORMAT_BLUE_SIZE       0x8273
// #define GL_INTERNALFORMAT_ALPHA_SIZE      0x8274
// #define GL_INTERNALFORMAT_DEPTH_SIZE      0x8275
// #define GL_INTERNALFORMAT_STENCIL_SIZE    0x8276
// #define GL_INTERNALFORMAT_SHARED_SIZE     0x8277
// #define GL_INTERNALFORMAT_RED_TYPE        0x8278
// #define GL_INTERNALFORMAT_GREEN_TYPE      0x8279
// #define GL_INTERNALFORMAT_BLUE_TYPE       0x827A
// #define GL_INTERNALFORMAT_ALPHA_TYPE      0x827B
// #define GL_INTERNALFORMAT_DEPTH_TYPE      0x827C
// #define GL_INTERNALFORMAT_STENCIL_TYPE    0x827D
// #define GL_MAX_WIDTH                      0x827E
// #define GL_MAX_HEIGHT                     0x827F
// #define GL_MAX_DEPTH                      0x8280
// #define GL_MAX_LAYERS                     0x8281
// #define GL_MAX_COMBINED_DIMENSIONS        0x8282
// #define GL_COLOR_COMPONENTS               0x8283
// #define GL_DEPTH_COMPONENTS               0x8284
// #define GL_STENCIL_COMPONENTS             0x8285
// #define GL_COLOR_RENDERABLE               0x8286
// #define GL_DEPTH_RENDERABLE               0x8287
// #define GL_STENCIL_RENDERABLE             0x8288
// #define GL_FRAMEBUFFER_RENDERABLE         0x8289
// #define GL_FRAMEBUFFER_RENDERABLE_LAYERED 0x828A
// #define GL_FRAMEBUFFER_BLEND              0x828B
// #define GL_READ_PIXELS                    0x828C
// #define GL_READ_PIXELS_FORMAT             0x828D
// #define GL_READ_PIXELS_TYPE               0x828E
// #define GL_TEXTURE_IMAGE_FORMAT           0x828F
// #define GL_TEXTURE_IMAGE_TYPE             0x8290
// #define GL_GET_TEXTURE_IMAGE_FORMAT       0x8291
// #define GL_GET_TEXTURE_IMAGE_TYPE         0x8292
// #define GL_MIPMAP                         0x8293
// #define GL_MANUAL_GENERATE_MIPMAP         0x8294
// #define GL_AUTO_GENERATE_MIPMAP           0x8295
// #define GL_COLOR_ENCODING                 0x8296
// #define GL_SRGB_READ                      0x8297
// #define GL_SRGB_WRITE                     0x8298
// #define GL_FILTER                         0x829A
// #define GL_VERTEX_TEXTURE                 0x829B
// #define GL_TESS_CONTROL_TEXTURE           0x829C
// #define GL_TESS_EVALUATION_TEXTURE        0x829D
// #define GL_GEOMETRY_TEXTURE               0x829E
// #define GL_FRAGMENT_TEXTURE               0x829F
// #define GL_COMPUTE_TEXTURE                0x82A0
// #define GL_TEXTURE_SHADOW                 0x82A1
// #define GL_TEXTURE_GATHER                 0x82A2
// #define GL_TEXTURE_GATHER_SHADOW          0x82A3
// #define GL_SHADER_IMAGE_LOAD              0x82A4
// #define GL_SHADER_IMAGE_STORE             0x82A5
// #define GL_SHADER_IMAGE_ATOMIC            0x82A6
// #define GL_IMAGE_TEXEL_SIZE               0x82A7
// #define GL_IMAGE_COMPATIBILITY_CLASS      0x82A8
// #define GL_IMAGE_PIXEL_FORMAT             0x82A9
// #define GL_IMAGE_PIXEL_TYPE               0x82AA
// #define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST 0x82AC
// #define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST 0x82AD
// #define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE 0x82AE
// #define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE 0x82AF
// #define GL_TEXTURE_COMPRESSED_BLOCK_WIDTH 0x82B1
// #define GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT 0x82B2
// #define GL_TEXTURE_COMPRESSED_BLOCK_SIZE  0x82B3
// #define GL_CLEAR_BUFFER                   0x82B4
// #define GL_TEXTURE_VIEW                   0x82B5
// #define GL_VIEW_COMPATIBILITY_CLASS       0x82B6
// #define GL_FULL_SUPPORT                   0x82B7
// #define GL_CAVEAT_SUPPORT                 0x82B8
// #define GL_IMAGE_CLASS_4_X_32             0x82B9
// #define GL_IMAGE_CLASS_2_X_32             0x82BA
// #define GL_IMAGE_CLASS_1_X_32             0x82BB
// #define GL_IMAGE_CLASS_4_X_16             0x82BC
// #define GL_IMAGE_CLASS_2_X_16             0x82BD
// #define GL_IMAGE_CLASS_1_X_16             0x82BE
// #define GL_IMAGE_CLASS_4_X_8              0x82BF
// #define GL_IMAGE_CLASS_2_X_8              0x82C0
// #define GL_IMAGE_CLASS_1_X_8              0x82C1
// #define GL_IMAGE_CLASS_11_11_10           0x82C2
// #define GL_IMAGE_CLASS_10_10_10_2         0x82C3
// #define GL_VIEW_CLASS_128_BITS            0x82C4
// #define GL_VIEW_CLASS_96_BITS             0x82C5
// #define GL_VIEW_CLASS_64_BITS             0x82C6
// #define GL_VIEW_CLASS_48_BITS             0x82C7
// #define GL_VIEW_CLASS_32_BITS             0x82C8
// #define GL_VIEW_CLASS_24_BITS             0x82C9
// #define GL_VIEW_CLASS_16_BITS             0x82CA
// #define GL_VIEW_CLASS_8_BITS              0x82CB
// #define GL_VIEW_CLASS_S3TC_DXT1_RGB       0x82CC
// #define GL_VIEW_CLASS_S3TC_DXT1_RGBA      0x82CD
// #define GL_VIEW_CLASS_S3TC_DXT3_RGBA      0x82CE
// #define GL_VIEW_CLASS_S3TC_DXT5_RGBA      0x82CF
// #define GL_VIEW_CLASS_RGTC1_RED           0x82D0
// #define GL_VIEW_CLASS_RGTC2_RG            0x82D1
// #define GL_VIEW_CLASS_BPTC_UNORM          0x82D2
// #define GL_VIEW_CLASS_BPTC_FLOAT          0x82D3
// #define GL_UNIFORM                        0x92E1
// #define GL_UNIFORM_BLOCK                  0x92E2
// #define GL_PROGRAM_INPUT                  0x92E3
// #define GL_PROGRAM_OUTPUT                 0x92E4
// #define GL_BUFFER_VARIABLE                0x92E5
// #define GL_SHADER_STORAGE_BLOCK           0x92E6
// #define GL_VERTEX_SUBROUTINE              0x92E8
// #define GL_TESS_CONTROL_SUBROUTINE        0x92E9
// #define GL_TESS_EVALUATION_SUBROUTINE     0x92EA
// #define GL_GEOMETRY_SUBROUTINE            0x92EB
// #define GL_FRAGMENT_SUBROUTINE            0x92EC
// #define GL_COMPUTE_SUBROUTINE             0x92ED
// #define GL_VERTEX_SUBROUTINE_UNIFORM      0x92EE
// #define GL_TESS_CONTROL_SUBROUTINE_UNIFORM 0x92EF
// #define GL_TESS_EVALUATION_SUBROUTINE_UNIFORM 0x92F0
// #define GL_GEOMETRY_SUBROUTINE_UNIFORM    0x92F1
// #define GL_FRAGMENT_SUBROUTINE_UNIFORM    0x92F2
// #define GL_COMPUTE_SUBROUTINE_UNIFORM     0x92F3
// #define GL_TRANSFORM_FEEDBACK_VARYING     0x92F4
// #define GL_ACTIVE_RESOURCES               0x92F5
// #define GL_MAX_NAME_LENGTH                0x92F6
// #define GL_MAX_NUM_ACTIVE_VARIABLES       0x92F7
// #define GL_MAX_NUM_COMPATIBLE_SUBROUTINES 0x92F8
// #define GL_NAME_LENGTH                    0x92F9
// #define GL_TYPE                           0x92FA
// #define GL_ARRAY_SIZE                     0x92FB
// #define GL_OFFSET                         0x92FC
// #define GL_BLOCK_INDEX                    0x92FD
// #define GL_ARRAY_STRIDE                   0x92FE
// #define GL_MATRIX_STRIDE                  0x92FF
// #define GL_IS_ROW_MAJOR                   0x9300
// #define GL_ATOMIC_COUNTER_BUFFER_INDEX    0x9301
// #define GL_BUFFER_BINDING                 0x9302
// #define GL_BUFFER_DATA_SIZE               0x9303
// #define GL_NUM_ACTIVE_VARIABLES           0x9304
// #define GL_ACTIVE_VARIABLES               0x9305
// #define GL_REFERENCED_BY_VERTEX_SHADER    0x9306
// #define GL_REFERENCED_BY_TESS_CONTROL_SHADER 0x9307
// #define GL_REFERENCED_BY_TESS_EVALUATION_SHADER 0x9308
// #define GL_REFERENCED_BY_GEOMETRY_SHADER  0x9309
// #define GL_REFERENCED_BY_FRAGMENT_SHADER  0x930A
// #define GL_REFERENCED_BY_COMPUTE_SHADER   0x930B
// #define GL_TOP_LEVEL_ARRAY_SIZE           0x930C
// #define GL_TOP_LEVEL_ARRAY_STRIDE         0x930D
// #define GL_LOCATION                       0x930E
// #define GL_LOCATION_INDEX                 0x930F
// #define GL_IS_PER_PATCH                   0x92E7
// #define GL_SHADER_STORAGE_BUFFER          0x90D2
// #define GL_SHADER_STORAGE_BUFFER_BINDING  0x90D3
// #define GL_SHADER_STORAGE_BUFFER_START    0x90D4
// #define GL_SHADER_STORAGE_BUFFER_SIZE     0x90D5
// #define GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS 0x90D6
// #define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS 0x90D7
// #define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS 0x90D8
// #define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS 0x90D9
// #define GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS 0x90DA
// #define GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS 0x90DB
// #define GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS 0x90DC
// #define GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS 0x90DD
// #define GL_MAX_SHADER_STORAGE_BLOCK_SIZE  0x90DE
// #define GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT 0x90DF
// #define GL_SHADER_STORAGE_BARRIER_BIT     0x00002000
// #define GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES 0x8F39
// #define GL_DEPTH_STENCIL_TEXTURE_MODE     0x90EA
// #define GL_TEXTURE_BUFFER_OFFSET          0x919D
// #define GL_TEXTURE_BUFFER_SIZE            0x919E
// #define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT 0x919F
// #define GL_TEXTURE_VIEW_MIN_LEVEL         0x82DB
// #define GL_TEXTURE_VIEW_NUM_LEVELS        0x82DC
// #define GL_TEXTURE_VIEW_MIN_LAYER         0x82DD
// #define GL_TEXTURE_VIEW_NUM_LAYERS        0x82DE
// #define GL_TEXTURE_IMMUTABLE_LEVELS       0x82DF
// #define GL_VERTEX_ATTRIB_BINDING          0x82D4
// #define GL_VERTEX_ATTRIB_RELATIVE_OFFSET  0x82D5
// #define GL_VERTEX_BINDING_DIVISOR         0x82D6
// #define GL_VERTEX_BINDING_OFFSET          0x82D7
// #define GL_VERTEX_BINDING_STRIDE          0x82D8
// #define GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D9
// #define GL_MAX_VERTEX_ATTRIB_BINDINGS     0x82DA
// #define GL_VERTEX_BINDING_BUFFER          0x8F4F

/* GLAPI void  */    EX(glClearBufferData);    // (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
/* GLAPI void  */    EX(glClearBufferSubData);    // (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
/* GLAPI void  */    EX(glDispatchCompute);    // (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
/* GLAPI void  */    EX(glDispatchComputeIndirect);    // (GLintptr indirect);
/* GLAPI void  */    EX(glCopyImageSubData);    // (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
/* GLAPI void  */    EX(glFramebufferParameteri);    // (GLenum target, GLenum pname, GLint param);
/* GLAPI void  */    EX(glGetFramebufferParameteriv);    // (GLenum target, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetInternalformati64v);    // (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params);
/* GLAPI void  */    EX(glInvalidateTexSubImage);    // (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
/* GLAPI void  */    EX(glInvalidateTexImage);    // (GLuint texture, GLint level);
/* GLAPI void  */    EX(glInvalidateBufferSubData);    // (GLuint buffer, GLintptr offset, GLsizeiptr length);
/* GLAPI void  */    EX(glInvalidateBufferData);    // (GLuint buffer);
/* GLAPI void  */    EX(glInvalidateFramebuffer);    // (GLenum target, GLsizei numAttachments, const GLenum *attachments);
/* GLAPI void  */    EX(glInvalidateSubFramebuffer);    // (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
/* GLAPI void  */    EX(glMultiDrawArraysIndirect);    // (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
/* GLAPI void  */    EX(glMultiDrawElementsIndirect);    // (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
/* GLAPI void  */    EX(glGetProgramInterfaceiv);    // (GLuint program, GLenum programInterface, GLenum pname, GLint *params);
/* GLAPI GLuint  */    EX(glGetProgramResourceIndex);    // (GLuint program, GLenum programInterface, const GLchar *name);
/* GLAPI void  */    EX(glGetProgramResourceName);    // (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
/* GLAPI void  */    EX(glGetProgramResourceiv);    // (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params);
/* GLAPI GLint  */    EX(glGetProgramResourceLocation);    // (GLuint program, GLenum programInterface, const GLchar *name);
/* GLAPI GLint  */    EX(glGetProgramResourceLocationIndex);    // (GLuint program, GLenum programInterface, const GLchar *name);
/* GLAPI void  */    EX(glShaderStorageBlockBinding);    // (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
/* GLAPI void  */    EX(glTexBufferRange);    // (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
/* GLAPI void  */    EX(glTexStorage2DMultisample);    // (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
/* GLAPI void  */    EX(glTexStorage3DMultisample);    // (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
/* GLAPI void  */    EX(glTextureView);    // (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
/* GLAPI void  */    EX(glBindVertexBuffer);    // (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
/* GLAPI void  */    EX(glVertexAttribFormat);    // (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
/* GLAPI void  */    EX(glVertexAttribIFormat);    // (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
/* GLAPI void  */    EX(glVertexAttribLFormat);    // (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
/* GLAPI void  */    EX(glVertexAttribBinding);    // (GLuint attribindex, GLuint bindingindex);
/* GLAPI void  */    EX(glVertexBindingDivisor);    // (GLuint bindingindex, GLuint divisor);
/* GLAPI void  */    EX(glDebugMessageControl);    // (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
/* GLAPI void  */    EX(glDebugMessageInsert);    // (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
/* GLAPI void  */    EX(glDebugMessageCallback);    // (GLDEBUGPROC callback, const void *userParam);
/* GLAPI GLuint  */    EX(glGetDebugMessageLog);    // (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
/* GLAPI void  */    EX(glPushDebugGroup);    // (GLenum source, GLuint id, GLsizei length, const GLchar *message);
/* GLAPI void  */    EX(glPopDebugGroup);    // (void);
/* GLAPI void  */    EX(glObjectLabel);    // (GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
/* GLAPI void  */    EX(glGetObjectLabel);    // (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
/* GLAPI void  */    EX(glObjectPtrLabel);    // (const void *ptr, GLsizei length, const GLchar *label);
/* GLAPI void  */    EX(glGetObjectPtrLabel);    // (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);



// GL_VERSION_4_4
// #define GL_MAX_VERTEX_ATTRIB_STRIDE       0x82E5
// #define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED 0x8221
// #define GL_TEXTURE_BUFFER_BINDING         0x8C2A
// #define GL_MAP_PERSISTENT_BIT             0x0040
// #define GL_MAP_COHERENT_BIT               0x0080
// #define GL_DYNAMIC_STORAGE_BIT            0x0100
// #define GL_CLIENT_STORAGE_BIT             0x0200
// #define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT 0x00004000
// #define GL_BUFFER_IMMUTABLE_STORAGE       0x821F
// #define GL_BUFFER_STORAGE_FLAGS           0x8220
// #define GL_CLEAR_TEXTURE                  0x9365
// #define GL_LOCATION_COMPONENT             0x934A
// #define GL_TRANSFORM_FEEDBACK_BUFFER_INDEX 0x934B
// #define GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE 0x934C
// #define GL_QUERY_BUFFER                   0x9192
// #define GL_QUERY_BUFFER_BARRIER_BIT       0x00008000
// #define GL_QUERY_BUFFER_BINDING           0x9193
// #define GL_QUERY_RESULT_NO_WAIT           0x9194
// #define GL_MIRROR_CLAMP_TO_EDGE           0x8743

/* GLAPI void  */    EX(glBufferStorage);    // (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
/* GLAPI void  */    EX(glClearTexImage);    // (GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
/* GLAPI void  */    EX(glClearTexSubImage);    // (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
/* GLAPI void  */    EX(glBindBuffersBase);    // (GLenum target, GLuint first, GLsizei count, const GLuint *buffers);
/* GLAPI void  */    EX(glBindBuffersRange);    // (GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes);
/* GLAPI void  */    EX(glBindTextures);    // (GLuint first, GLsizei count, const GLuint *textures);
/* GLAPI void  */    EX(glBindSamplers);    // (GLuint first, GLsizei count, const GLuint *samplers);
/* GLAPI void  */    EX(glBindImageTextures);    // (GLuint first, GLsizei count, const GLuint *textures);
/* GLAPI void  */    EX(glBindVertexBuffers);    // (GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);



// GL_VERSION_4_5
// #define GL_CONTEXT_LOST                   0x0507
// #define GL_NEGATIVE_ONE_TO_ONE            0x935E
// #define GL_ZERO_TO_ONE                    0x935F
// #define GL_CLIP_ORIGIN                    0x935C
// #define GL_CLIP_DEPTH_MODE                0x935D
// #define GL_QUERY_WAIT_INVERTED            0x8E17
// #define GL_QUERY_NO_WAIT_INVERTED         0x8E18
// #define GL_QUERY_BY_REGION_WAIT_INVERTED  0x8E19
// #define GL_QUERY_BY_REGION_NO_WAIT_INVERTED 0x8E1A
// #define GL_MAX_CULL_DISTANCES             0x82F9
// #define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES 0x82FA
// #define GL_TEXTURE_TARGET                 0x1006
// #define GL_QUERY_TARGET                   0x82EA
// #define GL_GUILTY_CONTEXT_RESET           0x8253
// #define GL_INNOCENT_CONTEXT_RESET         0x8254
// #define GL_UNKNOWN_CONTEXT_RESET          0x8255
// #define GL_RESET_NOTIFICATION_STRATEGY    0x8256
// #define GL_LOSE_CONTEXT_ON_RESET          0x8252
// #define GL_NO_RESET_NOTIFICATION          0x8261
// #define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT 0x00000004
// #define GL_CONTEXT_RELEASE_BEHAVIOR       0x82FB
// #define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH 0x82FC

/* GLAPI void  */    EX(glClipControl);    // (GLenum origin, GLenum depth);
/* GLAPI void  */    EX(glCreateTransformFeedbacks);    // (GLsizei n, GLuint *ids);
/* GLAPI void  */    EX(glTransformFeedbackBufferBase);    // (GLuint xfb, GLuint index, GLuint buffer);
/* GLAPI void  */    EX(glTransformFeedbackBufferRange);    // (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
/* GLAPI void  */    EX(glGetTransformFeedbackiv);    // (GLuint xfb, GLenum pname, GLint *param);
/* GLAPI void  */    EX(glGetTransformFeedbacki_v);    // (GLuint xfb, GLenum pname, GLuint index, GLint *param);
/* GLAPI void  */    EX(glGetTransformFeedbacki64_v);    // (GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
/* GLAPI void  */    EX(glCreateBuffers);    // (GLsizei n, GLuint *buffers);
/* GLAPI void  */    EX(glNamedBufferStorage);    // (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
/* GLAPI void  */    EX(glNamedBufferData);    // (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
/* GLAPI void  */    EX(glNamedBufferSubData);    // (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
/* GLAPI void  */    EX(glCopyNamedBufferSubData);    // (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
/* GLAPI void  */    EX(glClearNamedBufferData);    // (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
/* GLAPI void  */    EX(glClearNamedBufferSubData);    // (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
/* GLAPI void * */    EX(glMapNamedBuffer);    // (GLuint buffer, GLenum access);
/* GLAPI void * */    EX(glMapNamedBufferRange);    // (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
/* GLAPI GLboolean  */    EX(glUnmapNamedBuffer);    // (GLuint buffer);
/* GLAPI void  */    EX(glFlushMappedNamedBufferRange);    // (GLuint buffer, GLintptr offset, GLsizeiptr length);
/* GLAPI void  */    EX(glGetNamedBufferParameteriv);    // (GLuint buffer, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetNamedBufferParameteri64v);    // (GLuint buffer, GLenum pname, GLint64 *params);
/* GLAPI void  */    EX(glGetNamedBufferPointerv);    // (GLuint buffer, GLenum pname, void **params);
/* GLAPI void  */    EX(glGetNamedBufferSubData);    // (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
/* GLAPI void  */    EX(glCreateFramebuffers);    // (GLsizei n, GLuint *framebuffers);
/* GLAPI void  */    EX(glNamedFramebufferRenderbuffer);    // (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
/* GLAPI void  */    EX(glNamedFramebufferParameteri);    // (GLuint framebuffer, GLenum pname, GLint param);
/* GLAPI void  */    EX(glNamedFramebufferTexture);    // (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
/* GLAPI void  */    EX(glNamedFramebufferTextureLayer);    // (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
/* GLAPI void  */    EX(glNamedFramebufferDrawBuffer);    // (GLuint framebuffer, GLenum buf);
/* GLAPI void  */    EX(glNamedFramebufferDrawBuffers);    // (GLuint framebuffer, GLsizei n, const GLenum *bufs);
/* GLAPI void  */    EX(glNamedFramebufferReadBuffer);    // (GLuint framebuffer, GLenum src);
/* GLAPI void  */    EX(glInvalidateNamedFramebufferData);    // (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments);
/* GLAPI void  */    EX(glInvalidateNamedFramebufferSubData);    // (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
/* GLAPI void  */    EX(glClearNamedFramebufferiv);    // (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value);
/* GLAPI void  */    EX(glClearNamedFramebufferuiv);    // (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value);
/* GLAPI void  */    EX(glClearNamedFramebufferfv);    // (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value);
/* GLAPI void  */    EX(glClearNamedFramebufferfi);    // (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
/* GLAPI void  */    EX(glBlitNamedFramebuffer);    // (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
/* GLAPI GLenum  */    EX(glCheckNamedFramebufferStatus);    // (GLuint framebuffer, GLenum target);
/* GLAPI void  */    EX(glGetNamedFramebufferParameteriv);    // (GLuint framebuffer, GLenum pname, GLint *param);
/* GLAPI void  */    EX(glGetNamedFramebufferAttachmentParameteriv);    // (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glCreateRenderbuffers);    // (GLsizei n, GLuint *renderbuffers);
/* GLAPI void  */    EX(glNamedRenderbufferStorage);    // (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
/* GLAPI void  */    EX(glNamedRenderbufferStorageMultisample);    // (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
/* GLAPI void  */    EX(glGetNamedRenderbufferParameteriv);    // (GLuint renderbuffer, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glCreateTextures);    // (GLenum target, GLsizei n, GLuint *textures);
/* GLAPI void  */    EX(glTextureBuffer);    // (GLuint texture, GLenum internalformat, GLuint buffer);
/* GLAPI void  */    EX(glTextureBufferRange);    // (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
/* GLAPI void  */    EX(glTextureStorage1D);    // (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
/* GLAPI void  */    EX(glTextureStorage2D);    // (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
/* GLAPI void  */    EX(glTextureStorage3D);    // (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
/* GLAPI void  */    EX(glTextureStorage2DMultisample);    // (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
/* GLAPI void  */    EX(glTextureStorage3DMultisample);    // (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
/* GLAPI void  */    EX(glTextureSubImage1D);    // (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
/* GLAPI void  */    EX(glTextureSubImage2D);    // (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
/* GLAPI void  */    EX(glTextureSubImage3D);    // (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
/* GLAPI void  */    EX(glCompressedTextureSubImage1D);    // (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
/* GLAPI void  */    EX(glCompressedTextureSubImage2D);    // (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
/* GLAPI void  */    EX(glCompressedTextureSubImage3D);    // (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
/* GLAPI void  */    EX(glCopyTextureSubImage1D);    // (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
/* GLAPI void  */    EX(glCopyTextureSubImage2D);    // (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
/* GLAPI void  */    EX(glCopyTextureSubImage3D);    // (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
/* GLAPI void  */    EX(glTextureParameterf);    // (GLuint texture, GLenum pname, GLfloat param);
/* GLAPI void  */    EX(glTextureParameterfv);    // (GLuint texture, GLenum pname, const GLfloat *param);
/* GLAPI void  */    EX(glTextureParameteri);    // (GLuint texture, GLenum pname, GLint param);
/* GLAPI void  */    EX(glTextureParameterIiv);    // (GLuint texture, GLenum pname, const GLint *params);
/* GLAPI void  */    EX(glTextureParameterIuiv);    // (GLuint texture, GLenum pname, const GLuint *params);
/* GLAPI void  */    EX(glTextureParameteriv);    // (GLuint texture, GLenum pname, const GLint *param);
/* GLAPI void  */    EX(glGenerateTextureMipmap);    // (GLuint texture);
/* GLAPI void  */    EX(glBindTextureUnit);    // (GLuint unit, GLuint texture);
/* GLAPI void  */    EX(glGetTextureImage);    // (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
/* GLAPI void  */    EX(glGetCompressedTextureImage);    // (GLuint texture, GLint level, GLsizei bufSize, void *pixels);
/* GLAPI void  */    EX(glGetTextureLevelParameterfv);    // (GLuint texture, GLint level, GLenum pname, GLfloat *params);
/* GLAPI void  */    EX(glGetTextureLevelParameteriv);    // (GLuint texture, GLint level, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetTextureParameterfv);    // (GLuint texture, GLenum pname, GLfloat *params);
/* GLAPI void  */    EX(glGetTextureParameterIiv);    // (GLuint texture, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glGetTextureParameterIuiv);    // (GLuint texture, GLenum pname, GLuint *params);
/* GLAPI void  */    EX(glGetTextureParameteriv);    // (GLuint texture, GLenum pname, GLint *params);
/* GLAPI void  */    EX(glCreateVertexArrays);    // (GLsizei n, GLuint *arrays);
/* GLAPI void  */    EX(glDisableVertexArrayAttrib);    // (GLuint vaobj, GLuint index);
/* GLAPI void  */    EX(glEnableVertexArrayAttrib);    // (GLuint vaobj, GLuint index);
/* GLAPI void  */    EX(glVertexArrayElementBuffer);    // (GLuint vaobj, GLuint buffer);
/* GLAPI void  */    EX(glVertexArrayVertexBuffer);    // (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
/* GLAPI void  */    EX(glVertexArrayVertexBuffers);    // (GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
/* GLAPI void  */    EX(glVertexArrayAttribBinding);    // (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
/* GLAPI void  */    EX(glVertexArrayAttribFormat);    // (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
/* GLAPI void  */    EX(glVertexArrayAttribIFormat);    // (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
/* GLAPI void  */    EX(glVertexArrayAttribLFormat);    // (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
/* GLAPI void  */    EX(glVertexArrayBindingDivisor);    // (GLuint vaobj, GLuint bindingindex, GLuint divisor);
/* GLAPI void  */    EX(glGetVertexArrayiv);    // (GLuint vaobj, GLenum pname, GLint *param);
/* GLAPI void  */    EX(glGetVertexArrayIndexediv);    // (GLuint vaobj, GLuint index, GLenum pname, GLint *param);
/* GLAPI void  */    EX(glGetVertexArrayIndexed64iv);    // (GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
/* GLAPI void  */    EX(glCreateSamplers);    // (GLsizei n, GLuint *samplers);
/* GLAPI void  */    EX(glCreateProgramPipelines);    // (GLsizei n, GLuint *pipelines);
/* GLAPI void  */    EX(glCreateQueries);    // (GLenum target, GLsizei n, GLuint *ids);
/* GLAPI void  */    EX(glGetQueryBufferObjecti64v);    // (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
/* GLAPI void  */    EX(glGetQueryBufferObjectiv);    // (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
/* GLAPI void  */    EX(glGetQueryBufferObjectui64v);    // (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
/* GLAPI void  */    EX(glGetQueryBufferObjectuiv);    // (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
/* GLAPI void  */    EX(glMemoryBarrierByRegion);    // (GLbitfield barriers);
/* GLAPI void  */    EX(glGetTextureSubImage);    // (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
/* GLAPI void  */    EX(glGetCompressedTextureSubImage);    // (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
/* GLAPI GLenum  */    EX(glGetGraphicsResetStatus);    // (void);
/* GLAPI void  */    EX(glGetnCompressedTexImage);    // (GLenum target, GLint lod, GLsizei bufSize, void *pixels);
/* GLAPI void  */    EX(glGetnTexImage);    // (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
/* GLAPI void  */    EX(glGetnUniformdv);    // (GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
/* GLAPI void  */    EX(glGetnUniformfv);    // (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
/* GLAPI void  */    EX(glGetnUniformiv);    // (GLuint program, GLint location, GLsizei bufSize, GLint *params);
/* GLAPI void  */    EX(glGetnUniformuiv);    // (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
/* GLAPI void  */    EX(glReadnPixels);    // (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
/* GLAPI void  */    EX(glTextureBarrier);    // (void);



// GL_VERSION_4_6
// #define GL_SHADER_BINARY_FORMAT_SPIR_V    0x9551
// #define GL_SPIR_V_BINARY                  0x9552
// #define GL_PARAMETER_BUFFER               0x80EE
// #define GL_PARAMETER_BUFFER_BINDING       0x80EF
// #define GL_CONTEXT_FLAG_NO_ERROR_BIT      0x00000008
// #define GL_VERTICES_SUBMITTED             0x82EE
// #define GL_PRIMITIVES_SUBMITTED           0x82EF
// #define GL_VERTEX_SHADER_INVOCATIONS      0x82F0
// #define GL_TESS_CONTROL_SHADER_PATCHES    0x82F1
// #define GL_TESS_EVALUATION_SHADER_INVOCATIONS 0x82F2
// #define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED 0x82F3
// #define GL_FRAGMENT_SHADER_INVOCATIONS    0x82F4
// #define GL_COMPUTE_SHADER_INVOCATIONS     0x82F5
// #define GL_CLIPPING_INPUT_PRIMITIVES      0x82F6
// #define GL_CLIPPING_OUTPUT_PRIMITIVES     0x82F7
// #define GL_POLYGON_OFFSET_CLAMP           0x8E1B
// #define GL_SPIR_V_EXTENSIONS              0x9553
// #define GL_NUM_SPIR_V_EXTENSIONS          0x9554
// #define GL_TEXTURE_MAX_ANISOTROPY         0x84FE
// #define GL_MAX_TEXTURE_MAX_ANISOTROPY     0x84FF
// #define GL_TRANSFORM_FEEDBACK_OVERFLOW    0x82EC
// #define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW 0x82ED

/* GLAPI void  */    EX(glSpecializeShader);    // (GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
/* GLAPI void  */    EX(glMultiDrawArraysIndirectCount);    // (GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
/* GLAPI void  */    EX(glMultiDrawElementsIndirectCount);    // (GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
/* GLAPI void  */    EX(glPolygonOffsetClamp);    // (GLfloat factor, GLfloat units, GLfloat clamp);


