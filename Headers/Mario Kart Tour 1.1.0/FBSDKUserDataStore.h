//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSDKUserDataStore : NSObject
{
}

+ (_Bool)maybeSHA256Hashed:(id)arg1;
+ (id)normalizeData:(id)arg1 data:(id)arg2;
+ (id)encryptData:(id)arg1;
+ (id)hashUserData:(id)arg1;
+ (id)getHashedUserData;
+ (void)setUserDataAndHash:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 phone:(id)arg4 dateOfBirth:(id)arg5 gender:(id)arg6 city:(id)arg7 state:(id)arg8 zip:(id)arg9 country:(id)arg10;
+ (void)setUserDataAndHash:(id)arg1;
+ (void)initAndWait;
+ (void)initStore;

@end

