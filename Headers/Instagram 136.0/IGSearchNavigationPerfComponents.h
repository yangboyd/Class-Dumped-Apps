//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPerformanceComponent, IGPerformanceNavigationLogger;

@interface IGSearchNavigationPerfComponents : NSObject
{
    IGPerformanceNavigationLogger *_logger;
    IGPerformanceComponent *_keyboard;
    IGPerformanceComponent *_suggestedTop;
    IGPerformanceComponent *_suggestedUsers;
    IGPerformanceComponent *_suggestedHashtags;
}

@property(readonly, nonatomic) IGPerformanceComponent *suggestedHashtags; // @synthesize suggestedHashtags=_suggestedHashtags;
@property(readonly, nonatomic) IGPerformanceComponent *suggestedUsers; // @synthesize suggestedUsers=_suggestedUsers;
@property(readonly, nonatomic) IGPerformanceComponent *suggestedTop; // @synthesize suggestedTop=_suggestedTop;
@property(readonly, nonatomic) IGPerformanceComponent *keyboard; // @synthesize keyboard=_keyboard;
@property(readonly, nonatomic) IGPerformanceNavigationLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)init;

@end

