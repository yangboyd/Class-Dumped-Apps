//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/ALAdLoadDelegate-Protocol.h>

@class NSString;

@interface ASAppLovinIncentivizedDelegateProxy : NSObject <ALAdLoadDelegate>
{
    id _incentivizedInt;
}

+ (id)proxy;
@property(retain, nonatomic) id incentivizedInt; // @synthesize incentivizedInt=_incentivizedInt;
- (void).cxx_destruct;
- (void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2;
- (void)adService:(id)arg1 didLoadAd:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

