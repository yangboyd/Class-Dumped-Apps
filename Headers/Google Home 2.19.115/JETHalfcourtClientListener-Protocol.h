//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTLRAccesspointsQuery, NSError, _TtC66googlemac_iPhone_Access_Jetstream_Classes_APIClients_Shared_Shared26AccessPointServerOperation;

@protocol JETHalfcourtClientListener <NSObject>

@optional
- (void)onResponse:(id)arg1 forQuery:(GTLRAccesspointsQuery *)arg2 withOperation:(_TtC66googlemac_iPhone_Access_Jetstream_Classes_APIClients_Shared_Shared26AccessPointServerOperation *)arg3 withError:(NSError *)arg4;
- (void)onExecuteQuery:(GTLRAccesspointsQuery *)arg1;
@end

