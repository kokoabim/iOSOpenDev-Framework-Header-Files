/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/NSCopying.h>
#import <MusicLibrary/XXUnknownSuperclass.h>
#import <MusicLibrary/MusicLibrary-Structs.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface MLContentRating : XXUnknownSuperclass <NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(copy, nonatomic) NSString *ratingSystem;	// G=0x3a289; S=0x3a32d; 
@property(retain, nonatomic) NSNumber *ratingRank;	// G=0x3a239; S=0x3a311; 
@property(copy, nonatomic) NSString *ratingLabel;	// G=0x3a1e9; S=0x3a2f5; 
@property(copy, nonatomic) NSString *ratingDescription;	// G=0x3a199; S=0x3a2d9; 
- (void)_setValueCopy:(id)copy forKey:(id)key;	// 0x3a61d
- (void)_setValue:(id)value forKey:(id)key;	// 0x3a5e1
- (id)copyStringRepresentation;	// 0x3a4d5
- (id)initWithStringRepresentation:(id)stringRepresentation;	// 0x3a349
// declared property setter: - (void)setRatingSystem:(id)system;	// 0x3a32d
// declared property setter: - (void)setRatingRank:(id)rank;	// 0x3a311
// declared property setter: - (void)setRatingLabel:(id)label;	// 0x3a2f5
// declared property setter: - (void)setRatingDescription:(id)description;	// 0x3a2d9
// declared property getter: - (id)ratingSystem;	// 0x3a289
// declared property getter: - (id)ratingRank;	// 0x3a239
// declared property getter: - (id)ratingLabel;	// 0x3a1e9
// declared property getter: - (id)ratingDescription;	// 0x3a199
- (id)copyWithZone:(NSZone *)zone;	// 0x3a14d
- (void)dealloc;	// 0x3a101
- (id)initWithContentRatingDictionary:(id)contentRatingDictionary;	// 0x3a07d
- (id)init;	// 0x3a069
@end
