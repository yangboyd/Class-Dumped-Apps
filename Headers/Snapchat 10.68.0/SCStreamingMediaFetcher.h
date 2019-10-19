//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStreamingMediaFetching-Protocol.h"

@class NSString;
@protocol SCStreamingDelegate, SCStreamingRequestExtraInfoProviding, SCWebProxyRequestHandling;

@interface SCStreamingMediaFetcher : NSObject <SCStreamingMediaFetching>
{
    id <SCWebProxyRequestHandling> _requestHandler;
    id <SCStreamingRequestExtraInfoProviding> _extraInfoProvider;
    id <SCStreamingDelegate> _streamingDelegate;
}

@property(readonly, nonatomic) __weak id <SCStreamingDelegate> streamingDelegate; // @synthesize streamingDelegate=_streamingDelegate;
@property(readonly, nonatomic) __weak id <SCStreamingRequestExtraInfoProviding> extraInfoProvider; // @synthesize extraInfoProvider=_extraInfoProvider;
@property(readonly, nonatomic) __weak id <SCWebProxyRequestHandling> requestHandler; // @synthesize requestHandler=_requestHandler;
- (void).cxx_destruct;
- (id)fetchMediaDataForRequestInfo:(id)arg1 byteRangeValue:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithRequestHandler:(id)arg1 extraInfoProvider:(id)arg2 streamingDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

