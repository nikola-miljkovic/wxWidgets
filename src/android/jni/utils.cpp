///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/utils.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include <wx/utils.h>

void wxDisplaySize(int *width, int *height)
{
}

void wxDisplaySizeMM(int *width, int *height)
{
}

wxMouseState wxGetMouseState()
{
	return wxMouseState();
}

void wxGetMousePosition(int* x, int* y)
{

}

bool wxGetKeyState(wxKeyCode key)
{
    return false;
}

bool wxColourDisplay()
{
    // perhaps always true
    return true;
}

void wxClientDisplayRect(int *x,int *y,int *width,int *height)
{
}


