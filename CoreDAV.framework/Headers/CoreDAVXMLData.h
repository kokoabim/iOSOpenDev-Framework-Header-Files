/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/XXUnknownSuperclass.h>
#import <CoreDAV/CoreDAV-Structs.h>

@class NSData;

@interface CoreDAVXMLData : XXUnknownSuperclass {
@private
	BOOL _shouldAddFormattingSpaces;	// 4 = 0x4
	xmlTextWriter *_writer;	// 8 = 0x8
	xmlDoc *_doc;	// 12 = 0xc
	BOOL _docHasEnded;	// 16 = 0x10
	CFDictionaryRef _seenURIsToPrefixes;	// 20 = 0x14
	CFDictionaryRef _seenURIsToDepth;	// 24 = 0x18
	CFArrayRef _elementStack;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x20309; 
@property(assign) BOOL shouldAddFormattingSpaces;	// G=0x203a9; S=0x203b9; @synthesize=_shouldAddFormattingSpaces
// declared property setter: - (void)setShouldAddFormattingSpaces:(BOOL)addFormattingSpaces;	// 0x203b9
// declared property getter: - (BOOL)shouldAddFormattingSpaces;	// 0x203a9
// declared property getter: - (id)data;	// 0x20309
- (void)appendElement:(id)element inNamespace:(id)aNamespace withStringContentAsCDATA:(id)stringContentAsCDATA withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x2004d
- (void)appendElement:(id)element inNamespace:(id)aNamespace withStringContent:(id)stringContent withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x1ff29
- (void)endElement:(id)element inNamespace:(id)aNamespace;	// 0x1fc9d
- (void)startElement:(id)element inNamespace:(id)aNamespace withAttributes:(id)attributes;	// 0x1fb0d
- (void)startElement:(id)element inNamespace:(id)aNamespace withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x1fa3d
- (void)_startElement:(id)element inNamespace:(id)aNamespace withAttributeNamesAndValues:(id)attributeNamesAndValues attributes:(void *)attributes;	// 0x1f969
- (void)_startElement:(id)element inNamespace:(id)aNamespace;	// 0x1f7fd
- (const char *)_prefixForNameSpace:(const char *)nameSpace;	// 0x1f509
- (void)dealloc;	// 0x1f481
- (id)init;	// 0x1f385
@end
