//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface AWSCognitoIdentityCustomChallengeDetails : NSObject
{
    NSArray *_validationData;
    NSString *_initialChallengeName;
    NSDictionary *_challengeResponses;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *challengeResponses; // @synthesize challengeResponses=_challengeResponses;
@property(retain, nonatomic) NSString *initialChallengeName; // @synthesize initialChallengeName=_initialChallengeName;
@property(retain, nonatomic) NSArray *validationData; // @synthesize validationData=_validationData;
- (id)initWithChallengeResponses:(id)arg1;

@end

