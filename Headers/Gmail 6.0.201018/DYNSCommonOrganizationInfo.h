//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNOrganizationInfo-Protocol.h"

@class NSString;

@interface DYNSCommonOrganizationInfo : NSObject <DYNOrganizationInfo>
{
}

- (id)toProto;
- (_Bool)isInSameDasherCustomerAsWithDYNSCommonOrganizationInfo:(id)arg1;
- (_Bool)isForConsumer;
- (_Bool)isForDasherCustomer;
@property(readonly, nonatomic) _Bool isConsumer;
- (_Bool)isGuestOf:(id)arg1;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) NSString *dasherCustomerId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

