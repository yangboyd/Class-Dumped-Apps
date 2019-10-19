//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKit/SKProductsRequest.h>

#import "SKProductsRequestDelegate-Protocol.h"

@class NSNumber, NSString;
@protocol NFSKProductsRequestDelegate;

@interface NFSKProductsRequest : SKProductsRequest <SKProductsRequestDelegate>
{
    NSNumber *_rid;
    id <NFSKProductsRequestDelegate> _productDelegate;
}

@property(readonly, nonatomic) __weak id <NFSKProductsRequestDelegate> productDelegate; // @synthesize productDelegate=_productDelegate;
@property(readonly, copy, nonatomic) NSNumber *rid; // @synthesize rid=_rid;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)send;
- (id)initWithProductIdentifiers:(id)arg1 productDelegate:(id)arg2 rid:(id)arg3;
- (id)initWithArgs:(id)arg1 productDelegate:(id)arg2 rid:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

