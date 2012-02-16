/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>
#import <AirPortAssistant/StepByStepUIDevicePicker.h>

@class UIView, UILabel;

__attribute__((visibility("hidden")))
@interface StepByStepUIViewController_ReplaceNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
	UIView *tableHeaderContainerView;	// 264 = 0x108
	UIView *justTextContainerView;	// 268 = 0x10c
	UILabel *justTextLabel;	// 272 = 0x110
}
@property(retain, nonatomic) UILabel *justTextLabel;	// G=0x190fd; S=0x1910d; @synthesize
@property(retain, nonatomic) UIView *justTextContainerView;	// G=0x190c9; S=0x190d9; @synthesize
@property(retain, nonatomic) UIView *tableHeaderContainerView;	// G=0x19095; S=0x190a5; @synthesize
// declared property setter: - (void)setJustTextLabel:(id)label;	// 0x1910d
// declared property getter: - (id)justTextLabel;	// 0x190fd
// declared property setter: - (void)setJustTextContainerView:(id)view;	// 0x190d9
// declared property getter: - (id)justTextContainerView;	// 0x190c9
// declared property setter: - (void)setTableHeaderContainerView:(id)view;	// 0x190a5
// declared property getter: - (id)tableHeaderContainerView;	// 0x19095
- (id)devicePickerLabel;	// 0x19075
- (id)deviceTableLabel;	// 0x19055
- (void)setupDevices;	// 0x18fa1
- (void)updateNavigationButtons;	// 0x18f79
- (void)prepareParams;	// 0x18f75
- (void)setupHeaderAndFooter;	// 0x18e51
@end