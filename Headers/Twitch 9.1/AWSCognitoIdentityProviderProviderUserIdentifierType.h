//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSString;

@interface AWSCognitoIdentityProviderProviderUserIdentifierType : AWSModel
{
    NSString *_providerAttributeName;
    NSString *_providerAttributeValue;
    NSString *_providerName;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property(retain, nonatomic) NSString *providerAttributeValue; // @synthesize providerAttributeValue=_providerAttributeValue;
@property(retain, nonatomic) NSString *providerAttributeName; // @synthesize providerAttributeName=_providerAttributeName;

@end

