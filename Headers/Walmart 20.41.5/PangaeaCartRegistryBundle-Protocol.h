//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/NSObject-Protocol.h>
#import <WalmartCore/PangaeaCartDictionaryTransformer-Protocol.h>

@class NSArray, NSNumber, NSString;
@protocol PangaeaCartRegistry;

@protocol PangaeaCartRegistryBundle <NSObject, PangaeaCartDictionaryTransformer>
@property(retain, nonatomic) id <PangaeaCartRegistry> registry;
@property(retain, nonatomic) NSArray *groupComponents;
@property(copy, nonatomic) NSString *groupId;
@property(retain, nonatomic) NSNumber *quantity;
@end

