//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoOrganizationInfo_ConsumerInfo, DYNProtoOrganizationInfo_CustomerInfo, DYNProtoOrganizationInfo_TypeCase;

@protocol DYNProtoOrganizationInfoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoOrganizationInfo_TypeCase *)getTypeCase;
- (DYNProtoOrganizationInfo_CustomerInfo *)getCustomerInfo;
- (_Bool)hasCustomerInfo;
- (DYNProtoOrganizationInfo_ConsumerInfo *)getConsumerInfo;
- (_Bool)hasConsumerInfo;
@end

