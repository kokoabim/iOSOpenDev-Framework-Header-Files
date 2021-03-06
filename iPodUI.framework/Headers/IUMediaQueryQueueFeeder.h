/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>

@class MPMediaQuery, MPMediaItem, MPMediaLibraryConnectionAssertion, MPMediaQueryShuffledItems, NSArray;

@interface IUMediaQueryQueueFeeder : XXUnknownSuperclass {
@private
	MPMediaLibraryConnectionAssertion *_connectionAssertion;	// 32 = 0x20
	MPMediaQueryShuffledItems *_items;	// 36 = 0x24
	MPMediaQuery *_query;	// 40 = 0x28
	NSArray *_prefixMediaItems;	// 44 = 0x2c
	MPMediaItem *_focusedItem;	// 48 = 0x30
	int _ignoreShuffleTypeChangesCount;	// 52 = 0x34
	unsigned _itemsChanged : 1;	// 56 = 0x38
	unsigned _hasPendingLibraryChanges : 1;	// 56 = 0x38
}
@property(retain, nonatomic) MPMediaItem *focusedItem;	// G=0x5774d; S=0x5775d; @synthesize=_focusedItem
@property(retain, nonatomic) NSArray *prefixMediaItems;	// G=0x57791; S=0x577a1; @synthesize=_prefixMediaItems
@property(copy, nonatomic) MPMediaQuery *query;	// G=0x57781; S=0x56d81; @synthesize=_query
// declared property setter: - (void)setPrefixMediaItems:(id)items;	// 0x577a1
// declared property getter: - (id)prefixMediaItems;	// 0x57791
// declared property getter: - (id)query;	// 0x57781
// declared property setter: - (void)setFocusedItem:(id)item;	// 0x5775d
// declared property getter: - (id)focusedItem;	// 0x5774d
- (unsigned)_shuffleItemsInFeederQueryWithShuffleType:(unsigned)shuffleType initialIndex:(unsigned)index;	// 0x57431
- (BOOL)_reloadWithDataSource:(id)dataSource keepPlayingCurrentItemIfPossible:(BOOL)possible force:(BOOL)force;	// 0x56ed5
- (unsigned)unshuffledIndexOfAVItem:(id)avitem;	// 0x56e85
// declared property setter: - (void)setQuery:(id)query;	// 0x56d81
- (id)mediaItemAtIndex:(unsigned)index;	// 0x56ce1
- (unsigned)indexOfMediaItem:(id)mediaItem;	// 0x56c35
- (void)_handleMediaLibraryDidChange;	// 0x5684d
- (void)_applicationWillEnterForeground:(id)_application;	// 0x56811
- (void)_libraryDidChangeNotification:(id)_library;	// 0x567b1
- (double)bookmarkTimeForIndex:(unsigned)index;	// 0x56725
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x56279
- (void)archiveAVControllerPlaybackQueue:(id)queue toArchiver:(id)archiver;	// 0x560ed
- (void)restoreAVControllerPlaybackQueue:(id)queue fromUnarchiver:(id)unarchiver;	// 0x55d99
- (BOOL)trackChangesCanEndPlayback;	// 0x55d81
- (BOOL)shouldBeginPlaybackOfItem:(id)item error:(id *)error;	// 0x55ccd
- (void)shuffleItemsWithAnchor:(unsigned *)anchor;	// 0x55c9d
- (BOOL)reloadWithDataSource:(id)dataSource keepPlayingCurrentItemIfPossible:(BOOL)possible;	// 0x55c79
- (void)_performWhileIgnoringShuffleChanges:(id)changes;	// 0x55c51
- (unsigned)realShuffleType;	// 0x55be1
- (unsigned)realRepeatType;	// 0x55b75
- (id)preferredLanguages;	// 0x55a45
- (id)pathAtIndex:(unsigned)index;	// 0x55a0d
- (unsigned)itemTypeForIndex:(unsigned)index;	// 0x559d9
- (Class)itemClass;	// 0x559bd
- (id)errorResolverForItem:(id)item;	// 0x55891
- (id)copyRawItemAtIndex:(unsigned)index;	// 0x5583d
- (unsigned)numberOfPaths;	// 0x5582d
- (unsigned)itemCount;	// 0x557d9
- (void)dealloc;	// 0x556d1
- (id)init;	// 0x55615
@end
