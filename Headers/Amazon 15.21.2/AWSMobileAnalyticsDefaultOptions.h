//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWSMobileAnalyticsOptions-Protocol.h"

@class NSString;

@interface AWSMobileAnalyticsDefaultOptions : NSObject <AWSMobileAnalyticsOptions>
{
    _Bool _allowEventCollection;
    _Bool _allowWANDelivery;
}

+ (id)optionsWithAllowEventCollection:(_Bool)arg1 withWANDelivery:(_Bool)arg2;
@property(readonly, nonatomic) _Bool allowWANDelivery; // @synthesize allowWANDelivery=_allowWANDelivery;
@property(readonly, nonatomic) _Bool allowEventCollection; // @synthesize allowEventCollection=_allowEventCollection;
- (id)initWithAllowEventCollection:(_Bool)arg1 withWANDelivery:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

