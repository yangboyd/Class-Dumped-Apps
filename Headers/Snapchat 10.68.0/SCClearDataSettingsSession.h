//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCClearCacheManager, SCQueuePerformer;

@interface SCClearDataSettingsSession : NSObject
{
    double _freeDiskPrev;
    double _usedStoragePrev;
    NSMutableDictionary *_featureCacheStat;
    SCQueuePerformer *_performer;
    SCClearCacheManager *_clearCacheManager;
}

- (void).cxx_destruct;
- (void)didEnterClearCachePage;
- (id)_interpreteSCCacheKeyType:(int)arg1;
- (id)initWithClearCacheManager:(id)arg1;

@end

