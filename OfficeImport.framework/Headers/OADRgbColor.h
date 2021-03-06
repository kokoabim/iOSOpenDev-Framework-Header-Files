/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADColor.h>


__attribute__((visibility("hidden")))
@interface OADRgbColor : OADColor {
@private
	float mRed;	// 8 = 0x8
	float mGreen;	// 12 = 0xc
	float mBlue;	// 16 = 0x10
}
+ (id)rgbColorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x29f8a1
+ (id)rgbColorWithRedByte:(float)redByte greenByte:(float)byte blueByte:(float)byte3;	// 0x29f845
+ (id)rgbColorWithWhite:(float)white;	// 0x29f7fd
+ (id)rgbColorWithWhiteByte:(float)whiteByte;	// 0x29f7b5
+ (id)rgbColorWithNSColor:(id)nscolor;	// 0x29f71d
+ (id)black;	// 0xab55d
+ (id)white;	// 0xccbd5
- (id)initWithRed:(float)red green:(float)green blue:(float)blue;	// 0xab5ad
- (id)initWithRedByte:(float)redByte greenByte:(float)byte blueByte:(float)byte3;	// 0xbff35
- (id)initWithWhite:(float)white;	// 0x29fa89
- (id)initWithWhiteByte:(float)whiteByte;	// 0x29fa11
- (id)rgbColorWithFraction:(float)fraction ofRgbColor:(id)rgbColor;	// 0x29f8fd
- (id)copyWithZone:(NSZone *)zone;	// 0x1c5471
- (float)red;	// 0x6ef1
- (float)green;	// 0x6ee1
- (float)blue;	// 0x6ed1
- (unsigned char)redByte;	// 0x86e0d
- (unsigned char)greenByte;	// 0x86e7d
- (unsigned char)blueByte;	// 0x86eed
- (unsigned)hash;	// 0x86d9d
- (BOOL)isEqual:(id)equal;	// 0x86cf9
@end
