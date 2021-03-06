/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/XXUnknownSuperclass.h>

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __XXUnknownSuperclass__
#define __XXUnknownSuperclass__ 1
@interface XXUnknownSuperclass : NSObject
@end
#endif

@interface XXUnknownSuperclass (DDExtension)
- (void)dd_resetResults;	// 0x6531
@end

@interface XXUnknownSuperclass (DDCleanupExtensions)
- (void)dd_removeResultLinks;	// 0x6a71
@end

@interface XXUnknownSuperclass (DDExtensions)
- (id)dd_stringValue;	// 0x8739
@end

@interface XXUnknownSuperclass (DDExtensions)
+ (id)dd_iteratorForDocument:(id)document;	// 0x98d9
- (id)dd_doUrlificationForQuery:(DDScanQuery *)query forResults:(id)results referenceDate:(id)date document:(id)document DOMWasModified:(BOOL *)modified URLificationBlock:(id)block;	// 0x8f35
- (id)dd_collectDDRangesForQuery:(DDScanQuery *)query forResults:(id)results;	// 0x8aa1
- (DDScanQuery *)dd_newQueryStopRange:(id *)range;	// 0x88e9
@end

@interface XXUnknownSuperclass (DDExtensions_Private)
- (BOOL)dd_checkCurrentRangeAgainstString:(CFStringRef)string;	// 0x9989
@end

@interface XXUnknownSuperclass (DDExtensions)
- (BOOL)dd_searchForLinkEndNode:(id)linkEndNode;	// 0x9a99
@end
