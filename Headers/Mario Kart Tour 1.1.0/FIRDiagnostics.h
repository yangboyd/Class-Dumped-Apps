//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FIRDiagnostics : NSObject
{
}

+ (void)logDiagnostics:(id)arg1;
+ (_Bool)writeString:(id)arg1 toURL:(id)arg2;
+ (id)stringAtURL:(id)arg1;
+ (id)filePathURLWithName:(id)arg1;
+ (id)installString;
+ (id)deviceModel;
+ (id)mapFromServiceStringToTypeEnum:(id)arg1;
+ (void)populateLogProtoWithInfoPlistValues:(id)arg1;
+ (void)populateLogProtoWithNumberOfLinkedFrameworks:(id)arg1;
+ (void)populateLogProtoWithInstalledServices:(id)arg1;
+ (void)populateLogProtoWithCommonInfo:(id)arg1 app:(id)arg2;
+ (void)sendLogsToClearcut:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)load;

@end

