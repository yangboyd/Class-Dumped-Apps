//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BulletKitApi, NSArray;
@protocol BulletBridgeProviderFactory, BulletKitPackageProviderFactory;

@interface BulletKitPackageRegistryBundle : NSObject
{
    BulletKitApi *_kitApi;
    id <BulletKitPackageProviderFactory> _defaultKitFactory;
    NSArray *_kitFactories;
    id <BulletBridgeProviderFactory> _defaultBridgeProviderFactory;
    NSArray *_bridgeProviderFactories;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *bridgeProviderFactories; // @synthesize bridgeProviderFactories=_bridgeProviderFactories;
@property(retain, nonatomic) id <BulletBridgeProviderFactory> defaultBridgeProviderFactory; // @synthesize defaultBridgeProviderFactory=_defaultBridgeProviderFactory;
@property(copy, nonatomic) NSArray *kitFactories; // @synthesize kitFactories=_kitFactories;
@property(retain, nonatomic) id <BulletKitPackageProviderFactory> defaultKitFactory; // @synthesize defaultKitFactory=_defaultKitFactory;
@property(nonatomic) __weak BulletKitApi *kitApi; // @synthesize kitApi=_kitApi;
- (id)initWithKitApi:(id)arg1 defaultKitFactory:(id)arg2 kitFactories:(id)arg3 defaultBridgeProviderFactory:(id)arg4 bridgeProviderFactories:(id)arg5;

@end

