//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SCContextV2UserInfoProvider;

@interface SCContextV2ClientSubstitutionHandler : NSObject
{
    NSMutableDictionary *_functions;
    id <SCContextV2UserInfoProvider> _userInfoProvider;
}

- (void).cxx_destruct;
- (id)_handleClientSubstitutionQuery:(id)arg1;
- (id)applyClientSubstitutionsToJSON:(id)arg1;
- (void)registerSubstitutionWithName:(id)arg1 function:(CDUnknownBlockType)arg2;
- (id)initWithUserInfoProvider:(id)arg1 replyingToUsername:(id)arg2;

@end

