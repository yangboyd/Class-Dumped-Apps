//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGBMSignalingHttpRequest, NSArray, NSData;
@protocol IGKragleTransportDelegate;

@protocol IGKragleTransport <NSObject>
@property(nonatomic) __weak id <IGKragleTransportDelegate> transportDelegate;
- (long long)transportType;
- (NSArray *)getRemoteUserIds;
- (void)sendSignalingMessageRequest:(IGBMSignalingHttpRequest *)arg1;
- (void)sendSignalingMessage:(NSData *)arg1;
@end

