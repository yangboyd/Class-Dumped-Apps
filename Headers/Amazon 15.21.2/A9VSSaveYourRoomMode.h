//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "A9VSFezRoomsPanelDrawerViewControllerDelegate-Protocol.h"
#import "A9VSModesContainerProtocol-Protocol.h"
#import "A9VSNetworkObserver-Protocol.h"

@class A9VSFezRoomsPanelDrawerViewController, A9VSMessageCard, A9VSMessageCardHelper, A9VSModeFlowSessionKeeper, A9VSNetwork, NSDate, NSString, UIView;
@protocol A9VSModesViewControllerProtocol;

@interface A9VSSaveYourRoomMode : UIViewController <A9VSFezRoomsPanelDrawerViewControllerDelegate, A9VSNetworkObserver, A9VSModesContainerProtocol>
{
    _Bool _hasSavedRoom;
    NSString *fireflyModeName;
    NSString *metricName;
    UIViewController<A9VSModesViewControllerProtocol> *_containerObj;
    A9VSFezRoomsPanelDrawerViewController *_roomsPanelDrawerViewController;
    A9VSMessageCardHelper *_messageCardHelper;
    A9VSModeFlowSessionKeeper *_sessionKeeper;
    A9VSMessageCard *_generalErrorMessage;
    A9VSMessageCard *_networkErrorMessage;
    A9VSMessageCard *_noSavedRoomMessage;
    A9VSNetwork *_network;
    UIView *_messageOverlayView;
    NSDate *_loadStartTime;
}

@property(nonatomic) _Bool hasSavedRoom; // @synthesize hasSavedRoom=_hasSavedRoom;
@property(retain, nonatomic) NSDate *loadStartTime; // @synthesize loadStartTime=_loadStartTime;
@property(retain, nonatomic) UIView *messageOverlayView; // @synthesize messageOverlayView=_messageOverlayView;
@property(retain, nonatomic) A9VSNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) A9VSMessageCard *noSavedRoomMessage; // @synthesize noSavedRoomMessage=_noSavedRoomMessage;
@property(retain, nonatomic) A9VSMessageCard *networkErrorMessage; // @synthesize networkErrorMessage=_networkErrorMessage;
@property(retain, nonatomic) A9VSMessageCard *generalErrorMessage; // @synthesize generalErrorMessage=_generalErrorMessage;
@property(retain, nonatomic) A9VSModeFlowSessionKeeper *sessionKeeper; // @synthesize sessionKeeper=_sessionKeeper;
@property(retain, nonatomic) A9VSMessageCardHelper *messageCardHelper; // @synthesize messageCardHelper=_messageCardHelper;
@property(retain, nonatomic) A9VSFezRoomsPanelDrawerViewController *roomsPanelDrawerViewController; // @synthesize roomsPanelDrawerViewController=_roomsPanelDrawerViewController;
@property(nonatomic) __weak UIViewController<A9VSModesViewControllerProtocol> *containerObj; // @synthesize containerObj=_containerObj;
@property(retain, nonatomic) NSString *metricName; // @synthesize metricName;
@property(retain, nonatomic) NSString *fireflyModeName; // @synthesize fireflyModeName;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)roomManagerDidUpdateRooms;
- (void)roomsPanelDrawerViewController:(id)arg1 didSelectRoom:(id)arg2 atIndexPath:(id)arg3 onSelectionCompletion:(CDUnknownBlockType)arg4;
- (void)roomsPanelDrawerViewController:(id)arg1 didFailToLoadRoomsWithError:(id)arg2;
- (void)roomsPanelDrawerViewController:(id)arg1 didLoadRooms:(id)arg2;
- (void)applicationDidBecomeActive;
- (void)didReceiveSnapScanDestinationWithData:(id)arg1;
- (void)didLaunchModeHomePage;
- (void)willMoveOutOfMode;
- (void)willLaunchModeHomePage;
- (void)userInteractionEnded;
- (void)userInteractionDetected;
- (void)configureContainerReference:(id)arg1;
- (id)cameraCaptureModules;
- (void)showModeNotAvailableUI;
- (void)showNetworkErrorMessage;
- (void)network:(id)arg1 didChangeStatus:(unsigned long long)arg2;
- (struct CGRect)targetRect:(id)arg1;
- (id)getResizedGuidanceImage;
- (void)hideAllMessages;
- (void)addRoomsPanelView;
- (void)addMessageOverlayView;
- (void)addGuidanceBackground;
- (void)logModeDisplayedMetric;
- (void)startMonitoringNetwork;
- (void)displayInitialUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

