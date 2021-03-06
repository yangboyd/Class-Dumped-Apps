//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADResponseInfo, NSDictionary, NSString, UIViewController;
@protocol GADNativeAdDelegate;

@interface GADNativeAd : NSObject
{
    id <GADNativeAdDelegate> _delegate;
    UIViewController *_rootViewController;
    NSDictionary *_extraAssets;
    GADResponseInfo *_responseInfo;
    NSString *_adNetworkClassName;
}

@property(readonly, copy, nonatomic) NSString *adNetworkClassName; // @synthesize adNetworkClassName=_adNetworkClassName;
@property(readonly, nonatomic) GADResponseInfo *responseInfo; // @synthesize responseInfo=_responseInfo;
@property(readonly, copy, nonatomic) NSDictionary *extraAssets; // @synthesize extraAssets=_extraAssets;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <GADNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end

