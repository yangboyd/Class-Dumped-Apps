//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ElectrodeContainer/_TtC18ElectrodeContainer24TrustDefenderAPIRequests.h>

@interface _TtC18ElectrodeContainer21TrustDefenderRequests : _TtC18ElectrodeContainer24TrustDefenderAPIRequests
{
}

- (id)init;
- (void)getTrustDefenderMetaHeaderWithTrustDefenderArgs:(id)arg1 responseCompletionHandler:(CDUnknownBlockType)arg2;
- (void)doTrustDefenderProfilingWithTrustDefenderArgs:(id)arg1 responseCompletionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)unregisterGetTrustDefenderMetaHeaderRequestHandlerWithUuid:(id)arg1;
- (CDUnknownBlockType)unregisterDoTrustDefenderProfilingRequestHandlerWithUuid:(id)arg1;
- (id)registerGetTrustDefenderMetaHeaderRequestHandlerWithHandler:(CDUnknownBlockType)arg1;
- (id)registerDoTrustDefenderProfilingRequestHandlerWithHandler:(CDUnknownBlockType)arg1;

@end

