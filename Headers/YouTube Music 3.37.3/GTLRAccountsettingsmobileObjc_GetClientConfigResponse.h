//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRDuration, NSArray, NSNumber;

@interface GTLRAccountsettingsmobileObjc_GetClientConfigResponse : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) NSNumber *canUsePeopleApiForProfilePictureUploading; // @dynamic canUsePeopleApiForProfilePictureUploading;
@property(retain, nonatomic) NSArray *heartbeatTimesS; // @dynamic heartbeatTimesS;
@property(retain, nonatomic) NSNumber *prefetchingEnabled; // @dynamic prefetchingEnabled;
@property(retain, nonatomic) GTLRDuration *screenMaxLifetime; // @dynamic screenMaxLifetime;
@property(retain, nonatomic) GTLRDuration *stableScreenStaleTime; // @dynamic stableScreenStaleTime;
@property(retain, nonatomic) GTLRDuration *unstableScreenStaleTime; // @dynamic unstableScreenStaleTime;
@property(retain, nonatomic) NSArray *webviewBlacklistedUrlPatterns; // @dynamic webviewBlacklistedUrlPatterns;
@property(retain, nonatomic) NSArray *webviewBrowserAuthBlacklistedUrlPatterns; // @dynamic webviewBrowserAuthBlacklistedUrlPatterns;
@property(retain, nonatomic) NSArray *webviewBrowserAuthWhitelistedUrlPatterns; // @dynamic webviewBrowserAuthWhitelistedUrlPatterns;
@property(retain, nonatomic) NSArray *webviewDefaultJsBridgeBlacklistedUrlPatterns; // @dynamic webviewDefaultJsBridgeBlacklistedUrlPatterns;
@property(retain, nonatomic) NSArray *webviewDefaultJsBridgeWhitelistedUrlPatterns; // @dynamic webviewDefaultJsBridgeWhitelistedUrlPatterns;
@property(retain, nonatomic) NSArray *webviewUdcJsBridgeBlacklistedUrlPatterns; // @dynamic webviewUdcJsBridgeBlacklistedUrlPatterns;
@property(retain, nonatomic) NSArray *webviewUdcJsBridgeWhitelistedUrlPatterns; // @dynamic webviewUdcJsBridgeWhitelistedUrlPatterns;
@property(retain, nonatomic) NSArray *webviewWhitelistedUrlPatterns; // @dynamic webviewWhitelistedUrlPatterns;

@end

