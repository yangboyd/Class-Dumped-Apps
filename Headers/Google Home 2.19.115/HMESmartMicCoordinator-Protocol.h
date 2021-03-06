//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMESelfDismissingView, NSArray, NSString;
@protocol HMESmartMicCoordinatorDelegate;

@protocol HMESmartMicCoordinator <NSObject>
@property(nonatomic) __weak id <HMESmartMicCoordinatorDelegate> delegate;
@property(readonly, nonatomic) HMESelfDismissingView *voicePlate;
- (id)init;
- (void)broadcastWithQuery:(NSString *)arg1 toCloudCastDeviceIDs:(NSArray *)arg2;
- (void)stopSmartMic;
- (void)startSmartMic;
@end

