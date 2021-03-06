//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/TTransport-Protocol.h>

@class NSData, NSMutableData, NSMutableURLRequest, NSString, NSURL;

@interface THTTPClient : NSObject <TTransport>
{
    NSURL *mURL;
    NSMutableURLRequest *mRequest;
    NSMutableData *mRequestData;
    NSData *mResponseData;
    int mResponseDataOffset;
    NSString *mUserAgent;
    int mTimeout;
}

- (void).cxx_destruct;
- (void)flush;
- (void)write:(const char *)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (int)readAll:(char *)arg1 offset:(int)arg2 length:(int)arg3;
- (void)dealloc;
- (void)setURL:(id)arg1;
- (id)initWithURL:(id)arg1 userAgent:(id)arg2 timeout:(int)arg3;
- (id)initWithURL:(id)arg1;
- (void)setupRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

