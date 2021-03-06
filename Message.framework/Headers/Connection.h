/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Message-Structs.h>
#import <Message/XXUnknownSuperclass.h>

@class NSData, NSMutableString, _MFSocket;
@protocol MFSASLSecurityLayer;

@interface Connection : XXUnknownSuperclass {
	id<MFSASLSecurityLayer> _securityLayer;	// 4 = 0x4
	_MFSocket *_socket;	// 8 = 0x8
	double _lastUsedTime;	// 12 = 0xc
	char *_buffer;	// 20 = 0x14
	int _bufferRemainingBytes;	// 24 = 0x18
	unsigned _bufferStart;	// 28 = 0x1c
	unsigned _bufferLength;	// 32 = 0x20
	unsigned _desiredBufferLength;	// 36 = 0x24
	z_stream_s *_deflater;	// 40 = 0x28
	z_stream_s *_inflater;	// 44 = 0x2c
	char *_zbuffer;	// 48 = 0x30
	NSData *_logData;	// 52 = 0x34
	unsigned _dontLogReads;	// 56 = 0x38
	unsigned _readBytesNotLogged;	// 60 = 0x3c
	NSMutableString *_readBytesToLog;	// 64 = 0x40
	unsigned _isFetching : 1;	// 68 = 0x44
	unsigned _allowFallbacks : 1;	// 68 = 0x44
	unsigned _compressionEnabled : 1;	// 68 = 0x44
}
@property(assign) BOOL isFetching;	// G=0x70ec5; S=0x70ed9; converted property
@property(readonly, assign) double lastUsedTime;	// G=0x70f2d; converted property
+ (void)readLoggingDefaults;	// 0x4925
+ (void)initialize;	// 0x4895
+ (void)logBytes:(const char *)bytes length:(int)length;	// 0x717b1
+ (void)flushLog;	// 0x70e71
+ (id)logClasses;	// 0x70e75
+ (void)setLogClasses:(id)classes;	// 0x71439
+ (BOOL)logAllSocketActivity;	// 0x70e85
+ (void)setLogAllSocketActivity:(BOOL)activity;	// 0x70e95
+ (id)logActivityOnPorts;	// 0x70ea5
+ (void)setLogActivityOnPorts:(id)ports;	// 0x71471
+ (id)logActivityOnHosts;	// 0x70eb5
+ (void)setLogActivityOnHosts:(id)hosts;	// 0x714a9
+ (BOOL)shouldTryFallbacksAfterError:(id)error;	// 0x714e1
- (void)dealloc;	// 0x130ad
- (id)description;	// 0x7345d
- (BOOL)isForcedConnection;	// 0x733f9
// converted property getter: - (BOOL)isFetching;	// 0x70ec5
// converted property setter: - (void)setIsFetching:(BOOL)fetching;	// 0x70ed9
- (void)_setupNetworkLogging;	// 0x7323d
- (BOOL)connectUsingSettings:(id)settings;	// 0x72ac9
- (BOOL)connectUsingAccount:(id)account;	// 0x71005
- (BOOL)connectUsingFallbacksForAccount:(id)account;	// 0x71035
- (void)setAllowsFallbacks:(BOOL)fallbacks;	// 0x70ef5
- (BOOL)authenticateUsingAccount:(id)account;	// 0x728a1
- (id)capabilities;	// 0x70f15
- (id)authenticationMechanisms;	// 0x7278d
- (BOOL)loginDisabled;	// 0x70f19
- (BOOL)writeBytes:(const char *)bytes length:(unsigned)length dontLogBytesInRange:(NSRange)range;	// 0x71ea5
- (BOOL)writeData:(id)data dontLogBytesInRange:(NSRange)range;	// 0x711c1
- (BOOL)writeData:(id)data;	// 0x71221
- (void)setDesiredReadBufferLength:(unsigned)length;	// 0x70f1d
- (void)enableReadLogging:(BOOL)logging;	// 0x71d31
- (void)logReadChars:(const char *)chars length:(unsigned)length;	// 0x71245
- (BOOL)readLineIntoData:(id)data;	// 0x71bf1
- (BOOL)readBytesIntoData:(id)data desiredLength:(unsigned)length;	// 0x71b45
- (BOOL)authenticateUsingAccount:(id)account authenticator:(id)authenticator;	// 0x71a79
- (BOOL)startTLSForAccount:(id)account;	// 0x719ad
- (id)securityProtocol;	// 0x71345
- (BOOL)startCompression;	// 0x7181d
- (BOOL)isValid;	// 0x7137d
- (void)disconnect;	// 0x713b5
- (BOOL)hasBytesAvailable;	// 0x713f5
// converted property getter: - (double)lastUsedTime;	// 0x70f2d
@end
