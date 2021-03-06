/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUMessagePart.h>

@class UIImage, SUMediaObject;

@interface SUMediaObjectMessagePart : SUMessagePart {
	UIImage *_composeImage;	// 12 = 0xc
	SUMediaObject *_mediaObject;	// 16 = 0x10
}
@property(readonly, retain) UIImage *composeImage;	// G=0xc89bd; converted property
- (id)_bubbleImageForImage:(id)image;	// 0xc8c21
- (id)newUnfilteredInputSource;	// 0xc8c01
- (id)MIMEType;	// 0xc8be1
- (id)copyPreparationOperations;	// 0xc8b71
// converted property getter: - (id)composeImage;	// 0xc89bd
- (void)generateComposeImage;	// 0xc8891
- (void)dealloc;	// 0xc8831
- (id)initWithMediaObject:(id)mediaObject;	// 0xc87dd
@end
