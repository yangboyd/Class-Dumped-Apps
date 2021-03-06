//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SKTAPIClientProtocol;

@interface SKTStripeApiClient : NSObject
{
    id <SKTAPIClientProtocol> _smoochHttpClient;
    id <SKTAPIClientProtocol> _stripeHttpClient;
}

+ (id)newWithDependencies:(id)arg1;
@property(retain) id <SKTAPIClientProtocol> stripeHttpClient; // @synthesize stripeHttpClient=_stripeHttpClient;
@property(retain) id <SKTAPIClientProtocol> smoochHttpClient; // @synthesize smoochHttpClient=_smoochHttpClient;
- (void).cxx_destruct;
- (void)chargeUser:(id)arg1 forAction:(id)arg2 withToken:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createCustomerForUser:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getStripeToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCardInfoForUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithStripeHttpClient:(id)arg1 smoochHttpClient:(id)arg2;

@end

