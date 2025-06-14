#ifndef VERTEXATTRIBUTE_INCLUDED
#define VERTEXATTRIBUTE_INCLUDED

#include <GL/glew.h>

namespace Clb184 {

	struct attribute_info_t {
		GLuint index = 0;
		GLint size = 0;
		GLenum type = GL_FLOAT;
		GLboolean normalized = GL_FALSE;
		GLuint ptr = 0;
	};

	struct buffer_info_t {
		GLuint buffer = -1;
		GLuint stride = 0;
	};

	class CVertexAttribute {
	public:
		CVertexAttribute();
		~CVertexAttribute();

		bool Create();
		// You have to bind a vertex buffer first to use this
		void SetAttributeData(int num_attributes, const attribute_info_t* stride_data, const GLuint* buffers, const GLintptr* offsets, const GLsizei* strides);
		void Bind();

	private:
		GLuint m_VertexArrayID;
		int m_Stride;
	};

}
#endif