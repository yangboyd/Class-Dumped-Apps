//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GMUUploadChunk : NSObject
{
    unsigned long long _offset;
    unsigned long long _length;
    NSString *_filePath;
}

+ (_Bool)removeDirectoryForUploadID:(id)arg1 groupName:(id)arg2;
+ (void)removeUploadFilesNotBelongingToIdentifierSet:(id)arg1 groupName:(id)arg2;
+ (_Bool)deleteFile:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (_Bool)removeFile;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithUploadIdentifier:(id)arg1 groupName:(id)arg2 filePath:(id)arg3 offset:(unsigned long long)arg4;
- (id)initWithUploadIdentifier:(id)arg1 groupName:(id)arg2 data:(id)arg3 offset:(unsigned long long)arg4;

@end

