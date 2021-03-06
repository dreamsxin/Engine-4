//
//  Author: Shervin Aflatooni
//

#ifndef TEXTURE_DATA_H
#define TEXTURE_DATA_H

#if defined(GLES2)
  #include <GLES2/gl2.h>
#elif defined(GLES3)
  #include <GLES3/gl3.h>
#else
  #include <GL/glew.h>
#endif

#include "SharedResource.h"

class TextureData : public SharedResource
{
public:
  TextureData(int width, int height, const unsigned char* data, GLenum textureTarget, GLfloat filter);
  virtual ~TextureData(void);

  void createTexture(int width, int height, const unsigned char* data, GLenum textureTarget, GLfloat filter);
  void bind(unsigned int unit) const;

private:
  GLenum m_textureTarget;
  GLuint m_textureId;
};

#endif
