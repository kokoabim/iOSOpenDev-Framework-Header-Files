/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/XXUnknownSuperclass.h>

@protocol SUContinuationDelegate;

@interface SUContinuation : XXUnknownSuperclass {
	id<SUContinuationDelegate> _delegate;	// 4 = 0x4
}
@property(assign, nonatomic) id<SUContinuationDelegate> delegate;	// G=0x455b1; S=0x455c1; @synthesize=_delegate
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x455c1
// declared property getter: - (id)delegate;	// 0x455b1
- (void)sendFinishToDelegate;	// 0x45565
- (void)sendErrorToDelegate:(id)delegate;	// 0x45515
- (void)start;	// 0x45505
- (void)cancel;	// 0x454f1
@end
