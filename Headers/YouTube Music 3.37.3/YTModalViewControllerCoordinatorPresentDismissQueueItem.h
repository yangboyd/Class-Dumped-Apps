//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface YTModalViewControllerCoordinatorPresentDismissQueueItem : NSObject
{
    UIViewController *_modalViewController;
    UIViewController *_fromViewController;
    CDUnknownBlockType _completion;
}

@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(readonly, nonatomic) UIViewController *modalViewController; // @synthesize modalViewController=_modalViewController;
- (void).cxx_destruct;
- (id)initWithModalViewController:(id)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

