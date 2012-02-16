/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <YouTube/YouTube-Structs.h>
#import <YouTube/XXUnknownSuperclass.h>
#import <YouTube/YTImageLoader.h>

@class NSLock, NSMutableArray, NSMutableSet, NSMutableDictionary, NSNotificationCenter, NSTimer;

@interface YTImageLoader : XXUnknownSuperclass {
	NSLock *_queueLock;	// 4 = 0x4
	NSMutableArray *_loadQueue;	// 8 = 0x8
	NSMutableSet *_loadsInProgress;	// 12 = 0xc
	NSLock *_cacheLock;	// 16 = 0x10
	NSMutableDictionary *_imageCache;	// 20 = 0x14
	NSMutableDictionary *_roundedThumbnailImageCache;	// 24 = 0x18
	NSMutableDictionary *_largeThumbnailImageCache;	// 28 = 0x1c
	NSMutableDictionary *_pluginImageCache;	// 32 = 0x20
	NSMutableArray *_imageCacheLRU;	// 36 = 0x24
	CFRunLoopRef _loaderRunLoop;	// 40 = 0x28
	CFRunLoopSourceRef _loaderSource;	// 44 = 0x2c
	NSNotificationCenter *_notificationCenter;	// 48 = 0x30
	NSTimer *_loadStatusNotificationTimer;	// 52 = 0x34
	opaque_pthread_mutex_t _startupLock;	// 56 = 0x38
	opaque_pthread_cond_t _startupCondition;	// 100 = 0x64
}
@property(readonly, retain) NSNotificationCenter *notificationCenter;	// G=0x36ad; converted property
+ (id)sharedImageLoader;	// 0x32a9
- (id)init;	// 0x3ea5
- (BOOL)isLoadingImages;	// 0x3e19
- (CGImageRef)createRoundedThumbnailWithImage:(CGImageRef)image;	// 0x3d09
- (CGImageRef)_largeThumbnailOverlay;	// 0x3cb5
- (CGImageRef)createSheenedThumbnailWithImage:(CGImageRef)image overlay:(CGImageRef)overlay width:(int)width height:(int)height;	// 0x3be9
- (CGImageRef)imageForURL:(id)url rounded:(BOOL)rounded videoID:(id)anId loadIfAbsent:(BOOL)absent;	// 0x3a1d
- (CGImageRef)largeImageForURL:(id)url videoID:(id)anId loadIfAbsent:(BOOL)absent;	// 0x3835
- (CGImageRef)pluginImageForURL:(id)url videoID:(id)anId loadIfAbsent:(BOOL)absent;	// 0x36f9
// converted property getter: - (id)notificationCenter;	// 0x36ad
- (void)saveCache:(id)cache;	// 0x3551
- (void)loadCache:(id)cache;	// 0x32f1
@end

@interface YTImageLoader (Internal)
- (void)_mainThread_postLoadingStatusChanged;	// 0x4165
- (void)_postLoadingStatusChanged;	// 0x41a9
- (void)_loadingStatusChanged;	// 0x420d
- (void)_startLoader;	// 0x4741
- (BOOL)_locked_URLIsLoading:(id)loading;	// 0x43a9
- (void)_locked_loadImageForURL:(id)url videoID:(id)anId;	// 0x446d
- (void)_loadImageURL:(id)url videoID:(id)anId;	// 0x4849
- (void)_setImageData:(id)data videoID:(id)anId forURL:(id)url cacheLocked:(BOOL)locked;	// 0x4909
- (void)_postImageLoadedNotification:(id)notification;	// 0x463d
- (void)_locked_imageLoadStarted:(id)started;	// 0x46ad
- (void)_imageLoadFinished:(id)finished;	// 0x46d1
- (id)_locked_saveImageCache:(id)cache;	// 0x4ebd
- (id)_locked_loadImageCache:(id)cache;	// 0x4fdd
@end