//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEDevicesGridViewController.h"

@class HMEModel, NSArray;
@protocol AnalyticsLogger, HMESpacelessDevicesViewControllerDelegate;

@interface HMESpacelessDevicesViewController : HMEDevicesGridViewController
{
    id <HMESpacelessDevicesViewControllerDelegate> _delegate;
    HMEModel *_unifiedDevices;
    NSArray *_devicesToDisplay;
    id <AnalyticsLogger> _analyticsLogger;
    long long _configuration;
}

+ (id)linkedToYouHeaderSubtitle;
+ (id)linkedToYouHeaderTitle;
+ (id)inYourHomeHeaderSubtitle;
+ (id)inYourHomeHeaderTitle;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(retain, nonatomic) NSArray *devicesToDisplay; // @synthesize devicesToDisplay=_devicesToDisplay;
@property(readonly, nonatomic) HMEModel *unifiedDevices; // @synthesize unifiedDevices=_unifiedDevices;
@property(nonatomic) __weak id <HMESpacelessDevicesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setupDevices;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)headerSubtitle;
- (id)headerTitle;
- (void)modelDidUpdated:(id)arg1;
- (id)deviceAtIndexPath:(id)arg1;
- (long long)numberOfDevices;
- (void)viewDidLoad;
- (id)initWithConfiguration:(long long)arg1 unifiedDevices:(id)arg2 deviceEligibilityChecker:(id)arg3 structureData:(id)arg4 structureID:(id)arg5 analyticsLogger:(id)arg6 experimentFlags:(id)arg7;

@end

