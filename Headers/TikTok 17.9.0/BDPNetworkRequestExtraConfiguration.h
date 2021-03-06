//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface BDPNetworkRequestExtraConfiguration : NSObject
{
    long long _flags;
    long long _type;
    long long _method;
    NSString *_methodStr;
    Class _bdpRequestSerializerClass;
    NSDictionary *_bdpRequestHeaderField;
    CDUnknownBlockType _constructingBodyBlock;
    id *_progress;
    double _timeout;
    CDUnknownBlockType _downloadHeaderCallback;
    CDUnknownBlockType _downloadDataCallback;
    long long _offset;
    long long _requestedLength;
    NSURL *_downloadDestinationURL;
}

+ (id)defaultBDPSerializerConfigWithHttpMethod:(long long)arg1;
+ (id)defaultBDPSerializerConfig;
+ (id)defaultConfigWithHttpMethod:(long long)arg1;
+ (id)defaultConfig;
@property(retain, nonatomic) NSURL *downloadDestinationURL; // @synthesize downloadDestinationURL=_downloadDestinationURL;
@property(nonatomic) long long requestedLength; // @synthesize requestedLength=_requestedLength;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) CDUnknownBlockType downloadDataCallback; // @synthesize downloadDataCallback=_downloadDataCallback;
@property(copy, nonatomic) CDUnknownBlockType downloadHeaderCallback; // @synthesize downloadHeaderCallback=_downloadHeaderCallback;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) id *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType constructingBodyBlock; // @synthesize constructingBodyBlock=_constructingBodyBlock;
@property(retain, nonatomic) NSDictionary *bdpRequestHeaderField; // @synthesize bdpRequestHeaderField=_bdpRequestHeaderField;
@property(retain, nonatomic) Class bdpRequestSerializerClass; // @synthesize bdpRequestSerializerClass=_bdpRequestSerializerClass;
@property(retain, nonatomic) NSString *methodStr; // @synthesize methodStr=_methodStr;
@property(nonatomic) long long method; // @synthesize method=_method;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long flags; // @synthesize flags=_flags;
- (void).cxx_destruct;

@end

