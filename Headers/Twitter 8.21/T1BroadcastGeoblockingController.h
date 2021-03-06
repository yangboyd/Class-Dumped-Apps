//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNTwitterAccount;
@protocol TFNTwitterGeoDataProvider;

@interface T1BroadcastGeoblockingController : NSObject
{
    id <TFNTwitterGeoDataProvider> _geoDataProvider;
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) id <TFNTwitterGeoDataProvider> geoDataProvider; // @synthesize geoDataProvider=_geoDataProvider;
- (void)requestLocationUpdate:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasCachedLocation;
@property(readonly, nonatomic) unsigned long long permissionState;
- (id)initWithGeoDataProvider:(id)arg1 account:(id)arg2;
- (id)init;

@end

