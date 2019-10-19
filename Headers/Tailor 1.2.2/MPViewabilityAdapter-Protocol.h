//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol MPViewabilityAdapter <NSObject>
@property(readonly, nonatomic) _Bool isTracking;
- (void)registerFriendlyObstructionView:(UIView *)arg1;
- (void)stopTracking;
- (void)startTracking;
- (id)initWithAdView:(UIView *)arg1 isVideo:(_Bool)arg2 startTrackingImmediately:(_Bool)arg3;
@end

