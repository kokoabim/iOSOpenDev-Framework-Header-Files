/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCCalDAVAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	NSString *_principalURL;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	int _port;	// 64 = 0x40
	NSString *_accountPersistentUUID;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x25961; @synthesize=_accountDescription
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x25951; @synthesize=_hostname
@property(copy, nonatomic) NSString *username;	// G=0x25941; S=0x25aa9; @synthesize=_username
@property(copy, nonatomic) NSString *password;	// G=0x25931; S=0x25acd; @synthesize=_password
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x25921; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x25911; @synthesize=_useSSL
@property(readonly, assign, nonatomic) int port;	// G=0x25901; @synthesize=_port
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x258f1; S=0x25af1; @synthesize=_accountPersistentUUID
+ (id)typeStrings;	// 0x25a81
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x25a21
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x25e25
- (void)dealloc;	// 0x25971
- (id)description;	// 0x25c69
- (id)stubDictionary;	// 0x25b85
- (id)title;	// 0x25b55
- (id)subtitle1Label;	// 0x25b45
- (id)subtitle1Description;	// 0x25b35
- (id)subtitle2Label;	// 0x25b25
- (id)subtitle2Description;	// 0x25b15
// declared property getter: - (id)accountPersistentUUID;	// 0x258f1
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x25af1
// declared property getter: - (int)port;	// 0x25901
// declared property getter: - (BOOL)useSSL;	// 0x25911
// declared property getter: - (id)principalURL;	// 0x25921
// declared property getter: - (id)password;	// 0x25931
// declared property setter: - (void)setPassword:(id)password;	// 0x25acd
// declared property getter: - (id)username;	// 0x25941
// declared property setter: - (void)setUsername:(id)username;	// 0x25aa9
// declared property getter: - (id)hostname;	// 0x25951
// declared property getter: - (id)accountDescription;	// 0x25961
@end
