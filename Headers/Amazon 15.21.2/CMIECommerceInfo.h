//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CMIClickStreamMetricInfo-Protocol.h"

@class NSDictionary, NSString;

@interface CMIECommerceInfo : NSObject <CMIClickStreamMetricInfo>
{
    _Bool _primeEligibleItem;
    _Bool _glanceView;
    NSString *_pageAction;
    NSDictionary *_orderData;
}

@property(nonatomic, getter=isGlanceView) _Bool glanceView; // @synthesize glanceView=_glanceView;
@property(nonatomic, getter=isPrimeEligibleItem) _Bool primeEligibleItem; // @synthesize primeEligibleItem=_primeEligibleItem;
@property(readonly, nonatomic) NSDictionary *orderData; // @synthesize orderData=_orderData;
@property(readonly, copy, nonatomic) NSString *pageAction; // @synthesize pageAction=_pageAction;
- (void).cxx_destruct;
- (id)dataPoints;
- (id)initWithPageAction:(id)arg1 orderData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

