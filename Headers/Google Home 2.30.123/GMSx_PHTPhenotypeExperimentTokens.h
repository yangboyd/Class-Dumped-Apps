//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_EXHExperimentIds, NSArray, NSDictionary, NSString;

@interface GMSx_PHTPhenotypeExperimentTokens : NSObject
{
    GMSx_EXHExperimentIds *_externalExperimentIDs;
    NSString *_user;
    NSArray *_tokens;
    NSDictionary *_crossTokens;
}

+ (id)experimentIDsStringWithTokensArray:(id)arg1 userID:(id)arg2;
+ (id)experimentIDsWithTokensArray:(id)arg1 userID:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *crossTokens; // @synthesize crossTokens=_crossTokens;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) NSString *user; // @synthesize user=_user;
- (id)description;
- (unsigned long long)hash;
- (_Bool)equalTokenArrays:(id)arg1 other:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) GMSx_EXHExperimentIds *externalExperimentIDs;
- (id)initWithUser:(id)arg1 tokens:(id)arg2 crossTokens:(id)arg3;
- (id)initWithUser:(id)arg1 tokens:(id)arg2 crossTokens:(id)arg3 externalExperimentIDs:(id)arg4;

@end

