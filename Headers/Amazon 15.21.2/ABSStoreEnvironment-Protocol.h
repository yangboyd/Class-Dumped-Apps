//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol ABSStoreEnvironment <NSObject>
@property(readonly, nonatomic) NSString *domain;
@property(readonly, nonatomic) NSString *appVersion;
@property(readonly, nonatomic) NSString *deviceId;
@property(readonly, nonatomic) NSString *connectionType;
- (_Bool)isFirstRequestForFeatureId:(NSString *)arg1;
- (NSString *)bucketForFeatureId:(NSString *)arg1;
- (long long)bundleVersionCodeForFeatureId:(NSString *)arg1;
- (NSString *)currentBundleIdForFeatureId:(NSString *)arg1;
- (NSString *)sdkVersion;
@end

