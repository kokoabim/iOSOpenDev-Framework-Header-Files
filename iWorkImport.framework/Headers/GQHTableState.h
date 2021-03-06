/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/XXUnknownSuperclass.h>
#import <iWorkImport/iWorkImport-Structs.h>

@class GQDTTable;

__attribute__((visibility("hidden")))
@interface GQHTableState : XXUnknownSuperclass {
@private
	int mPrevRowIndex;	// 4 = 0x4
	int mPrevColumnIndex;	// 8 = 0x8
	GQDTTable *mTable;	// 12 = 0xc
	vector<short unsigned int,std::allocator<short unsigned int> > *mCellCountInColumns;	// 16 = 0x10
	int mGroupLevel;	// 20 = 0x14
	bool mSplitTable;	// 24 = 0x18
	double mCurrentTablePosition;	// 28 = 0x1c
	double mLastAttachmentPosition;	// 36 = 0x24
	long mSplitTableIndex;	// 44 = 0x2c
	double mOriginalTableHeight;	// 48 = 0x30
}
@property(retain) id table;	// G=0x38471; S=0x38675; converted property
@property(assign) int groupLevel;	// G=0x38491; S=0x384a1; converted property
@property(assign) bool splitTable;	// G=0x384b1; S=0x384c1; converted property
@property(assign) double lastAttachmentPosition;	// G=0x3855d; S=0x38575; converted property
@property(assign) double originalTableHeight;	// G=0x38589; S=0x385a1; converted property
- (id)init;	// 0x385b5
- (void)dealloc;	// 0x38719
- (int)prevRowIndex;	// 0x38431
- (int)prevColumnIndex;	// 0x38441
- (void)setPrevRowIndex:(int)index columnIndex:(int)index2;	// 0x38451
// converted property getter: - (id)table;	// 0x38471
// converted property setter: - (void)setTable:(id)table;	// 0x38675
- (vector<short unsigned int,std::allocator<short unsigned int> > *)cellCountInColumns;	// 0x38481
// converted property getter: - (int)groupLevel;	// 0x38491
// converted property setter: - (void)setGroupLevel:(int)level;	// 0x384a1
// converted property getter: - (bool)splitTable;	// 0x384b1
// converted property setter: - (void)setSplitTable:(bool)table;	// 0x384c1
- (void)setSplitTableIndex:(long)index;	// 0x384f9
- (long)nextSplitTableIndex;	// 0x38509
- (double)currentTablePosition;	// 0x38521
- (void)addRowHeight:(float)height;	// 0x38539
// converted property getter: - (double)lastAttachmentPosition;	// 0x3855d
// converted property setter: - (void)setLastAttachmentPosition:(double)position;	// 0x38575
// converted property getter: - (double)originalTableHeight;	// 0x38589
// converted property setter: - (void)setOriginalTableHeight:(double)height;	// 0x385a1
@end
