/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/FTServices-Structs.h>
#import <FTServices/NSCopying.h>
#import <FTServices/FTProfileMessage.h>

@class NSString;

@interface FTProfileAuthenticationMessage : FTProfileMessage <NSCopying> {
	NSString *_username;	// 4 = 0x4
	NSString *_password;	// 8 = 0x8
	NSString *_responseProfileID;	// 12 = 0xc
	NSString *_responseAuthToken;	// 16 = 0x10
}
@property(copy) NSString *responseAuthorizationToken;	// G=0x1aa01; S=0x1aa15; @synthesize=_responseAuthToken
@property(copy) NSString *responseProfileID;	// G=0x1a9c9; S=0x1a9dd; @synthesize=_responseProfileID
@property(copy) NSString *password;	// G=0x1a991; S=0x1a9a5; @synthesize=_password
@property(copy) NSString *username;	// G=0x1a959; S=0x1a96d; @synthesize=_username
// declared property setter: - (void)setResponseAuthorizationToken:(id)token;	// 0x1aa15
// declared property getter: - (id)responseAuthorizationToken;	// 0x1aa01
// declared property setter: - (void)setResponseProfileID:(id)anId;	// 0x1a9dd
// declared property getter: - (id)responseProfileID;	// 0x1a9c9
// declared property setter: - (void)setPassword:(id)password;	// 0x1a9a5
// declared property getter: - (id)password;	// 0x1a991
// declared property setter: - (void)setUsername:(id)username;	// 0x1a96d
// declared property getter: - (id)username;	// 0x1a959
- (void)handleResponseDictionary:(id)dictionary;	// 0x1a8a1
- (id)messageBody;	// 0x1a76d
- (id)additionalMessageHeaders;	// 0x1a601
- (id)additionalMessageHeadersForOutgoingPush;	// 0x1a4a9
- (id)requiredKeys;	// 0x1a431
- (id)bagKey;	// 0x1a425
- (BOOL)payloadCanBeLogged;	// 0x1a421
- (BOOL)hasRequiredKeys:(id *)keys;	// 0x1a35d
- (void)dealloc;	// 0x1a2d5
- (id)copyWithZone:(NSZone *)zone;	// 0x1a209
@end
