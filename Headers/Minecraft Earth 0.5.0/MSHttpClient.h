//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSHttpClientProtocol.h"

@class MS_Reachability, NSArray, NSMutableSet, NSURLSession, NSURLSessionConfiguration;

@interface MSHttpClient : NSObject <MSHttpClientProtocol>
{
    _Bool _paused;
    _Bool _enabled;
    _Bool _compressionEnabled;
    NSURLSession *_session;
    MS_Reachability *_reachability;
    NSMutableSet *_pendingCalls;
    NSArray *_retryIntervals;
    NSURLSessionConfiguration *_sessionConfiguration;
}

@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(nonatomic, getter=isCompressionEnabled) _Bool compressionEnabled; // @synthesize compressionEnabled=_compressionEnabled;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSArray *retryIntervals; // @synthesize retryIntervals=_retryIntervals;
@property(retain, nonatomic) NSMutableSet *pendingCalls; // @synthesize pendingCalls=_pendingCalls;
@property(retain, nonatomic) MS_Reachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)dealloc;
- (id)prettyPrintHeaders:(id)arg1;
- (id)obfuscateHeaderValue:(id)arg1 forKey:(id)arg2;
- (void)resume;
- (void)pause;
- (void)networkStateChanged:(id)arg1;
- (void)requestCompletedWithHttpCall:(id)arg1 data:(id)arg2 response:(id)arg3 error:(id)arg4;
- (void)sendCallAsync:(id)arg1;
- (void)sendAsync:(id)arg1 method:(id)arg2 headers:(id)arg3 data:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithMaxHttpConnectionsPerHost:(id)arg1 retryIntervals:(id)arg2 reachability:(id)arg3 compressionEnabled:(_Bool)arg4;
- (id)initWithMaxHttpConnectionsPerHost:(long long)arg1 compressionEnabled:(_Bool)arg2;
- (id)initWithCompressionEnabled:(_Bool)arg1;
- (id)init;

@end

