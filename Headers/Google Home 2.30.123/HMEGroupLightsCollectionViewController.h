//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewController.h"

#import "HMEGroupLightsCollectionViewCellDelegate-Protocol.h"

@class NSArray, NSString;
@protocol ASTHomeAutomationManagerProtocol, AnalyticsLogger, HMEGroupLightsCollectionViewControllerDelegate;

@interface HMEGroupLightsCollectionViewController : MDCCollectionViewController <HMEGroupLightsCollectionViewCellDelegate>
{
    id <HMEGroupLightsCollectionViewControllerDelegate> _delegate;
    id <ASTHomeAutomationManagerProtocol> _homeAutomationManager;
    NSArray *_lights;
    id <AnalyticsLogger> _analyticsLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(copy, nonatomic) NSArray *lights; // @synthesize lights=_lights;
@property(retain, nonatomic) id <ASTHomeAutomationManagerProtocol> homeAutomationManager; // @synthesize homeAutomationManager=_homeAutomationManager;
@property(nonatomic) __weak id <HMEGroupLightsCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)logNetworkEventComplete:(id)arg1 withError:(id)arg2;
- (id)networkEventWithUserActionType:(int)arg1 forDevice:(id)arg2;
- (void)logUserInteraction:(int)arg1 forDevice:(id)arg2 withValue:(id)arg3;
- (void)fillContentInfoAndLocationForEvent:(id)arg1 forDevice:(id)arg2;
- (void)fillContentInfoAndLocationForEvent:(id)arg1 forDevices:(id)arg2;
- (void)logImpression;
- (id)onOffParameterForLight:(id)arg1;
- (id)brightnessParameterForLight:(id)arg1;
- (void)presentViewControllerForLight:(id)arg1;
- (void)brightnessSliderDidChangeToValue:(double)arg1 forLight:(id)arg2;
- (void)didSetLight:(id)arg1 toOn:(_Bool)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHomeAutomationManager:(id)arg1 lights:(id)arg2 analyticsLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

