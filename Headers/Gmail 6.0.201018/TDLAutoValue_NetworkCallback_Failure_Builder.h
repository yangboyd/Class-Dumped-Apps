//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TDLNetworkCallback_Failure_Builder.h"

@class ComGoogleRpcStatus, TDLNetworkCallback_Failure_Type;

@interface TDLAutoValue_NetworkCallback_Failure_Builder : TDLNetworkCallback_Failure_Builder
{
    TDLNetworkCallback_Failure_Type *type_;
    ComGoogleRpcStatus *status_;
}

- (void)dealloc;
- (id)build;
- (id)setStatusWithComGoogleRpcStatus:(id)arg1;
- (id)setTypeWithTDLNetworkCallback_Failure_Type:(id)arg1;

@end

