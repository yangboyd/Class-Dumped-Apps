//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGAPIClient, IGAdsAdDetailsPageNetworkSourceDelegate;

@interface IGAdsAdDetailsPageNetworkSource : NSObject
{
    id <IGAPIClient> _networker;
    NSString *_adId;
    NSString *_advertiserIgid;
    NSString *_mediaId;
    id <IGAdsAdDetailsPageNetworkSourceDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)beginRequest;
- (id)initWithNetworker:(id)arg1 objectStores:(id)arg2 adId:(id)arg3 advertiserIgid:(id)arg4 mediaId:(id)arg5 delegate:(id)arg6;

@end

