//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (NLGConnectionProfile)
+ (id)descriptionForErrorCode:(unsigned long long)arg1;
+ (id)nl_connectionProfile_errorWithCode:(unsigned long long)arg1;
+ (id)nl_connectionProfile_missingAccessTokenError;
+ (id)nl_connectionProfile_missingEntryKeyError;
+ (id)nl_connectionProfile_unknownError;
+ (id)nl_connectionProfileError:(id)arg1;
- (id)nl_copyErrorWithConnectionProfileType:(unsigned long long)arg1 profileName:(id)arg2;
@end

