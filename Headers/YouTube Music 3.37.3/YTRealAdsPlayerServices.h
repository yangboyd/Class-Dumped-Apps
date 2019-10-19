//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAdsPlayerServices-Protocol.h"
#import "YTPlayerAdsProvider-Protocol.h"

@class GIMMe, NSString;

@interface YTRealAdsPlayerServices : NSObject <YTAdsPlayerServices, YTPlayerAdsProvider>
{
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)forceInstreamAdsMenuWithBackButton:(_Bool)arg1 scrollsToTopCoordinator:(id)arg2 parentResponder:(id)arg3;
- (id)forceInstreamAdsMenuWith:(id)arg1 parentResponder:(id)arg2;
- (id)forceInDisplayAdsMenuWithBackButton:(_Bool)arg1 scrollsToTopCoordinator:(id)arg2 parentResponder:(id)arg3;
- (id)forceInDisplayAdsMenuWith:(id)arg1 parentResponder:(id)arg2;
- (id)adPodPlayerOverlayWithParentResponder:(id)arg1;
- (id)inlineAdVideoPlayerOverlayWithParentResponder:(id)arg1;
- (id)adVideoPlayerOverlayWithParentResponder:(id)arg1;
- (id)adMacroExpandersWithAd:(id)arg1 adBreak:(id)arg2 activeViewData:(id)arg3 adErrorType:(int)arg4 VASTErrorType:(int)arg5 internalError:(id)arg6;
- (id)adsPlaybackCoordinatorWithOverlayFactory:(id)arg1 delegate:(id)arg2 parentResponder:(id)arg3 contentPlayerResponse:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

