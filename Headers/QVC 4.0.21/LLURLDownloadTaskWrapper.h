//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Localytics/LLURLDownloading-Protocol.h>

@class NSURLSessionDownloadTask;

@interface LLURLDownloadTaskWrapper : NSObject <LLURLDownloading>
{
    NSURLSessionDownloadTask *_innerTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionDownloadTask *innerTask; // @synthesize innerTask=_innerTask;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isSuspended;
- (void)suspend;
- (void)resume;
- (id)initWithDownloadTask:(id)arg1;

@end

