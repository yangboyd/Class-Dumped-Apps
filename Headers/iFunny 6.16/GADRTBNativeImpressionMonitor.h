//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSDictionary;

@interface GADRTBNativeImpressionMonitor : NSObject
{
    GADObserverCollection *_observers;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _didPostImpression
    _Bool _hasRTBNativeRequiredAssets;
    _Bool _adViewVisible;
    NSDictionary *_RTBNativeRequiredAssets;
}

+ (void)addMonitorToAd:(id)arg1 RTBNativeRequiredAssets:(id)arg2;
- (void).cxx_destruct;
- (void)checkRTBNativeRequiredAssets:(id)arg1 clickableViews:(id)arg2 nonclickableViews:(id)arg3;
- (void)viewBecameVisible:(id)arg1;
- (void)RTBNativeRequiredAssetsArePresent:(id)arg1;
- (void)maybePingImpression:(id)arg1;
- (id)initWithAd:(id)arg1 RTBNativeRequiredAssets:(id)arg2;

@end

