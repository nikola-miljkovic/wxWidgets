///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/settings.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/settings.h"

wxColour wxSystemSettingsNative::GetColour(wxSystemColour index)
{
	return wxColour();
}

wxFont wxSystemSettingsNative::GetFont(wxSystemFont index)
{
	return wxFont();
}

int wxSystemSettingsNative::GetMetric(wxSystemMetric index, wxWindow* win)
{
      	return 0;
}

bool wxSystemSettingsNative::HasFeature(wxSystemFeature index)
{
	return true;
}
