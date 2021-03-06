/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class UIView;

@interface SUFooterContainerView : XXUnknownSuperclass {
	UIView *_contentView;	// 48 = 0x30
	UIView *_footerView;	// 52 = 0x34
	BOOL _footerVisible;	// 56 = 0x38
}
@property(assign, nonatomic, getter=isFooterVisible) BOOL footerVisible;	// G=0xf689; S=0xf565; @synthesize=_footerVisible
@property(retain, nonatomic) UIView *footerView;	// G=0xf679; S=0xf4f1; @synthesize=_footerView
@property(retain, nonatomic) UIView *contentView;	// G=0xf669; S=0xf47d; @synthesize=_contentView
// declared property getter: - (BOOL)isFooterVisible;	// 0xf689
// declared property getter: - (id)footerView;	// 0xf679
// declared property getter: - (id)contentView;	// 0xf669
- (void)layoutSubviews;	// 0xf595
// declared property setter: - (void)setFooterVisible:(BOOL)visible;	// 0xf565
// declared property setter: - (void)setFooterView:(id)view;	// 0xf4f1
// declared property setter: - (void)setContentView:(id)view;	// 0xf47d
- (void)dealloc;	// 0xf41d
@end
