//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface CJPayMerchantInfo : JSONModel
{
    long long _extUidType;
    NSString *_merchantId;
    NSString *_merchantName;
    NSString *_appId;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
@property(copy, nonatomic) NSString *merchantId; // @synthesize merchantId=_merchantId;
@property(nonatomic) long long extUidType; // @synthesize extUidType=_extUidType;
- (void).cxx_destruct;

@end

