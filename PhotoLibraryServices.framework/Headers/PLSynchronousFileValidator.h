/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/XXUnknownSuperclass.h>

@class AVFileValidator, NSRecursiveLock;

@interface PLSynchronousFileValidator : XXUnknownSuperclass {
	AVFileValidator *_fileValidator;	// 4 = 0x4
	NSRecursiveLock *_lock;	// 8 = 0x8
	BOOL _isValid;	// 12 = 0xc
}
@property(readonly, assign) BOOL isValid;	// G=0xe319; converted property
- (void)dealloc;	// 0xe3c9
// converted property getter: - (BOOL)isValid;	// 0xe319
- (void)_startValidation;	// 0xe2d1
- (void)_validationCompleted:(id)completed;	// 0xe269
- (void)_setupOnMainThread:(id)thread;	// 0xe0f9
- (id)initWithPath:(id)path;	// 0xe0a1
@end
