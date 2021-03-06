/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/XXUnknownSuperclass.h>

@class CastleIMAPAccount;

@interface MFNewcastleSMTPAccount : XXUnknownSuperclass {
	CastleIMAPAccount *_castleAccount;	// 48 = 0x30
}
@property(retain, nonatomic) CastleIMAPAccount *castleAccount;	// G=0x3aff5; S=0x3b051; @synthesize=_castleAccount
- (void)dealloc;	// 0x3b005
- (id)mailAccountIfAvailable;	// 0x3afe1
- (id)displayHostname;	// 0x3b079
- (BOOL)shouldUseAuthentication;	// 0x3aff1
// declared property getter: - (id)castleAccount;	// 0x3aff5
// declared property setter: - (void)setCastleAccount:(id)account;	// 0x3b051
@end
