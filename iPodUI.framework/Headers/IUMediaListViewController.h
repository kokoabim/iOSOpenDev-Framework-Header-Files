/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUTableViewController.h>
#import <iPodUI/IUCoverFlowOwner.h>

@class IUCoverFlowTransitionController, IUMediaListAggregateView, IUCoverFlowViewController;

@interface IUMediaListViewController : IUTableViewController <IUCoverFlowOwner> {
	IUCoverFlowTransitionController *_coverFlowTransition;	// 260 = 0x104
	IUCoverFlowViewController *_coverFlowViewController;	// 264 = 0x108
	IUMediaListAggregateView *_aggregateHeaderView;	// 268 = 0x10c
	unsigned _searchEnabled : 1;	// 272 = 0x110
	unsigned _didAppear : 1;	// 272 = 0x110
	unsigned _hasPendingDynamicChanges : 1;	// 272 = 0x110
	unsigned _hasPendingNowPlayingItemChanges : 1;	// 272 = 0x110
}
@property(readonly, assign, nonatomic) BOOL isShowingCoverFlow;	// G=0x8a331; @dynamic
@property(retain, nonatomic) IUCoverFlowViewController *coverFlowViewController;	// G=0x8a259; S=0x8a269; 
+ (Class)tableViewClass;	// 0x89b85
- (void)_transitionToCoverFlowWithInterfaceOrientation:(int)interfaceOrientation;	// 0x8b12d
- (void)_transitionFromCoverFlow;	// 0x8afc9
- (BOOL)_handleControllerContext:(id)context;	// 0x8ae75
- (BOOL)_canShowCoverFlow;	// 0x8ac99
- (id)_baseViewController;	// 0x8ac65
- (void)_dataSourceCountStringFormatDidChange:(id)_dataSourceCountStringFormat;	// 0x8abe5
- (void)_accessorySplashViewWillAppearNotification:(id)_accessorySplashView;	// 0x8abd5
- (void)_applicationWillEnterForeground:(id)_application;	// 0x8ab69
- (void)_trackDynamicPropertiesChangedNotification:(id)notification;	// 0x8ab09
- (void)_handleTrackDynamicPropertiesChanged;	// 0x8aa8d
- (void)_nowPlayingItemChanged:(id)changed;	// 0x8aa2d
- (void)_handleNowPlayingItemChanged;	// 0x8a84d
- (void)_coverFlowDidTransitionOut:(id)_coverFlow;	// 0x8a7b5
- (void)_coverFlowTransitionInDidStop:(id)_coverFlowTransitionIn finished:(id)finished;	// 0x8a701
- (void)_delayedPushContext:(id)context;	// 0x8a651
- (void)remoteEventSelectItem;	// 0x8a629
- (void)remoteEventMoveDown;	// 0x8a51d
- (void)remoteEventMoveUp;	// 0x8a49d
- (void)viewWillAppearForRemoteEvent;	// 0x8a3ed
- (id)query;	// 0x8a381
// declared property getter: - (BOOL)isShowingCoverFlow;	// 0x8a331
// declared property setter: - (void)setCoverFlowViewController:(id)controller;	// 0x8a269
// declared property getter: - (id)coverFlowViewController;	// 0x8a259
- (void)performDefaultActionForRow:(int)row;	// 0x8a06d
- (void)performActionForActionRow:(id)actionRow animated:(BOOL)animated;	// 0x89fdd
- (void)modalContextDidDismiss:(id)modalContext withSuccess:(BOOL)success;	// 0x89e05
- (BOOL)hasSearchBar;	// 0x89df1
- (void)deviceOrientationChanged:(int)changed;	// 0x89ce1
- (void)loadView;	// 0x89ba1
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x89b69
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x89afd
- (void)viewDidDisappear:(BOOL)view;	// 0x89ab9
- (void)viewDidAppear:(BOOL)view;	// 0x89a75
- (BOOL)handlePlaybackDataSource:(id)source;	// 0x89965
- (void)reloadPrefixActionRowsAnimated:(BOOL)animated;	// 0x89535
- (void)dealloc;	// 0x8938d
- (id)init;	// 0x89255
@end
