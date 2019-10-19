//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol MLLicenseRequest <NSObject>
@property(readonly, nonatomic) _Bool forOffline;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic) unsigned int cryptoPeriodIndex;
@property(readonly, nonatomic) _Bool isKeyRotated;
@property(readonly, nonatomic) NSData *licenseData;
@property(readonly, nonatomic) NSData *fairPlayKeyID;
@property(readonly, nonatomic) NSString *CPN;
@property(readonly, nonatomic) NSString *DRMSessionID;
@property(readonly, nonatomic) NSString *DRMParams;
@property(readonly, nonatomic) int DRMSystem;
@property(readonly, nonatomic) NSString *videoID;
@property(readonly, nonatomic) _Bool prepared;
- (void)prepareWithCompletion:(void (^)(NSError *))arg1;
@end

