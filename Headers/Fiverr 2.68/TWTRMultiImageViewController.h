//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import "TWTRMediaContainerPresentable-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class NSArray, NSString;

@interface TWTRMultiImageViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, TWTRMediaContainerPresentable>
{
    NSArray *_contexts;
    long long _initialImageViewControllerIndex;
    NSArray *_imageViewControllers;
}

+ (id)imageViewControllerForContext:(id)arg1;
+ (id)imageViewControllersForContexts:(id)arg1;
@property(readonly, nonatomic) NSArray *imageViewControllers; // @synthesize imageViewControllers=_imageViewControllers;
@property(readonly, nonatomic) long long initialImageViewControllerIndex; // @synthesize initialImageViewControllerIndex=_initialImageViewControllerIndex;
@property(readonly, copy, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
- (void).cxx_destruct;
- (void)transitionDidComplete;
- (void)transitionWillBegin;
- (struct CGRect)transitionImageTargetFrame;
- (id)transitionImage;
- (void)didDismissInMediaContainer;
- (void)willShowInMediaContainer;
- (id)initialImageViewController;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (long long)indexOfViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithImagePresentationContexts:(id)arg1 initialContextIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

