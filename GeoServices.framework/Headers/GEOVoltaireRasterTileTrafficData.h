/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/XXUnknownSuperclass.h>

@class NSMutableArray;

@interface GEOVoltaireRasterTileTrafficData : XXUnknownSuperclass {
	XXStruct_K5nmsA *_vertices;	// 4 = 0x4
	NSMutableArray *_trafficSegments;	// 8 = 0x8
	double _expirationTime;	// 12 = 0xc
}
@property(assign, nonatomic) double expirationTime;	// G=0x28571; S=0x28589; @synthesize=_expirationTime
@property(retain, nonatomic) NSMutableArray *trafficSegments;	// G=0x2853d; S=0x2854d; @synthesize=_trafficSegments
@property(assign, nonatomic) XXStruct_K5nmsA *vertices;	// G=0x2851d; S=0x2852d; @synthesize=_vertices
+ (double)expirationTimeInterval;	// 0x281bd
+ (id)createWithData:(id)data tileKey:(const GEOTileKey *)key;	// 0x28171
// declared property setter: - (void)setExpirationTime:(double)time;	// 0x28589
// declared property getter: - (double)expirationTime;	// 0x28571
// declared property setter: - (void)setTrafficSegments:(id)segments;	// 0x2854d
// declared property getter: - (id)trafficSegments;	// 0x2853d
// declared property setter: - (void)setVertices:(XXStruct_K5nmsA *)vertices;	// 0x2852d
// declared property getter: - (XXStruct_K5nmsA *)vertices;	// 0x2851d
- (void)dealloc;	// 0x284c5
- (id)initWithData:(id)data tileKey:(const GEOTileKey *)key;	// 0x281d1
@end
