/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOPlace.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, GEOLatLng, GEOAddress, GEOMapRegion, NSString;

@interface GEOPlace : PBCodable {
	BOOL _hasUID;	// 4 = 0x4
	long long _uID;	// 8 = 0x8
	BOOL _hasVersion;	// 16 = 0x10
	int _version;	// 20 = 0x14
	BOOL _hasType;	// 24 = 0x18
	int _type;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	GEOMapRegion *_mapRegion;	// 36 = 0x24
	GEOAddress *_address;	// 40 = 0x28
	NSString *_phoneticName;	// 44 = 0x2c
	GEOAddress *_phoneticAddress;	// 48 = 0x30
	GEOLatLng *_center;	// 52 = 0x34
	NSMutableArray *_business;	// 56 = 0x38
	BOOL _hasAddressGeocodeAccuracy;	// 60 = 0x3c
	int _addressGeocodeAccuracy;	// 64 = 0x40
	BOOL _hasGeoId;	// 68 = 0x44
	long long _geoId;	// 72 = 0x48
}
@property(assign, nonatomic) long long geoId;	// G=0x16319; S=0x15245; @synthesize=_geoId
@property(assign, nonatomic) BOOL hasGeoId;	// G=0x162f9; S=0x16309; @synthesize=_hasGeoId
@property(assign, nonatomic) int addressGeocodeAccuracy;	// G=0x162e9; S=0x15221; @synthesize=_addressGeocodeAccuracy
@property(assign, nonatomic) BOOL hasAddressGeocodeAccuracy;	// G=0x162c9; S=0x162d9; @synthesize=_hasAddressGeocodeAccuracy
@property(retain, nonatomic) NSMutableArray *business;	// G=0x16295; S=0x162a5; @synthesize=_business
@property(retain, nonatomic) GEOLatLng *center;	// G=0x16261; S=0x16271; @synthesize=_center
@property(readonly, assign, nonatomic) BOOL hasCenter;	// G=0x15165; 
@property(retain, nonatomic) GEOAddress *phoneticAddress;	// G=0x1622d; S=0x1623d; @synthesize=_phoneticAddress
@property(readonly, assign, nonatomic) BOOL hasPhoneticAddress;	// G=0x1514d; 
@property(retain, nonatomic) NSString *phoneticName;	// G=0x161f9; S=0x16209; @synthesize=_phoneticName
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x15135; 
@property(retain, nonatomic) GEOAddress *address;	// G=0x161c5; S=0x161d5; @synthesize=_address
@property(readonly, assign, nonatomic) BOOL hasAddress;	// G=0x1511d; 
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x16191; S=0x161a1; @synthesize=_mapRegion
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x15105; 
@property(retain, nonatomic) NSString *name;	// G=0x1615d; S=0x1616d; @synthesize=_name
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x150ed; 
@property(assign, nonatomic) int type;	// G=0x1614d; S=0x150c9; @synthesize=_type
@property(assign, nonatomic) BOOL hasType;	// G=0x1612d; S=0x1613d; @synthesize=_hasType
@property(assign, nonatomic) int version;	// G=0x1611d; S=0x150a5; @synthesize=_version
@property(assign, nonatomic) BOOL hasVersion;	// G=0x160fd; S=0x1610d; @synthesize=_hasVersion
@property(assign, nonatomic) long long uID;	// G=0x160e5; S=0x15079; @synthesize=_uID
@property(assign, nonatomic) BOOL hasUID;	// G=0x160c5; S=0x160d5; @synthesize=_hasUID
// declared property getter: - (long long)geoId;	// 0x16319
// declared property setter: - (void)setHasGeoId:(BOOL)anId;	// 0x16309
// declared property getter: - (BOOL)hasGeoId;	// 0x162f9
// declared property getter: - (int)addressGeocodeAccuracy;	// 0x162e9
// declared property setter: - (void)setHasAddressGeocodeAccuracy:(BOOL)accuracy;	// 0x162d9
// declared property getter: - (BOOL)hasAddressGeocodeAccuracy;	// 0x162c9
// declared property setter: - (void)setBusiness:(id)business;	// 0x162a5
// declared property getter: - (id)business;	// 0x16295
// declared property setter: - (void)setCenter:(id)center;	// 0x16271
// declared property getter: - (id)center;	// 0x16261
// declared property setter: - (void)setPhoneticAddress:(id)address;	// 0x1623d
// declared property getter: - (id)phoneticAddress;	// 0x1622d
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x16209
// declared property getter: - (id)phoneticName;	// 0x161f9
// declared property setter: - (void)setAddress:(id)address;	// 0x161d5
// declared property getter: - (id)address;	// 0x161c5
// declared property setter: - (void)setMapRegion:(id)region;	// 0x161a1
// declared property getter: - (id)mapRegion;	// 0x16191
// declared property setter: - (void)setName:(id)name;	// 0x1616d
// declared property getter: - (id)name;	// 0x1615d
// declared property getter: - (int)type;	// 0x1614d
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x1613d
// declared property getter: - (BOOL)hasType;	// 0x1612d
// declared property getter: - (int)version;	// 0x1611d
// declared property setter: - (void)setHasVersion:(BOOL)version;	// 0x1610d
// declared property getter: - (BOOL)hasVersion;	// 0x160fd
// declared property getter: - (long long)uID;	// 0x160e5
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x160d5
// declared property getter: - (BOOL)hasUID;	// 0x160c5
- (void)writeTo:(id)to;	// 0x15c29
- (BOOL)readFrom:(id)from;	// 0x15761
- (id)dictionaryRepresentation;	// 0x152e1
- (id)description;	// 0x15271
// declared property setter: - (void)setGeoId:(long long)anId;	// 0x15245
// declared property setter: - (void)setAddressGeocodeAccuracy:(int)accuracy;	// 0x15221
- (id)businessAtIndex:(unsigned)index;	// 0x15201
- (unsigned)businessCount;	// 0x151e1
- (void)addBusiness:(id)business;	// 0x1517d
// declared property getter: - (BOOL)hasCenter;	// 0x15165
// declared property getter: - (BOOL)hasPhoneticAddress;	// 0x1514d
// declared property getter: - (BOOL)hasPhoneticName;	// 0x15135
// declared property getter: - (BOOL)hasAddress;	// 0x1511d
// declared property getter: - (BOOL)hasMapRegion;	// 0x15105
// declared property getter: - (BOOL)hasName;	// 0x150ed
// declared property setter: - (void)setType:(int)type;	// 0x150c9
// declared property setter: - (void)setVersion:(int)version;	// 0x150a5
// declared property setter: - (void)setUID:(long long)uid;	// 0x15079
- (void)dealloc;	// 0x14fbd
@end

@interface GEOPlace (GEOProtoExtras)
- (id)addressDictionary;	// 0x5501
@end
