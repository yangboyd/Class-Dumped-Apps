//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WalmartCore/PangaeaCartRegistryItem-Protocol.h>

@class NSNumber, NSString;
@protocol PangaeaCartRegistry;

@interface WMPangaeaCartRegistryItem : NSObject <PangaeaCartRegistryItem>
{
    NSString *_offerId;
    NSNumber *_quantity;
    NSNumber *_unitPrice;
    id <PangaeaCartRegistry> _registry;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <PangaeaCartRegistry> registry; // @synthesize registry=_registry;
@property(retain, nonatomic) NSNumber *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(retain, nonatomic) NSNumber *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
- (id)toDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

