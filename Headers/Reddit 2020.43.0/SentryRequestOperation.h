//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Sentry/SentryAsynchronousOperation.h>

@class NSURLRequest, NSURLSessionTask;

@interface SentryRequestOperation : SentryAsynchronousOperation
{
    NSURLSessionTask *_task;
    NSURLRequest *_request;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
- (void)main;
- (void)cancel;
- (id)initWithSession:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

