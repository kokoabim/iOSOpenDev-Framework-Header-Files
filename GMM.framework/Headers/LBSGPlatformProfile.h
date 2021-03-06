/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>

@class NSString;

@interface LBSGPlatformProfile : XXUnknownSuperclass {
	NSString *_version;	// 4 = 0x4
	NSString *_platform;	// 8 = 0x8
	NSString *_platformKey;	// 12 = 0xc
	NSString *_distributionChannel;	// 16 = 0x10
	NSString *_locale;	// 20 = 0x14
	NSString *_ip;	// 24 = 0x18
	NSString *_userAgent;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *userAgent;	// G=0x2fa45; S=0x2fa55; @synthesize=_userAgent
@property(readonly, assign, nonatomic) BOOL hasUserAgent;	// G=0x2f4dd; 
@property(retain, nonatomic) NSString *ip;	// G=0x2fa11; S=0x2fa21; @synthesize=_ip
@property(readonly, assign, nonatomic) BOOL hasIp;	// G=0x2f4c5; 
@property(retain, nonatomic) NSString *locale;	// G=0x2f9dd; S=0x2f9ed; @synthesize=_locale
@property(readonly, assign, nonatomic) BOOL hasLocale;	// G=0x2f4ad; 
@property(retain, nonatomic) NSString *distributionChannel;	// G=0x2f9a9; S=0x2f9b9; @synthesize=_distributionChannel
@property(readonly, assign, nonatomic) BOOL hasDistributionChannel;	// G=0x2f495; 
@property(retain, nonatomic) NSString *platformKey;	// G=0x2f975; S=0x2f985; @synthesize=_platformKey
@property(readonly, assign, nonatomic) BOOL hasPlatformKey;	// G=0x2f47d; 
@property(retain, nonatomic) NSString *platform;	// G=0x2f941; S=0x2f951; @synthesize=_platform
@property(readonly, assign, nonatomic) BOOL hasPlatform;	// G=0x2f465; 
@property(retain, nonatomic) NSString *version;	// G=0x2f90d; S=0x2f91d; @synthesize=_version
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x2fa55
// declared property getter: - (id)userAgent;	// 0x2fa45
// declared property setter: - (void)setIp:(id)ip;	// 0x2fa21
// declared property getter: - (id)ip;	// 0x2fa11
// declared property setter: - (void)setLocale:(id)locale;	// 0x2f9ed
// declared property getter: - (id)locale;	// 0x2f9dd
// declared property setter: - (void)setDistributionChannel:(id)channel;	// 0x2f9b9
// declared property getter: - (id)distributionChannel;	// 0x2f9a9
// declared property setter: - (void)setPlatformKey:(id)key;	// 0x2f985
// declared property getter: - (id)platformKey;	// 0x2f975
// declared property setter: - (void)setPlatform:(id)platform;	// 0x2f951
// declared property getter: - (id)platform;	// 0x2f941
// declared property setter: - (void)setVersion:(id)version;	// 0x2f91d
// declared property getter: - (id)version;	// 0x2f90d
- (void)writeTo:(id)to;	// 0x2f841
- (BOOL)readFrom:(id)from;	// 0x2f6c1
- (id)dictionaryRepresentation;	// 0x2f565
- (id)description;	// 0x2f4f5
// declared property getter: - (BOOL)hasUserAgent;	// 0x2f4dd
// declared property getter: - (BOOL)hasIp;	// 0x2f4c5
// declared property getter: - (BOOL)hasLocale;	// 0x2f4ad
// declared property getter: - (BOOL)hasDistributionChannel;	// 0x2f495
// declared property getter: - (BOOL)hasPlatformKey;	// 0x2f47d
// declared property getter: - (BOOL)hasPlatform;	// 0x2f465
- (void)dealloc;	// 0x2f3a9
@end
