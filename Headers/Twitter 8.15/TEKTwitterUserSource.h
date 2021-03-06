//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, TEKTwitterAccount;

@interface TEKTwitterUserSource : NSObject
{
    NSMutableDictionary *_userDictionary;
    NSMutableOrderedSet *_pendingRequests;
    TEKTwitterAccount *_authenticatingAccount;
}

@property(retain, nonatomic) TEKTwitterAccount *authenticatingAccount; // @synthesize authenticatingAccount=_authenticatingAccount;
- (void).cxx_destruct;
- (void)fetchUsersForScreenNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)containsUserForScreenName:(id)arg1;
- (id)userForScreenName:(id)arg1;
- (id)init;

@end

