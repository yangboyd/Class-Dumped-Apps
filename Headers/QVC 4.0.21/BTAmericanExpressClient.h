//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BTAPIClient;

@interface BTAmericanExpressClient : NSObject
{
    BTAPIClient *_apiClient;
}

@property(retain, nonatomic) BTAPIClient *apiClient; // @synthesize apiClient=_apiClient;
- (void).cxx_destruct;
- (void)getRewardsBalanceForNonce:(id)arg1 currencyIsoCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithAPIClient:(id)arg1;

@end

