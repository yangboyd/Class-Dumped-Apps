//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AXFFABPresenter.h"

@class NSHashTable, UIViewController;
@protocol ANXMetricsService, AXFContextualActionsFABConfig;

@interface AXFShareFABPresenter : AXFFABPresenter
{
    id <ANXMetricsService> _metricsService;
    id <AXFContextualActionsFABConfig> _fabConfig;
    NSHashTable *_vcToShareIconTable;
    long long _screenType;
    UIViewController *_currentViewController;
    struct CGRect _currentParentFrame;
}

@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) long long screenType; // @synthesize screenType=_screenType;
@property(retain, nonatomic) NSHashTable *vcToShareIconTable; // @synthesize vcToShareIconTable=_vcToShareIconTable;
@property(retain, nonatomic) id <AXFContextualActionsFABConfig> fabConfig; // @synthesize fabConfig=_fabConfig;
@property(nonatomic) struct CGRect currentParentFrame; // @synthesize currentParentFrame=_currentParentFrame;
@property(retain, nonatomic) id <ANXMetricsService> metricsService; // @synthesize metricsService=_metricsService;
- (void).cxx_destruct;
- (void)showShareFABFromOverlayEvent;
- (void)hideShareFABFromOverlayEvent;
- (void)triggerShareBottomSheet;
- (void)toggleFabVisibility:(_Bool)arg1;
- (_Bool)shareFabIsEnabledForScreenType:(long long)arg1;
- (void)updateStateWithNewParentFrame:(struct CGRect)arg1;
- (void)notifyReady;
- (void)navigateToViewController:(id)arg1 withScreenType:(long long)arg2 newContentViewMaxFrame:(struct CGRect)arg3;
- (void)handleShareNotAvailableEvent:(id)arg1 sender:(id)arg2;
- (void)replaceShareIconwithFAB;
- (void)buttonTapped:(id)arg1;
- (id)initWithContentViewMaxFrame:(struct CGRect)arg1;

@end

