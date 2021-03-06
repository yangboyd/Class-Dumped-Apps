//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FIRInstallationsIIDStore : NSObject
{
}

- (unsigned long long)supportedDirectory;
- (id)plistPath;
- (_Bool)hasPlistIIDFlag;
- (_Bool)deleteIIDFlagFromPlist:(id *)arg1;
- (id)mainbundleIdentifier;
- (id)keychainKeyTagWithPrefix:(id)arg1;
- (id)keyPairQueryWithTag:(id)arg1 returnData:(_Bool)arg2;
- (_Bool)deleteKeychainKeyWithTagPrefix:(id)arg1 error:(id *)arg2;
- (_Bool)deleteIID:(id *)arg1;
- (id)IIDPublicKeyData;
- (id)base64URLEncodedStringWithData:(id)arg1;
- (id)sha1WithData:(id)arg1;
- (id)IIDWithPublicKeyData:(id)arg1;
- (id)deleteExistingIID;
- (id)existingIID;

@end

