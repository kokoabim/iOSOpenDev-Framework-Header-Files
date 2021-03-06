/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask : CoreDAVTask {
	NSArray *_accessControlEntities;	// 120 = 0x78
}
@property(retain) NSArray *accessControlEntities;	// G=0x25889; S=0x2589d; @synthesize=_accessControlEntities
@property(assign, nonatomic) id<CoreDAVACLTaskDelegate> delegate;	// @dynamic
// declared property setter: - (void)setAccessControlEntities:(id)entities;	// 0x2589d
// declared property getter: - (id)accessControlEntities;	// 0x25889
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x25769
- (id)requestBody;	// 0x25615
- (id)httpMethod;	// 0x25609
- (id)description;	// 0x25535
- (void)dealloc;	// 0x254e9
- (id)initWithAccessControlEntities:(id)accessControlEntities atURL:(id)url;	// 0x2543d
- (id)initWithURL:(id)url;	// 0x25439
@end
