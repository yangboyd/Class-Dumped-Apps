//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWSCognitoConflict, AWSCognitoRecord;

@interface AWSCognitoResolvedConflict : NSObject
{
    AWSCognitoRecord *_resolvedConflict;
    AWSCognitoConflict *_conflict;
}

+ (id)resolvedConflictWithValue:(id)arg1 newValue:(id)arg2;
+ (id)resolvedConflictWithLocalRecord:(id)arg1;
+ (id)resolvedConflictWithRemoteRecord:(id)arg1;
@property(readonly, nonatomic) AWSCognitoConflict *conflict; // @synthesize conflict=_conflict;
@property(readonly, nonatomic) AWSCognitoRecord *resolvedConflict; // @synthesize resolvedConflict=_resolvedConflict;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 newValue:(id)arg2;
- (id)initWithLocalRecord:(id)arg1;
- (id)initWithRemoteRecord:(id)arg1;

@end

