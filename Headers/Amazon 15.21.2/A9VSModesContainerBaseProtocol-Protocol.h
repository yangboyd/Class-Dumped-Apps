//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "A9VSScanItDestinationProtocol-Protocol.h"

@class A9VSMessageCard, NSArray, NSObject, NSString, UIView, UIViewController;
@protocol A9VSModesViewControllerBaseProtocol;

@protocol A9VSModesContainerBaseProtocol <A9VSScanItDestinationProtocol>
@property(retain, nonatomic) NSString *metricName;
@property(retain, nonatomic) NSString *fireflyModeName;
- (NSArray *)cameraCaptureModules;

@optional
- (void)helpButtonTouched;
- (void)didTapBackToTopButton:(id)arg1;
- (void)didLaunchModeHomePage;
- (void)didMoveOutOfMode;
- (void)willMoveOutOfMode;
- (void)updateModeSwitchUIOpacity:(double)arg1;
- (void)willLaunchModeHomePage;
- (double)constantForBottomConstraintForCard:(A9VSMessageCard *)arg1;
- (_Bool)didModeShowModal;
- (NSString *)modesInfoHeaderText;
- (void)configureContainerReference:(UIViewController<A9VSModesViewControllerBaseProtocol> *)arg1;
- (void)userInteractionEnded;
- (void)userInteractionDetected;
- (void)didTapCloseAction:(id)arg1;
- (UIView *)bottomPanelView;
- (NSArray *)rightPanelActionList;
- (id)initWithViewModel:(NSObject *)arg1;
@end

