/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WBDocument.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/OfficeImport-Structs.h>


__attribute__((visibility("hidden")))
@interface WBDocument : XXUnknownSuperclass {
}
+ (id)readFrom:(id)from;	// 0x11ad69
+ (id)imageBulletParagraph:(id)paragraph;	// 0x26c9d1
- (id)init;	// 0x26c9a5
- (id)applicationName;	// 0x26c999
@end

@interface WBDocument (Private)
+ (void)setTimeStamp:(WrdDocumentProperties *)stamp;	// 0x26ca41
+ (void)readSectionsFrom:(id)from document:(id)document;	// 0x12eb89
+ (void)readNoteSeparatorFrom:(id)from type:(int)type separator:(id)separator;	// 0x135231
+ (void)readTextBoxesFrom:(id)from;	// 0x135191
+ (void)addImageBullets:(id)bullets;	// 0x26cb6d
+ (void)readProperties:(id)properties document:(id)document;	// 0x122d75
+ (unsigned)setupZIndices:(id)indices document:(id)document escherType:(int)type;	// 0x1396f1
@end
