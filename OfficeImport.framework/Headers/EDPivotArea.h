/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class EDCollection, EDReference;

__attribute__((visibility("hidden")))
@interface EDPivotArea : XXUnknownSuperclass {
@private
	bool mGrandCol;	// 4 = 0x4
	bool mGrandRow;	// 5 = 0x5
	bool mOutline;	// 6 = 0x6
	int mType;	// 8 = 0x8
	EDCollection *mReferences;	// 12 = 0xc
	EDReference *mOffset;	// 16 = 0x10
}
@property(assign) bool grandRow;	// G=0x2516b1; S=0x2516c1; converted property
@property(assign) bool grandCol;	// G=0x2516d1; S=0x2516e1; converted property
@property(assign) bool outline;	// G=0x2516f1; S=0x251701; converted property
@property(assign) int type;	// G=0x251711; S=0x251721; converted property
@property(retain) id offset;	// G=0x251731; S=0x251c81; converted property
+ (id)pivotArea;	// 0x251c39
- (id)init;	// 0x251b95
- (void)dealloc;	// 0x251cc9
// converted property getter: - (bool)grandRow;	// 0x2516b1
// converted property setter: - (void)setGrandRow:(bool)row;	// 0x2516c1
// converted property getter: - (bool)grandCol;	// 0x2516d1
// converted property setter: - (void)setGrandCol:(bool)col;	// 0x2516e1
// converted property getter: - (bool)outline;	// 0x2516f1
// converted property setter: - (void)setOutline:(bool)outline;	// 0x251701
// converted property getter: - (int)type;	// 0x251711
// converted property setter: - (void)setType:(int)type;	// 0x251721
// converted property getter: - (id)offset;	// 0x251731
// converted property setter: - (void)setOffset:(id)offset;	// 0x251c81
- (id)references;	// 0x251741
@end