//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTGaiaDeviceProtocol <NSObject>
@property(readonly, nonatomic, getter=isSocialConnect) _Bool socialConnect;
@property(readonly, nonatomic) long long volumeSteps;
@property(readonly, nonatomic) _Bool supportsVolume;
@property(readonly, nonatomic) float volume;
@property(readonly, nonatomic, getter=isShuffleDevice) _Bool shuffleDevice;
@property(readonly, nonatomic) _Bool isAttached;
@property(readonly, nonatomic) unsigned long long deviceState;
@property(readonly, nonatomic) unsigned long long deviceType;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *physicalDeviceId;
@property(readonly, nonatomic) NSString *deviceId;
@end

