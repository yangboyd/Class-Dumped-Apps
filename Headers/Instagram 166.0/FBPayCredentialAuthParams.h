//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBPayCredentialAuthParams : NSObject
{
    NSString *_credentialTitle;
    NSString *_credentialId;
    NSString *_targetAccountID;
    NSString *_paypalAuthUrl;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *paypalAuthUrl; // @synthesize paypalAuthUrl=_paypalAuthUrl;
@property(readonly, copy, nonatomic) NSString *targetAccountID; // @synthesize targetAccountID=_targetAccountID;
@property(readonly, copy, nonatomic) NSString *credentialId; // @synthesize credentialId=_credentialId;
@property(readonly, copy, nonatomic) NSString *credentialTitle; // @synthesize credentialTitle=_credentialTitle;
- (id)initWithCredentialTitle:(id)arg1 credentialId:(id)arg2 targetAccountID:(id)arg3 paypalAuthUrl:(id)arg4;

@end

