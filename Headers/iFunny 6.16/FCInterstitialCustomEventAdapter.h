//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MPInterstitialCustomEventAdapter.h>

@protocol InterstitialLogService;

@interface FCInterstitialCustomEventAdapter : MPInterstitialCustomEventAdapter
{
    id <InterstitialLogService> _interstitialLogService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <InterstitialLogService> interstitialLogService; // @synthesize interstitialLogService=_interstitialLogService;
- (void)timeout;
- (void)interstitialCustomEvent:(id)arg1 didFailToLoadAdWithError:(id)arg2;
- (void)getAdWithConfiguration:(id)arg1 targeting:(id)arg2;

@end

