/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/XXUnknownSuperclass.h>


@interface IMFileManager : XXUnknownSuperclass {
}
+ (id)defaultHFSFileManager;	// 0xaaf5
+ (id)defaultManager;	// 0xaae5
- (id)UTITypeOfPathExtension:(id)pathExtension;	// 0xb075
- (id)UTITypeOfPath:(id)path;	// 0xafb1
- (id)MIMETypeOfPath:(id)path;	// 0xaf2d
- (id)MIMETypeOfPathExtension:(id)pathExtension;	// 0xaef5
- (id)pathExtensionForMIMEType:(id)mimetype;	// 0xae8d
- (id)displayNameOfFileWithName:(id)name hfsFlags:(unsigned short)flags;	// 0xae35
- (id)kindStringForFileWithName:(id)name hfsType:(unsigned long)type hfsCreator:(unsigned long)creator hfsFlags:(unsigned short)flags;	// 0xadd9
- (id)kindStringForFile:(id)file;	// 0xad81
- (BOOL)setAttributes:(id)attributes ofItemAtPath:(id)path error:(id *)error;	// 0xad45
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0xad15
- (id)createTempFileBasedOnName:(id)name hfsType:(unsigned long)type hfsCreator:(unsigned long)creator hfsFlags:(unsigned short)flags;	// 0xaba9
- (BOOL)retainWeakReference;	// 0xaba5
- (BOOL)allowsWeakReference;	// 0xaba1
@end
