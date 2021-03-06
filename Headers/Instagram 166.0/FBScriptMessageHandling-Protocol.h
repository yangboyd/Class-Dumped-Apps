//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, WKSecurityOrigin;
@protocol FBWebView;

@protocol FBScriptMessageHandling <NSObject>
+ (NSArray *)supportedMessageNames;
- (_Bool)requireDelegateSetUp;
- (_Bool)supportsCallback;
- (_Bool)requireDomainToBeWhitelisted;
- (_Bool)requireHttps;
- (_Bool)requireAppId;
- (void)handleScriptMessageFromWebView:(id <FBWebView>)arg1 messageOrigin:(WKSecurityOrigin *)arg2 websiteURL:(NSURL *)arg3 messageName:(NSString *)arg4 messageParams:(NSDictionary *)arg5;
@end

