//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSingleton.h"

@class NSString, NSURL;

@interface AWMarketplaceInfo : AWSingleton
{
    NSURL *serverURL;
    NSURL *secureServerURL;
    NSString *secureWebViewHost;
    NSString *_webViewHost;
    NSString *_HTTPCookieJarKey;
    NSString *_associateTag;
}

+ (id)iconNameForMarketplace:(id)arg1;
+ (id)iconForMarketplace:(id)arg1;
+ (void)setAmazonLocale:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initializeWithSupportedMarketplaces:(id)arg1;
+ (id)accountPoolForMarketplace:(id)arg1;
+ (id)currentMarketplace;
+ (void)clearAmazonMarketplaceInfo;
@property(retain, nonatomic) NSString *associateTag; // @synthesize associateTag=_associateTag;
@property(retain, nonatomic) NSString *HTTPCookieJarKey; // @synthesize HTTPCookieJarKey=_HTTPCookieJarKey;
@property(readonly, copy, nonatomic) NSString *webViewHost; // @synthesize webViewHost=_webViewHost;
@property(copy, nonatomic) NSString *secureWebViewHost; // @synthesize secureWebViewHost;
@property(retain, nonatomic) NSURL *secureServerURL; // @synthesize secureServerURL;
@property(retain, nonatomic) NSURL *serverURL; // @synthesize serverURL;
- (void).cxx_destruct;
- (_Bool)isEUMarketplace;
@property(readonly, nonatomic) NSString *amazonMarketplace;
- (void)reloadConfiguration;
- (void)notifySubscribers:(id)arg1;
- (id)init;

@end

