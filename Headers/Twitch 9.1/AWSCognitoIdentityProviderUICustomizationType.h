//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSDate, NSString;

@interface AWSCognitoIdentityProviderUICustomizationType : AWSModel
{
    NSString *_CSS;
    NSString *_CSSVersion;
    NSString *_clientId;
    NSDate *_creationDate;
    NSString *_imageUrl;
    NSDate *_lastModifiedDate;
    NSString *_userPoolId;
}

+ (id)lastModifiedDateJSONTransformer;
+ (id)creationDateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userPoolId; // @synthesize userPoolId=_userPoolId;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *CSSVersion; // @synthesize CSSVersion=_CSSVersion;
@property(retain, nonatomic) NSString *CSS; // @synthesize CSS=_CSS;

@end

