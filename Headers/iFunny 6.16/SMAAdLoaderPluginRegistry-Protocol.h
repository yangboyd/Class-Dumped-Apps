//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class Protocol, SMAAPIContext;
@protocol SMAAdPresenterBuilding, SMAAdRequestExtras;

@protocol SMAAdLoaderPluginRegistry <NSObject>
+ (void)unregisterClass:(Class)arg1;
+ (void)registerClass:(Class)arg1;
@property(readonly, nonatomic) unsigned long long supportedFormats;
- (id <SMAAdPresenterBuilding>)builderWithApiContext:(SMAAPIContext *)arg1 expectedAdPresenterProtocol:(Protocol *)arg2;
- (void)supplyExtras:(id <SMAAdRequestExtras>)arg1 format:(unsigned long long)arg2 requestedProtocol:(Protocol *)arg3;
@end

