/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"

@class SBAlertDisplay, SBUIFullscreenAlertController;

@interface SBUIFullscreenAlertAdapter : SBAlert {
	SBUIFullscreenAlertController *_alertController;	// 60 = 0x3c
	SBAlertDisplay *_alertDisplay;	// 64 = 0x40
}
@property(readonly, retain) SBUIFullscreenAlertController *alertController;	// G=0x12d1bd; converted property
- (id)initWithAlertController:(id)alertController;	// 0x12d1cd
- (BOOL)allowsEventOnlySuspension;	// 0x12d889
- (BOOL)hasTranslucentBackground;	// 0x12d865
- (void)dealloc;	// 0x12d7d5
- (void)deactivate;	// 0x12d781
- (id)alertDisplayViewWithSize:(CGSize)size;	// 0x12d6c9
- (BOOL)viewIsReadyToBeRemoved;	// 0x12d6a5
- (BOOL)viewDisplaysAboveStatusBar;	// 0x12d681
- (void)setViewShouldAnimateIn:(BOOL)animateIn;	// 0x12d65d
- (void)prepareViewToAnimateOut;	// 0x12d63d
- (void)animateViewOut;	// 0x12d61d
- (void)_pluginViewAnimatedOut:(id)anOut;	// 0x12d5d1
// converted property getter: - (id)alertController;	// 0x12d1bd
- (void)alertWindowResizedFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame2;	// 0x12d551
- (void)alertWindowWillRotateToInterfaceOrientation:(int)alertWindow duration:(double)duration;	// 0x12d4ed
- (void)alertWindowWillAnimateRotationToInterfaceOrientation:(int)alertWindow duration:(double)duration;	// 0x12d489
- (void)alertWindowDidRotateFromInterfaceOrientation:(int)alertWindow;	// 0x12d439
- (BOOL)handleMenuButtonTap;	// 0x12d415
- (BOOL)handleLockButtonPressed;	// 0x12d3f1
- (BOOL)handleVolumeUpButtonPressed;	// 0x12d3cd
- (BOOL)handleVolumeDownButtonPressed;	// 0x12d3a9
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;	// 0x12d381
- (void)launchSucceeded:(BOOL)succeeded;	// 0x12d309
- (id)description;	// 0x12d27d
@end

