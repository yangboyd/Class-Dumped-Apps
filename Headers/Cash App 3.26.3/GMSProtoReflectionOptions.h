//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSAnalyticsTimer;

@interface GMSProtoReflectionOptions : NSObject
{
    _Bool _enableProtoReflectionOptimization;
    GMSAnalyticsTimer *_parsingTimer;
    GMSAnalyticsTimer *_reflectingTimer;
}

@property(readonly, nonatomic) GMSAnalyticsTimer *reflectingTimer; // @synthesize reflectingTimer=_reflectingTimer;
@property(readonly, nonatomic) GMSAnalyticsTimer *parsingTimer; // @synthesize parsingTimer=_parsingTimer;
@property(readonly, nonatomic) _Bool enableProtoReflectionOptimization; // @synthesize enableProtoReflectionOptimization=_enableProtoReflectionOptimization;
- (void).cxx_destruct;
- (id)initWithEnableProtoReflectionOptimization:(_Bool)arg1 parsingTimer:(id)arg2 reflectingTimer:(id)arg3;

@end

