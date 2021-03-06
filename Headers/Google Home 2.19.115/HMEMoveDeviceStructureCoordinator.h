//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEChooseStructureCoordinatorDelegate-Protocol.h"
#import "HMEMoveDeviceStructureCoordinator-Protocol.h"
#import "HMEMoveDeviceStructureViewControllerDelegate-Protocol.h"
#import "HMESetupChooseRoomTaskCoordinatorDelegate-Protocol.h"

@class GHCDeviceId, HMEChooseStructureCoordinator, HMESetupChooseRoomTaskCoordinator, HMESetupNavigationController, HMEWaitingViewController, NSString;
@protocol AnalyticsLogger, HMEDeviceData, HMEMoveDeviceStructureCoordinatorDelegate, HMESpaceData, HMEStructureData, HMEUnifiedDeviceData;

@interface HMEMoveDeviceStructureCoordinator : NSObject <HMEChooseStructureCoordinatorDelegate, HMEMoveDeviceStructureViewControllerDelegate, HMESetupChooseRoomTaskCoordinatorDelegate, HMEMoveDeviceStructureCoordinator>
{
    id <HMEMoveDeviceStructureCoordinatorDelegate> _delegate;
    HMESetupNavigationController *_navigationController;
    HMEWaitingViewController *_waitingSpinnerViewController;
    HMEChooseStructureCoordinator *_chooseStructureCoordinator;
    HMESetupChooseRoomTaskCoordinator *_chooseRoomTaskCoordinator;
    id <HMEStructureData> _structureData;
    id <HMESpaceData> _spaceData;
    id <HMEDeviceData> _deviceData;
    id <HMEUnifiedDeviceData> _unifiedDeviceData;
    id <AnalyticsLogger> _analyticsLogger;
    NSString *_moveDeviceToStructureID;
    GHCDeviceId *_deviceID;
    NSString *_currentSelectedStructureID;
    NSString *_currentDeviceStructureID;
}

@property(retain, nonatomic) NSString *currentDeviceStructureID; // @synthesize currentDeviceStructureID=_currentDeviceStructureID;
@property(readonly, nonatomic) NSString *currentSelectedStructureID; // @synthesize currentSelectedStructureID=_currentSelectedStructureID;
@property(retain, nonatomic) GHCDeviceId *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *moveDeviceToStructureID; // @synthesize moveDeviceToStructureID=_moveDeviceToStructureID;
@property(readonly, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) id <HMEUnifiedDeviceData> unifiedDeviceData; // @synthesize unifiedDeviceData=_unifiedDeviceData;
@property(readonly, nonatomic) id <HMEDeviceData> deviceData; // @synthesize deviceData=_deviceData;
@property(readonly, nonatomic) id <HMESpaceData> spaceData; // @synthesize spaceData=_spaceData;
@property(readonly, nonatomic) id <HMEStructureData> structureData; // @synthesize structureData=_structureData;
@property(readonly, nonatomic) HMESetupChooseRoomTaskCoordinator *chooseRoomTaskCoordinator; // @synthesize chooseRoomTaskCoordinator=_chooseRoomTaskCoordinator;
@property(readonly, nonatomic) HMEChooseStructureCoordinator *chooseStructureCoordinator; // @synthesize chooseStructureCoordinator=_chooseStructureCoordinator;
@property(retain, nonatomic) HMEWaitingViewController *waitingSpinnerViewController; // @synthesize waitingSpinnerViewController=_waitingSpinnerViewController;
@property(retain, nonatomic) HMESetupNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <HMEMoveDeviceStructureCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)createSpaceAndMoveDeviceToRoom:(id)arg1;
- (void)moveDeviceToRoom:(id)arg1;
- (void)didTapExit;
- (id)exitButton;
- (void)presentWaitingScreenInViewController:(id)arg1;
- (void)chooseRoomDidGoBack:(id)arg1;
- (void)chooseRoom:(id)arg1 didSelectRoom:(id)arg2;
- (void)moveDeviceStructureViewControllerDidTapBackButton:(id)arg1;
- (void)moveDeviceStructureViewController:(id)arg1 shouldMoveDeviceID:(id)arg2 toStructure:(id)arg3;
- (void)chooseStructureCoordinatorShouldShowZeroStructure:(id)arg1;
- (void)chooseStructureCoordinatorShouldExit:(id)arg1;
- (void)structureCoordinator:(id)arg1 didAcceptInvitationForStructureWithID:(id)arg2;
- (void)structureCoordinator:(id)arg1 didChooseStructureID:(id)arg2;
- (void)startWithPresentingViewController:(id)arg1 forDeviceID:(id)arg2 deviceStructureID:(id)arg3;
- (id)initWithCurrentStructureID:(id)arg1 structureData:(id)arg2 spaceData:(id)arg3 deviceData:(id)arg4 unifiedDeviceData:(id)arg5 analyticsLogger:(id)arg6 chooseStructureCoordinatoryFactory:(CDUnknownBlockType)arg7 chooseRoomCoordinatorFactory:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

