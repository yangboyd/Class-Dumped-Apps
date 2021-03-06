//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCellController.h>

#import <Module_Framework/LDDisplayAdDelegate-Protocol.h>
#import <Module_Framework/YTAppearanceObserver-Protocol.h>

@class NSString, YTColdConfig;

@interface YTActiveViewCellController : YTInnerTubeCellController <YTAppearanceObserver, LDDisplayAdDelegate>
{
    YTColdConfig *_coldConfig;
    _Bool _hasFiredViewableImpression;
    NSString *_activeViewAdId;
}

@property(readonly, nonatomic) _Bool hasFiredViewableImpression; // @synthesize hasFiredViewableImpression=_hasFiredViewableImpression;
@property(readonly, nonatomic) NSString *activeViewAdId; // @synthesize activeViewAdId=_activeViewAdId;
- (void).cxx_destruct;
- (void)sendEndOfSessionImpressionWithActiveViewData:(id)arg1;
- (_Bool)shouldReportEndOfSessionImpression;
- (void)sendViewableImpressionWithActiveViewData:(id)arg1;
- (void)sendCommands:(id)arg1 withActiveViewData:(id)arg2;
- (_Bool)shouldMonitorWithActiveView;
- (id)getDisplayMonitor;
- (void)viewDidDisappearInViewController:(id)arg1;
- (void)viewDidAppearInViewController:(id)arg1;
- (void)viewWillDisappearInViewController:(id)arg1;
- (void)viewWillAppearInViewController:(id)arg1;
- (void)didBecomeHidden;
- (void)willBecomeVisible;
- (void)dealloc;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

