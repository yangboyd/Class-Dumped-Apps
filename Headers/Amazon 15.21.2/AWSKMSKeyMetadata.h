//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSModel.h"

@class NSDate, NSNumber, NSString;

@interface AWSKMSKeyMetadata : AWSModel
{
    NSString *_AWSAccountId;
    NSString *_arn;
    NSString *_cloudHsmClusterId;
    NSDate *_creationDate;
    NSString *_customKeyStoreId;
    NSDate *_deletionDate;
    NSString *_detail;
    NSNumber *_enabled;
    long long _expirationModel;
    NSString *_keyId;
    long long _keyManager;
    long long _keyState;
    long long _keyUsage;
    long long _origin;
    NSDate *_validTo;
}

+ (id)validToJSONTransformer;
+ (id)originJSONTransformer;
+ (id)keyUsageJSONTransformer;
+ (id)keyStateJSONTransformer;
+ (id)keyManagerJSONTransformer;
+ (id)expirationModelJSONTransformer;
+ (id)deletionDateJSONTransformer;
+ (id)creationDateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDate *validTo; // @synthesize validTo=_validTo;
@property(nonatomic) long long origin; // @synthesize origin=_origin;
@property(nonatomic) long long keyUsage; // @synthesize keyUsage=_keyUsage;
@property(nonatomic) long long keyState; // @synthesize keyState=_keyState;
@property(nonatomic) long long keyManager; // @synthesize keyManager=_keyManager;
@property(retain, nonatomic) NSString *keyId; // @synthesize keyId=_keyId;
@property(nonatomic) long long expirationModel; // @synthesize expirationModel=_expirationModel;
@property(retain, nonatomic) NSNumber *enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSDate *deletionDate; // @synthesize deletionDate=_deletionDate;
@property(retain, nonatomic) NSString *customKeyStoreId; // @synthesize customKeyStoreId=_customKeyStoreId;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *cloudHsmClusterId; // @synthesize cloudHsmClusterId=_cloudHsmClusterId;
@property(retain, nonatomic) NSString *arn; // @synthesize arn=_arn;
@property(retain, nonatomic) NSString *AWSAccountId; // @synthesize AWSAccountId=_AWSAccountId;
- (void).cxx_destruct;

@end

