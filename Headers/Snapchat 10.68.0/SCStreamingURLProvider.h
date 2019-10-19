//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStreamingURLProviding-Protocol.h"

@class NSString;
@protocol SCStreamingDelegate, SCStreamingRequestExtraInfoProviding, SCWebProxyURLProviding;

@interface SCStreamingURLProvider : NSObject <SCStreamingURLProviding>
{
    id <SCWebProxyURLProviding> _urlProvider;
    id <SCStreamingRequestExtraInfoProviding> _extraInfoProvider;
    id <SCStreamingDelegate> _streamingDelegate;
}

@property(readonly, nonatomic) __weak id <SCStreamingDelegate> streamingDelegate; // @synthesize streamingDelegate=_streamingDelegate;
@property(readonly, nonatomic) __weak id <SCStreamingRequestExtraInfoProviding> extraInfoProvider; // @synthesize extraInfoProvider=_extraInfoProvider;
@property(readonly, nonatomic) id <SCWebProxyURLProviding> urlProvider; // @synthesize urlProvider=_urlProvider;
- (void).cxx_destruct;
- (id)streamingURLForRequestInfo:(id)arg1;
- (id)initWithURLProvider:(id)arg1 extraInfoProvider:(id)arg2 streamingDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

