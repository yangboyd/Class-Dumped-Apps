//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ViewContext, _TtP6Reddit33LiveStreamAnalyticsBridgeProtocol_;

@interface _TtC6Reddit25LiveStreamAnalyticsBridge : NSObject
{
    // Error parsing type: , name: viewContext
    // Error parsing type: , name: didFirePlayEvent
    // Error parsing type: , name: playbackTracker
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)init;
- (void)avPlayerIsReady;
- (void)stopTracker;
- (void)startTracker;
- (id)initWithViewContext:(id)arg1 delegate:(id)arg2;
@property(nonatomic) __weak id <_TtP6Reddit33LiveStreamAnalyticsBridgeProtocol_> delegate; // @synthesize delegate;
@property(nonatomic, readonly) id <ViewContext> viewContext; // @synthesize viewContext;

@end

