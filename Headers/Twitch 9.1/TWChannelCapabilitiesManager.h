//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface TWChannelCapabilitiesManager : NSObject
{
    NSCache *_cachedCapabilities;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *cachedCapabilities; // @synthesize cachedCapabilities=_cachedCapabilities;
- (_Bool)lastCheckedDateIsWithinThreshold:(id)arg1;
- (id)cachedEntryForChannel:(id)arg1 isWithinLastCheckedThreshold:(_Bool *)arg2;
- (void)cacheNewlyFetchedCapabilities:(id)arg1 forChannel:(id)arg2;
- (void)getChannelCapabilitiesForChannel:(id)arg1 onAvailable:(CDUnknownBlockType)arg2 onUnavailable:(CDUnknownBlockType)arg3;
- (id)init;

@end

