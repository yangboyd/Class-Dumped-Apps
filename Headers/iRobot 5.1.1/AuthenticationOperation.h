//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class IRBTAWSCredentials, NSError;
@protocol AuthenticationOperationDelegate;

@interface AuthenticationOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
    id <AuthenticationOperationDelegate> _delegate;
    NSError *_error;
    IRBTAWSCredentials *_result;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IRBTAWSCredentials *result; // @synthesize result=_result;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <AuthenticationOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finish;
- (void)finishWithUnknownAwsError;
- (void)finishWithError:(id)arg1;
- (void)finishWithCredentials:(id)arg1;
- (void)start;
- (_Bool)isAsynchronous;
- (_Bool)isFinished;
- (_Bool)isExecuting;

@end

