//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSURLSessionTask;
@protocol MPAdServerCommunicatorDelegate;

@interface MPAdServerCommunicator : NSObject
{
    _Bool _loading;
    id <MPAdServerCommunicatorDelegate> _delegate;
    NSURLSessionTask *_task;
    NSDictionary *_responseHeaders;
    NSArray *_topLevelJsonKeys;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *topLevelJsonKeys; // @synthesize topLevelJsonKeys=_topLevelJsonKeys;
@property(retain, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <MPAdServerCommunicatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)errorForStatusCode:(long long)arg1;
- (id)handleAdResponseOverrides:(id)arg1;
- (id)getFlattenJsonResponses:(id)arg1 keys:(id)arg2;
- (void)didFinishLoadingWithData:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)failLoadForSDKInit;
@property(readonly, nonatomic) _Bool isRateLimited;
- (void)sendAfterLoadUrlWithConfiguration:(id)arg1 adapterLoadDuration:(double)arg2 adapterLoadResult:(unsigned long long)arg3;
- (void)sendBeforeLoadUrlWithConfiguration:(id)arg1;
- (void)cancel;
- (void)loadURL:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)handleConsentOverrides:(id)arg1;
- (void)removeAllMoPubCookies;

@end

