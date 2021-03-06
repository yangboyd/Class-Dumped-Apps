//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface RNFSUploadParams : NSObject
{
    _Bool _binaryStreamOnly;
    NSString *_toUrl;
    NSArray *_files;
    NSDictionary *_headers;
    NSDictionary *_fields;
    NSString *_method;
    CDUnknownBlockType _completeCallback;
    CDUnknownBlockType _errorCallback;
    CDUnknownBlockType _beginCallback;
    CDUnknownBlockType _progressCallback;
}

@property(copy) CDUnknownBlockType progressCallback; // @synthesize progressCallback=_progressCallback;
@property(copy) CDUnknownBlockType beginCallback; // @synthesize beginCallback=_beginCallback;
@property(copy) CDUnknownBlockType errorCallback; // @synthesize errorCallback=_errorCallback;
@property(copy) CDUnknownBlockType completeCallback; // @synthesize completeCallback=_completeCallback;
@property _Bool binaryStreamOnly; // @synthesize binaryStreamOnly=_binaryStreamOnly;
@property(copy) NSString *method; // @synthesize method=_method;
@property(copy) NSDictionary *fields; // @synthesize fields=_fields;
@property(copy) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy) NSArray *files; // @synthesize files=_files;
@property(copy) NSString *toUrl; // @synthesize toUrl=_toUrl;
- (void).cxx_destruct;

@end

