//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GIRInsecureRequestLogger : NSObject
{
    CDUnknownBlockType _handler;
    NSArray *_webSchemes;
    _Bool _shouldAllowArbitraryLoadsInMedia;
    _Bool _shouldAllowArbitraryLoadsInWebContent;
    _Bool _shouldAllowLocalNetworking;
    _Bool _shouldCrashOnInsecureURL;
    _Bool _shouldLogAllWebRequests;
    NSArray *_allowedInsecureHosts;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldLogAllWebRequests; // @synthesize shouldLogAllWebRequests=_shouldLogAllWebRequests;
@property(nonatomic) _Bool shouldCrashOnInsecureURL; // @synthesize shouldCrashOnInsecureURL=_shouldCrashOnInsecureURL;
@property(copy, nonatomic) NSArray *allowedInsecureHosts; // @synthesize allowedInsecureHosts=_allowedInsecureHosts;
@property(nonatomic) _Bool shouldAllowLocalNetworking; // @synthesize shouldAllowLocalNetworking=_shouldAllowLocalNetworking;
@property(nonatomic) _Bool shouldAllowArbitraryLoadsInWebContent; // @synthesize shouldAllowArbitraryLoadsInWebContent=_shouldAllowArbitraryLoadsInWebContent;
@property(nonatomic) _Bool shouldAllowArbitraryLoadsInMedia; // @synthesize shouldAllowArbitraryLoadsInMedia=_shouldAllowArbitraryLoadsInMedia;
- (void)sessionFetcherCompleted:(id)arg1;
- (void)logRequestIfNeeded:(id)arg1 withSource:(long long)arg2;
- (void)logRequest:(id)arg1 withSource:(long long)arg2 isWebView:(_Bool)arg3 isMedia:(_Bool)arg4 isLocal:(_Bool)arg5;
- (void)stopLogging;
- (void)startLoggingWithHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

