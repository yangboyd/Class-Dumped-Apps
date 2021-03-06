//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEBottomBarViewController.h"

@class ASTHomeAutomationDevice;
@protocol AnalyticsLogger, HMEHomeAutomationDeviceLinkOpener, HMESetUpNestCameraCTAViewControllerDelegate;

@interface HMESetUpNestCameraCTAViewController : HMEBottomBarViewController
{
    id <HMESetUpNestCameraCTAViewControllerDelegate> _delegate;
    id <AnalyticsLogger> _analyticsLogger;
    long long _context;
    ASTHomeAutomationDevice *_homeAutomationDevice;
    id <HMEHomeAutomationDeviceLinkOpener> _deviceLinkOpener;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMEHomeAutomationDeviceLinkOpener> deviceLinkOpener; // @synthesize deviceLinkOpener=_deviceLinkOpener;
@property(retain, nonatomic) ASTHomeAutomationDevice *homeAutomationDevice; // @synthesize homeAutomationDevice=_homeAutomationDevice;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(retain, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) __weak id <HMESetUpNestCameraCTAViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)openDeeplinkToNestAppOrAppStoreWithAnalyticsBlock:(CDUnknownBlockType)arg1;
- (void)didTapGetNestAppButton;
- (void)didOpenNestAppButton;
- (void)didTapNotNowButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithAnalyticsLogger:(id)arg1 homeAutomationDevice:(id)arg2 context:(long long)arg3 deviceLinkOpener:(id)arg4;

@end

