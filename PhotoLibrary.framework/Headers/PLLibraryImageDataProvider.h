/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PLLibraryImageDataProvider.h>

@class PLImageCache, PLImageLoadingQueue, NSMutableDictionary;

@interface PLLibraryImageDataProvider : XXUnknownSuperclass {
@private
	PLImageCache *_imageCache;	// 4 = 0x4
	PLImageLoadingQueue *_imageLoadingQueue;	// 8 = 0x8
	NSMutableDictionary *_imageSources;	// 12 = 0xc
}
- (id)_imageSourceForFormat:(int)format;	// 0x1035d
- (void)invalidateCachedImagesForAsset:(id)asset format:(int)format;	// 0x1ef2d
- (void)invalidateCachedImagesForAsset:(id)asset;	// 0xe3801
- (void)cancelLoadForAsset:(id)asset format:(int)format;	// 0x1eeed
- (void)cancelLoadForAsset:(id)asset;	// 0xe3739
- (void)resumeLoading;	// 0x19b35
- (void)pauseLoading;	// 0x2f845
- (id)loadImageSynchronously:(BOOL)synchronously forAsset:(id)asset format:(int)format priority:(int)priority completion:(id)completion;	// 0x1030d
- (void)dealloc;	// 0x2d019
- (id)init;	// 0xf401
@end

@interface PLLibraryImageDataProvider (PLStackViewDataSource_Helper)
- (id)imageViewForAsset:(id)asset inAlbum:(NSObject *)album format:(int)format loadImagesSynchronously:(BOOL)synchronously;	// 0xe38c9
@end