/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <iAdCore/XXUnknownSuperclass.h>


@interface ADClickLocation : XXUnknownSuperclass {
	BOOL _hasX;	// 4 = 0x4
	int _x;	// 8 = 0x8
	BOOL _hasY;	// 12 = 0xc
	int _y;	// 16 = 0x10
	BOOL _hasW;	// 20 = 0x14
	int _w;	// 24 = 0x18
	BOOL _hasH;	// 28 = 0x1c
	int _h;	// 32 = 0x20
}
@property(assign, nonatomic) int h;	// G=0x157cd; S=0x15301; @synthesize=_h
@property(assign, nonatomic) BOOL hasH;	// G=0x157ad; S=0x157bd; @synthesize=_hasH
@property(assign, nonatomic) int w;	// G=0x1579d; S=0x152dd; @synthesize=_w
@property(assign, nonatomic) BOOL hasW;	// G=0x1577d; S=0x1578d; @synthesize=_hasW
@property(assign, nonatomic) int y;	// G=0x1576d; S=0x152b9; @synthesize=_y
@property(assign, nonatomic) BOOL hasY;	// G=0x1574d; S=0x1575d; @synthesize=_hasY
@property(assign, nonatomic) int x;	// G=0x1573d; S=0x15295; @synthesize=_x
@property(assign, nonatomic) BOOL hasX;	// G=0x1571d; S=0x1572d; @synthesize=_hasX
// declared property getter: - (int)h;	// 0x157cd
// declared property setter: - (void)setHasH:(BOOL)h;	// 0x157bd
// declared property getter: - (BOOL)hasH;	// 0x157ad
// declared property getter: - (int)w;	// 0x1579d
// declared property setter: - (void)setHasW:(BOOL)w;	// 0x1578d
// declared property getter: - (BOOL)hasW;	// 0x1577d
// declared property getter: - (int)y;	// 0x1576d
// declared property setter: - (void)setHasY:(BOOL)y;	// 0x1575d
// declared property getter: - (BOOL)hasY;	// 0x1574d
// declared property getter: - (int)x;	// 0x1573d
// declared property setter: - (void)setHasX:(BOOL)x;	// 0x1572d
// declared property getter: - (BOOL)hasX;	// 0x1571d
- (void)writeTo:(id)to;	// 0x15645
- (BOOL)readFrom:(id)from;	// 0x1551d
- (id)dictionaryRepresentation;	// 0x15395
- (id)description;	// 0x15325
// declared property setter: - (void)setH:(int)h;	// 0x15301
// declared property setter: - (void)setW:(int)w;	// 0x152dd
// declared property setter: - (void)setY:(int)y;	// 0x152b9
// declared property setter: - (void)setX:(int)x;	// 0x15295
- (void)dealloc;	// 0x15269
@end