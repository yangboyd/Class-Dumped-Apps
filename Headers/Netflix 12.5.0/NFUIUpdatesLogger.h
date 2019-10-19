//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface NFUIUpdatesLogger : NSObject
{
    NSNumber *_postPresentationSession;
    NSNumber *_fullScreenModeContext;
    NSNumber *_uiLandscapeModeSession;
    NSNumber *_trackId;
    NSString *_requestId;
    NSString *_listId;
    NSNumber *_logMetricId;
}

@property(retain, nonatomic) NSNumber *logMetricId; // @synthesize logMetricId=_logMetricId;
@property(copy, nonatomic) NSString *listId; // @synthesize listId=_listId;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSNumber *trackId; // @synthesize trackId=_trackId;
@property(retain, nonatomic) NSNumber *uiLandscapeModeSession; // @synthesize uiLandscapeModeSession=_uiLandscapeModeSession;
@property(retain, nonatomic) NSNumber *fullScreenModeContext; // @synthesize fullScreenModeContext=_fullScreenModeContext;
@property(retain, nonatomic) NSNumber *postPresentationSession; // @synthesize postPresentationSession=_postPresentationSession;
- (void).cxx_destruct;
- (void)endMetricId;
- (void)beginMetricIdWithName:(id)arg1;
- (void)endFullScreenTracking;
- (void)beginFullScreenTracking;
- (id)presentationTrackingInfoForViewModel:(id)arg1 atIndexPath:(id)arg2;
- (void)logPresentedEventForViewModel:(id)arg1 atIndexPath:(id)arg2;
- (void)endPresentationSession;
- (void)beginPresentationSessionForViewModel:(id)arg1 atIndexPath:(id)arg2;
- (void)updateWithTrackId:(id)arg1 requestId:(id)arg2 listId:(id)arg3;

@end

