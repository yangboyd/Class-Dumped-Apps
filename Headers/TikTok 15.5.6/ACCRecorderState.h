//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

@class ACCResult;

@interface ACCRecorderState : MTLModel
{
    unsigned long long _recordMode;
    unsigned long long _status;
    unsigned long long _currentIdx;
    double _totalDuration;
    unsigned long long _exportTime;
    ACCResult *_imageResult;
    ACCResult *_videoResult;
    ACCResult *_startResult;
    ACCResult *_pauseResult;
    ACCResult *_extractResult;
}

@property(retain, nonatomic) ACCResult *extractResult; // @synthesize extractResult=_extractResult;
@property(retain, nonatomic) ACCResult *pauseResult; // @synthesize pauseResult=_pauseResult;
@property(retain, nonatomic) ACCResult *startResult; // @synthesize startResult=_startResult;
@property(retain, nonatomic) ACCResult *videoResult; // @synthesize videoResult=_videoResult;
@property(retain, nonatomic) ACCResult *imageResult; // @synthesize imageResult=_imageResult;
@property(nonatomic) unsigned long long exportTime; // @synthesize exportTime=_exportTime;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) unsigned long long currentIdx; // @synthesize currentIdx=_currentIdx;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long recordMode; // @synthesize recordMode=_recordMode;
- (void).cxx_destruct;

@end

