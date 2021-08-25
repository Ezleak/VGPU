// A custom gles 3.2 header file, all the APIs here are from GLES3gl32.h. 
// Customize these APIs to facilitate the gles loader.



#include <KHR/khrplatform.h>
typedef khronos_int8_t GLbyte;
typedef khronos_float_t GLclampf;
typedef khronos_int32_t GLfixed;
typedef khronos_int16_t GLshort;
typedef khronos_uint16_t GLushort;
typedef void GLvoid;
typedef struct __GLsync *GLsync;
typedef khronos_int64_t GLint64;
typedef khronos_uint64_t GLuint64;
typedef unsigned int GLenum;
typedef unsigned int GLuint;
typedef char GLchar;
typedef khronos_float_t GLfloat;
typedef khronos_ssize_t GLsizeiptr;
typedef khronos_intptr_t GLintptr;
typedef unsigned int GLbitfield;
typedef int GLint;
typedef unsigned char GLboolean;
typedef int GLsizei;
typedef khronos_uint8_t GLubyte;
typedef khronos_uint16_t GLhalf;


// GL_ES_VERSION_2_0
typedef void (* PTR_glActiveTexture) (GLenum texture);
typedef void (* PTR_glAttachShader) (GLuint program, GLuint shader);
typedef void (* PTR_glBindAttribLocation) (GLuint program, GLuint index, const GLchar *name);
typedef void (* PTR_glBindBuffer) (GLenum target, GLuint buffer);
typedef void (* PTR_glBindFramebuffer) (GLenum target, GLuint framebuffer);
typedef void (* PTR_glBindRenderbuffer) (GLenum target, GLuint renderbuffer);
typedef void (* PTR_glBindTexture) (GLenum target, GLuint texture);
typedef void (* PTR_glBlendColor) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (* PTR_glBlendEquation) (GLenum mode);
typedef void (* PTR_glBlendEquationSeparate) (GLenum modeRGB, GLenum modeAlpha);
typedef void (* PTR_glBlendFunc) (GLenum sfactor, GLenum dfactor);
typedef void (* PTR_glBlendFuncSeparate) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (* PTR_glBufferData) (GLenum target, GLsizeiptr size, const void *data, GLenum usage);
typedef void (* PTR_glBufferSubData) (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
typedef GLenum (* PTR_glCheckFramebufferStatus) (GLenum target);
typedef void (* PTR_glClear) (GLbitfield mask);
typedef void (* PTR_glClearColor) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (* PTR_glClearDepthf) (GLfloat d);
typedef void (* PTR_glClearStencil) (GLint s);
typedef void (* PTR_glColorMask) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef void (* PTR_glCompileShader) (GLuint shader);
typedef void (* PTR_glCompressedTexImage2D) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
typedef void (* PTR_glCompressedTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void (* PTR_glCopyTexImage2D) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (* PTR_glCopyTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef GLuint (* PTR_glCreateProgram) (void);
typedef GLuint (* PTR_glCreateShader) (GLenum type);
typedef void (* PTR_glCullFace) (GLenum mode);
typedef void (* PTR_glDeleteBuffers) (GLsizei n, const GLuint *buffers);
typedef void (* PTR_glDeleteFramebuffers) (GLsizei n, const GLuint *framebuffers);
typedef void (* PTR_glDeleteProgram) (GLuint program);
typedef void (* PTR_glDeleteRenderbuffers) (GLsizei n, const GLuint *renderbuffers);
typedef void (* PTR_glDeleteShader) (GLuint shader);
typedef void (* PTR_glDeleteTextures) (GLsizei n, const GLuint *textures);
typedef void (* PTR_glDepthFunc) (GLenum func);
typedef void (* PTR_glDepthMask) (GLboolean flag);
typedef void (* PTR_glDepthRangef) (GLfloat n, GLfloat f);
typedef void (* PTR_glDetachShader) (GLuint program, GLuint shader);
typedef void (* PTR_glDisable) (GLenum cap);
typedef void (* PTR_glDisableVertexAttribArray) (GLuint index);
typedef void (* PTR_glDrawArrays) (GLenum mode, GLint first, GLsizei count);
typedef void (* PTR_glDrawElements) (GLenum mode, GLsizei count, GLenum type, const void *indices);
typedef void (* PTR_glEnable) (GLenum cap);
typedef void (* PTR_glEnableVertexAttribArray) (GLuint index);
typedef void (* PTR_glFinish) (void);
typedef void (* PTR_glFlush) (void);
typedef void (* PTR_glFramebufferRenderbuffer) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (* PTR_glFramebufferTexture2D) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (* PTR_glFrontFace) (GLenum mode);
typedef void (* PTR_glGenBuffers) (GLsizei n, GLuint *buffers);
typedef void (* PTR_glGenerateMipmap) (GLenum target);
typedef void (* PTR_glGenFramebuffers) (GLsizei n, GLuint *framebuffers);
typedef void (* PTR_glGenRenderbuffers) (GLsizei n, GLuint *renderbuffers);
typedef void (* PTR_glGenTextures) (GLsizei n, GLuint *textures);
typedef void (* PTR_glGetActiveAttrib) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (* PTR_glGetActiveUniform) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (* PTR_glGetAttachedShaders) (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
typedef GLint (* PTR_glGetAttribLocation) (GLuint program, const GLchar *name);
typedef void (* PTR_glGetBooleanv) (GLenum pname, GLboolean *data);
typedef void (* PTR_glGetBufferParameteriv) (GLenum target, GLenum pname, GLint *params);
typedef GLenum (* PTR_glGetError) (void);
typedef void (* PTR_glGetFloatv) (GLenum pname, GLfloat *data);
typedef void (* PTR_glGetFramebufferAttachmentParameteriv) (GLenum target, GLenum attachment, GLenum pname, GLint *params);
typedef void (* PTR_glGetIntegerv) (GLenum pname, GLint *data);
typedef void (* PTR_glGetProgramiv) (GLuint program, GLenum pname, GLint *params);
typedef void (* PTR_glGetProgramInfoLog) (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (* PTR_glGetRenderbufferParameteriv) (GLenum target, GLenum pname, GLint *params);
typedef void (* PTR_glGetShaderiv) (GLuint shader, GLenum pname, GLint *params);
typedef void (* PTR_glGetShaderInfoLog) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (* PTR_glGetShaderPrecisionFormat) (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
typedef void (* PTR_glGetShaderSource) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
typedef const GLubyte * (* PTR_glGetString) (GLenum name);
typedef void (* PTR_glGetTexParameterfv) (GLenum target, GLenum pname, GLfloat *params);
typedef void (* PTR_glGetTexParameteriv) (GLenum target, GLenum pname, GLint *params);
typedef void (* PTR_glGetUniformfv) (GLuint program, GLint location, GLfloat *params);
typedef void (* PTR_glGetUniformiv) (GLuint program, GLint location, GLint *params);
typedef GLint (* PTR_glGetUniformLocation) (GLuint program, const GLchar *name);
typedef void (* PTR_glGetVertexAttribfv) (GLuint index, GLenum pname, GLfloat *params);
typedef void (* PTR_glGetVertexAttribiv) (GLuint index, GLenum pname, GLint *params);
typedef void (* PTR_glGetVertexAttribPointerv) (GLuint index, GLenum pname, void **pointer);
typedef void (* PTR_glHint) (GLenum target, GLenum mode);
typedef GLboolean (* PTR_glIsBuffer) (GLuint buffer);
typedef GLboolean (* PTR_glIsEnabled) (GLenum cap);
typedef GLboolean (* PTR_glIsFramebuffer) (GLuint framebuffer);
typedef GLboolean (* PTR_glIsProgram) (GLuint program);
typedef GLboolean (* PTR_glIsRenderbuffer) (GLuint renderbuffer);
typedef GLboolean (* PTR_glIsShader) (GLuint shader);
typedef GLboolean (* PTR_glIsTexture) (GLuint texture);
typedef void (* PTR_glLineWidth) (GLfloat width);
typedef void (* PTR_glLinkProgram) (GLuint program);
typedef void (* PTR_glPixelStorei) (GLenum pname, GLint param);
typedef void (* PTR_glPolygonOffset) (GLfloat factor, GLfloat units);
typedef void (* PTR_glReadPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
typedef void (* PTR_glReleaseShaderCompiler) (void);
typedef void (* PTR_glRenderbufferStorage) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (* PTR_glSampleCoverage) (GLfloat value, GLboolean invert);
typedef void (* PTR_glScissor) (GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (* PTR_glShaderBinary) (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length);
typedef void (* PTR_glShaderSource) (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
typedef void (* PTR_glStencilFunc) (GLenum func, GLint ref, GLuint mask);
typedef void (* PTR_glStencilFuncSeparate) (GLenum face, GLenum func, GLint ref, GLuint mask);
typedef void (* PTR_glStencilMask) (GLuint mask);
typedef void (* PTR_glStencilMaskSeparate) (GLenum face, GLuint mask);
typedef void (* PTR_glStencilOp) (GLenum fail, GLenum zfail, GLenum zpass);
typedef void (* PTR_glStencilOpSeparate) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (* PTR_glTexImage2D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (* PTR_glTexParameterf) (GLenum target, GLenum pname, GLfloat param);
typedef void (* PTR_glTexParameterfv) (GLenum target, GLenum pname, const GLfloat *params);
typedef void (* PTR_glTexParameteri) (GLenum target, GLenum pname, GLint param);
typedef void (* PTR_glTexParameteriv) (GLenum target, GLenum pname, const GLint *params);
typedef void (* PTR_glTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
typedef void (* PTR_glUniform1f) (GLint location, GLfloat v0);
typedef void (* PTR_glUniform1fv) (GLint location, GLsizei count, const GLfloat *value);
typedef void (* PTR_glUniform1i) (GLint location, GLint v0);
typedef void (* PTR_glUniform1iv) (GLint location, GLsizei count, const GLint *value);
typedef void (* PTR_glUniform2f) (GLint location, GLfloat v0, GLfloat v1);
typedef void (* PTR_glUniform2fv) (GLint location, GLsizei count, const GLfloat *value);
typedef void (* PTR_glUniform2i) (GLint location, GLint v0, GLint v1);
typedef void (* PTR_glUniform2iv) (GLint location, GLsizei count, const GLint *value);
typedef void (* PTR_glUniform3f) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (* PTR_glUniform3fv) (GLint location, GLsizei count, const GLfloat *value);
typedef void (* PTR_glUniform3i) (GLint location, GLint v0, GLint v1, GLint v2);
typedef void (* PTR_glUniform3iv) (GLint location, GLsizei count, const GLint *value);
typedef void (* PTR_glUniform4f) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (* PTR_glUniform4fv) (GLint location, GLsizei count, const GLfloat *value);
typedef void (* PTR_glUniform4i) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (* PTR_glUniform4iv) (GLint location, GLsizei count, const GLint *value);
typedef void (* PTR_glUniformMatrix2fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glUniformMatrix3fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glUniformMatrix4fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glUseProgram) (GLuint program);
typedef void (* PTR_glValidateProgram) (GLuint program);
typedef void (* PTR_glVertexAttrib1f) (GLuint index, GLfloat x);
typedef void (* PTR_glVertexAttrib1fv) (GLuint index, const GLfloat *v);
typedef void (* PTR_glVertexAttrib2f) (GLuint index, GLfloat x, GLfloat y);
typedef void (* PTR_glVertexAttrib2fv) (GLuint index, const GLfloat *v);
typedef void (* PTR_glVertexAttrib3f) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (* PTR_glVertexAttrib3fv) (GLuint index, const GLfloat *v);
typedef void (* PTR_glVertexAttrib4f) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (* PTR_glVertexAttrib4fv) (GLuint index, const GLfloat *v);
typedef void (* PTR_glVertexAttribPointer) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
typedef void (* PTR_glViewport) (GLint x, GLint y, GLsizei width, GLsizei height);


// GL_ES_VERSION_3_0
typedef void (* PTR_glReadBuffer) (GLenum src);
typedef void (* PTR_glDrawRangeElements) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
typedef void (* PTR_glTexImage3D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (* PTR_glTexSubImage3D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void (* PTR_glCopyTexSubImage3D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (* PTR_glCompressedTexImage3D) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
typedef void (* PTR_glCompressedTexSubImage3D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (* PTR_glGenQueries) (GLsizei n, GLuint *ids);
typedef void (* PTR_glDeleteQueries) (GLsizei n, const GLuint *ids);
typedef GLboolean (* PTR_glIsQuery) (GLuint id);
typedef void (* PTR_glBeginQuery) (GLenum target, GLuint id);
typedef void (* PTR_glEndQuery) (GLenum target);
typedef void (* PTR_glGetQueryiv) (GLenum target, GLenum pname, GLint *params);
typedef void (* PTR_glGetQueryObjectuiv) (GLuint id, GLenum pname, GLuint *params);
typedef GLboolean (* PTR_glUnmapBuffer) (GLenum target);
typedef void (* PTR_glGetBufferPointerv) (GLenum target, GLenum pname, void **params);
typedef void (* PTR_glDrawBuffers) (GLsizei n, const GLenum *bufs);
typedef void (* PTR_glUniformMatrix2x3fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glUniformMatrix3x2fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glUniformMatrix2x4fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glUniformMatrix4x2fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glUniformMatrix3x4fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glUniformMatrix4x3fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glBlitFramebuffer) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (* PTR_glRenderbufferStorageMultisample) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (* PTR_glFramebufferTextureLayer) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void * (* PTR_glMapBufferRange) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (* PTR_glFlushMappedBufferRange) (GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (* PTR_glBindVertexArray) (GLuint array);
typedef void (* PTR_glDeleteVertexArrays) (GLsizei n, const GLuint *arrays);
typedef void (* PTR_glGenVertexArrays) (GLsizei n, GLuint *arrays);
typedef GLboolean (* PTR_glIsVertexArray) (GLuint array);
typedef void (* PTR_glGetIntegeri_v) (GLenum target, GLuint index, GLint *data);
typedef void (* PTR_glBeginTransformFeedback) (GLenum primitiveMode);
typedef void (* PTR_glEndTransformFeedback) (void);
typedef void (* PTR_glBindBufferRange) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (* PTR_glBindBufferBase) (GLenum target, GLuint index, GLuint buffer);
typedef void (* PTR_glTransformFeedbackVaryings) (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
typedef void (* PTR_glGetTransformFeedbackVarying) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
typedef void (* PTR_glVertexAttribIPointer) (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (* PTR_glGetVertexAttribIiv) (GLuint index, GLenum pname, GLint *params);
typedef void (* PTR_glGetVertexAttribIuiv) (GLuint index, GLenum pname, GLuint *params);
typedef void (* PTR_glVertexAttribI4i) (GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (* PTR_glVertexAttribI4ui) (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (* PTR_glVertexAttribI4iv) (GLuint index, const GLint *v);
typedef void (* PTR_glVertexAttribI4uiv) (GLuint index, const GLuint *v);
typedef void (* PTR_glGetUniformuiv) (GLuint program, GLint location, GLuint *params);
typedef GLint (* PTR_glGetFragDataLocation) (GLuint program, const GLchar *name);
typedef void (* PTR_glUniform1ui) (GLint location, GLuint v0);
typedef void (* PTR_glUniform2ui) (GLint location, GLuint v0, GLuint v1);
typedef void (* PTR_glUniform3ui) (GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (* PTR_glUniform4ui) (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (* PTR_glUniform1uiv) (GLint location, GLsizei count, const GLuint *value);
typedef void (* PTR_glUniform2uiv) (GLint location, GLsizei count, const GLuint *value);
typedef void (* PTR_glUniform3uiv) (GLint location, GLsizei count, const GLuint *value);
typedef void (* PTR_glUniform4uiv) (GLint location, GLsizei count, const GLuint *value);
typedef void (* PTR_glClearBufferiv) (GLenum buffer, GLint drawbuffer, const GLint *value);
typedef void (* PTR_glClearBufferuiv) (GLenum buffer, GLint drawbuffer, const GLuint *value);
typedef void (* PTR_glClearBufferfv) (GLenum buffer, GLint drawbuffer, const GLfloat *value);
typedef void (* PTR_glClearBufferfi) (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef const GLubyte * (* PTR_glGetStringi) (GLenum name, GLuint index);
typedef void (* PTR_glCopyBufferSubData) (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (* PTR_glGetUniformIndices) (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
typedef void (* PTR_glGetActiveUniformsiv) (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
typedef GLuint (* PTR_glGetUniformBlockIndex) (GLuint program, const GLchar *uniformBlockName);
typedef void (* PTR_glGetActiveUniformBlockiv) (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
typedef void (* PTR_glGetActiveUniformBlockName) (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
typedef void (* PTR_glUniformBlockBinding) (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
typedef void (* PTR_glDrawArraysInstanced) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
typedef void (* PTR_glDrawElementsInstanced) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
typedef GLsync (* PTR_glFenceSync) (GLenum condition, GLbitfield flags);
typedef GLboolean (* PTR_glIsSync) (GLsync sync);
typedef void (* PTR_glDeleteSync) (GLsync sync);
typedef GLenum (* PTR_glClientWaitSync) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (* PTR_glWaitSync) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (* PTR_glGetInteger64v) (GLenum pname, GLint64 *data);
typedef void (* PTR_glGetSynciv) (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
typedef void (* PTR_glGetInteger64i_v) (GLenum target, GLuint index, GLint64 *data);
typedef void (* PTR_glGetBufferParameteri64v) (GLenum target, GLenum pname, GLint64 *params);
typedef void (* PTR_glGenSamplers) (GLsizei count, GLuint *samplers);
typedef void (* PTR_glDeleteSamplers) (GLsizei count, const GLuint *samplers);
typedef GLboolean (* PTR_glIsSampler) (GLuint sampler);
typedef void (* PTR_glBindSampler) (GLuint unit, GLuint sampler);
typedef void (* PTR_glSamplerParameteri) (GLuint sampler, GLenum pname, GLint param);
typedef void (* PTR_glSamplerParameteriv) (GLuint sampler, GLenum pname, const GLint *param);
typedef void (* PTR_glSamplerParameterf) (GLuint sampler, GLenum pname, GLfloat param);
typedef void (* PTR_glSamplerParameterfv) (GLuint sampler, GLenum pname, const GLfloat *param);
typedef void (* PTR_glGetSamplerParameteriv) (GLuint sampler, GLenum pname, GLint *params);
typedef void (* PTR_glGetSamplerParameterfv) (GLuint sampler, GLenum pname, GLfloat *params);
typedef void (* PTR_glVertexAttribDivisor) (GLuint index, GLuint divisor);
typedef void (* PTR_glBindTransformFeedback) (GLenum target, GLuint id);
typedef void (* PTR_glDeleteTransformFeedbacks) (GLsizei n, const GLuint *ids);
typedef void (* PTR_glGenTransformFeedbacks) (GLsizei n, GLuint *ids);
typedef GLboolean (* PTR_glIsTransformFeedback) (GLuint id);
typedef void (* PTR_glPauseTransformFeedback) (void);
typedef void (* PTR_glResumeTransformFeedback) (void);
typedef void (* PTR_glGetProgramBinary) (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
typedef void (* PTR_glProgramBinary) (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
typedef void (* PTR_glProgramParameteri) (GLuint program, GLenum pname, GLint value);
typedef void (* PTR_glInvalidateFramebuffer) (GLenum target, GLsizei numAttachments, const GLenum *attachments);
typedef void (* PTR_glInvalidateSubFramebuffer) (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (* PTR_glTexStorage2D) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (* PTR_glTexStorage3D) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (* PTR_glGetInternalformativ) (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params);


// GL_ES_VERSION_3_1
typedef void (* PTR_glDispatchCompute) (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
typedef void (* PTR_glDispatchComputeIndirect) (GLintptr indirect);
typedef void (* PTR_glDrawArraysIndirect) (GLenum mode, const void *indirect);
typedef void (* PTR_glDrawElementsIndirect) (GLenum mode, GLenum type, const void *indirect);
typedef void (* PTR_glFramebufferParameteri) (GLenum target, GLenum pname, GLint param);
typedef void (* PTR_glGetFramebufferParameteriv) (GLenum target, GLenum pname, GLint *params);
typedef void (* PTR_glGetProgramInterfaceiv) (GLuint program, GLenum programInterface, GLenum pname, GLint *params);
typedef GLuint (* PTR_glGetProgramResourceIndex) (GLuint program, GLenum programInterface, const GLchar *name);
typedef void (* PTR_glGetProgramResourceName) (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
typedef void (* PTR_glGetProgramResourceiv) (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params);
typedef GLint (* PTR_glGetProgramResourceLocation) (GLuint program, GLenum programInterface, const GLchar *name);
typedef void (* PTR_glUseProgramStages) (GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (* PTR_glActiveShaderProgram) (GLuint pipeline, GLuint program);
typedef GLuint (* PTR_glCreateShaderProgramv) (GLenum type, GLsizei count, const GLchar *const*strings);
typedef void (* PTR_glBindProgramPipeline) (GLuint pipeline);
typedef void (* PTR_glDeleteProgramPipelines) (GLsizei n, const GLuint *pipelines);
typedef void (* PTR_glGenProgramPipelines) (GLsizei n, GLuint *pipelines);
typedef GLboolean (* PTR_glIsProgramPipeline) (GLuint pipeline);
typedef void (* PTR_glGetProgramPipelineiv) (GLuint pipeline, GLenum pname, GLint *params);
typedef void (* PTR_glProgramUniform1i) (GLuint program, GLint location, GLint v0);
typedef void (* PTR_glProgramUniform2i) (GLuint program, GLint location, GLint v0, GLint v1);
typedef void (* PTR_glProgramUniform3i) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (* PTR_glProgramUniform4i) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (* PTR_glProgramUniform1ui) (GLuint program, GLint location, GLuint v0);
typedef void (* PTR_glProgramUniform2ui) (GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (* PTR_glProgramUniform3ui) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (* PTR_glProgramUniform4ui) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (* PTR_glProgramUniform1f) (GLuint program, GLint location, GLfloat v0);
typedef void (* PTR_glProgramUniform2f) (GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (* PTR_glProgramUniform3f) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (* PTR_glProgramUniform4f) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (* PTR_glProgramUniform1iv) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (* PTR_glProgramUniform2iv) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (* PTR_glProgramUniform3iv) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (* PTR_glProgramUniform4iv) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (* PTR_glProgramUniform1uiv) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (* PTR_glProgramUniform2uiv) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (* PTR_glProgramUniform3uiv) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (* PTR_glProgramUniform4uiv) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (* PTR_glProgramUniform1fv) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (* PTR_glProgramUniform2fv) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (* PTR_glProgramUniform3fv) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (* PTR_glProgramUniform4fv) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (* PTR_glProgramUniformMatrix2fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glProgramUniformMatrix3fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glProgramUniformMatrix4fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glProgramUniformMatrix2x3fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glProgramUniformMatrix3x2fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glProgramUniformMatrix2x4fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glProgramUniformMatrix4x2fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glProgramUniformMatrix3x4fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glProgramUniformMatrix4x3fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* PTR_glValidateProgramPipeline) (GLuint pipeline);
typedef void (* PTR_glGetProgramPipelineInfoLog) (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (* PTR_glBindImageTexture) (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
typedef void (* PTR_glGetBooleani_v) (GLenum target, GLuint index, GLboolean *data);
typedef void (* PTR_glMemoryBarrier) (GLbitfield barriers);
typedef void (* PTR_glMemoryBarrierByRegion) (GLbitfield barriers);
typedef void (* PTR_glTexStorage2DMultisample) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (* PTR_glGetMultisamplefv) (GLenum pname, GLuint index, GLfloat *val);
typedef void (* PTR_glSampleMaski) (GLuint maskNumber, GLbitfield mask);
typedef void (* PTR_glGetTexLevelParameteriv) (GLenum target, GLint level, GLenum pname, GLint *params);
typedef void (* PTR_glGetTexLevelParameterfv) (GLenum target, GLint level, GLenum pname, GLfloat *params);
typedef void (* PTR_glBindVertexBuffer) (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (* PTR_glVertexAttribFormat) (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (* PTR_glVertexAttribIFormat) (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (* PTR_glVertexAttribBinding) (GLuint attribindex, GLuint bindingindex);
typedef void (* PTR_glVertexBindingDivisor) (GLuint bindingindex, GLuint divisor);


// GL_ES_VERSION_3_2
typedef void (* PTR_glBlendBarrier) (void);
typedef void (* PTR_glCopyImageSubData) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (* PTR_glDebugMessageControl) (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
typedef void (* PTR_glDebugMessageInsert) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
//typedef void (* PTR_glDebugMessageCallback) (GLDEBUGPROC callback, const void *userParam);
typedef GLuint (* PTR_glGetDebugMessageLog) (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
typedef void (* PTR_glPushDebugGroup) (GLenum source, GLuint id, GLsizei length, const GLchar *message);
typedef void (* PTR_glPopDebugGroup) (void);
typedef void (* PTR_glObjectLabel) (GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
typedef void (* PTR_glGetObjectLabel) (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (* PTR_glObjectPtrLabel) (const void *ptr, GLsizei length, const GLchar *label);
typedef void (* PTR_glGetObjectPtrLabel) (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (* PTR_glGetPointerv) (GLenum pname, void **params);
typedef void (* PTR_glEnablei) (GLenum target, GLuint index);
typedef void (* PTR_glDisablei) (GLenum target, GLuint index);
typedef void (* PTR_glBlendEquationi) (GLuint buf, GLenum mode);
typedef void (* PTR_glBlendEquationSeparatei) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (* PTR_glBlendFunci) (GLuint buf, GLenum src, GLenum dst);
typedef void (* PTR_glBlendFuncSeparatei) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (* PTR_glColorMaski) (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef GLboolean (* PTR_glIsEnabledi) (GLenum target, GLuint index);
typedef void (* PTR_glDrawElementsBaseVertex) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (* PTR_glDrawRangeElementsBaseVertex) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (* PTR_glDrawElementsInstancedBaseVertex) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
typedef void (* PTR_glFramebufferTexture) (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (* PTR_glPrimitiveBoundingBox) (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
typedef GLenum (* PTR_glGetGraphicsResetStatus) (void);
typedef void (* PTR_glReadnPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
typedef void (* PTR_glGetnUniformfv) (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
typedef void (* PTR_glGetnUniformiv) (GLuint program, GLint location, GLsizei bufSize, GLint *params);
typedef void (* PTR_glGetnUniformuiv) (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
typedef void (* PTR_glMinSampleShading) (GLfloat value);
typedef void (* PTR_glPatchParameteri) (GLenum pname, GLint value);
typedef void (* PTR_glTexParameterIiv) (GLenum target, GLenum pname, const GLint *params);
typedef void (* PTR_glTexParameterIuiv) (GLenum target, GLenum pname, const GLuint *params);
typedef void (* PTR_glGetTexParameterIiv) (GLenum target, GLenum pname, GLint *params);
typedef void (* PTR_glGetTexParameterIuiv) (GLenum target, GLenum pname, GLuint *params);
typedef void (* PTR_glSamplerParameterIiv) (GLuint sampler, GLenum pname, const GLint *param);
typedef void (* PTR_glSamplerParameterIuiv) (GLuint sampler, GLenum pname, const GLuint *param);
typedef void (* PTR_glGetSamplerParameterIiv) (GLuint sampler, GLenum pname, GLint *params);
typedef void (* PTR_glGetSamplerParameterIuiv) (GLuint sampler, GLenum pname, GLuint *params);
typedef void (* PTR_glTexBuffer) (GLenum target, GLenum internalformat, GLuint buffer);
typedef void (* PTR_glTexBufferRange) (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (* PTR_glTexStorage3DMultisample) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);