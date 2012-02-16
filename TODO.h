// TODO: put in frameworks that use them:
typedef struct __CFRuntimeBase {
    uintptr_t _cfisa;
    uint8_t _cfinfo[4];
#if __LP64__
    uint32_t _rc;
#endif
} CFRuntimeBase;
typedef struct __CFURLStorageSession* CFURLStorageSessionRef;
typedef struct CFUserNotification *CFUserNotificationRef;

// TODO: figure out unknown types:
typedef struct { } CGPDFSelectionRef;
typedef struct { } CFPhoneNumberRef;
typedef struct { } CGPDFFontRef;
typedef struct { } CGImageSourceRef;
typedef struct { } CGPDFLayoutRef;
typedef struct { } CGDisplayListRef;
@class UIPDFPage, CPGraphicObject;

// TODO: place definition in appropriate files
@interface XXUnknownSuperclass : NSObject
@end
