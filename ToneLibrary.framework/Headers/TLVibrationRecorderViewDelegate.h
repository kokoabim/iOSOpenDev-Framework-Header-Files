/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */




@protocol TLVibrationRecorderViewDelegate <NSObject>
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)vibrationRecorderView;
- (void)vibrationRecorderView:(id)view didExitRecordingModeWithContextObject:(id)contextObject;
- (BOOL)vibrationRecorderViewDidEnterRecordingMode:(id)vibrationRecorderView;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(id)vibrationRecorderView;
- (void)vibrationRecorderView:(id)view buttonTappedWithIdentifier:(unsigned)identifier;
- (void)vibrationComponentDidEndForVibrationRecorderView:(id)vibrationComponent;
- (void)vibrationComponentDidStartForVibrationRecorderView:(id)vibrationComponent;
@end
