//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOProvider;
@protocol GBTAccountsService, GBTFlagService, GBTSyncClientService;

@protocol GBTHappinessTrackingServiceImplDeps <NSObject>
@property(readonly, nonatomic) GOOProvider *syncClientServiceProvider;
@property(readonly, nonatomic) GOOProvider *flagServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider;
@property(readonly, nonatomic) id <GBTSyncClientService> syncClientService;
@property(readonly, nonatomic) id <GBTFlagService> flagService;
@property(readonly, nonatomic) id <GBTAccountsService> accountsService;
@end

