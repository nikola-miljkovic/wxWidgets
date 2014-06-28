///////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/chkconf.h
// Purpose:     Android-specific configuration options checks
// Author:      Zsolt Bakcsi
// Modified by:
// Created:     2011-12-08
// RCS-ID:
// Copyright:   (c) wxWidgets team
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_CHKCONF_H_
#define _WX_ANDROID_CHKCONF_H_

// ----------------------------------------------------------------------------
// Disable features which don't work (yet) or don't make sense under Android.
// ----------------------------------------------------------------------------

// please keep the list in alphabetic order except for closely related settings
// (e.g. wxUSE_ENH_METAFILE is put immediately after wxUSE_METAFILE)


// ----------------------------------------------------------------------------
// These are disabled because they are TODO. Or to decide whether to do or not.
// ----------------------------------------------------------------------------

#undef wxUSE_CONFIG
#define wxUSE_CONFIG 0

// This compiles, but not yet tested, so:
#undef wxUSE_CONSOLE_EVENTLOOP
#define wxUSE_CONSOLE_EVENTLOOP 0

#undef wxUSE_DEBUGREPORT
#define wxUSE_DEBUGREPORT 0

#undef wxUSE_DIALUP_MANAGER
#define wxUSE_DIALUP_MANAGER 0

#undef wxUSE_DISPLAY
#define wxUSE_DISPLAY 0

#undef wxUSE_DYNAMIC_LOADER
#define wxUSE_DYNAMIC_LOADER 0

#undef wxUSE_DYNLIB_CLASS
#define wxUSE_DYNLIB_CLASS 0

#undef wxUSE_FSVOLUME
#define wxUSE_FSVOLUME 0

#undef wxHAS_UTF8_FONTS
#define wxHAS_UTF8_FONTS 1

// Compile-time errors when last tried (wxHAS_INOTIFY, wxHAS_KQUEUE)
#undef wxUSE_FSWATCHER
#define wxUSE_FSWATCHER 0

// Seems like Android lacks locale support. TODO: check!
// Hint:
// http://groups.google.com/group/android-ndk/browse_thread/thread/ffd012a047ec2392?pli=1
//  "Android doesn't provide locale support in its C and C++ runtimes.
//  This is handled at a higher-level in the application stack, using ICU
//  (which is not exposed by the NDK, since the ABI is very volatile, and the
//  set of built-in tables varies from device to device, based on customization
//  / size reasons).
//  You might want to use a different locale implementation. The STLport and GNU
//  libstdc++ do provide then if you're using C++."
#undef wxUSE_INTL
#define wxUSE_INTL 0

#undef wxUSE_XLOCALE
#define wxUSE_XLOCALE 0

#undef  wxUSE_ACCEL
#define  wxUSE_ACCEL 0

#undef wxUSE_IPC
#define wxUSE_IPC 0

#undef wxUSE_MEDIACTRL
#define wxUSE_MEDIACTRL 0

#undef wxUSE_ON_FATAL_EXCEPTION
#define wxUSE_ON_FATAL_EXCEPTION 0

#undef wxUSE_REGEX
#define wxUSE_REGEX 0

#undef wxUSE_STDPATHS
#define wxUSE_STDPATHS 0

#undef wxUSE_STACKWALKER
#define wxUSE_STACKWALKER 0

#undef wxUSE_MIMETYPE
#define wxUSE_MIMETYPE 0

#undef wxUSE_REGEX
#define wxUSE_REGEX 0

#undef wxUSE_REGKEY
#define wxUSE_REGKEY 0

#undef wxUSE_SNGLINST_CHECKER
#define wxUSE_SNGLINST_CHECKER 0

#undef wxUSE_SOUND
#define wxUSE_SOUND 0

#undef wxUSE_SYSTEM_OPTIONS
#define wxUSE_SYSTEM_OPTIONS 0

#undef wxUSE_XRC
#define wxUSE_XRC 0

#undef wxUSE_GRAPHICS_CONTEXT
#define wxUSE_GRAPHICS_CONTEXT 0 

#undef wxUSE_MSGDLG
#define wxUSE_MSGDLG 0

#undef wxUSE_FILEDLG
#define wxUSE_FILEDLG 0

#undef wxUSE_DOC_VIEW_ARCHITECTURE
#define wxUSE_DOC_VIEW_ARCHITECTURE 0

#undef wxUSE_MENUS
#define wxUSE_MENUS 0

#undef wxUSE_ANIMATIONCTRL
#define wxUSE_ANIMATIONCTRL 0

#undef wxUSE_RIBBON
#define wxUSE_RIBBON 0

#undef wxUSE_PROPGRID
#define wxUSE_PROPGRID 0

#undef wxUSE_RICHTEXT
#define wxUSE_RICHTEXT 0

#undef wxUSE_STC
#define wxUSE_STC 0

#undef wxUSE_XML
#define wxUSE_XML 0

#undef wxUSE_TIMEPICKCTRL
#define wxUSE_TIMEPICKCTRL 0

#undef wxUSE_NOTIFICATION_MESSAGE
#define wxUSE_NOTIFICATION_MESSAGE 0

#undef wxUSE_RICHTOOLTIP
#define wxUSE_RICHTOOLTIP 0

#undef wxUSE_BANNERWINDOW
#define wxUSE_BANNERWINDOW 0

#undef wxUSE_DATEPICKCTRL
#define wxUSE_DATEPICKCTRL 0

#undef wxUSE_EDITABLELISTBOX
#define wxUSE_EDITABLELISTBOX 0

#undef wxUSE_ABOUTDLG
#define wxUSE_ABOUTDLG 0

#undef wxUSE_HYPERLINKCTRL
#define wxUSE_HYPERLINKCTRL 0

#undef wxUSE_TASKBARICON
#define wxUSE_TASKBARICON 0

#undef wxUSE_RICHMSGDLG 
#define wxUSE_RICHMSGDLG 0

#undef wxUSE_TEXTDLG
#define wxUSE_TEXTDLG 0

#undef wxUSE_BMPBUTTON
#define wxUSE_BMPBUTTON 0

#undef wxUSE_CHOICE
#define wxUSE_CHOICE 0

#undef wxUSE_CLIPBOARD
#define wxUSE_CLIPBOARD 0

#undef wxUSE_CARET 
#define wxUSE_CARET 0

#undef wxUSE_GAUGE 
#define wxUSE_GAUGE 0

#undef wxUSE_GRID 
#define wxUSE_GRID 0

#undef wxUSE_HEADERCTRL 
#define wxUSE_HEADERCTRL 0 

#undef wxUSE_LISTBOX 
#define wxUSE_LISTBOX 0

#undef wxUSE_LISTCTRL 
#define wxUSE_LISTCTRL 0

#undef wxUSE_FILECTRL
#define wxUSE_FILECTRL 0

#undef wxUSE_FILE_HISTORY
#define wxUSE_FILE_HISTORY 0

#undef wxUSE_FILEPICKERCTRL
#define wxUSE_FILEPICKERCTRL 0

#undef wxUSE_DIRPICKERCTRL
#define wxUSE_DIRPICKERCTRL 0

#undef wxUSE_FONTPICKERCTRL
#define wxUSE_FONTPICKERCTRL 0

#undef wxUSE_COLOURPICKERCTRL
#define wxUSE_COLOURPICKERCTRL 0

#undef wxUSE_RADIOBOX
#define wxUSE_RADIOBOX 0

#undef wxUSE_RADIOBTN 
#define wxUSE_RADIOBTN 0

#undef wxUSE_SCROLLBAR 
#define wxUSE_SCROLLBAR 0 

#undef wxUSE_SLIDER 
#define wxUSE_SLIDER 0

#undef wxUSE_SPINBTN 
#define wxUSE_SPINBTN 0

#undef wxUSE_SPINCTRL 
#define wxUSE_SPINCTRL 0

#undef wxUSE_STATBMP 
#define wxUSE_STATBMP 0

#undef wxUSE_STATBOX 
#define wxUSE_STATBOX 0

#undef wxUSE_STATLINE 
#define wxUSE_STATLINE 0

#undef wxUSE_STATTEXT 
#define wxUSE_STATTEXT 0

#undef wxUSE_TREECTRL 
#define wxUSE_TREECTRL 0

#undef wxUSE_TREELISTCTRL
#define wxUSE_TREELISTCTRL 0

#undef wxUSE_COMMANDLINKBUTTON
#define wxUSE_COMMANDLINKBUTTON 0

#undef wxUSE_COLLPANE
#define wxUSE_COLLPANE 0

#undef wxUSE_DATAOBJ
#define wxUSE_DATAOBJ 0

#undef wxUSE_DATAVIEWCTRL
#define wxUSE_DATAVIEWCTRL 0

#undef wxUSE_CHOICEDLG
#define wxUSE_CHOICEDLG 0

#undef wxUSE_PROGRESSDLG
#define wxUSE_PROGRESSDLG 0

#undef wxUSE_FONTDLG
#define wxUSE_FONTDLG 0

#undef wxUSE_NUMBERDLG
#define wxUSE_NUMBERDLG 0

#undef wxUSE_DIRDLG
#define wxUSE_DIRDLG 0

#undef wxUSE_STARTUP_TIPS
#define wxUSE_STARTUP_TIPS 0

#undef wxUSE_WIZARDDLG
#define wxUSE_WIZARDDLG 0

#undef wxUSE_LOG_DIALOG
#define wxUSE_LOG_DIALOG 0

#undef wxUSE_TREEBOOK
#define wxUSE_TREEBOOK 0

#undef wxUSE_COMBOCTRL
#define wxUSE_COMBOCTRL 0

#undef wxUSE_ODCOMBOBOX
#define wxUSE_ODCOMBOBOX 0

#undef wxUSE_BITMAPCOMBOBOX
#define wxUSE_BITMAPCOMBOBOX 0

#undef wxUSE_DRAG_AND_DROP
#define wxUSE_DRAG_AND_DROP 0

#undef wxUSE_SEARCHCTRL
#define wxUSE_SEARCHCTRL 0

#undef wxUSE_TOGGLEBTN
#define wxUSE_TOGGLEBTN 0

#undef wxUSE_STATTEXT
#define wxUSE_STATTEXT 0

#undef wxUSE_BUSYINFO
#define wxUSE_BUSYINFO 0

#undef wxUSE_INFOBAR
#define wxUSE_INFOBAR 0

#undef wxUSE_LOGGUI
#define wxUSE_LOGGUI 0

#undef wxUSE_MARKUP
#define wxUSE_MARKUP 0

// ----------------------------------------------------------------------------
// GUI is completely TODO.
// ----------------------------------------------------------------------------

#undef wxUSE_DRAGIMAGE
#define wxUSE_DRAGIMAGE 0

#undef wxUSE_COMBOBOX
#define wxUSE_COMBOBOX 0

#undef wxUSE_CALENDARCTRL
#define wxUSE_CALENDARCTRL 0

#undef wxUSE_TOOLBAR
#define wxUSE_TOOLBAR 0

#undef wxUSE_TOOLBOOK
#define wxUSE_TOOLBOOK 0

#undef wxUSE_TEXTCTRL
#define wxUSE_TEXTCTRL 0

#undef wxUSE_LOGWINDOW
#define wxUSE_LOGWINDOW 0

#undef wxUSE_ARTPROVIDER_TANGO
#define wxUSE_ARTPROVIDER_TANGO 0

#undef wxUSE_SVG
#define wxUSE_SVG 0

#undef wxUSE_TOOLBAR_NATIVE
#define wxUSE_TOOLBAR_NATIVE 0

#undef wxUSE_COLOURPICKERCTRL
#define wxUSE_COLOURPICKERCTRL 0

#undef wxUSE_PREFERENCES_EDITOR
#define wxUSE_PREFERENCES_EDITOR 0

#undef wxUSE_COLOURDLG
#define wxUSE_COLOURDLG 0

#undef wxUSE_FONTENUM
#define wxUSE_FONTENUM 0

#undef wxUSE_FONTMAP
#define wxUSE_FONTMAP 0

#undef wxUSE_HELP
#define wxUSE_HELP 0

#undef wxUSE_HTML
#define wxUSE_HTML 0

#undef wxUSE_LISTBOOK
#define wxUSE_LISTBOOK 0

#undef wxUSE_OWNER_DRAWN
#define wxUSE_OWNER_DRAWN 0

#undef wxUSE_NOTEBOOK
#define wxUSE_NOTEBOOK 0

#undef wxUSE_RICHEDIT
#define wxUSE_RICHEDIT 0
#undef wxUSE_RICHEDIT2
#define wxUSE_RICHEDIT2 0

#undef wxUSE_STATUSBAR
#define wxUSE_STATUSBAR 0

// Are tooltips useful at all on a touch screen?
#undef wxUSE_TOOLTIPS
#define wxUSE_TOOLTIPS 0

#undef wxUSE_WXHTML_HELP
#define wxUSE_WXHTML_HELP 0

#undef wxUSE_CHECKLISTBOX
#define wxUSE_CHECKLISTBOX 0

#undef wxUSE_REARRANGECTRL
#define wxUSE_REARRANGECTRL 0

#undef wxUSE_CHOICEBOOK
#define wxUSE_CHOICEBOOK 0

#undef wxUSE_CHECKBOX
#define wxUSE_CHECKBOX 0

// is there need for this on android?
#undef wxUSE_POPUPWIN
#define wxUSE_POPUPWIN 0

// ----------------------------------------------------------------------------
// All image classes are TODO.
// ----------------------------------------------------------------------------

#undef wxUSE_IMAGE
#define wxUSE_IMAGE         0

#undef wxUSE_LIBPNG
#define wxUSE_LIBPNG        0

#undef wxUSE_LIBJPEG
#define wxUSE_LIBJPEG       0

#undef wxUSE_LIBTIFF
#define wxUSE_LIBTIFF       0

#undef wxUSE_TGA
#define wxUSE_TGA           0

#undef wxUSE_GIF
#define wxUSE_GIF           0

#undef wxUSE_PNM
#define wxUSE_PNM           0

#undef wxUSE_PCX
#define wxUSE_PCX           0

#undef wxUSE_IFF
#define wxUSE_IFF           0

#undef wxUSE_XPM
#define wxUSE_XPM           0

#undef wxUSE_ICO_CUR
#define wxUSE_ICO_CUR       0

#undef wxUSE_PALETTE
#define wxUSE_PALETTE       0


// ----------------------------------------------------------------------------
// These are disabled because they don't make sense, are not supported, or
// would require too much effort.
// ----------------------------------------------------------------------------

// Unnecessary under Android, probably it doesn't even compile.
#undef wxUSE_AUI
#define wxUSE_AUI 0

// No command line on Android.
#undef wxUSE_CMDLINE_PARSER
#define wxUSE_CMDLINE_PARSER 0

// No joystick on Android devices.
// (What about using the direction sensor or the accelerometer?)
#undef wxUSE_JOYSTICK
#define wxUSE_JOYSTICK 0

// No MDI under Android. Well, no GUI at all (yet).
#undef wxUSE_MDI
#define wxUSE_MDI 0
#undef wxUSE_MDI_ARCHITECTURE
#define wxUSE_MDI_ARCHITECTURE 0

// No printing support on Android (2011).
// Although 3rd party SDKs may exist (I know of one payware).
#undef wxUSE_PRINTING_ARCHITECTURE
#define wxUSE_PRINTING_ARCHITECTURE 0


#endif // _WX_ANDROID_CHKCONF_H_
