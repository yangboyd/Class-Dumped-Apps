//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DataBrokerObjectContext;

@interface NFUIRetryPaymentModel : NSObject
{
    DataBrokerObjectContext *_dataContext;
}

@property(retain, nonatomic) DataBrokerObjectContext *dataContext; // @synthesize dataContext=_dataContext;
- (void).cxx_destruct;
- (void)retryPaymentWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDataContext:(id)arg1;

@end

