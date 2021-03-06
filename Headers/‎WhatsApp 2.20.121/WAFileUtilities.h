//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/WAUpgradeCallback-Protocol.h>

@class NSString;

@interface WAFileUtilities : NSObject <WAUpgradeCallback>
{
}

+ (id)pureImageDataWithoutExifForWebpImageData:(id)arg1;
+ (id)sha256DigestForWebpImageDataWithoutExifMetadata:(id)arg1;
+ (id)sha256DigestForWebpImageAtPathWithoutExifMetadata:(id)arg1;
+ (id)sha256DigestForFileAtPath:(id)arg1;
+ (id)bestNameForSourcePath:(id)arg1 destinationPath:(id)arg2;
+ (id)bestNameForPaths:(id)arg1;
+ (_Bool)writeAllBytes:(const void *)arg1 ofLength:(unsigned long long)arg2 toFile:(int)arg3 error:(id *)arg4;
+ (_Bool)writeAllBytes:(const void *)arg1 ofLength:(unsigned long long)arg2 toFile:(int)arg3;
+ (long long)readBytes:(void *)arg1 ofLength:(unsigned long long)arg2 fromFile:(int)arg3;
+ (void)purgeOrphanedChatMediaDirectories;
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
+ (void)purgeTemporaryFiles;
+ (id)generateUniqueSingleLaunchTemporaryFileURLWithSuffix:(id)arg1 error:(id *)arg2;
+ (id)generateUniqueSingleLaunchTemporaryFileURLWithPathExtension:(id)arg1 error:(id *)arg2;
+ (id)generateUniqueSingleLaunchTemporaryFileURLWithError:(id *)arg1;
+ (id)prepareUniqueSingleLaunchTemporaryDirectory;
+ (id)fileURLToDirectoryForSharedPersistentTemporaryFiles;
+ (id)fileURLToDirectoryForPersistentTemporaryFiles;
+ (id)fileURLToDirectoryForSingleLaunchTemporaryFiles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

