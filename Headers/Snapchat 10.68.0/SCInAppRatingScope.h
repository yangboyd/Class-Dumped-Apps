//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCInAppRatingWorkflowDelegate, SCUIContainer;

@interface SCInAppRatingScope : NSObject
{
    id <SCUIContainer> _uiContainer;
    id <SCInAppRatingWorkflowDelegate> _workflowDelegate;
}

@property(readonly, nonatomic) __weak id <SCInAppRatingWorkflowDelegate> workflowDelegate; // @synthesize workflowDelegate=_workflowDelegate;
@property(readonly, nonatomic) id <SCUIContainer> uiContainer; // @synthesize uiContainer=_uiContainer;
- (void).cxx_destruct;
- (id)initWithUIContainer:(id)arg1 inAppRatingWorkflowDelegate:(id)arg2;

@end

