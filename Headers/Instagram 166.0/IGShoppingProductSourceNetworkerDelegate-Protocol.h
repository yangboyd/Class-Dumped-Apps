//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGShoppingProductSourceLoadMoreResponse, IGShoppingProductSourceNetworker, IGShoppingProductSourceResponse, IGStatefulNetworkerFetchState;

@protocol IGShoppingProductSourceNetworkerDelegate <NSObject>
- (void)productSourceNetworker:(IGShoppingProductSourceNetworker *)arg1 didLoadSectionTypeResponse:(IGShoppingProductSourceLoadMoreResponse *)arg2;
- (void)productSourceNetworker:(IGShoppingProductSourceNetworker *)arg1 didLoadResponse:(IGShoppingProductSourceResponse *)arg2;
- (void)productSourceNetworker:(IGShoppingProductSourceNetworker *)arg1 didUpdateFetchState:(IGStatefulNetworkerFetchState *)arg2;
@end

