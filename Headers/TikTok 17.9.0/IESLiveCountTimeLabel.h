//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface IESLiveCountTimeLabel : UILabel
{
    _Bool _isCountDown;
    long long _countNum;
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _timeFormatBlock;
    long long _countTimeState;
}

- (void).cxx_destruct;
@property(nonatomic) long long countTimeState; // @synthesize countTimeState=_countTimeState;
@property(copy, nonatomic) CDUnknownBlockType timeFormatBlock; // @synthesize timeFormatBlock=_timeFormatBlock;
@property(nonatomic) _Bool isCountDown; // @synthesize isCountDown=_isCountDown;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long countNum; // @synthesize countNum=_countNum;
- (void)pr_countup;
- (void)restart;
- (void)pause;
- (void)start;
- (id)initWithTimeFormat:(CDUnknownBlockType)arg1 isCountDown:(_Bool)arg2;
- (id)initWithTimeFormat:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

