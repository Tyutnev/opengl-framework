#pragma once

#include "OpenGL.hpp"

namespace GL
{
	/**
	 * Init OpenGL
	 */
	class Init
	{
	public:
		/**
		 * Setup Open GL
		 * Set major and minor version
		 */
		static void init(int major, int minor);

		static void free();
	};
}