//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CHRSiriSuggestionParameterCoder : NSObject
{
}

+ (id)encryptedUserInfoFromClientUserInfo:(id)arg1 associatedAccount:(id)arg2 suggestionTypeVersion:(id)arg3;
+ (id)clientUserInfoFromEncryptedUserInfo:(id)arg1;
+ (id)decryptedChronosInfoFromEncryptedUserInfo:(id)arg1;
+ (id)decryptDictionary:(id)arg1;
+ (id)encryptDictionary:(id)arg1;
+ (id)suggestionTypeVersionFromEncryptedUserInfo:(id)arg1;
+ (id)associatedAccountFromEncryptedUserInfo:(id)arg1;
+ (id)parameterFromEncryptedUserInfo:(id)arg1 parameterType:(Class)arg2;
+ (id)siriUserInfoFromParameter:(id)arg1 associatedAccount:(id)arg2 suggestionTypeVersion:(id)arg3;

@end

