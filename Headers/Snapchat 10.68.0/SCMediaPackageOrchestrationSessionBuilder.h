//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCMediaPackageOrchestrationSessionBuilder : NSObject
{
    NSString *_userEditedPackageId;
    NSArray *_transcodeOutputPackageIds;
    NSArray *_keysOfEncryptedDataToUpload;
}

+ (id)mediaPackageOrchestrationSessionFromExistingMediaPackageOrchestrationSession:(id)arg1;
+ (id)mediaPackageOrchestrationSession;
- (void).cxx_destruct;
- (id)withKeysOfEncryptedDataToUpload:(id)arg1;
- (id)withTranscodeOutputPackageIds:(id)arg1;
- (id)withUserEditedPackageId:(id)arg1;
- (id)build;

@end

