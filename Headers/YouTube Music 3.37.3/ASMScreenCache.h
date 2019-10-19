//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSTimer;

@interface ASMScreenCache : NSObject
{
    NSMutableDictionary *_cache;
    NSTimer *_cleanupTimer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)simpleItemWithScreenID:(id)arg1 titleText:(id)arg2 subtitleText:(id)arg3;
- (void)removeExpiredScreens;
- (void)cleanup:(id)arg1;
- (_Bool)isPrefetchingEnabledForAuthorization:(id)arg1 service:(id)arg2;
- (void)clear;
- (void)markUnstableScreensStaleWithAuthorization:(id)arg1;
- (void)prefetchScreensForViewedScreen:(long long)arg1 options:(id)arg2 authorization:(id)arg3 service:(id)arg4;
- (id)getScreensToOmitWithAuthorization:(id)arg1;
- (void)fetchScreenWithScreenID:(long long)arg1 options:(id)arg2 authorization:(id)arg3 service:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)setScreen:(id)arg1 authorization:(id)arg2;
- (id)getScreenWithScreenID:(long long)arg1 authorization:(id)arg2 service:(id)arg3;
- (id)init;

@end

