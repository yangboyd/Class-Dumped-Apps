//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAPersistentKeyValueStore;

@interface WALowStorageBannerManager : NSObject
{
    _Bool _dismissed;
    WAPersistentKeyValueStore *_kvStore;
}

- (void).cxx_destruct;
- (void)updateBannerToDismissedStatus;
@property(readonly, nonatomic) _Bool shouldShowBanner;
- (id)dataFromBoolValue:(_Bool)arg1;
- (id)initWithKeyValueStore:(id)arg1;

@end

