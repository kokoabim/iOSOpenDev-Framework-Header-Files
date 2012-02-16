/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@class UIGradient;

@interface SUReflectionImageModifier : SUImageModifier {
	UIGradient *_gradient;	// 4 = 0x4
	float _reflectionHeight;	// 8 = 0x8
}
@property(assign, nonatomic) float reflectionHeight;	// G=0x4148d; S=0x4149d; @synthesize=_reflectionHeight
@property(retain, nonatomic) UIGradient *gradient;	// G=0x41459; S=0x41469; @synthesize=_gradient
// declared property setter: - (void)setReflectionHeight:(float)height;	// 0x4149d
// declared property getter: - (float)reflectionHeight;	// 0x4148d
// declared property setter: - (void)setGradient:(id)gradient;	// 0x41469
// declared property getter: - (id)gradient;	// 0x41459
- (void)drawAfterImageForContext:(CGContextRef)context imageFrame:(CGRect)frame finalSize:(CGSize)size;	// 0x4133d
- (CGRect)imageFrameForImage:(id)image currentFrame:(CGRect)frame finalSize:(CGSize)size;	// 0x41311
- (CGSize)finalSizeForSize:(CGSize)size originalSize:(CGSize)size2;	// 0x412dd
- (void)dealloc;	// 0x41289
@end