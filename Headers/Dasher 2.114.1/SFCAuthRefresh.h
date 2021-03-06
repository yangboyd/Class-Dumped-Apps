//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, SFCCredential;

@interface SFCAuthRefresh : NSObject
{
    NSMutableArray *_completionBlocks;
    NSError *_error;
    _Bool _refreshing;
    _Bool _succeeded;
    _Bool _finished;
    SFCCredential *_credential;
}

@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=didSucceed) _Bool succeeded; // @synthesize succeeded=_succeeded;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(readonly, nonatomic) SFCCredential *credential; // @synthesize credential=_credential;
- (void).cxx_destruct;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)initiateRefresh;
- (id)initWithCredential:(id)arg1;

@end

