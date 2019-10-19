//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString, SCNNetworkManagerTrackingInfo;
@protocol SCNShimsDataProvider;

@protocol SCNNetworkManagerUrlRequest
- (NSString *)getRequestBatchId;
- (_Bool)getIsBigSizeMedia;
- (NSArray *)getContexts;
- (SCNNetworkManagerTrackingInfo *)getTrackingInfo;
- (_Bool)getIsUserInitiated;
- (_Bool)getIsAuthenticated;
- (NSString *)getKey;
- (long long)getFallbackPriority;
- (long long)getPriority;
- (long long)getRequestType;
- (long long)getConnectivity;
- (NSDictionary *)getParameters;
- (id <SCNShimsDataProvider>)getPayload;
- (NSDictionary *)getHeaders;
- (long long)getRequestMethod;
- (_Bool)getIsRelativePath;
- (NSString *)getUrl;
@end

