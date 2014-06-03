///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/font.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include <wx/font.h>

bool wxFont::Create( int pointSize,
                     wxFontFamily family,
                     wxFontStyle style,
                     wxFontWeight weight,
                     bool underlined,
                     const wxString& face,
                     wxFontEncoding encoding )
{
	return true;
}

wxFont::wxFont(const wxNativeFontInfo& info)
{
}


wxFont::wxFont(const wxFontInfo& info)
{
}

wxFont::~wxFont()
{
}

int wxFont::GetPointSize() const 
{
	return 0;
}

wxFontStyle wxFont::GetStyle() const 
{
	return wxFontStyle();
}

wxFontWeight wxFont::GetWeight() const 
{
	return wxFontWeight();
}

wxString wxFont::GetFaceName() const 
{
	return wxString();
}

bool wxFont::GetUnderlined() const 
{
	return true;
}

bool wxFont::GetStrikethrough() const 
{
	return true;
}

wxFontEncoding wxFont::GetEncoding() const 
{
	return wxFontEncoding();
}

const wxNativeFontInfo *wxFont::GetNativeFontInfo() const
{
	return NULL;
}

bool wxFont::IsFixedWidth() const 
{
	return true;
}

void wxFont::SetPointSize(int pointSize)
{
}

void wxFont::SetFamily(wxFontFamily family)
{
}

void wxFont::SetStyle(wxFontStyle style)
{
}

void wxFont::SetWeight(wxFontWeight weight)
{
}

bool wxFont::SetFaceName(const wxString& faceName)
{
}

void wxFont::SetUnderlined(bool underlined)
{
}

void wxFont::SetStrikethrough(bool strikethrough)
{
}

void wxFont::SetEncoding(wxFontEncoding encoding)
{
}

void wxFont::DoSetNativeFontInfo( const wxNativeFontInfo& info )
{
}

wxGDIRefData* wxFont::CreateGDIRefData() const 
{
}

wxGDIRefData* wxFont::CloneGDIRefData(const wxGDIRefData* data) const 
{
}

wxFontFamily wxFont::DoGetFamily() const 
{
	return wxFontFamily();
}
