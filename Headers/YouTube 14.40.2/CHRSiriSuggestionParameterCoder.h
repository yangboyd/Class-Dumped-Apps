//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CHRSiriSuggestionParameterCoder : NSObject
{
}

+ (id)validUserInfoTypes;
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

