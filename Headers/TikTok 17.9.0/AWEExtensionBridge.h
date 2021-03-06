//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;

@interface AWEExtensionBridge : NSObject
{
    NSString *_appGroupsIdentifier;
    NSFileManager *_fileManager;
}

+ (id)sharedGlobalQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(copy, nonatomic) NSString *appGroupsIdentifier; // @synthesize appGroupsIdentifier=_appGroupsIdentifier;
- (_Bool)isEmptyString:(id)arg1;
- (void)clearInfoForKey:(id)arg1;
- (id)sharedInfoArrayForKey:(id)arg1;
- (void)writeInfo:(id)arg1 identifier:(id)arg2 forKey:(id)arg3 shouldAppend:(_Bool)arg4;
- (id)filePathForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSString *dirPath;
- (id)init;

@end

