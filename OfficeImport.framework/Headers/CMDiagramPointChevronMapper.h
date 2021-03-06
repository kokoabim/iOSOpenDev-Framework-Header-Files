/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramPointMapper.h>
#import <OfficeImport/OfficeImport-Structs.h>


__attribute__((visibility("hidden")))
@interface CMDiagramPointChevronMapper : CMDiagramPointMapper {
@private
	BOOL mPlaceholder;	// 24 = 0x18
	BOOL mHomePlate;	// 25 = 0x19
}
- (void)setIsPlaceholder:(BOOL)placeholder;	// 0x2f3691
- (void)setIsHomePlate:(BOOL)plate;	// 0x1f151d
- (void)mapAt:(id)at withState:(id)state;	// 0x1f152d
@end
