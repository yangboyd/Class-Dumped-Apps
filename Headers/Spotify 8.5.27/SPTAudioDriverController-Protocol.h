//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SPTAudioDriver;
@protocol SPTAudioDriverControllerObserver;

@protocol SPTAudioDriverController <NSObject>
@property(readonly, nonatomic) NSArray *audioDrivers;
- (SPTAudioDriver *)createAudioDriverWithAudioDriverType:(long long)arg1;
- (void)removeObserver:(id <SPTAudioDriverControllerObserver>)arg1;
- (void)addObserver:(id <SPTAudioDriverControllerObserver>)arg1;
@end

