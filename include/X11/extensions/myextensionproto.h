#ifndef MYEXTENSIONRPROTO_H_
#define MYEXTENSIONRPROTO_H_

#include <X11/extensions/myextension.h>

#define Window CARD32
#define Drawable CARD32
#define Font CARD32
#define Pixmap CARD32
#define Cursor CARD32
#define Colormap CARD32
#define GContext CARD32
#define Atom CARD32
#define VisualID CARD32
#define Time CARD32
#define KeyCode CARD8
#define KeySym CARD32

#define X_MyextensionQueryVersion   0

typedef struct _MyextensionQueryVersion {
    CARD8 reqType;		/* always MyextensionReqCode */
    CARD8 saverReqType;		/* always X_MyextensionQueryVersion */
    CARD16 length;
    CARD8 clientMajor;
    CARD8 clientMinor;
    CARD16 unused;
} xMyextensionQueryVersionReq;
#define sz_xMyextensionQueryVersionReq	8

typedef struct {
    CARD8 type;			/* X_Reply */
    CARD8 unused;			/* not used */
    CARD16 sequenceNumber;
    CARD32 length;
    CARD16 majorVersion;	/* major version of protocol */
    CARD16 minorVersion;	/* minor version of protocol */
    CARD32 pad0;
    CARD32 pad1;
    CARD32 pad2;
    CARD32 pad3;
    CARD32 pad4;
} xMyextensionQueryVersionReply;
#define sz_xMyextensionQueryVersionReply	32

#define X_MyextensionLockScreen 2
typedef struct _xMyextensionLockScreen {
    CARD8  major_opcode;
    CARD8  minor_opcode;
    CARD16 length;
} xMyextensionLockScreenReq;
#define sz_xMyextensionLockScreenReq	8

typedef struct {
    CARD8      response_type;
    BYTE       state;
    CARD16     sequence;
    CARD32     length;
    Window     saver_window;
    CARD8      pad0[20];
} xMyextensionLockScreenReply;
#define sz_xMyextensionLockScreenReply	32 /* might not be the correct size
                                            * no idea how to calculate it */

#define X_MyextensionUnlockScreen 3

#define XCB_MYEXTENSION_UNLOCK_SCREEN 3

typedef struct _xMyextensionUnlockScreen {
    CARD8  major_opcode;
    CARD8  minor_opcode;
    CARD16 length;
} xMyextensionUnlockScreenReq;
#define sz_xMyextensionUnlockScreenReq	8

typedef struct {
    CARD8      response_type;
    CARD8      state;
    CARD16     sequence;
    CARD32     length;
    Window     saver_window;
    CARD8      pad0[20];
} xMyextensionUnlockScreenReply;
#define sz_xMyextensionUnlockScreenReply	32 /* might not be the correct size
                                                * no idea how to calculate it */


#undef Window
#undef Drawable
#undef Font
#undef Pixmap
#undef Cursor
#undef Colormap
#undef GContext
#undef Atom
#undef VisualID
#undef Time
#undef KeyCode
#undef KeySym

#endif /* _MYEXTENSIONPROTO_H_ */
