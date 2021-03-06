//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TAVUIAutoplayFilterPolicy-Protocol.h>
#import <T1Twitter/UIScrollViewDelegate-Protocol.h>

@class NSString, TFNDataViewController;

@interface T1AutoplayScrollPolicy : NSObject <TAVUIAutoplayFilterPolicy, UIScrollViewDelegate>
{
    TFNDataViewController *_dataViewController;
    CDUnknownBlockType _autoplayConditionsDidChangeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType autoplayConditionsDidChangeBlock; // @synthesize autoplayConditionsDidChangeBlock=_autoplayConditionsDidChangeBlock;
@property(nonatomic) __weak TFNDataViewController *dataViewController; // @synthesize dataViewController=_dataViewController;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)arg1 activeAutoplayables:(id)arg2;
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(CDUnknownBlockType)arg1;
- (id)initWithDataViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

