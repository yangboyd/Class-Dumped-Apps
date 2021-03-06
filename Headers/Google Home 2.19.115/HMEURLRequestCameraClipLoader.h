//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMECameraClipLoader-Protocol.h"

@class NSString, NSURL, NSURLRequest, NSURLSessionDataTask;
@protocol HMECameraClipLoaderDelegate;

@interface HMEURLRequestCameraClipLoader : NSObject <HMECameraClipLoader>
{
    id <HMECameraClipLoaderDelegate> _clipLoaderDelegate;
    NSURLRequest *_request;
    NSURLSessionDataTask *_downloadTask;
}

@property(retain, nonatomic) NSURLSessionDataTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <HMECameraClipLoaderDelegate> clipLoaderDelegate; // @synthesize clipLoaderDelegate=_clipLoaderDelegate;
- (void).cxx_destruct;
- (void)cancel;
- (void)loadClip;
@property(readonly, nonatomic) NSURL *localClipURL;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

