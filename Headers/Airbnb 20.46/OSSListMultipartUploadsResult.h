//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OSSResult.h"

@class NSArray, NSString;

@interface OSSListMultipartUploadsResult : OSSResult
{
    _Bool _isTruncated;
    int _maxUploads;
    NSString *_bucketName;
    NSString *_keyMarker;
    NSString *_delimiter;
    NSString *_prefix;
    NSString *_uploadIdMarker;
    NSString *_nextKeyMarker;
    NSString *_nextUploadIdMarker;
    NSArray *_uploads;
    NSArray *_commonPrefixes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *commonPrefixes; // @synthesize commonPrefixes=_commonPrefixes;
@property(retain, nonatomic) NSArray *uploads; // @synthesize uploads=_uploads;
@property(nonatomic) _Bool isTruncated; // @synthesize isTruncated=_isTruncated;
@property(copy, nonatomic) NSString *nextUploadIdMarker; // @synthesize nextUploadIdMarker=_nextUploadIdMarker;
@property(copy, nonatomic) NSString *nextKeyMarker; // @synthesize nextKeyMarker=_nextKeyMarker;
@property(nonatomic) int maxUploads; // @synthesize maxUploads=_maxUploads;
@property(copy, nonatomic) NSString *uploadIdMarker; // @synthesize uploadIdMarker=_uploadIdMarker;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(copy, nonatomic) NSString *delimiter; // @synthesize delimiter=_delimiter;
@property(copy, nonatomic) NSString *keyMarker; // @synthesize keyMarker=_keyMarker;
@property(copy, nonatomic) NSString *bucketName; // @synthesize bucketName=_bucketName;

@end

