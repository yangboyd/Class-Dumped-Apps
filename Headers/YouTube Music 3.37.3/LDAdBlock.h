//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface LDAdBlock : NSObject
{
    _Bool _hasCreativeOffsetAndSize;
    _Bool _fullscreen;
    _Bool _viewableImpressionSent;
    long long _lastTime;
    long long _firstTime;
    long long _createdTime;
    double _coverage;
    double _screenShare;
    UIView *_monitoredView;
    struct CGVector _creativeOffset;
    struct CGSize _creativeSize;
    struct CGSize _documentSize;
    struct CGSize _windowSize;
    struct CGSize _screenSize;
    struct CGRect _position;
    struct CGRect _lastContainerPosition;
}

@property(nonatomic, getter=isViewableImpressionSent) _Bool viewableImpressionSent; // @synthesize viewableImpressionSent=_viewableImpressionSent;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) __weak UIView *monitoredView; // @synthesize monitoredView=_monitoredView;
@property(nonatomic) struct CGRect lastContainerPosition; // @synthesize lastContainerPosition=_lastContainerPosition;
@property(nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
@property(nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(nonatomic) struct CGSize documentSize; // @synthesize documentSize=_documentSize;
@property(nonatomic) struct CGSize creativeSize; // @synthesize creativeSize=_creativeSize;
@property(nonatomic) struct CGVector creativeOffset; // @synthesize creativeOffset=_creativeOffset;
@property(nonatomic) _Bool hasCreativeOffsetAndSize; // @synthesize hasCreativeOffsetAndSize=_hasCreativeOffsetAndSize;
@property(nonatomic) struct CGRect position; // @synthesize position=_position;
@property(nonatomic) double screenShare; // @synthesize screenShare=_screenShare;
@property(nonatomic) double coverage; // @synthesize coverage=_coverage;
@property(nonatomic) long long createdTime; // @synthesize createdTime=_createdTime;
@property(nonatomic) long long firstTime; // @synthesize firstTime=_firstTime;
@property(nonatomic) long long lastTime; // @synthesize lastTime=_lastTime;
- (void).cxx_destruct;
- (void)addCommonMetricsWithMeasurementData:(id)arg1 toDictionary:(id)arg2;
- (_Bool)shouldAssumeFullyViewable;
- (id)initWithView:(id)arg1;

@end

