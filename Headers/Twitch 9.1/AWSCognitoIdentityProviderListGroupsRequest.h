//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class NSNumber, NSString;

@interface AWSCognitoIdentityProviderListGroupsRequest : AWSRequest
{
    NSNumber *_limit;
    NSString *_nextToken;
    NSString *_userPoolId;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userPoolId; // @synthesize userPoolId=_userPoolId;
@property(retain, nonatomic) NSString *nextToken; // @synthesize nextToken=_nextToken;
@property(retain, nonatomic) NSNumber *limit; // @synthesize limit=_limit;

@end

