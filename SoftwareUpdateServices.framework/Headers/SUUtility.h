/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <SoftwareUpdateServices/XXUnknownSuperclass.h>


@interface SUUtility : XXUnknownSuperclass {
}
+ (id)prettyPrintDate:(id)date;	// 0xfc75
+ (id)addToDate:(id)date numberOfDays:(int)days;	// 0xfbd5
+ (id)gregorianCalendar;	// 0xfb4d
+ (id)URLIfFileExists:(id)exists;	// 0xfaf5
+ (BOOL)hasEnoughDiskSpace:(unsigned long long)space;	// 0xfa9d
+ (int)translateErrorCodeFromError:(id)error;	// 0xf995
+ (id)translateError:(id)error withAddedUserInfo:(id)addedUserInfo;	// 0xf7f1
+ (id)translateError:(id)error;	// 0xf7dd
+ (void)assignError:(id *)error withError:(id)error2 translate:(BOOL)translate;	// 0xf7a1
+ (void)assignError:(id *)error withCode:(int)code;	// 0xf759
+ (id)errorWithCode:(int)code originalError:(id)error;	// 0xf6b1
+ (id)errorWithCode:(int)code;	// 0xf691
+ (id)currentReleaseType;	// 0xf62d
+ (id)currentProductBuild;	// 0xf5c9
+ (id)currentProductVersion;	// 0xf565
+ (id)currentProductType;	// 0xf501
+ (id)currentProductCategory;	// 0xf49d
+ (id)serialNumber;	// 0xf439
+ (BOOL)cellularDataIsEnabled;	// 0xf42d
+ (BOOL)hasCellularRadio;	// 0xf411
+ (BOOL)isCellularDataCapable;	// 0xf405
+ (BOOL)isWiFiCapable;	// 0xf3e9
+ (BOOL)isDaemon;	// 0xf3d9
+ (void)setIsDaemon:(BOOL)daemon;	// 0xf3c9
+ (BOOL)isRestoringFromCloud;	// 0xf355
+ (dispatch_queue_s *)taskQueue;	// 0xf305
@end
