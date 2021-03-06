//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AWEAwemeModel, NSString;
@protocol AWEFeedPreloadStrategy;

@interface AWEFeedPreloadOperation : NSOperation
{
    _Bool _finished;
    _Bool _executing;
    unsigned long long _tag;
    CDUnknownBlockType _completedBlock;
    CDUnknownBlockType _internalCanceledBlock;
    NSString *_bizScene;
    AWEAwemeModel *_model;
    id <AWEFeedPreloadStrategy> _strategy;
    long long _taskSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long taskSize; // @synthesize taskSize=_taskSize;
@property(nonatomic) __weak id <AWEFeedPreloadStrategy> strategy; // @synthesize strategy=_strategy;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *bizScene; // @synthesize bizScene=_bizScene;
@property(copy, nonatomic) CDUnknownBlockType internalCanceledBlock; // @synthesize internalCanceledBlock=_internalCanceledBlock;
@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isConcurrent;
- (void)setExecuting:(_Bool)arg1;
- (void)setFinished:(_Bool)arg1;
- (void)done;
- (id)preloaderForModel:(id)arg1;
- (void)preloadDataWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)start;
- (id)initWithBizScene:(id)arg1 strategy:(id)arg2 model:(id)arg3 taskSize:(long long)arg4;

@end

