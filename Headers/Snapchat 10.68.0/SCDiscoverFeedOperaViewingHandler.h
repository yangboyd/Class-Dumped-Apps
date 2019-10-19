//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedOperaViewingHandling-Protocol.h"

@class NSString;

@interface SCDiscoverFeedOperaViewingHandler : NSObject <SCDiscoverFeedOperaViewingHandling>
{
    CDUnknownBlockType _operaDisplayBeginCompletion;
    CDUnknownBlockType _operaDismissalBeginCompletion;
    CDUnknownBlockType _operaDismissalEndCompletion;
    CDUnknownBlockType _operaTearDownCompletion;
}

- (void).cxx_destruct;
- (void)didTearDownStory;
- (void)didStartToDisplayStoryWithIndexPath:(id)arg1 actionHandler:(id)arg2;
- (void)didDismissStory;
- (void)didStartToDismissStoryAtIndexPath:(id)arg1 actionHandler:(id)arg2;
- (id)initWithOperaDisplayBeginCompletion:(CDUnknownBlockType)arg1 operaDismissalBeginCompletion:(CDUnknownBlockType)arg2 operaDismissalEndCompletion:(CDUnknownBlockType)arg3 operaTearDownCompletion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

