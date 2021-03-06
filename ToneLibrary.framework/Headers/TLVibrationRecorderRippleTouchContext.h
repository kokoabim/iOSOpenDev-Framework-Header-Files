/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <ToneLibrary/XXUnknownSuperclass.h>
#import <ToneLibrary/ToneLibrary-Structs.h>


@interface TLVibrationRecorderRippleTouchContext : XXUnknownSuperclass {
	double _creationTimestamp;	// 4 = 0x4
	CGPoint _location;	// 12 = 0xc
	float _speed;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) float speed;	// G=0x17c0d; @synthesize=_speed
@property(readonly, assign, nonatomic) CGPoint location;	// G=0x17bf1; @synthesize=_location
// declared property getter: - (float)speed;	// 0x17c0d
// declared property getter: - (CGPoint)location;	// 0x17bf1
- (double)timeIntervalSinceCreation;	// 0x17bad
- (void)reset;	// 0x17b5d
- (void)configureWithTimeIntervalSinceCreation:(double)timeIntervalSinceCreation location:(CGPoint)location speed:(float)speed;	// 0x17ae9
- (void)configureWithTimeIntervalSinceCreation:(double)timeIntervalSinceCreation location:(CGPoint)location;	// 0x17abd
- (id)init;	// 0x17a79
@end
