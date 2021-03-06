//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GHKHangoutApiaryClienting-Protocol.h"

@class CPBClientRequestHeader, GHKMesiMarkReporter, NSString;
@protocol GHKApiaryClientDelegate;

@interface GHKHangoutApiaryClient : NSObject <GHKHangoutApiaryClienting>
{
    CPBClientRequestHeader *_requestHeader;
    GHKMesiMarkReporter *_mesiMarkReporter;
    NSString *_apiaryBaseURL;
    id <GHKApiaryClientDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <GHKApiaryClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)issueApiaryRequest:(id)arg1 onPath:(id)arg2 responseClass:(Class)arg3 logRequest:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)issueApiaryRequest:(id)arg1 onPath:(id)arg2 responseClass:(Class)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)issueApiaryRequestWithFetcher:(id)arg1 onPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)issueApiaryRequest:(id)arg1 onPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createFetcherForApiaryRequest:(id)arg1 onPath:(id)arg2 timeoutSeconds:(double)arg3 maxConnectionsPerHost:(long long)arg4;
- (void)issueHarmonyApiaryRequest:(id)arg1 onPath:(id)arg2 timeoutSeconds:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)ackHangoutInviteRequestForHangoutID:(id)arg1 inviteId:(id)arg2 userAction:(int)arg3 indirectUserAction:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)clientResource;
- (id)requestHeader;
- (id)initWithDelegate:(id)arg1 apiaryBaseURL:(id)arg2 participantLogID:(id)arg3 mesiMarkReporter:(id)arg4;
@property(readonly, nonatomic) long long maxConnectionsPerHostForHarmonyFetcher;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

