//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface NFUITTRSession : NSObject
{
    _Bool _isFinished;
    NSNumber *_sessionId;
    NSString *_sessionType;
    NSString *_renderView;
    long long _minViewCount;
    unsigned long long _cellCount;
    unsigned long long _recordCount;
}

@property unsigned long long recordCount; // @synthesize recordCount=_recordCount;
@property unsigned long long cellCount; // @synthesize cellCount=_cellCount;
@property long long minViewCount; // @synthesize minViewCount=_minViewCount;
@property(retain, nonatomic) NSString *renderView; // @synthesize renderView=_renderView;
@property _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSNumber *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (void)failSession;
- (void)cancelSession;
- (_Bool)reportViewPainted;
- (void)reportPaintableView;
- (id)initWithSessionType:(id)arg1 level:(id)arg2 andMinimumViewCount:(long long)arg3;

@end

