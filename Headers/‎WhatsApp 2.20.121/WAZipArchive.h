//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSZipArchive;

@interface WAZipArchive : NSObject
{
    SSZipArchive *_zipArchive;
}

+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(_Bool)arg3 comment:(id)arg4;
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2;
+ (id)commentForZipFileAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 recursive:(_Bool)arg5 maxOutputSize:(unsigned long long)arg6 error:(id *)arg7 delegate:(id)arg8;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 error:(id *)arg3 delegate:(id)arg4;
- (void).cxx_destruct;
- (_Bool)close;
- (_Bool)open;
- (_Bool)writeData:(id)arg1 filename:(id)arg2;
- (_Bool)writeFileAtPath:(id)arg1 withFileName:(id)arg2;
- (id)initWithPath:(id)arg1;

@end

