//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMENestAccountLinkState : NSObject
{
    _Bool _accountLinked;
    NSString *_legacyUserID;
    NSString *_phoenixUserID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *phoenixUserID; // @synthesize phoenixUserID=_phoenixUserID;
@property(readonly, copy, nonatomic) NSString *legacyUserID; // @synthesize legacyUserID=_legacyUserID;
@property(readonly, nonatomic, getter=isAccountLinked) _Bool accountLinked; // @synthesize accountLinked=_accountLinked;
- (id)initWithAccountLinked:(_Bool)arg1 legacyUserID:(id)arg2 phoenixUserID:(id)arg3;
- (id)initWithResponse:(id)arg1;

@end

