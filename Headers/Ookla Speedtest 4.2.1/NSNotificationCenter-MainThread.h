//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNotificationCenter.h>

@interface NSNotificationCenter (MainThread)
- (void)postNotificationOnMainThreadName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationOnMainThreadName:(id)arg1 object:(id)arg2;
- (void)postNotificationOnMainThread:(id)arg1;
- (void)removeObserverForChildStatusReporting:(id)arg1 withSelectorDictionary:(id)arg2;
- (void)addObserverForChildStatusReporting:(id)arg1 withSelectorDictionary:(id)arg2;
- (void)removeObserverForVPNStatusReporting:(id)arg1;
- (void)addObserverForVPNStatusReporting:(id)arg1;
@end

