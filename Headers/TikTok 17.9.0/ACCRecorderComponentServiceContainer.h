//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESStaticContainer.h"

@class UIView;

@interface ACCRecorderComponentServiceContainer : IESStaticContainer
{
    UIView *_containerView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (id)provideSingletonACCComponentViewModelProviderWithArguments:(id)arg1;
- (void)configContainerView:(id)arg1;
- (id)provideSingletonACCRecorderViewContainerWithArguments:(id)arg1;

@end

