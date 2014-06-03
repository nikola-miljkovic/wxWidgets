///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/uiaction.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/uiaction.h"

bool wxUIActionSimulator::MouseDown(int button)
{
	return false;
}

bool wxUIActionSimulator::MouseMove(long x, long y)
{
	return false;
}

bool wxUIActionSimulator::MouseUp(int button)
{
	return false;
}

bool wxUIActionSimulator::DoKey(int keycode, int modifiers, bool isDown)
{
	return false;
}

