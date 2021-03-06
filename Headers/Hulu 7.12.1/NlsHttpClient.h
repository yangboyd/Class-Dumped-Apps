//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession, NlsApiWorker, NlsErrorReporter;

@interface NlsHttpClient : NSObject
{
    NSURLSession *_session;
    NlsApiWorker *_worker;
    NlsErrorReporter *_errorReporter;
}

@property(nonatomic) __weak NlsErrorReporter *errorReporter; // @synthesize errorReporter=_errorReporter;
@property(nonatomic) __weak NlsApiWorker *worker; // @synthesize worker=_worker;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleCancelRequestNotification:(id)arg1;
- (id)syncRequestWithHttpMethod:(id)arg1 host:(id)arg2 message:(id)arg3 agent:(id)arg4 timeout:(double)arg5 retCode:(long long *)arg6 statusCode:(long long *)arg7;
- (id)requestForHttpMethod:(id)arg1 host:(id)arg2 message:(id)arg3 agent:(id)arg4 timeout:(double)arg5;
- (id)initWithWorker:(id)arg1;

@end

