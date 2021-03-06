//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "STPAPIResponseDecodable-Protocol.h"

@class NSArray, NSDictionary, NSString, STPAddress;
@protocol STPSourceProtocol;

@interface STPCustomer : NSObject <STPAPIResponseDecodable>
{
    NSString *_stripeID;
    id <STPSourceProtocol> _defaultSource;
    NSArray *_sources;
    STPAddress *_shippingAddress;
    NSDictionary *_allResponseFields;
}

+ (id)decodedObjectFromAPIResponse:(id)arg1;
+ (id)customerWithStripeID:(id)arg1 defaultSource:(id)arg2 sources:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *allResponseFields; // @synthesize allResponseFields=_allResponseFields;
@property(retain, nonatomic) STPAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) id <STPSourceProtocol> defaultSource; // @synthesize defaultSource=_defaultSource;
@property(copy, nonatomic) NSString *stripeID; // @synthesize stripeID=_stripeID;
- (void)updateSourcesFilteringApplePay:(_Bool)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

