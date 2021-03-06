//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/AFRKHTTPRequestOperation.h>

@class NSError, NSRecursiveLock;

@interface AFRKJSONRequestOperation : AFRKHTTPRequestOperation
{
    id _responseJSON;
    unsigned long long _JSONReadingOptions;
    NSError *_JSONError;
}

+ (_Bool)canProcessRequest:(id)arg1;
+ (id)acceptableContentTypes;
+ (id)JSONRequestOperationWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *JSONError; // @synthesize JSONError=_JSONError;
@property(nonatomic) unsigned long long JSONReadingOptions; // @synthesize JSONReadingOptions=_JSONReadingOptions;
@property(retain, nonatomic) id responseJSON; // @synthesize responseJSON=_responseJSON;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)error;

// Remaining properties
@property(retain, nonatomic) NSRecursiveLock *lock; // @dynamic lock;

@end

